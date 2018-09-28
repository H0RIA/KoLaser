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
    if (mpLibrary != 0)
    {
        delete mpLibrary;
        mpLibrary = 0;
    }
}

bool PicoModule::initializeDevice()
{
    bIsPicoModuleAlive = mpLibrary->initialize();
    return mpLibrary->isInitialized();
}

bool PicoModule::heartbeat()
{
    double output = 0;
    if(!mpLibrary->readVoltage(&output))
    {
        emit printOutputToUser(QString("Cannot read voltage!"),OutputColor::KOBER_ERROR);
        bIsPicoModuleAlive = false;
    }
    else
    {
        emit printOutputToUser(QString("Read value: %1").arg(output),OutputColor::KOBER_SUCCES);
        bIsPicoModuleAlive = true;
    }
    return bIsPicoModuleAlive;
}

bool PicoModule::isPicoModuleAlive()
{
    return bIsPicoModuleAlive;
}

bool PicoModule::readVoltage(double* pOutput)
{
    if(mpLibrary->isInitialized())
    {
        if(!mpLibrary->readVoltage(pOutput))
        {
            emit printOutputToUser(QString("Cannot read voltage!"),OutputColor::KOBER_ERROR);
        }
        else
        {
            emit printOutputToUser(QString("Read value: %1").arg(*pOutput),OutputColor::KOBER_SUCCES);
        }
        return true;
    }
    return false;
}
