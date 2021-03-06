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
    bool heartbeat(double *pOutput);
    bool isPicoModuleAlive();


public slots:
    bool readVoltage(double* output);
    void reportLibraryErrorSlot(QString qMsg);
private:
    PicoTestModule *mpLibrary;
signals:
    void printOutputToUser(QString msg, OutputColor color);

};

#endif // PICOMODULE_H
