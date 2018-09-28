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

bool PicoModule::heartbeat()
{
    double output = 0;
    if(!mpLibrary->readVoltage(&output))
    {
        emit printOutputToUser(QString("Cannot read voltage!"),OutputColor::KOBER_COLOR_ERROR);
        bIsPicoModuleAlive = false;
    }
    else
    {
        emit printOutputToUser(QString("Read value: %1").arg(output),OutputColor::KOBER_COLOR_SUCCESS);
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
            emit printOutputToUser(QString("Cannot read voltage!"),OutputColor::KOBER_COLOR_ERROR);
        }
        else
        {
            emit printOutputToUser(QString("Read value: %1").arg(*pOutput),OutputColor::KOBER_COLOR_SUCCESS);
        }
        return true;
    }
    return false;
}

void PicoModule::reportLibraryErrorSlot(QString qMsg)
{
    emit printOutputToUser(qMsg,OutputColor::KOBER_COLOR_ERROR);
}
