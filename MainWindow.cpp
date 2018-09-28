#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QDesktopWidget>
#include<QFileDialog>
#include<QDebug>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QProcess>

#include "painter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setGeometry(
        QStyle::alignedRect(
            Qt::LeftToRight,
            Qt::AlignCenter,
            this->size(),
            qApp->desktop()->availableGeometry()));
    repaint();

    bIsAligning = false;

    mpProjectData = 0;
    mpPainter = 0;

    mpScModule = new SCModule();
    mpPicoModule = new PicoModule();
    mpControlBoard = new ControlBoardModule(ui->portNameCBox);

    mpPicoTimer = new QTimer(this);
    mpCBTimer = new QTimer(this);
    mpAlignTimer = new QTimer(this);

    ui->projectNameLabel->setText("Nume proiect:");
    ui->projectNameLineEdit->setReadOnly(true);
    ui->opTypeLabel->setText("Tip operatiune:");
    ui->opTypeLineEdit->setReadOnly(true);

    ui->openFileBtn->setText("Deschidere \n Fisier");
    ui->alignBtn->setText("Aliniere");
    ui->InitLaserBtn->setText("Init Laser");
    setWindowTitle("KoLaser Trimming");

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabText(0,"Informatii proiect");
    ui->tabWidget->setTabText(1,"Vizualizare");
    ui->tabWidget->setTabText(2,"Panou Comanda");
    ui->tabWidget->setTabText(3,"Configurari");

    ui->fileStatusLabel->setText("Status Fisier");
    ui->picoStatusLabel->setText("Status Multimetru ");
    ui->cbStatusLabel->setText("Status Control Board");
    ui->uscStatusLabel->setText("Status USC");

    this->validProjectLoaded(false);

    setStatusOnButton(ui->fileStatusDisplay, Status::KOBER_STATUS_NOT_INITIALIZED);
    setStatusOnButton(ui->picoStatusDisplay, Status::KOBER_STATUS_NOT_INITIALIZED);
    setStatusOnButton(ui->cbStatusDisplay, Status::KOBER_STATUS_NOT_INITIALIZED);
    setStatusOnButton(ui->uscDisplay, Status::KOBER_STATUS_NOT_INITIALIZED);

    //ui->baudRateCBox->addItem("BaudRate:");
    ui->baudRateCBox->addItem("9600");
    //ui->dataBitsCBox->addItem("Data Bits:");
    ui->dataBitsCBox->addItem("8 bits");
    //ui->parityCBox->addItem("Parity:");
    ui->parityCBox->addItem("No Parity");
    //ui->stopBitsCBox->addItem("Stop Bits:");
    ui->stopBitsCBox->addItem("1 bit");
    //ui->flowControlCBox->addItem("Flow Control:");
    ui->flowControlCBox->addItem("No Flow Control");
    ui->rFeedbackLineEdit->setText("500.00");

    //Timer signals and slots.
    connect(mpPicoTimer,SIGNAL(timeout()),this,SLOT(checkPicoHeartbeat()),Qt::AutoConnection);
    connect(mpCBTimer,SIGNAL(timeout()),this,SLOT(checkCbHeartbeat()),Qt::AutoConnection);
    connect(mpAlignTimer,SIGNAL(timeout()),SLOT(on_align_done()),Qt::AutoConnection);

    //Printing output signals and slot.
    connect(mpScModule,SIGNAL(printOutputToUser(QString,OutputColor)),
            this,SLOT(printOutputToUserSlot(QString, OutputColor)),Qt::AutoConnection);
    connect(mpPicoModule, SIGNAL(printOutputToUser(QString,OutputColor)),
            this,SLOT(printOutputToUserSlot(QString, OutputColor)),Qt::AutoConnection);
}

MainWindow::~MainWindow()
{
    if(mpPainter != 0)
    {
        delete mpPainter;
        mpPainter = 0;
    }
    if(mpProjectData != 0)
    {
        delete mpProjectData;
        mpProjectData = 0;
    }
    delete mpControlBoard;
    delete mpPicoModule;
    delete mpScModule;
    delete mpPicoTimer;
    delete mpCBTimer;

    delete ui;
}

