#ifndef SCMODULE_H
#define SCMODULE_H

#include <Windows.h>

#define LIBRARY_FILE_NAME_RELEASE   "sc_optic.dll"
#define LIBRARY_FILE_NAME_DEBUG     "sc_optic_d.dll"

class SCModule
{
    public:
        virtual ~SCModule();
        SCModule* initInstance();

        bool loadLibrary(const QString& path = QString());
        bool checkFunction(void *pfunc, const QString func_name);
        void initializeDevice();

        // DLL function mapping
        long SCSciSetCardType(char *card_type);
        long SCSciInitInterface(void);
        long SCSciInitOptic(void);
        void SCSciExit(void);
        long SCSciSetWorkingArea(double XMin, double YMin, double XMax, double YMax);
        long SCSciGetWorkingArea(double *XMin, double *YMin, double *XMax, double *YMax);
        long SCSciSetField(double XMin, double YMin, double XMax, double YMax);
        long SCSciGetField(double *XMin, double *YMin, double *XMax, double *YMax);
        long SCSciSetDevicePath(long path_id,LPCSTR Path);
        long SCSciGetDevicePath(long path_id,LPSTR Path);
        long SCSciSetDeviceSpeed(long SpeedId,double Value);
        long SCSciMoveAbs(double X,double Y);
        long SCSciMoveAbs3d(double X, double Y, double Z);
        long SCSciSetOffset(double OffsetX, double OffsetY);
        long SCSciSetGain(double GainX, double GainY);
        long SCSciSetHomePosition(double HomeX, double HomeY);
        long SCSciSetHomeJump(long Value);
        long SCSciSetMoveLaserState(long Value);
        long SCSciStreamInfo(long ident,long i_1,long i_2);
        long SCSciFlush(void);
        long SCSciEnableHeadSelect(int Enable);
        long SCSciSetCurrentHead(long HeadId);
        long SCSciSetEnableHead(long Value);
        long SCSciSetHeadCount(unsigned long Count);
        long SCSciGetDeviceOperationMode(long *Value);
        long SCSciSetDeviceOperationMode(long Value);
        long SCSciSetDeviceEnableFlags(long FlagsId, long Flags);
        long SCSciGetDeviceEnableFlags(long FlagsId, long *Flags);
        long SCSciGetDeviceTimer(long TimerId,double *Value);
        long SCSciSetDeviceTimer(long TimerId,double Value);
        long SCSciGetDeviceName(long NameId,LPCSTR Name);
        long SCSciGetDeviceData(long DataId, long DataLength, unsigned char *Data);
        long SCSciSetDeviceData(long DataId, long DataLength, unsigned char *Data);
        long SCSciSetExecute(long Value);
        long SCSciGetExecute(long *Value);
        long SCSciGetMoveLaserState(long *Value);
        long SCSciSetStyleSet(unsigned long Style);
        long SCSciGetStyleSet(unsigned long *Style);
        long SCSciSetDeviceDelay_d(long DelayId, double Value);
        long SCSciGetDeviceDelay_d(long DelayId, double *Value);
        long SCSciSetDevicePortValue(long PortId,long Value);
        long SCSciGetDevicePortValue(long PortId,long *Value);
        long SCSciResetExternalTriggerCount(void);
        long SCSciGetExternalTriggerCount(long *Count);
        long SCSciMaxExternalTriggerCount(long Count);
        long SCSciSetContinuousMode(long Mode);
        long SCSciGetContinuousMode(long *Mode);
        long SCSciSetExternalTrigger(long Value);
        long SCSciGetExternalTrigger(long *Value);
        long SCSciSetMessageWindow(long hwnd);
        long SCSciSetAxisState(long State);
        long SCSciGetAxisState(long *State);
        long SCSciLoadSettings(LPCSTR file_name);
        long SCSciSaveSettings(LPCSTR file_name);
        long SCSciEditSettings(void);
        long SCSciGetDeviceMiscValue_d(long MiscId, double *Value);
        long SCSciSetDeviceMiscValue_d(long MiscId, double Value);
        long SCSciSetRotAngle(double Angle);
        long SCSciGetRotAngle(double *Angle);
        long SCSciDevicePixelLine(float *PixelLine, long PixelCount, double dx, double dy, double dz);
        long SCSciSetSpeed(double Speed);
        long SCSciGetSpeed(double *Speed);
        long SCSciUpdateDeviceStyle(void);
        long SCSciGetInterfaceVersion(long *Version);
        long SCSciGetDebugMode(long *Flags);
        long SCSciSetDebugMode(long Flags);
        long SCSciIsExposureEnd(long *Value);
        long SCSciGetIdentString(char *Ident);
        long SCSciGetDeviceMapLaserPort(long *Port);
        long SCSciSetDeviceMapLaserPort(long Port);

    private:
        SCModule();
        SCModule(const SCModule& loader);
}

#endif // SCMODULE_H
