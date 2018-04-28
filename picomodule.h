#ifndef PICOMODULE_H
#define PICOMODULE_H

#include<QObject>

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
};

#endif // PICOMODULE_H
