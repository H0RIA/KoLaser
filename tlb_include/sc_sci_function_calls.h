#ifndef SC_SCI_FUNCTUION_CALLS_h
#define SC_SCI_FUNCTUION_CALLS_h

#ifdef SC_SCIDLL_EXPORTS
#define SC_SCIDLL_API __declspec(dllexport)
#else
#define SC_SCIDLL_API __declspec(dllimport)
#endif

extern "C" 
{
   SC_SCIDLL_API long ScSCIInit(void);
   SC_SCIDLL_API long ScSCIInitInterface(void);
   SC_SCIDLL_API long ScSCISetCardType(const char *CardName);
   SC_SCIDLL_API long ScSCIInitOptic(void);
   SC_SCIDLL_API void ScSCIExit(void);
   SC_SCIDLL_API long ScSCISetContinuousMode(long Mode);
   SC_SCIDLL_API long ScSCIGetContinuousMode(long *Mode);
   SC_SCIDLL_API long ScSCIFlush(void);
   SC_SCIDLL_API long ScSCIEnableHeadSelect(int Enable);
   SC_SCIDLL_API long ScSCIMoveAbs(double X,double Y);
   SC_SCIDLL_API long ScSCIMoveAbs3D(double X,double Y,double Z);
   SC_SCIDLL_API long ScSCIGetHardwareState(long *State);
   SC_SCIDLL_API long ScSCIGetCurrentHead(long *HeadId);
   SC_SCIDLL_API long ScSCISetCurrentHead(long HeadId);
   SC_SCIDLL_API long ScSCIDevicePixelLine(float *PixelLine, long PixelCount, double dx, double dy, double dz);
   SC_SCIDLL_API long ScSCIRasterPixelLine(float *PixelLine, long PixelCount, double PixelPeriod);
   SC_SCIDLL_API long ScSCIRasterStart(double origin_x, double origin_y, double dir_x, double dir_y, double pixel_step, double line_step,
                      double acceleration_time, double deceleration_time, double line_offset,
                      double jump_speed, double wait_delay_0, double limit_value, long mode_flags);
   SC_SCIDLL_API long ScSCIRasterEnd();
   SC_SCIDLL_API long ScSCIGetDeviceName(long NameId,char *Name);
   SC_SCIDLL_API long ScSCIGetDeviceCaps(long CapsId,long *Caps);
   SC_SCIDLL_API long ScSCIGetDeviceData(long DataId, long DataLength, unsigned char *Data);
   SC_SCIDLL_API long ScSCISetDeviceData(long DataId, long DataLength, unsigned char *Data);
   SC_SCIDLL_API long ScSCIGetDeviceDelayD(long DelayId, double *Value);
   SC_SCIDLL_API long ScSCISetDeviceDelayD(long DelayId, double Value);
   SC_SCIDLL_API long ScSCIGetDeviceDelay(long DelayId, long *Value);
   SC_SCIDLL_API long ScSCISetDeviceDelay(long DelayId, double Value);
   SC_SCIDLL_API long ScSCIGetDeviceSpeed(long SpeedId,double *Value);
   SC_SCIDLL_API long ScSCISetDeviceSpeed(long SpeedId,double Value);
   SC_SCIDLL_API long ScSCIGetDeviceTimer(long TimerId,double *Value);
   SC_SCIDLL_API long ScSCISetDeviceTimer(long TimerId,double Value); 
   SC_SCIDLL_API long ScSCIGetDeviceOperationMode(long *Value);
   SC_SCIDLL_API long ScSCISetDeviceOperationMode(long Value);
   SC_SCIDLL_API long ScSCIGetDevicePortValue(long PortId,long *Value);
   SC_SCIDLL_API long ScSCISetDevicePortValue(long PortId,long Value);
   SC_SCIDLL_API long ScSCISetExecute(long Value);
   SC_SCIDLL_API long ScSCIGetExecute(long *Value);
   SC_SCIDLL_API long ScSCISetExternalTrigger(long Value);
   SC_SCIDLL_API long ScSCIGetExternalTrigger(long *Value);
   SC_SCIDLL_API long ScSCISetExternalTriggerCount(long Count);
   SC_SCIDLL_API long ScSCIGetExternalTriggerCount(long *Count);
   SC_SCIDLL_API long ScSCISetEnableHead(long Value);
   SC_SCIDLL_API long ScSCIGetEnableHead(long *Value);
   SC_SCIDLL_API long ScSCISetField(double XMin, double YMin, double XMax, double YMax);
   SC_SCIDLL_API long ScSCISetZField(double ZMin, double ZMax);
   SC_SCIDLL_API long ScSCIGetField(double *XMin, double *YMin, double *XMax, double *YMax);
   SC_SCIDLL_API long ScSCIGetZField(double *ZMin, double *ZMax);
   SC_SCIDLL_API long ScSCIGetGain(double *GainX, double *GainY);
   SC_SCIDLL_API long ScSCIGetZGain(double *GainZ);
   SC_SCIDLL_API long ScSCISetGain(double GainX, double GainY);
   SC_SCIDLL_API long ScSCISetZGain(double GainZ);
   SC_SCIDLL_API long ScSCIGetHomePosition(double *HomeX, double *HomeY);
   SC_SCIDLL_API long ScSCIGetZHomePosition(double *HomeZ);
   SC_SCIDLL_API long ScSCISetHomePosition(double HomeX, double HomeY);
   SC_SCIDLL_API long ScSCISetZHomePosition(double HomeZ);
   SC_SCIDLL_API long ScSCIGetOffset(double *OffsetX, double *OffsetY);
   SC_SCIDLL_API long ScSCIGetZOffset(double *OffsetZ);
   SC_SCIDLL_API long ScSCISetOffset(double OffsetX, double OffsetY);
   SC_SCIDLL_API long ScSCISetZOffset(double OffsetZ);
   SC_SCIDLL_API long ScSCISetWorkingArea(double XMin, double YMin, double XMax, double YMax);
   SC_SCIDLL_API long ScSCISetZWorkingArea(double ZMin, double ZMax);
   SC_SCIDLL_API long ScSCIGetWorkingArea(double *XMin, double *YMin, double *XMax, double *YMax);
   SC_SCIDLL_API long ScSCIGetZWorkingArea(double *ZMin, double *ZMax);
   SC_SCIDLL_API long ScSCIGetHomeJump(long *Value);
   SC_SCIDLL_API long ScSCISetHomeJump(long Value);
   SC_SCIDLL_API long ScSCIIsExposureEnd(long *Value);
   SC_SCIDLL_API long ScSCIMaxExternalTriggerCount(long Count);
   SC_SCIDLL_API long ScSCIResetExternalTriggerCount(void);
   SC_SCIDLL_API long ScSCISetMoveLaserState(long Value);
   SC_SCIDLL_API long ScSCIGetMoveLaserState(long *Value);
   SC_SCIDLL_API long ScSCISetDeviceEnableFlags(long FlagsId, long Flags);
   SC_SCIDLL_API long ScSCIGetDeviceEnableFlags(long FlagsId, long *Flags);
   SC_SCIDLL_API long ScSCISetDevicePath(long path_id,const char *Path);
   SC_SCIDLL_API long ScSCIGetDevicePath(long PathId,char *Path);
   SC_SCIDLL_API long ScSCISetDeviceMiscValue(long MiscId,long Value);
   SC_SCIDLL_API long ScSCIGetDeviceMiscValue(long MiscId,long *Value);
   SC_SCIDLL_API long ScSCISetDeviceMiscValueD(long MiscId,double Value);
   SC_SCIDLL_API long ScSCIGetDeviceMiscValueD(long MiscId,double *Value);
   SC_SCIDLL_API long ScSCIGetHeadCount(unsigned long *Count);
   SC_SCIDLL_API long ScSCISetHeadCount(unsigned long Count);
   SC_SCIDLL_API long ScSCIStreamInfo(long ident,long i_1,long i_2);
   SC_SCIDLL_API long ScSCIMarkLine(double x0, double y0, double x1, double y1);
   SC_SCIDLL_API long ScSCIMarkLine3D(double x0,double y0,double z0,double x1,double y1,double z1);
   SC_SCIDLL_API long ScSCIGetSpeed(double *Speed);
   SC_SCIDLL_API long ScSCISetSpeed(double Speed);
   SC_SCIDLL_API long ScSCIGetStyleSet(unsigned long *Style);
   SC_SCIDLL_API long ScSCISetStyleSet(unsigned long Style);
   SC_SCIDLL_API long ScSCISetLoopMode(long Mode);
   SC_SCIDLL_API long ScSCIGetLoopMode(long *Mode);
   SC_SCIDLL_API long ScSCISetLoop(long Count);
   SC_SCIDLL_API long ScSCIGetLoop(long *Count);
   SC_SCIDLL_API long ScSCISetMessageWindow(long hwnd);
   SC_SCIDLL_API long ScSCISetAxisState(long State);
   SC_SCIDLL_API long ScSCIGetAxisState(long *State);
   SC_SCIDLL_API long ScSCISaveSettings(const char *FileName);
   SC_SCIDLL_API long ScSCILoadSettings(const char *FileName);
   SC_SCIDLL_API long ScSCIEditSettings(void);
   SC_SCIDLL_API long ScSCISetRotAngle(double Angle); 
   SC_SCIDLL_API long ScSCIGetRotAngle(double *Angle);
   SC_SCIDLL_API long ScSCIUpdateDeviceStyle(void);
   SC_SCIDLL_API long ScSCIGetInterfaceVersion(unsigned long *Version); 
   SC_SCIDLL_API long ScSCIGetDebugMode(unsigned long *Flags);
   SC_SCIDLL_API long ScSCISetDebugMode(unsigned long Flags);
   SC_SCIDLL_API long ScSCIGetIdentString(char *Ident);
   SC_SCIDLL_API long ScSCIGetDeviceMapLaserPort(long *Port);
   SC_SCIDLL_API long ScSCISetDeviceMapLaserPort(long Port);
   SC_SCIDLL_API long ScSCIGetUSCInfoLong(unsigned long offset, long *value);

}



#endif // SC_SCI_FUNCTUION_CALLS_h