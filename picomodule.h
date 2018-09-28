#ifndef PICOMODULE_H
#define PICOMODULE_H

#include<QObject>
#include "picotest_module.h"
#include "painter.h"

class PicoModule : public QObject
{
    Q_OBJECT
    bool bIsPicoModuleAlive;

public:
    PicoModule();
    ~PicoModule();

    bool initializeDevice();
    bool heartbeat();
    bool isPicoModuleAlive();


public slots:
    bool readVoltage(double* output);

private:
    PicoTestModule *mpLibrary;
signals:
    void printOutputToUser(QString msg, OutputColor color);

};

#endif // PICOMODULE_H
