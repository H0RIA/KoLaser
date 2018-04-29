#include "picomodule.h"
#include <QDebug>

PicoModule::PicoModule()
    :   mLibrary()
{
    bIsPicoModuleAlive = false;

    double test = 0;
    if(!readVoltage(&test)){
        // bla bla
        qDebug() << "Cannot read voltage!";
    }else{
        qDebug() << "Read value: " << test;
    }
}
PicoModule::~PicoModule()
{

}

bool PicoModule::initializeDevice()
{
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

    bIsPicoModuleAlive = !bIsPicoModuleAlive;
    return bIsPicoModuleAlive;
}

bool PicoModule::isPicoModuleAlive()
{
    return bIsPicoModuleAlive;
}

bool PicoModule::readVoltage(double* output)
{
    if(mLibrary.isInitialized())
        return mLibrary.readVoltage(output);

    return false;
}
