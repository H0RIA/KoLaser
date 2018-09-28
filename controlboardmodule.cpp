#include "controlboardmodule.h"

ControlBoardModule::ControlBoardModule(QComboBox *pPortNameComboBox)
{
    bControlBoardModuleAlive = false;

    mpSerialPort = new QSerialPort();
    mpTimer = new QTimer();
    mpResponseTimer = new QTimer();
    mpResponseTimer->setSingleShot(true);

    isExpectingRequestToTrimResponse = false;

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
    if(mpSerialPort->isOpen())
    {
        mpSerialPort->close();
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
        mpTimer->start(10000);
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
    qDebug() << qResponse;
    if(isExpectingRequestToTrimResponse && data.at(0) == 'R')
    {
        //It might be request to trim response. TReat it.
        qDebug() << QString::fromStdString(data.right(3).toStdString()); //Vconst
        mpResponseTimer->stop();

        unsigned mask = 0;
        for (unsigned i=0; i<=20; i++) mask |= 1 << i;
        unsigned Vconst = ( mask & data.right(3).toInt()) * Ulsbdac;

        qDebug() << Vconst;

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
    if (id3 == -1) //Disable tester id 3
    {
        if (mpSerialPort->isOpen())
        {
            QString request = QString ("M %1 %2").arg(id1).arg(id2);
            qDebug() << request;
            mpSerialPort->write(request.toLatin1());
            mpResponseTimer->start(10000);
            isExpectingRequestToTrimResponse = true;
        }
    }
}

void ControlBoardModule::requestTimeout()
{
    //TODO: ABANDON EVERYTHING;

}
