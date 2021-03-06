#include "controlboardmodule.h"

ControlBoardModule::ControlBoardModule(QComboBox *pPortNameComboBox)
{
    bControlBoardModuleAlive = false;

    mpSerialPort = new QSerialPort();
    mpTimer = new QTimer();
    mpResponseTimer = new QTimer();
    mpResponseTimer->setSingleShot(true);

    isExpectingRequestToTrimResponse = false;
    isExpectingRequestToMeasureResponse = false;

    mpPortNameComboBox = pPortNameComboBox;
    mpPortNameComboBox->addItem("Port Serial:");

    foreach (const QSerialPortInfo &info,
             QSerialPortInfo::availablePorts()) {
        if (!info.isBusy())
        {
            mpPortNameComboBox->addItem(info.portName());
        }
    }
    QObject::connect(mpTimer,SIGNAL(timeout()),this,SLOT(onControlBoardTimeout()),Qt::AutoConnection);
    QObject::connect(mpSerialPort,SIGNAL(readyRead()),this,SLOT(readData()));

    connect(mpResponseTimer,SIGNAL(timeout()),this,SLOT(requestTimeout()),Qt::AutoConnection);
}

ControlBoardModule::~ControlBoardModule()
{
    if(mpSerialPort->isOpen())
    {
        mpSerialPort->close();
    }

    if(mpSerialPort)
    {
        delete mpSerialPort;
        mpSerialPort = 0;
    }
    if(mpTimer)
    {
        delete mpTimer;
        mpTimer = 0;
    }
}

void ControlBoardModule::initializeDevice()
{
    qDebug() << "Sending request to Cb";
    if(!mpSerialPort->isOpen())
    {
       if (mpSerialPort->open(QIODevice::ReadWrite))
       {
           qDebug() << "Opened serial port " << mpSerialPort->portName();
       }
    }
    if (mpSerialPort->isOpen())
    {
        qDebug() << "Writing ? to serial";
        mpSerialPort->write(QString("?").toLatin1());
        mpTimer->setSingleShot(true);
        mpTimer->start(1000000);
    }
    else { qDebug() << "Port is not open! Cannot initialize Device"; }
}

void ControlBoardModule::onControlBoardTimeout()
{
    emit reportStatus(false);
    bControlBoardModuleAlive = false;
}
bool ControlBoardModule::heartbeat()
{
    initializeDevice();
    return true;
}

bool ControlBoardModule::saveSerialSettings(QString qPortName,
                                            QSerialPort::BaudRate br,
                                            QSerialPort::DataBits db,
                                            QSerialPort::Parity p,
                                            QSerialPort::StopBits sb,
                                            QSerialPort::FlowControl fc)
{
    if(mpSerialPort->isOpen())
    {
        mpSerialPort->close();
    }
    mpSerialPort->setPortName(qPortName);
    mpSerialPort->setBaudRate(br);
    mpSerialPort->setDataBits(db);
    mpSerialPort->setParity(p);
    mpSerialPort->setStopBits(sb);
    mpSerialPort->setFlowControl(fc);
    initializeDevice();
    return true;
}

void ControlBoardModule::readData()
{
    const QByteArray data = mpSerialPort->readAll();
    QString DataAsString =QString::fromUtf8(data);
    QString qResponse = QString().fromStdString(data.toStdString());
    qDebug() << "Response from serial=" << qResponse;
    if(isExpectingRequestToMeasureResponse && data.at(0) == 'R')
    {
        //It might be request to trim response. TReat it.
        qDebug() << "Vconst from serial=" <<QString::fromStdString(data.right(1).toStdString()); //Vconst
        mpResponseTimer->stop();

        //unsigned mask = 0;
        //for (unsigned i=0; i<=20; i++) mask |= 1 << i;

        double Vconst = data.right(1).toInt() * Ulsbdac;
        qDebug() << "Vconst=" << Vconst;
        this->Vconst = Vconst;

        requestToTrim();

        isExpectingRequestToMeasureResponse = false;
        return;
    }

    if(isExpectingRequestToTrimResponse && data.at(0) == 'R')
    {
        mpResponseTimer->stop();

        //Begin Mark
        qDebug() << "Starting to trim";

        isExpectingRequestToTrimResponse = false;
        return;
    }

    if (isExpectingRequestToTrimResponse && data.left(2) == "ET")
    {
            //??????????????????????????
        isExpectingRequestToTrimResponse = false;
    }

    if(qResponse == "?NUL")
    {
        emit reportStatus(true);
        bControlBoardModuleAlive = true;
    }
    else
    {
        if(data.at(1) != '0') {
            emit reportStatus(false);
            bControlBoardModuleAlive = false;
        }
    }
}

void ControlBoardModule::requestToMeasure(int id1, int id2, int id3)
{

    if (mpSerialPort->isOpen())
    {
        QString request;
        if (id3 == -1)
            request = QString ("M %1 %2").arg(id1).arg(id2);
        else
            request = QString ("M %1 %2 %3").arg(id1).arg(id2).arg(id3);
        qDebug() << "Request is " << request;
        mpSerialPort->write(request.toLatin1());
        mpResponseTimer->start(100000);
        isExpectingRequestToMeasureResponse = true;
        this->id1 = id1;
        this->id2 = id2;
        this->id3 = id3;
    }
}

void ControlBoardModule::requestTimeout()
{
    //TODO: ABANDON EVERYTHING;
    emit abandonSequence();
}

void ControlBoardModule::requestToTrim()
{
    double Rinit = Vconst / (AladelaPico / Rtinta);
    qDebug() << "Rinit=" << Rinit;

    if (Rinit < Rtinta)
    {
        QString request;
        double UDACcomparator = (Vconst / Rtinta ) * Rfeedback;
        if (id3 == -1)
            request = QString ("T %1 %2 %3").arg(id1).arg(id2).arg(UDACcomparator);
        else
            request = QString ("T %1 %2 %3 %4").arg(id1).arg(id2).arg(id3).arg(UDACcomparator);
        qDebug() << "Request to trim=" << request;
        mpSerialPort->write(request.toLatin1());
        mpResponseTimer->start(100000);
        isExpectingRequestToTrimResponse = true;
    }
    else {
        emit invalidTaskSignal(Rinit);
    }
}

void ControlBoardModule::setNumericalValues(double target, double pico, double feedback)
{
    qDebug() << "Setting numerical values:" << target << " " << pico << " "
             << feedback;
    this->Rtinta = target;
    this->AladelaPico = pico;
    this->Rfeedback = feedback;
}
