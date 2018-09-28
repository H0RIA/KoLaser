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
    QTimer* mpResponseTimer;

    bool bControlBoardModuleAlive;
    bool isExpectingRequestToTrimResponse;
    long Ulsbdac = 0.00000476837158203125;

    QComboBox* mpPortNameComboBox;
public:
    ControlBoardModule(QComboBox*);
    ~ControlBoardModule();

    void initializeDevice();
    bool heartbeat();
    bool saveSerialSettings(QString qPortName,
                            QSerialPort::BaudRate br,
                            QSerialPort::DataBits db,
                            QSerialPort::Parity p,
                            QSerialPort::StopBits sb,
                            QSerialPort::FlowControl fc);
    void requestToMeasure(int id1, int id2, int id3);

private slots:
    void onControlBoardTimeout();
    void readData();
    void requestTimeout();
signals:
    void reportStatus(bool isCbAlive);
};

#endif // CONTROLBOARDMODULE_H
