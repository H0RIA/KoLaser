#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QDesktopWidget>
#include<QFileDialog>
#include<QDebug>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QProcess>

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

    setStatusOnButton(ui->fileStatusDisplay,Status::NOT_INITIALIZED);
    setStatusOnButton(ui->picoStatusDisplay,Status::NOT_INITIALIZED);
    setStatusOnButton(ui->cbStatusDisplay,Status::NOT_INITIALIZED);
    setStatusOnButton(ui->uscDisplay,Status::NOT_INITIALIZED);

    ui->baudRateCBox->addItem("BaudRate:");
    ui->baudRateCBox->addItem("9600");
    ui->dataBitsCBox->addItem("Data Bits:");
    ui->dataBitsCBox->addItem("8 bits");
    ui->parityCBox->addItem("Parity:");
    ui->parityCBox->addItem("No Parity");
    ui->stopBitsCBox->addItem("Stop Bits:");
    ui->stopBitsCBox->addItem("1 bit");
    ui->flowControlCBox->addItem("Flow Control:");
    ui->flowControlCBox->addItem("No Flow Control");

    connect(mpPicoTimer,SIGNAL(timeout()),this,SLOT(checkPicoHeartbeat()),Qt::AutoConnection);
    connect(mpCBTimer,SIGNAL(timeout()),this,SLOT(checkCbHeartbeat()),Qt::AutoConnection);
    connect(mpAlignTimer,SIGNAL(timeout()),SLOT(on_align_done()),Qt::AutoConnection);
    connect(mpScModule,SIGNAL(printOutputToUser(QString)),this,SLOT(printOutputToUserSlot(QString)),Qt::AutoConnection);
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
        fileName = "just_a_random_string";
    }
    /////////////////
    if(!fileName.isEmpty())
    {
        result = this->generateProjectData(QJsonDocument::fromJson(readJson(fileName).toUtf8()));
        if(!result)
        {
            qDebug() << "Failed to generate project data";
        }
        this->validProjectLoaded(result);
        this->generateGraph();
    }
    else
    {
        qDebug() << "File name is empty!";
    }
}
QString MainWindow::readJson(QString jsonFilePath)
{
    QString json = "";
//    QFile file;
//    file.setFileName(jsonFilePath);
//    file.open(QIODevice::ReadOnly | QIODevice::Text);
//    QString json = file.readAll();
    if(json.isEmpty())
    {
        //TEST ONLY
        json = "{"
               "\"Proiect\": \"Senzor Presiune 0 - 4 bari\","
               "\"PuterePCB\" : \"0\","
               "\"VitezaPCB\" : \"30000\","
               "\"RutaPCB\" : [\"-9.500>10.000\", \"9.500>10.000\", \"9.500>-10.000\", \"-9.500>-10.000\", \"-9.500>10.000\", \"0.000>0.000\"],"
                "\"Tasks\" :"
                   "[{"
                       "\"Tip_Task\" : \"INDEPENDENT\","
                       "\"PutereDioda\" : \"50\","
                       "\"Viteza\" : \"10000\","
                       "\"FrecventaQ\" : \"5\","
                       "\"Ruta\" : [\"S0.123>1.123\", \"A0.123>2.123\",\"1.123>2.123\",\"1.123>1.123\",\"S0.123>4.123\",\"A0.123>3.123\",\"1.123>3.123\",\"1.123>4.123\",\"S0.123>0.123\"],"
                       "\"ValoareTinta\" : \"1200\","
                       "\"NrRRA\" : \"1\","
                       "\"NrRRD1\" : \"NA\","
                       "\"NrRRD2\" : \"NA\""
                   "}]"
               "}";
    }
    //file.close();

    ////////////////////////////////////
    //TEST Only. Don't need to check twice
    if(json.isEmpty())
    {
        throw "Something is really wrong.";
    }
    qDebug()<< "Loaded json:" << json;
    ////////////////////////////////////
    return json;
}
int MainWindow::generateProjectData(QJsonDocument doc)
{
    long result = 0;
    if (doc.isNull())
    {
        qDebug() << "Json parse failed. Please check Json structure.";
        return 0;
//        QMessageBox::Information(this,tr("KoLaser"),tr("Invalid Json file!!"));
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
        printOutputToUser("Invalid project name!");
        return result;
    }

    if(!jsonObj["PuterePCB"].toString().isNull())
    {
        int nPcbPower = jsonObj["PuterePCB"].toString().toInt();
        mpProjectData->setPcbLaserPower(nPcbPower);
    }
    else
    {
        printOutputToUser("Invalid PCB Power!");
        return result;
    }

    if(!jsonObj["VitezaPCB"].toString().isNull())
    {
        int nPcbSpeed = jsonObj["VitezaPCB"].toString().toInt();
        mpProjectData->setPcbLaserSpeed(nPcbSpeed);
    }
    else
    {
        printOutputToUser("Invalid PCB Speed!");
        return result;
    }

    QJsonArray pcbRute = jsonObj["RutaPCB"].toArray();
    for(int i = 0; i < pcbRute.count(); i++)
    {
        QStringList coordonates = pcbRute.at(i).toString().split(">");
        if(coordonates.count() != 2)
        {
             this->printOutputToUser(QString("Punctul %1 din ruta PCB e definit gresit!").arg(i+1));
            continue;
        }
        mpProjectData->getPCBRute()->append(new Punct("",coordonates[0].toDouble(),coordonates[1].toDouble()));
    }

    if(mpProjectData->getPCBRute()->count() == 0)
    {
        printOutputToUser("Ruta PCB invalida!");
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
               printOutputToUser(QString("Punctul %1 din taskul %2 e definit gresit!").arg(j+1).arg(i+1));
               continue;
           }
           pPointList->append(new Punct(op,coordonates[0].toDouble(),coordonates[1].toDouble()));
       }
       Task *pTask= new Task(array.at(i).toObject()["Tip_Task"].toString(),
                             array.at(i).toObject()["PutereDioda"].toString().toInt(),
                             array.at(i).toObject()["Viteza"].toString().toInt(),
                             array.at(i).toObject()["FrecventaQ"].toString().toInt(),
                             pPointList,
                             array.at(i).toObject()["ValoareTinta"].toString().toInt(),
                             array.at(i).toObject()["NrRRA"].toString().toInt(),
                             array.at(i).toObject()["NrRRD1"].toString().toInt(),
                             array.at(i).toObject()["NrRRD2"].toString().toInt());
       ui->opTypeLineEdit->setText(array.at(i).toObject()["Tip_Task"].toString());
       mpProjectData->getTaskList()->append(pTask);
       if(mpProjectData->getTaskList()->count() < 1)
       {
           printOutputToUser("Nu s-a gasit un task valid.");
           return result;
       }
    }
    mpProjectData->toString();
    result = 1;
    return result;
}

