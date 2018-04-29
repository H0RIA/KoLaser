#include "picotest_module.h"
#include <QDebug>

#ifndef Q_OS_MACOS
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
    PviOpen_usb = (dll_PviOpen_usb)GetProcAddress(pico_dll_handle,"viOpen");
    PviClose_usb = (dll_PviClose_usb)GetProcAddress(pico_dll_handle,"viClose");
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
        ,mDefaultRMUsbtmc(0)
        ,mInstrUsbtmc(0)
        ,mBuffer()
        ,mInstrDescriptor()
        ,mTimeout(7000)
{
    initialize();

    long status = OpenDefaultRMUsb(&mDefaultRMUsbtmc);
    if(status < PICO_OK){
        CloseUsb(mDefaultRMUsbtmc);
        mDefaultRMUsbtmc = 0;
    }else{
        unsigned long m_findList_usbtmc;
        unsigned long m_nCount;

        status = FindRsrcUsb(mDefaultRMUsbtmc,
                             "USB[0-9]*::0x164E::0x0DAD::?*INSTR",
                             &m_findList_usbtmc,
                             &m_nCount,
                             mInstrDescriptor);
        if(status < PICO_OK){
            // bla bla
        }else{
            status = OpenUsb(mDefaultRMUsbtmc, mInstrDescriptor, 0, 0, &mInstrUsbtmc);
            status = SetAttributeUsb(mInstrUsbtmc, VI_ATTR_TMO_VALUE, mTimeout);

            test();
        }
    }
}

PicoTestModule::~PicoTestModule()
{
    if(mPicoLib != nullptr){
        FreeLibrary (mPicoLib);
        mPicoLib = nullptr;
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
                  const char *expr,
                  unsigned long *vi,
                  unsigned long *retCnt,
                  char far desc[])
{
    if(PviFindRsrc_usb == nullptr){
        qDebug() << "PviFindRsrc_usb not initialized";
        return -1;
    }

    return PviFindRsrc_usb(sesn, (char*)expr, vi, retCnt, desc);
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

    memset(mBuffer, 0, PICO_BUFFER_SIZE);
    memset(mInstrDescriptor, 0, PICO_INSTR_DESCRIPTOR_SIZE);
}

void PicoTestModule::test()
{
    ULONG       nWritten;
    ULONG       nRead = 0;
    int         len = 64;
    char        *pStrout = nullptr;
    BYTE        pStrin[64];

    pStrout = new char[len];
    long status = 0;
    ZeroMemory(pStrout, len);
    strcpy(pStrout, "*idn?");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 6, &nWritten);
    Sleep(30);
    if (status != VI_SUCCESS)
    {
        qDebug("Write to device error.");
        CloseUsb(mDefaultRMUsbtmc);
        return;
    }
    else
    {
        qDebug() << " output : *IDN?\n";
    }

    Sleep(1000);
    // Read data from device

    len = 64;
    if (mPicoLib)
    {
        status = ReadUsb(mInstrUsbtmc, pStrin, len, &nRead);
        if (nRead > 0)
        {
            for (len=0; len < (long) nRead; len++)
            {
                mBuffer[len] = pStrin[len];
            }
        }
        mBuffer[nRead] = '\0';
        qDebug() << QString(" input : %1\n\n").arg(mBuffer);
    }

    // Set sample count to 1
    strcpy(pStrout, "SAMP:COUN 1");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 12, &nWritten);
    Sleep(30);

    // Set configure Voltage AC, range 0.1A
    strcpy(pStrout, "CONF:VOLT:AC 0.1,0.01");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 22, &nWritten);
    Sleep(3000);

    // Set configure frequency, range Auto
    strcpy(pStrout, "CONF:FREQ");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 10, &nWritten);
    Sleep(3000);

    // Set configure Current DC, range 0.1A
    strcpy(pStrout, "CONF:CURR:DC 1,0.01");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 20, &nWritten);
    Sleep(3000);

    // Set Voltage DC measure
    strcpy(pStrout, "CONF:VOLT:DC 0.1,0.1");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 21, &nWritten);
    Sleep(1000);

    // Send read command
    strcpy(pStrout, "READ?");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 6, &nWritten);
    Sleep(30);
    qDebug() << " output : READ?\n";

    status = ReadUsb(mInstrUsbtmc, pStrin, 64, &nRead);
    if (nRead > 0)
    {
        for (len=0; len < (long) nRead; len++)
        {
            mBuffer[len] = pStrin[len];
        }
    }
    mBuffer[nRead] = '\0';
    qDebug() << QString(" input : %1\n\n").arg(mBuffer);

    // Set device to local mode
    strcpy(pStrout, "system:local");
    status = WriteUsb(mInstrUsbtmc, (unsigned char *)pStrout, 13, &nWritten);
    free(pStrout);
}
#endif
