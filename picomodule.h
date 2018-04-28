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
    bool configureDevice();
    bool heartbeat();
    bool isPicoModuleAlive();

private:\
    PicoTestModule mLibrary;
};

#endif // PICOMODULE_H
