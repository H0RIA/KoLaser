#include "picomodule.h"
#include <QDebug>

PicoModule::PicoModule()
    :   mpLibrary()
{
    bIsPicoModuleAlive = false;
    mpLibrary = new PicoTestModule();

    connect(mpLibrary,SIGNAL(reportErrorSignal(QString)),
            this,SLOT(reportLibraryErrorSlot(QString)),Qt::AutoConnection);
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

bool PicoModule::heartbeat(double* pOutput)
{
    if (!mpLibrary->isInitialized())
    {
        emit printOutputToUser("Multimetrul nu este initializat!",OutputColor::KOBER_COLOR_ERROR);
        bIsPicoModuleAlive = false;
        return false;
    }
    if(!mpLibrary->readVoltage(pOutput))
    {
        bIsPicoModuleAlive = false;
    }
    else
    {
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
            bIsPicoModuleAlive = false;
        }
        else
        {
            bIsPicoModuleAlive = true;
        }
        return true;
    }
    return false;
}

void PicoModule::reportLibraryErrorSlot(QString qMsg)
{
    emit printOutputToUser(qMsg,OutputColor::KOBER_COLOR_ERROR);
}
