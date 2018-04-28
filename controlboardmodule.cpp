#include "controlboardmodule.h"

ControlBoardModule::ControlBoardModule(QComboBox *pPortNameComboBox)
{
    bControlBoardModuleAlive = false;

    mpSerialPort = new QSerialPort();
    mpTimer = new QTimer();

    mpPortNameComboBox = pPortNameComboBox;
    mpPortNameComboBox->addItem("Port Serial:");

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        mpPortNameComboBox->addItem(info.portName());
    }

    mpPortNameComboBox->addItem("Just a Test Port");

    QObject::connect(mpTimer,SIGNAL(timeout()),this,SLOT(onControlBoardTimeout()),Qt::AutoConnection);
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
}

bool ControlBoardModule::initializeDevice()
{
    return true;
    if(mpSerialPort->write(QString("?").toLatin1()) == -1)
    {
        //Error Message box
    }
    if(mpSerialPort->waitForReadyRead(2000))
    {
        QByteArray array = mpSerialPort->read(2);
        QString qResponse = QString().fromStdString(array.toStdString());
        qDebug() << qResponse;

        if(qResponse == "?NUL")
        {
            bControlBoardModuleAlive = true;
        }
    }
    else { //TIMEOUT
    }
    return bControlBoardModuleAlive;
}

void ControlBoardModule::onControlBoardTimeout()
{
    //BOARD TIMEOUT
}
bool ControlBoardModule::heartbeat()
{
    return bControlBoardModuleAlive = !bControlBoardModuleAlive;
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

    return true;
}