int MainWindow::generateGraph()
{
    mpPainter = new Painter(ui->grwidget,mpProjectData);
}

void MainWindow::setStatusOnButton(QLabel *pLabel, Status bStatus)
{
    if(bStatus == Status::SUCCESS)
    {
        pLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/resources/images/olive-green-icon.png")));
    }
    if(bStatus == Status::FAILED)
    {
        pLabel->setPixmap(QPixmap(QString::fromUtf8(":/new/resources/images/red-icon.png")));
    }
    if(bStatus == Status::NOT_INITIALIZED)
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
        setStatusOnButton(ui->fileStatusDisplay,Status::SUCCESS);
        ui->InitLaserBtn->setEnabled(true);

        if(mpPicoModule->initializeDevice())
        {
            setStatusOnButton(ui->picoStatusDisplay,Status::SUCCESS);
            mpPicoModule->configureDevice();
        }
        else
        {
            setStatusOnButton(ui->picoStatusDisplay,Status::FAILED);
        }

        mpPicoTimer->start(3000); //TODO: MODIFY TO 5 MINUTES.

        if(mpControlBoard->initializeDevice())
        {
            setStatusOnButton(ui->cbStatusDisplay,Status::SUCCESS);
        }
        else
        {
            setStatusOnButton(ui->cbStatusDisplay,Status::FAILED);
        }
        mpCBTimer->start(3000);
    }
}

void MainWindow::on_InitLaserBtn_released()
{
    if(mpScModule->initializeDevice())
    {
        setStatusOnButton(ui->uscDisplay,Status::SUCCESS);
    }
    else
    {
        setStatusOnButton(ui->uscDisplay,Status::FAILED);
    }

}

void MainWindow::checkPicoHeartbeat()
{
    if(mpPicoModule->heartbeat())
    {
        printOutputToUser("PicoTest is alive and well");
        setStatusOnButton(ui->picoStatusDisplay,Status::SUCCESS);
    }
    else {
        printOutputToUser("Poor Pico has died.");
        setStatusOnButton(ui->picoStatusDisplay,Status::FAILED);}
}

void MainWindow::checkCbHeartbeat()
{
    if(mpControlBoard->heartbeat())
    {
        printOutputToUser("Control Board is alive and well");
        setStatusOnButton(ui->cbStatusDisplay,Status::SUCCESS);
    }
    else {
        printOutputToUser("Poor CB has died.");
        setStatusOnButton(ui->cbStatusDisplay,Status::FAILED);}
}

void MainWindow::printOutputToUser(QString qsMsg)
{
    ui->statusDisplayTextArea->append(qsMsg);
    qDebug() << "output to user: " << qsMsg;
}

void MainWindow::on_saveSerialSettings_released()
{
    mpControlBoard->saveSerialSettings(ui->portNameCBox->currentText(),QSerialPort::Baud9600,QSerialPort::Data8,
                                       QSerialPort::NoParity,QSerialPort::OneStop,QSerialPort::NoFlowControl);
    printOutputToUser("Talking to Serial Port " + ui->portNameCBox->currentText());
}

void MainWindow::on_btnLaserSettings_released()
{
    if (QProcess::execute("C:/scaps/sam2d/tools/sc_setup.exe") == -2)
    {
        printOutputToUser("Cannot start sc_setup.exe");
    }
}

void MainWindow::on_startBtn_released()
{
    printOutputToUser("START!!!!");
    mpScModule->startMarking(false);
}

void MainWindow::on_stopBtn_released()
{
    printOutputToUser("STOP!!!!!");
    mpScModule->endMarking();
}

void MainWindow::on_alignBtn_released()
{
    if(!bIsAligning)
    {
        mpAlignTimer->setSingleShot(true);
        mpAlignTimer->start(6000); //TODO: Change to 60000
        printOutputToUser("A inceput alinierea.");
        mpScModule->beginAlignment();
        bIsAligning = true;
    }
    else
    {
        printOutputToUser("Aliniere in progres. Oprire aliniere.");
        mpAlignTimer->stop();
        mpScModule->endMarking();
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
        printOutputToUser("Aliniere terminata.");
        mpScModule->endMarking();
    }
}

void MainWindow::printOutputToUserSlot(QString qsMsg)
{
    this->printOutputToUser(qsMsg);
}
