#include "picomodule.h"

PicoModule::PicoModule()
{
    bIsPicoModuleAlive = false;
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
