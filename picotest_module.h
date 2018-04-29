#ifndef PICOTEST_MODULE_H
#define PICOTEST_MODULE_H

#include "./visa.h"
#include "windows.h"
#include <QMap>

typedef signed long (__stdcall  *dll_PviOpenDefaultRM_usb)	(unsigned long *vi);
typedef signed long (__stdcall  *dll_PviFindRsrc_usb)		(unsigned long sesn, char *expr, unsigned long *vi, unsigned long *retCnt, char far desc[]);
typedef signed long (__stdcall  *dll_PviOpen_usb)			(unsigned long sesn, char *name, unsigned long mode, unsigned long timeout, unsigned long *vi);
typedef signed long (__stdcall  *dll_PviClose_usb)			(unsigned long vi);
typedef signed long (__stdcall  *dll_PviWrite_usb)			(unsigned long vi, unsigned char *name, unsigned long len, unsigned long *retval);
typedef signed long (__stdcall  *dll_PviRead_usb)			(unsigned long vi, unsigned char *name, unsigned long len, unsigned long *retval);
typedef signed long (__stdcall  *dll_PviSetAttribute_usb)	(unsigned long vi, unsigned long viAttr, unsigned long attrstat);

extern dll_PviOpenDefaultRM_usb     PviOpenDefaultRM_usb;
extern dll_PviFindRsrc_usb          PviFindRsrc_usb;
extern dll_PviOpen_usb              PviOpen_usb;
extern dll_PviClose_usb             PviClose_usb;
extern dll_PviWrite_usb             PviWrite_usb;
extern dll_PviRead_usb              PviRead_usb;
extern dll_PviSetAttribute_usb      PviSetAttribute_usb;

#define PICO_BUFFER_SIZE            256
#define PICO_INSTR_DESCRIPTOR_SIZE  256
#define COMMAND_BUFFER_SIZE         64
#define RESPONSE_BUFFER_SIZE        64

class PicoTestModule
{
    public:
        PicoTestModule();
        virtual ~PicoTestModule();

        long OpenDefaultRMUsb(unsigned long *vi);
        long FindRsrcUsb( unsigned long sesn,
                          const char *expr,
                          unsigned long *vi,
                          unsigned long *retCnt,
                          char far desc[]);
        long OpenUsb(unsigned long sesn,
                     char *name,
                     unsigned long mode,
                     unsigned long timeout,
                     unsigned long *vi);
        long CloseUsb(unsigned long vi);
        long WriteUsb(unsigned long vi,
                      unsigned char *name,
                      unsigned long len,
                      unsigned long *retval);
        long ReadUsb(unsigned long vi,
                     unsigned char *name,
                     unsigned long len,
                     unsigned long *retval);
        long SetAttributeUsb(unsigned long vi,
                             unsigned long viAttr,
                             unsigned long attrstat);

        // returns true if read was successful, false otherwise
        bool readVoltage(double* output);

    protected:
        void initialize();

    private:
        PicoTestModule(const PicoTestModule& ptm) = delete;
        void readIntoBuffer(BYTE* viBuffer, int count);

    protected:
        HMODULE mPicoLib;

    private:
        unsigned long   mDefaultRMUsbtmc;
        unsigned long   mInstrUsbtmc;
        char            mBuffer[PICO_BUFFER_SIZE];
        char            mInstrDescriptor[PICO_INSTR_DESCRIPTOR_SIZE];
        int             mTimeout;
        bool            mInitialized;
};

#endif // PICOTEST_MODULE_H
