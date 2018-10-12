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
    mpOptoInTimer = new QTimer(this);

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

    setStatusOnButton(ui->Interlock, Status::KOBER_STATUS_NOT_INITIALIZED);
        setStatusOnButton(ui->PPCB, Status::KOBER_STATUS_NOT_INITIALIZED);
            setStatusOnButton(ui->HPCB, Status::KOBER_STATUS_NOT_INITIALIZED);
                setStatusOnButton(ui->SIN, Status::KOBER_STATUS_NOT_INITIALIZED);
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
    connect(mpOptoInTimer,SIGNAL(timeout()),SLOT(checkOptoInStatusSlot()), Qt::AutoConnection);
    //Printing output signals and slot.
    connect(mpScModule,SIGNAL(printOutputToUser(QString,OutputColor)),
            this,SLOT(printOutputToUserSlot(QString, OutputColor)),Qt::AutoConnection);
    connect(mpScModule,SIGNAL(reportStatus(bool)),this,SLOT(receiveStatus(bool)));
    connect(mpPicoModule, SIGNAL(printOutputToUser(QString,OutputColor)),
            this,SLOT(printOutputToUserSlot(QString, OutputColor)),Qt::AutoConnection);

    //
    connect(mpControlBoard,SIGNAL(reportStatus(bool)),
            this,SLOT(reportCbStatusSlot(bool)),Qt::AutoConnection);

    connect(mpControlBoard,SIGNAL(abandonSequence()), this, SLOT(abandonSequence()),Qt::AutoConnection);
    connect(mpControlBoard,SIGNAL(invalidTaskSignal(long)),this,SLOT(invalidTaskSlot(long)),Qt::AutoConnection);
    connect(mpControlBoard,SIGNAL(beginMarking()),this, SLOT(beginMarking()),Qt::AutoConnection);

    currentTaskIndex = 0;
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
    ui->statusDisplayTextArea->clear();
    long result;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Deschidere Fisier Proiect"),
                                                    "C:/",
                                                    tr("*.*"));
    qDebug() << fileName;

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
       mpProjectData->getTaskList()->append(pTask);
       if(mpProjectData->getTaskList()->count() < 1)
       {
           printOutputToUser("Nu s-a gasit un task valid.",OutputColor::KOBER_COLOR_ERROR);
           return result;
       }
    }
    ui->opTypeLineEdit->setText(QString("Task %1 din %2: ")
                                .arg(currentTaskIndex + 1)
                                .arg(mpProjectData->getTaskList()->count())
                                     + mpProjectData->getTaskList()->at(currentTaskIndex)->mOperationType);
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
            mpControlBoard->setNumericalValues(mpProjectData->getTaskList()->at(currentTaskIndex)->mGoal,
                                               nPicoValue,ui->rFeedbackLineEdit->text().toDouble());
        }
        else
        {
            printOutputToUser("Multimetrul nu a fost detectat!",OutputColor::KOBER_COLOR_ERROR);
            setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_FAILED);
            mpControlBoard->setNumericalValues(mpProjectData->getTaskList()->at(currentTaskIndex)->mGoal,
                                               0,ui->rFeedbackLineEdit->text().toDouble());
        }
        mpPicoTimer->start(15000);
        mpOptoInTimer->start(500);
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
    double pOutput = 0;
    if(mpPicoModule->heartbeat(&pOutput))
    {
        printOutputToUser(QString("Multimetrul este conectat is are valoarea:%1.").arg(pOutput),
                          OutputColor::KOBER_COLOR_REPORT);
        setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_SUCCESS);
        mpControlBoard->setNumericalValues(mpProjectData->getTaskList()->at(currentTaskIndex)->mGoal,
                                           pOutput,ui->rFeedbackLineEdit->text().toDouble());
        mbStatusPico = true;
    }
    else {
        printOutputToUser("Multimetrul a fost deconectat.",OutputColor::KOBER_COLOR_ERROR);
        setStatusOnButton(ui->picoStatusDisplay,Status::KOBER_STATUS_FAILED);
        mpControlBoard->setNumericalValues(mpProjectData->getTaskList()->at(currentTaskIndex)->mGoal,
                                           0,ui->rFeedbackLineEdit->text().toDouble());
        mbStatusPico = false;
        }
}

