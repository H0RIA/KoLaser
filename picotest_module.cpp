#include "picotest_module.h"
#include <QDebug>

dll_PviOpenDefaultRM_usb     PviOpenDefaultRM_usb;
dll_PviFindRsrc_usb          PviFindRsrc_usb;
dll_PviOpen_usb              PviOpen_usb;
dll_PviClose_usb             PviClose_usb;
dll_PviWrite_usb             PviWrite_usb;
dll_PviRead_usb              PviRead_usb;
dll_PviSetAttribute_usb      PviSetAttribute_usb;

bool pico_load_dll_functions(HMODULE pico_dll_handle)
{
    if(pico_dll_handle == nullptr)
        return false;

    PviOpenDefaultRM_usb = (dll_PviOpenDefaultRM_usb)GetProcAddress(pico_dll_handle,"viOpenDefaultRM");
    PviFindRsrc_usb = (dll_PviFindRsrc_usb)GetProcAddress(pico_dll_handle,"viFindRsrc");
    PviOpen_usb = (dll_PviOpen_usb)GetProcAddress(pico_dll_handle,"viClose");
    PviClose_usb = (dll_PviClose_usb)GetProcAddress(pico_dll_handle,"viOpen");
    PviWrite_usb = (dll_PviWrite_usb)GetProcAddress(pico_dll_handle,"viWrite");
    PviRead_usb = (dll_PviRead_usb)GetProcAddress(pico_dll_handle,"viRead");
    PviSetAttribute_usb = (dll_PviSetAttribute_usb)GetProcAddress(pico_dll_handle,"viSetAttribute");

    if( PviOpenDefaultRM_usb == nullptr ||
        PviFindRsrc_usb == nullptr  ||
        PviOpen_usb == nullptr  ||
        PviClose_usb == nullptr  ||
        PviWrite_usb == nullptr  ||
        PviRead_usb == nullptr  ||
        PviSetAttribute_usb == nullptr)
        return false;

    return true;
}

PicoTestModule::PicoTestModule()
    :   mPicoLib(nullptr)
{
    initialize();
}

PicoTestModule::~PicoTestModule()
{
    if(mPicoLib != nullptr){
        // bla bla
    }
}

long
PicoTestModule::OpenDefaultRMUsb(unsigned long *vi)
{
    if(PviOpenDefaultRM_usb == nullptr){
        qDebug() << "PviOpenDefaultRM_usb not initialized";
        return -1;
    }

    return PviOpenDefaultRM_usb(vi);
}

long
PicoTestModule::FindRsrcUsb( unsigned long sesn,
                  char *expr,
                  unsigned long *vi,
                  unsigned long *retCnt,
                  char far desc[])
{
    if(PviFindRsrc_usb == nullptr){
        qDebug() << "PviFindRsrc_usb not initialized";
        return -1;
    }

    return PviFindRsrc_usb(sesn, expr, vi, retCnt, desc);
}


long
PicoTestModule::OpenUsb(unsigned long sesn,
             char *name,
             unsigned long mode,
             unsigned long timeout,
             unsigned long *vi)
{
    if(PviOpen_usb == nullptr){
        qDebug() << "PviOpen_usb not initialized";
        return -1;
    }

    return PviOpen_usb(sesn, name, mode, timeout, vi);
}

long
PicoTestModule::CloseUsb(unsigned long vi)
{
    if(PviClose_usb == nullptr){
        qDebug() << "PviClose_usb not initialized";
        return -1;
    }

    return PviClose_usb(vi);
}

long
PicoTestModule::WriteUsb(unsigned long vi,
              unsigned char *name,
              unsigned long len,
              unsigned long *retval)
{
    if(PviWrite_usb == nullptr){
        qDebug() << "PviWrite_usb not initialized";
        return -1;
    }

    return PviWrite_usb(vi, name, len, retval);
}


long
PicoTestModule::ReadUsb(unsigned long vi,
             unsigned char *name,
             unsigned long len,
             unsigned long *retval)
{
    if(PviRead_usb == nullptr){
        qDebug() << "PviRead_usb not initialized";
        return -1;
    }

    return PviRead_usb(vi, name, len, retval);
}

long
PicoTestModule::SetAttributeUsb(unsigned long vi,
                     unsigned long viAttr,
                     unsigned long attrstat)
{
    if(PviSetAttribute_usb == nullptr){
        qDebug() << "PviSetAttribute_usb not initialized";
        return -1;
    }

    return PviSetAttribute_usb(vi, viAttr, attrstat);
}

void
PicoTestModule::initialize()
{
    mPicoLib = LoadLibraryA("visa32.dll");
    if(mPicoLib == nullptr){
        // Something went wrong
        qDebug() << "cannot load pico test library!";
        return;
    }else{
        pico_load_dll_functions(mPicoLib);
    }
}
