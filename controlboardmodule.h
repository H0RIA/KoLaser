#ifndef CONTROLBOARDMODULE_H
#define CONTROLBOARDMODULE_H

#include <QSerialPort>
#include <QTimer>
#include <QObject>
#include <QByteArray>
#include <QDebug>
#include <QComboBox>
#include <QSerialPortInfo>

class ControlBoardModule : public QObject
{
    Q_OBJECT

    QSerialPort *mpSerialPort;
    QTimer *mpTimer;
    bool bControlBoardModuleAlive;

    QComboBox* mpPortNameComboBox;
public:
    ControlBoardModule(QComboBox*);
    ~ControlBoardModule();

    bool initializeDevice();
    bool heartbeat();
    bool saveSerialSettings(QString qPortName,
                            QSerialPort::BaudRate br,
                            QSerialPort::DataBits db,
                            QSerialPort::Parity p,
                            QSerialPort::StopBits sb,
                            QSerialPort::FlowControl fc);
private slots:
    void onControlBoardTimeout();
};

#endif // CONTROLBOARDMODULE_H