void MainWindow::checkCbHeartbeat()
{
    mpControlBoard->heartbeat();
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
        mpCBTimer->start(3000000); //TODO: Change to 300000
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
    if (ui->onlyLaserCheckbox->isChecked())
    {
        mpScModule->beginTaskMark(currentTaskIndex);
        return;
    }
    //Get turrent task index
    for(int i = 0; i < mpProjectData->getTaskList()->count(); i++)
    {
        if (!mpProjectData->getTaskList()->at(i)->isDone)
        {
            currentTaskIndex = i;
            break;
        }
    }
    if (this->mbStatusPico && mbStatusCb && getOptoInValues())
    {
        if (mbStatusCb)
        {
            mpControlBoard->requestToMeasure(mpProjectData->getTaskList()->at(currentTaskIndex)->NrRRA,
                                             mpProjectData->getTaskList()->at(currentTaskIndex)->NrRRD1,
                                             mpProjectData->getTaskList()->at(currentTaskIndex)->NrRRD2);
        }
    }
    else {
        if (!mbStatusCb)
        {
            printOutputToUser("Marcarea nu poate incepe fara Control Board!", OutputColor::KOBER_COLOR_ERROR);
        } if (!mbStatusPico) {
            printOutputToUser("Marcarea nu poate incepe fara Multimetru!", OutputColor::KOBER_COLOR_ERROR);
        } else
        {
            printOutputToUser("Cel putin o intrare Opto a raportat o eroare!", OutputColor::KOBER_COLOR_ERROR);
        }
    }

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

void MainWindow::reportCbStatusSlot(bool isCbAlive)
{
    mbStatusCb = isCbAlive;
    if(mbStatusCb)
    {
        printOutputToUser("Control Board-ul a fost detectat!",OutputColor::KOBER_COLOR_SUCCESS);
        setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_SUCCESS);
    }
    else
    {
        printOutputToUser("Control Board-ul nu a fost detectat!",OutputColor::KOBER_COLOR_ERROR);
        setStatusOnButton(ui->cbStatusDisplay,Status::KOBER_STATUS_FAILED);
    }
}

bool MainWindow::getOptoInValues()
{
    long optoValues = mpScModule->printOptovalues();
    qDebug() << "Got opto values " << optoValues << " " << QString::number(optoValues,2);
    bool opto1,opto2,opto3,opto4 = false;

    opto4 = (optoValues >> 4) & 0x1; //shutter in
    if (opto4)
    {
        setStatusOnButton(ui->SIN,Status::KOBER_STATUS_SUCCESS);
    }
    else setStatusOnButton(ui->SIN,Status::KOBER_STATUS_FAILED);

    opto3 = (optoValues >> 3) & 0x1; // holder PCB
    if (opto3)
    {
        setStatusOnButton(ui->HPCB,Status::KOBER_STATUS_SUCCESS);
    }
    else setStatusOnButton(ui->HPCB,Status::KOBER_STATUS_FAILED);

    opto2 = (optoValues >> 2) & 0x1; // interlock
    if (opto2)
    {
        setStatusOnButton(ui->Interlock,Status::KOBER_STATUS_SUCCESS);
    }
    else setStatusOnButton(ui->Interlock,Status::KOBER_STATUS_FAILED);

    opto1 = (optoValues >> 1) & 0x1; // Prezenta PCB
    if (opto1)
    {
        setStatusOnButton(ui->PPCB,Status::KOBER_STATUS_SUCCESS);
    }
    else setStatusOnButton(ui->PPCB,Status::KOBER_STATUS_FAILED);
    return opto1 && opto2 && opto3 && opto4;
}

void MainWindow::checkOptoInStatusSlot()
{
    getOptoInValues();
}

void MainWindow::abandonSequence()
{
    printOutputToUser(QString("Marcare task %1 abandonata.").arg(currentTaskIndex),OutputColor::KOBER_COLOR_ERROR);
}

void MainWindow::invalidTaskSlot(long logError)
{
    QString log = QString("Status %1: R laser_init %2 > sau = Rtinta %3").arg(currentTaskIndex).arg(
                logError).arg(mpProjectData->getTaskList()->at(currentTaskIndex)->mGoal);
    printOutputToUser(log,OutputColor::KOBER_COLOR_ERROR);
    //TODO: Log to file;
    mpProjectData->getTaskList()->at(currentTaskIndex)->isDone = true;
}

void MainWindow::beginMarking()
{
    mpScModule->beginTaskMark(currentTaskIndex);
}

void MainWindow::receiveStatus(bool isSuccess)
{
    mpProjectData->getTaskList()->at(currentTaskIndex)->isDone = true;

    if(currentTaskIndex + 1 == mpProjectData->getTaskList()->count())
    {
        //Finished.
        return;
    }
    currentTaskIndex++;
    ui->opTypeLineEdit->setText(QString("Task %1 din %2: ")
                                .arg(currentTaskIndex + 1)
                                .arg(mpProjectData->getTaskList()->count())
                                     + mpProjectData->getTaskList()->at(currentTaskIndex)->mOperationType);
    if(isSuccess)
    {
        on_startBtn_released();
    }
}
