#ifndef PICOMODULE_H
#define PICOMODULE_H

#include<QObject>
#include "picotest_module.h"

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
    void printOutputToUser(QString);

};

#endif // PICOMODULE_H
