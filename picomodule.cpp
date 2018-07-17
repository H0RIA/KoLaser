#include "picomodule.h"
#include <QDebug>

PicoModule::PicoModule()
    :   mpLibrary()
{
    bIsPicoModuleAlive = false;
    mpLibrary = new PicoTestModule();
}
PicoModule::~PicoModule()
{

}

bool PicoModule::initializeDevice()
{
#ifndef Q_OS_MACOS
    bIsPicoModuleAlive = mpLibrary->initialize();

    return mpLibrary->isInitialized();
#endif
    //Stub true for MacOS.
    return true;
}

bool PicoModule::configureDevice()
{
    //Multimetrul : VDC , Range 10V, precizie MAX (6digit1/2), FAST reading , Auto Zero off, Auto Gain off

    return true;
}

bool PicoModule::heartbeat()
{
    //TODO: Check Heartbeat. Returning true for now.
#ifndef Q_OS_MACOS
    double output = 0;
    if(!mpLibrary->readVoltage(&output))
    {
        emit printOutputToUser("Cannot read voltage!");
        bIsPicoModuleAlive = false;
    }
    else
    {
        emit printOutputToUser(QString("Read value: %1").arg(output));
        bIsPicoModuleAlive = true;
    }
#else
    bIsPicoModuleAlive = true;
#endif
    return bIsPicoModuleAlive;
}

bool PicoModule::isPicoModuleAlive()
{
    return bIsPicoModuleAlive;
}

bool PicoModule::readVoltage(double* pOutput)
{
#ifndef Q_OS_MACOS
    if(mpLibrary->isInitialized())
    {
        if(!mpLibrary->readVoltage(pOutput))
        {
            emit printOutputToUser("Cannot read voltage!");
        }
        else
        {
            emit printOutputToUser(QString("Read value: %1").arg(*pOutput));
        }
        return true;
    }
    return false;
#else
    *pOutput = 10;
    emit printOutputToUser(QString("Test read value: %1").arg(*pOutput));
#endif
}
