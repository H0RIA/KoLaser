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
    bool isExpectingRequestToMeasureResponse;

    double Ulsbdac = 0.00000476837158203125;
    double Rtinta, AladelaPico, Vconst, Rfeedback;
    int id1,id2,id3;

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
    void requestToTrim();
    void setNumericalValues(double TargetResist, double AlaDelaPico, double Rfeedback);
private slots:
    void onControlBoardTimeout();
    void readData();
    void requestTimeout();
signals:
    void reportStatus(bool isCbAlive);
    void abandonSequence();
    void invalidTaskSignal(long logValue);
    void beginMarking();
};

#endif // CONTROLBOARDMODULE_H