void MainWindow::on_openFileBtn_released()
{
    long result;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Deschidere Fisier Proiect"),
                                                    "C:/",
                                                    tr("*.*"));
    qDebug() << fileName;

    /////////////////
    if(fileName.isEmpty())
    {
        //Test only. Make it non-empty.
        fileName = "test change";
    }
    /////////////////
    if(!fileName.isEmpty())
    {
        result = this->generateProjectData(QJsonDocument::fromJson(readJson(fileName).toUtf8()));
        if(!result)
        {
            printOutputToUser("Fisierul de configurare incarcat este invalid!", OutputColor::KOBER_COLOR_ERROR);
            setStatusOnButton(ui->fileStatusDisplay, Status::KOBER_STATUS_FAILED);
        }
        this->validProjectLoaded(result);
        if(result)
        {
            this->generateGraph();
        }
    }
    else
    {
        printOutputToUser("Nu a fost selectat un fisier de configurare!", OutputColor::KOBER_COLOR_ERROR);
    }
}
QString MainWindow::readJson(QString jsonFilePath)
{
    QFile file;
    file.setFileName(jsonFilePath);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString json = file.readAll();
    if(json.isEmpty())
    {
        printOutputToUser("Nu a fost selectat un fisier de configurare valid!", OutputColor::KOBER_COLOR_ERROR);
    }
    file.close();
    return json;
}
int MainWindow::generateProjectData(QJsonDocument doc)
{
    long result = 0;
    if (doc.isNull())
    {
        printOutputToUser("Fisierul de configurare a taskurilor continue o eroare!",OutputColor::KOBER_COLOR_ERROR);
    }

    if(mpProjectData != 0)
    {
        delete mpProjectData;
    }
    mpProjectData = new ProjectData();

    QJsonObject jsonObj = doc.object();

    if(jsonObj["Proiect"].isString())
    {
        QString sProjectName = jsonObj["Proiect"].toString();
        mpProjectData->setProjectName(sProjectName);
        ui->projectNameLineEdit->setText(sProjectName);
    }
    else
    {
        printOutputToUser("Proiectul nu are un nume valid!",OutputColor::KOBER_COLOR_ERROR);
        return result;
    }

    if(jsonObj["PuterePCB"].toString().isNull())
    {
        printOutputToUser("Puterea laserului la aliniere este incorect definita!",OutputColor::KOBER_COLOR_ERROR);
        return result;
    }
    else
    {
        int nPcbPower = jsonObj["PuterePCB"].toString().toInt();
        if (nPcbPower < 0 || nPcbPower > 100)
        {
            printOutputToUser("Puterea laserului la aliniere are o valoare incorecta!",OutputColor::KOBER_COLOR_ERROR);
            return result;
        }
        mpProjectData->setPcbLaserPower(nPcbPower);
    }

    if(jsonObj["VitezaPCB"].toString().isNull())
    {
        printOutputToUser("Viteza laserului la aliniere este incorect definita!",OutputColor::KOBER_COLOR_ERROR);
        return result;

    }
    else
    {
        int nPcbSpeed = jsonObj["VitezaPCB"].toString().toInt();
        if (nPcbSpeed < 0.1 || nPcbSpeed > 100)
        {
            printOutputToUser("Viteza laserului la aliniere are o valoare incorecta!",OutputColor::KOBER_COLOR_ERROR);
            return result;
        }
        mpProjectData->setPcbLaserSpeed(nPcbSpeed);
    }

    QJsonArray pcbRute = jsonObj["RutaPCB"].toArray();
    for(int i = 0; i < pcbRute.count(); i++)
    {
        QStringList coordonates = pcbRute.at(i).toString().split(">");
        if(coordonates.count() != 2)
        {
             this->printOutputToUser(QString("Punctul %1 din ruta de aliniere e definit gresit!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
             return result;
        }
        mpProjectData->getPCBRute()->append(new Punct("",coordonates[0].toDouble(),coordonates[1].toDouble()));
    }

    if(mpProjectData->getPCBRute()->count() == 0)
    {
        printOutputToUser("Ruta de aliniere nu exista!",OutputColor::KOBER_COLOR_ERROR);
        return result;
    }

    QJsonArray array = jsonObj["Tasks"].toArray();
    for(int i = 0; i < array.count(); i++)
    {
       QList<Punct*> *pPointList = new QList<Punct*>();
       QJsonArray ruteArray = array.at(i)["Ruta"].toArray();
       for(int j = 0; j < ruteArray.count(); j++)
       {
           QString op ="";
           QString pointStr = ruteArray.at(j).toString();
           if (pointStr[0] == "A" || pointStr[0] == "S")
           {
               op = pointStr[0];
               pointStr.remove(0,1);
           }
           else
           {
               //Get the operation type from previous point. If no "previous point" has any operation, ever, abort.
               if(pPointList->at(j-1) != 0)
               {
                   op = pPointList->at(j-1)->mOperatie;
               }
           }
           QStringList coordonates = pointStr.split(">");
           if(coordonates.count() != 2)
           {
               printOutputToUser(QString("Punctul %1 din taskul %2 e definit gresit!").arg(j+1).arg(i+1),OutputColor::KOBER_COLOR_ERROR);
               return result;
           }
           for(int indexCoordonate = 0; indexCoordonate < coordonates.count(); indexCoordonate++)
           {
               if (indexCoordonate < -50.00
                       || indexCoordonate > 50.00)
               {
                   printOutputToUser(QString("Punctul %1 din taskul %2 nu corespunde cerintelor ariei de lucru!").arg(
                                         j+1).arg(i+1),OutputColor::KOBER_COLOR_ERROR);
                   return result;
               }
           }
           pPointList->append(new Punct(op,coordonates[0].toDouble(),coordonates[1].toDouble()));
       }
       int nLaserPower = array.at(i).toObject()["PutereDioda"].toString().toInt();
       if(nLaserPower < 0 || nLaserPower > 100)
       {
           printOutputToUser(QString("Puterea laserului pentru taskul %1 nu corespunde cerintelor!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       int nLaserFrequency = array.at(i).toObject()["FrecventaQ"].toString().toInt();
       if(nLaserFrequency < 5 || nLaserFrequency > 10)
       {
           printOutputToUser(QString("Frecventa Q a laserului pentru taskul %1 nu corespunde cerintelor!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       int nLaserSpeed = array.at(i).toObject()["Viteza"].toString().toInt();
       qDebug() << nLaserSpeed;

       if (nLaserSpeed < 0.1 || nLaserSpeed > 100)
       {
           printOutputToUser(QString("Viteza laserului pentru taskul %1 are o valoare incorecta!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       int nTargetValue = array.at(i).toObject()["ValoareTinta"].toString().toInt();
       if (nTargetValue < 1 || nTargetValue > 1000000)
       {
           printOutputToUser(QString("Valoarea tinta a rezistentei pentru taskul %1 are o valoare incorecta!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       QString sTipTask = array.at(i).toObject()["Tip_Task"].toString();

       int nNrRRA = array.at(i).toObject()["NrRRA"].toString().toInt();
       if(nNrRRA == 0)
       {
           printOutputToUser(QString("Valoarea RRA pentru taskul %1 are o valoare incorecta!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       int nNrRRD1 = array.at(i).toObject()["NrRRD1"].toString().toInt();
       if(nNrRRD1 == 0 && sTipTask == "CIRCUIT DELTA")
       {
           printOutputToUser(QString("Valoarea RRD1 pentru taskul %1 are o valoare incorecta!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }

       int nNrRRD2 = array.at(i).toObject()["NrRRD2"].toString().toInt();
       if(nNrRRD2 == 0 && sTipTask == "CIRCUIT DELTA")
       {
           printOutputToUser(QString("Valoarea RRD2 pentru taskul %1 are o valoare incorecta!").arg(i+1),OutputColor::KOBER_COLOR_ERROR);
           return result;
       }
       qDebug() << nNrRRA << " " << nNrRRD1 << " " << nNrRRD2;

       Task *pTask= new Task(sTipTask,
                             nLaserPower,
                             nLaserSpeed,
                             nLaserFrequency,
                             pPointList,
                             nTargetValue,
                             nNrRRA,
                             nNrRRD1,
                             nNrRRD2);
       ui->opTypeLineEdit->setText(sTipTask);
       mpProjectData->getTaskList()->append(pTask);
       if(mpProjectData->getTaskList()->count() < 1)
       {
           printOutputToUser("Nu s-a gasit un task valid.",OutputColor::KOBER_COLOR_ERROR);
           return result;
       }
    }
    mpProjectData->toString();
    mpScModule->setProjectData(mpProjectData);

    result = 1;
    return result;
}

int MainWindow::generateGraph()
{
    mpPainter = new Painter(ui->grwidget,mpProjectData);
    return 1;
}

void MainWindow::setStatusOnButton(QLabel *pLabel, Status bStatus)
{
    if(bStatus == Status::KOBER_STATUS_SUCCESS)
    {
        pLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/resources/images/olive-green-icon.png")));
    }
    if(bStatus == Status::KOBER_STATUS_FAILED)
    {
        pLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/resources/images/red-icon.png")));
    }
    if(bStatus == Status::KOBER_STATUS_NOT_INITIALIZED)
    {
        pLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/resources/images/gray-dot.png")));
    }
}

void MainWindow::validProjectLoaded(bool bValidProject)
{
    ui->tabWidget->setTabEnabled(1,bValidProject);
    ui->tabWidget->setTabEnabled(2,bValidProject);
    ui->tabWidget->setTabEnabled(3,bValidProject);

    if(bValidProject)
    {
        setStatusOnButton(ui->fileStatusDisplay,Status::KOBER_STATUS_SUCCESS);
        printOutputToUser("Fisierul de configurare a fost incarcat cu succes!",OutputColor::KOBER_COLOR_SUCCESS);
        ui->InitLaserBtn->setEnabled(true);

        mbStatusPico = mpPicoModule->initializeDevice();
        if(mbStatusPico)
        {
            double nPicoValue;
            mpPicoModule->readVoltage(&nPicoValue);
            printOutputToUser(QString("Multimetrul este contectat si a citit valoarea %1").arg(nPicoValue),OutputColor::KOBER_COLOR_SUCCESS);
            setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_SUCCESS);
        }
        else
        {
            printOutputToUser("Multimetrul nu a fost detectat!",OutputColor::KOBER_COLOR_ERROR);
            setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_FAILED);
        }
        mpPicoTimer->start(300000);

        //mbStatusCb = mpControlBoard->initializeDevice();

//        if(mbStatusCb)
//        {
//            printOutputToUser("Control Board-ul a fost detectat!",OutputColor::KOBER_COLOR_SUCCESS);
//            setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_SUCCESSUCCESSS);
//        }
//        else
//        {
//            printOutputToUser("Control Board-ul nu a fost detectat!",OutputColor::KOBER_COLOR_ERROR);
//            setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_FAILED);
//        }
        mpCBTimer->start(300000);
    }
}

void MainWindow::on_InitLaserBtn_released()
{
    if(mpScModule->initializeDevice())
    {
        printOutputToUser("Laserul a fost initializat cu succes!",OutputColor::KOBER_COLOR_SUCCESS);
        setStatusOnButton(ui->uscDisplay,Status::KOBER_STATUS_SUCCESS);
    }
    else
    {
        printOutputToUser("Laserul nu a fost initializat cu succes!",OutputColor::KOBER_COLOR_ERROR);
        setStatusOnButton(ui->uscDisplay,Status::KOBER_STATUS_FAILED);
    }

}

void MainWindow::checkPicoHeartbeat()
{
    if(mpPicoModule->heartbeat())
    {
        printOutputToUser("Multimetrul este conectat.",OutputColor::KOBER_COLOR_REPORT);
        setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_SUCCESS);
        mbStatusPico = true;
    }
    else {
        printOutputToUser("Multimetrul a fost deconectat.",OutputColor::KOBER_COLOR_ERROR);
        setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_FAILED);
        mbStatusPico = false;
        }
}

void MainWindow::checkCbHeartbeat()
{
    if(mpControlBoard->heartbeat())
    {
        printOutputToUser("Placa de control este conectata.",OutputColor::KOBER_COLOR_REPORT);
        setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_SUCCESS);
        mbStatusCb = true;
    }
    else {
        printOutputToUser("Placa de control a fost deconectata.",OutputColor::KOBER_COLOR_ERROR);
        setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_FAILED);
        mbStatusCb = true;
        }
}

void MainWindow::printOutputToUser(QString qsMsg, OutputColor color)
{
    if(color == OutputColor::KOBER_COLOR_ERROR)
    {
        qsMsg = "<font color=\"red\">" + qsMsg + "</font>";
    }
    if(color == OutputColor::KOBER_COLOR_SUCCESS)
    {
        qsMsg = "<font color=\"green\">" + qsMsg + "</font>";
    }
    if(color == OutputColor::KOBER_COLOR_REPORT)
    {
        qsMsg = "<font color=\"blue\">" + qsMsg + "</font>";
    }
    ui->statusDisplayTextArea->append(qsMsg);
    qDebug() << "output to user: " << qsMsg;
}

void MainWindow::on_saveSerialSettings_released()
{
    if (ui->portNameCBox->currentIndex() == 0)
    {
        printOutputToUser("Trebuie selectat un port serial!", OutputColor::KOBER_COLOR_ERROR);
    }
    else
    {
        mpControlBoard->saveSerialSettings(ui->portNameCBox->currentText(),QSerialPort::Baud9600,QSerialPort::Data8,
                                           QSerialPort::NoParity,QSerialPort::OneStop,QSerialPort::NoFlowControl);
        printOutputToUser("Aplicatia asculta la portul: " + ui->portNameCBox->currentText(),OutputColor::KOBER_COLOR_REPORT);
    }
}

void MainWindow::on_btnLaserSettings_released()
{
    if (QProcess::execute("C:/scaps/sam2d/tools/sc_setup.exe") == -2)
    {
        printOutputToUser("Aplicatia pentru setat laserul nu a putut fi lansata!",OutputColor::KOBER_COLOR_ERROR);
    }
}


void MainWindow::on_startBtn_released()
{
    printOutputToUser("A inceput procesul de marcare a taskurilor.",OutputColor::KOBER_COLOR_REPORT);
    mpScModule->beginTaskMark();

}

void MainWindow::on_stopBtn_released()
{
    printOutputToUser("Procesul de marcare a taskurilor a fost oprit.",OutputColor::KOBER_COLOR_REPORT);
    mpScModule->initializeDevice();
}

void MainWindow::on_alignBtn_released()
{
    if(!bIsAligning)
    {
        if(!mpScModule->isDeviceInitialized())
        {
            printOutputToUser("Laserul nu a fost initializat!",OutputColor::KOBER_COLOR_REPORT);
            return;
        }
        mpAlignTimer->setSingleShot(true);
        mpAlignTimer->start(60000);
        printOutputToUser("A inceput alinierea.",OutputColor::KOBER_COLOR_REPORT);
        mpScModule->markAlignment();
        bIsAligning = true;
    }
    else
    {
        printOutputToUser("Aliniere in progres. Oprire aliniere.",OutputColor::KOBER_COLOR_REPORT);
        mpAlignTimer->stop();
        mpScModule->initializeDevice();
        bIsAligning = false;
    }
    if(!ui->startBtn->isEnabled())
    {
        ui->startBtn->setEnabled(true);
        ui->stopBtn->setEnabled(true);
    }
}

void MainWindow::on_align_done()
{
    if(bIsAligning)
    {
        bIsAligning = false;
        printOutputToUser("Aliniere terminata.",OutputColor::KOBER_COLOR_REPORT);
        mpScModule->initializeDevice();
    }
}

void MainWindow::printOutputToUserSlot(QString qsMsg, OutputColor color)
{
    this->printOutputToUser(qsMsg,color);
}
