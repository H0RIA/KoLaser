#include "controlboardmodule.h"

ControlBoardModule::ControlBoardModule(QComboBox *pPortNameComboBox)
{
    bControlBoardModuleAlive = false;

    mpSerialPort = new QSerialPort();
    mpTimer = new QTimer();

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
    mpSerialPort->open(QIODevice::ReadWrite);
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

bool ControlBoardModule::initializeDevice()
{
    qDebug() << "Sending request to Cb";
    if(!mpSerialPort->isOpen())
    {
        mpSerialPort->open(QIODevice::ReadWrite);
    }
    if (mpSerialPort->isOpen())
    {
        qDebug() << "Writing ? to serial";
        mpSerialPort->write(QString("?").toLatin1());
    }
    mpTimer->setSingleShot(true);
    mpTimer->start(10000);
    return bControlBoardModuleAlive;
}

void ControlBoardModule::onControlBoardTimeout()
{
    emit reportStatus(false);
    bControlBoardModuleAlive = false;
}
bool ControlBoardModule::heartbeat()
{
    return initializeDevice();
}

bool ControlBoardModule::saveSerialSettings(QString qPortName,
                                            QSerialPort::BaudRate br,
                                            QSerialPort::DataBits db,
                                            QSerialPort::Parity p,
                                            QSerialPort::StopBits sb,
                                            QSerialPort::FlowControl fc)
{
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
    if(qResponse == "?NUL")
    {
        emit reportStatus(true);
        bControlBoardModuleAlive = true;
    }
    else
    {
        if(data.at(1) != QString("0")) {
            emit reportStatus(false);
            bControlBoardModuleAlive = false;
        }
    }
}
