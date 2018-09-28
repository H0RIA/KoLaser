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
        ,mInitialized(false)
{
    initialize();

    long status = OpenDefaultRMUsb(&mDefaultRMUsbtmc);
    if(status < VI_SUCCESS){
        CloseUsb(mDefaultRMUsbtmc);
        mDefaultRMUsbtmc = 0;
    }else{
        unsigned long m_findList_usbtmc;
        unsigned long m_nCount;
        mInitialized = true;

        status = FindRsrcUsb(mDefaultRMUsbtmc,
                             "USB[0-9]*::0x164E::0x0DAD::?*INSTR",
                             &m_findList_usbtmc,
                             &m_nCount,
                             mInstrDescriptor);
        if(status < VI_SUCCESS){
            status = FindRsrcUsb(mDefaultRMUsbtmc,
                                 "USB[0-9]*::5710::3501::?*INSTR",
                                 &m_findList_usbtmc,
                                 &m_nCount,
                                 mInstrDescriptor);
            if(status < VI_SUCCESS){
                CloseUsb(mDefaultRMUsbtmc);
                mDefaultRMUsbtmc = 0;
                mInitialized = false;
            }
        }

        if(mInitialized){
            status = OpenUsb(mDefaultRMUsbtmc, mInstrDescriptor, 0, 0, &mInstrUsbtmc);
            status = SetAttributeUsb(mInstrUsbtmc, VI_ATTR_TMO_VALUE, mTimeout);
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
        emit reportErrorSignal("PviOpenDefaultRM_usb nu a fost initalizat!");
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
        emit reportErrorSignal("PviFindRsrc_usb nu a fost initalizat!");
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
        emit reportErrorSignal("PviOpen_usb nu a fost initalizat!");
        qDebug() << "PviOpen_usb not initialized";
        return -1;
    }

    return PviOpen_usb(sesn, name, mode, timeout, vi);
}

long
PicoTestModule::CloseUsb(unsigned long vi)
{
    if(PviClose_usb == nullptr){
        emit reportErrorSignal("PviClose_usb nu a fost initalizat!");
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
        emit reportErrorSignal("PviWrite_usb nu a fost initializat!");
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
        emit reportErrorSignal("PviRead_usb nu a fost initializat!");
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
        emit reportErrorSignal("PviSetAttribute_usb a raportat o eroare!");
        qDebug() << "PviSetAttribute_usb not initialized";
        return -1;
    }

    return PviSetAttribute_usb(vi, viAttr, attrstat);
}

bool
PicoTestModule::readVoltage(double* output)
{
    if(mInitialized == false)
        return false;

    *output = 0;

    ViStatus    status = VI_SUCCESS;
    ULONG       nWritten = 0;
    ULONG       nRead = 0;
    BYTE        outputBuffer[RESPONSE_BUFFER_SIZE];
    char        commandBuffer[COMMAND_BUFFER_SIZE];

    memset(commandBuffer, 0, COMMAND_BUFFER_SIZE);
    memset(outputBuffer, 0, RESPONSE_BUFFER_SIZE);

    strcpy(commandBuffer, "*idn?");
    status = WriteUsb(mInstrUsbtmc, (unsigned char*)commandBuffer, strlen(commandBuffer) + 1, &nWritten);
    Sleep(30);
    if (status != VI_SUCCESS)
        return false;

    Sleep(500);
    status = ReadUsb(mInstrUsbtmc, outputBuffer, RESPONSE_BUFFER_SIZE, &nRead);
    if(status != VI_SUCCESS)
        return false;

    readIntoBuffer(outputBuffer, nRead);

    // Reset the multimeter
    strcpy(commandBuffer, "*RST");
    status = WriteUsb(mInstrUsbtmc, (unsigned char*)commandBuffer, strlen(commandBuffer) + 1, &nWritten);
    if(status != VI_SUCCESS)
        return false;

    Sleep(30);

    // Clear the errors
    strcpy(commandBuffer, "*CLS");
    status = WriteUsb(mInstrUsbtmc, (unsigned char*)commandBuffer, strlen(commandBuffer) + 1, &nWritten);
    if(status != VI_SUCCESS)
        return false;

    // Clearing pico test takes some time... random guess: 500
    Sleep(500);

    strcpy(commandBuffer, "MEAS:VOLT:DC? 10,0.00001");
    status = WriteUsb(mInstrUsbtmc, (unsigned char*)commandBuffer, strlen(commandBuffer) + 1, &nWritten);
    if(status != VI_SUCCESS)
        return false;

    Sleep(200);

    status = ReadUsb(mInstrUsbtmc, outputBuffer, RESPONSE_BUFFER_SIZE, &nRead);
    if(status != VI_SUCCESS)
        return false;

    readIntoBuffer(outputBuffer, nRead);
    *output = atof(mBuffer);

    strcpy(commandBuffer, "system:local");
    status = WriteUsb(mInstrUsbtmc, (unsigned char*)commandBuffer, strlen(commandBuffer) + 1, &nWritten);
    if(status != VI_SUCCESS)
        return false;

    return true;
}

bool
PicoTestModule::isInitialized()const
{
    return mInitialized;
}

bool
PicoTestModule::initialize()
{
    mPicoLib = LoadLibraryA("visa32.dll");
    if(mPicoLib == nullptr){
        // Something went wrong
        emit reportErrorSignal("Libraria visa32.dll nu a fost gasita!");
        qDebug() << "cannot load pico test library!";
        return false;
    }else{
        pico_load_dll_functions(mPicoLib);
    }

    memset(mBuffer, 0, PICO_BUFFER_SIZE);
    memset(mInstrDescriptor, 0, PICO_INSTR_DESCRIPTOR_SIZE);

    return true;
}

void
PicoTestModule::readIntoBuffer(BYTE* viBuffer, int count)
{
    if(viBuffer == nullptr || count <= 0)
        return;

    memset(mBuffer, 0, PICO_BUFFER_SIZE);

    long index = 0;
    for (index = 0; index < (long) count; index++)
        mBuffer[index] = viBuffer[index];

    mBuffer[index] = '\0';
    qDebug() << mBuffer;
}
#endif
