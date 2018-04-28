#include "scmodule.h"

SCModule::SCModule()
{
    mbIsDeviceInitialized = false;
    mLaserPort = scComStandardDeviceMapLaserToPort2;

}
SCModule::~SCModule()
{

}

bool SCModule::loadLibrary(const QString &path)
{

}

void SCModule::showMessageBox(QString qMsg)
{
    //TODO: FIX COMPILATION ERRORS QMessageBox::Information(this,QObject::tr("KoLaser"),QObject::tr(qMsg));
}
bool SCModule::initializeDevice()
{
    long device_mode;
    mbIsDeviceInitialized=false;

    long interface_version = 0;
    this->SCSciGetInterfaceVersion(&interface_version);

        // activate the following lines if you do not want any message boxes to popup (for example correction file not found)
        /*
        long debug_mode = 0;
        sc_sci_get_debug_mode(&debug_mode);
        debug_mode |= 0x4;  // SC_ DEBUG_MODE_NO_OUTPUT
        sc_sci_set_debug_mode(debug_mode);
        */

        /* initialize the interface
        */
        if (SCSciInitInterface() != SC_OK)
        {
           this->showMessageBox("Initialization Failed!");
           return SC_ERROR;
        }

        /* specify the path to the correction file
        */
        SCSciSetDevicePath(0,mCarrFile.toLatin1().data());

        /* disable simulation and hide the marking output window
        */
        SCSciGetDeviceOperationMode(&device_mode);
        device_mode = device_mode & ~scComStandardDeviceOperationModeSimulation;
        device_mode = device_mode | scComStandardDeviceOperationModePixelAM;
        device_mode = device_mode |  scComStandardDeviceOperationModeHideOutputWindow;

        /* select the laser type
        */
        device_mode = device_mode & ~scComStandardDeviceOperationModeIdCO2;
        device_mode = device_mode & ~scComStandardDeviceOperationModeIdLEE;
        device_mode = device_mode & ~scComStandardDeviceOperationModeIdYAG;
        if (mLaserMode==SCI_LASER_YAG)
            device_mode = device_mode | scComStandardDeviceOperationModeIdYAG;
        else
            device_mode = device_mode | scComStandardDeviceOperationModeIdCO2;

        /* enable global standby
        */
        device_mode = device_mode | scComStandardDeviceOperationModeEnableStandBy;

        SCSciSetDeviceOperationMode(device_mode);

        /* setup z lookup table
        */
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFieldSize, 200.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexDistanceMirrorsMM, 20.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexRadiusSecondMirrorMM, 400.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZNumControlPoints, 3);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 0, 350.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 0, 32767);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 1, 400.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 1, 0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 2, 450.0);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 2, -32768);

        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFlags, 0x1);
        SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscEnableSendZCorr, 1);

        /* initialize the device
        */
        if (SCSciInitOptic() != SC_OK)
        {
           this->showMessageBox("Initialization failed!");
           return SC_ERROR;
        }

        /* set field and working area
        */
        SCSciSetField(-100, -100, 100, 100);
        SCSciSetWorkingArea(-100, -100, 100, 100);

        /* set correction offset and gain
        */
        SCSciSetOffset(0, 0);
        SCSciSetGain(1, 1);

        /* specify home position and enable home jump (if necessary)
        */
        SCSciSetHomePosition(0, 0);
        SCSciSetHomeJump(1);

        /* no multihead
        */
        SCSciSetEnableHead(0);
        SCSciSetCurrentHead(0);

        /* enable the head
        */
        SCSciSetEnableHead(1);

        /* set laserport
        */
        SCSciSetDeviceMapLaserPort(mLaserPort);
        /* set axis state
        */
        long axisState = 0;
        // axis_state |= scComAxisStateInvertX;  // enable this line for inverting x axis
        // axis_state |= scComAxisStateInvertY;	 // enable this line for inverting y axis
        // axis_state |= scComAxisStateFlipXY;	 // enable this line for flip xy
        SCSciSetAxisState(axisState);

        /* set defined state, no execution, laser off
        */
        SCSciSetExecute(0);
        SCSciSetMoveLaserState(0);

        mbIsDeviceInitialized = true;

        if(mbAreSettingsLoaded)
        {
            if(SCSciLoadSettings(mSettingsFile.toLatin1().data()) != SC_OK)
            {
                this->showMessageBox("Error loading settings file!");
            }
        }
}

/////////

long SCModule::SCSciSetCardType(char *card_type){ sc_sci_set_card_type(card_type); }
long SCModule::SCSciInitInterface(void){ sc_sci_init_interface(); }
long SCModule::SCSciInitOptic(void){ sc_sci_init_optic(); }
void SCModule::SCSciExit(void){ sc_sci_exit(); }
long SCModule::SCSciSetWorkingArea(double XMin, double YMin, double XMax, double YMax){ sc_sci_set_working_area(XMin,YMin,XMax,YMax); }
long SCModule::SCSciGetWorkingArea(double *XMin, double *YMin, double *XMax, double *YMax){ sc_sci_get_working_area(XMin,YMin,XMax,YMax); }
long SCModule::SCSciSetField(double XMin, double YMin, double XMax, double YMax){ sc_sci_set_field(XMin,YMin,XMax,YMax); }
long SCModule::SCSciGetField(double *XMin, double *YMin, double *XMax, double *YMax){ sc_sci_get_field(XMin,YMin,XMax,YMax); }
long SCModule::SCSciSetDevicePath(long path_id,LPCSTR Path){ sc_sci_set_device_path(path_id,Path); }
long SCModule::SCSciGetDevicePath(long path_id,LPSTR Path){ sc_sci_get_device_path(path_id,Path); }
long SCModule::SCSciSetDeviceSpeed(long SpeedId,double Value){ sc_sci_set_device_speed(SpeedId,Value); }
long SCModule::SCSciMoveAbs(double X,double Y){ sc_sci_move_abs(X,Y); }
long SCModule::SCSciMoveAbs3d(double X, double Y, double Z){ sc_sci_move_abs_3d(X,Y,Z); }
long SCModule::SCSciSetOffset(double OffsetX, double OffsetY){ sc_sci_set_offset(OffsetX,OffsetY); }
long SCModule::SCSciSetGain(double GainX, double GainY){ sc_sci_set_gain(GainX,GainY); }
long SCModule::SCSciSetHomePosition(double HomeX, double HomeY){ sc_sci_set_home_position(HomeX,HomeY); }
long SCModule::SCSciSetHomeJump(long Value){ sc_sci_set_home_jump(Value); }
long SCModule::SCSciSetMoveLaserState(long Value){ sc_sci_set_move_laser_state(Value); }
long SCModule::SCSciStreamInfo(long ident,long i_1,long i_2){ sc_sci_stream_info(ident,i_1,i_2); }
long SCModule::SCSciFlush(void){ sc_sci_flush(); }
long SCModule::SCSciEnableHeadSelect(int Enable){ sc_sci_enable_head_select(Enable); }
long SCModule::SCSciSetCurrentHead(long HeadId){ sc_sci_set_current_head(HeadId); }
long SCModule::SCSciSetEnableHead(long Value){ sc_sci_set_enable_head(Value); }
long SCModule::SCSciSetHeadCount(unsigned long Count){ sc_sci_set_head_count(Count); }
long SCModule::SCSciGetDeviceOperationMode(long *Value){ sc_sci_get_device_operation_mode(Value); }
long SCModule::SCSciSetDeviceOperationMode(long Value){ sc_sci_set_device_operation_mode(Value); }
long SCModule::SCSciSetDeviceEnableFlags(long FlagsId, long Flags){ sc_sci_set_device_enable_flags(FlagsId,Flags); }
long SCModule::SCSciGetDeviceEnableFlags(long FlagsId, long *Flags){ sc_sci_get_device_enable_flags(FlagsId,Flags); }
long SCModule::SCSciGetDeviceTimer(long TimerId,double *Value){ sc_sci_get_device_timer(TimerId,Value); }
long SCModule::SCSciSetDeviceTimer(long TimerId,double Value){ sc_sci_set_device_timer(TimerId,Value); }
long SCModule::SCSciGetDeviceName(long NameId,LPCSTR Name){ sc_sci_get_device_name(NameId,Name); }
long SCModule::SCSciGetDeviceData(long DataId, long DataLength, unsigned char *Data){ sc_sci_get_device_data(DataId,DataLength,Data); }
long SCModule::SCSciSetDeviceData(long DataId, long DataLength, unsigned char *Data){ sc_sci_set_device_data(DataId,DataLength,Data); }
long SCModule::SCSciSetExecute(long Value){ sc_sci_set_execute(Value); }
long SCModule::SCSciGetExecute(long *Value){ sc_sci_get_execute(Value); }
long SCModule::SCSciGetMoveLaserState(long *Value){ sc_sci_get_move_laser_state(Value); }
long SCModule::SCSciSetStyleSet(unsigned long Style){sc_sci_set_style_set(Style); }
long SCModule::SCSciGetStyleSet(unsigned long *Style){ sc_sci_get_style_set(Style); }
long SCModule::SCSciSetDeviceDelay_d(long DelayId, double Value){ sc_sci_set_device_delay_d(DelayId,Value); }
long SCModule::SCSciGetDeviceDelay_d(long DelayId, double *Value){ sc_sci_get_device_delay_d(DelayId,Value); }
long SCModule::SCSciSetDevicePortValue(long PortId,long Value){ sc_sci_set_device_port_value(PortId,Value); }
long SCModule::SCSciGetDevicePortValue(long PortId,long *Value){ sc_sci_get_device_port_value(PortId,Value); }
long SCModule::SCSciResetExternalTriggerCount(void){ sc_sci_reset_external_trigger_count(); }
long SCModule::SCSciGetExternalTriggerCount(long *Count){ sc_sci_get_external_trigger_count(Count); }
long SCModule::SCSciMaxExternalTriggerCount(long Count){ sc_sci_max_external_trigger_count(Count); }
long SCModule::SCSciSetContinuousMode(long Mode){ sc_sci_set_continuous_mode(Mode); }
long SCModule::SCSciGetContinuousMode(long *Mode){ sc_sci_get_continuous_mode(Mode); }
long SCModule::SCSciSetExternalTrigger(long Value){ sc_sci_set_external_trigger(Value); }
long SCModule::SCSciGetExternalTrigger(long *Value){ sc_sci_get_external_trigger(Value); }
long SCModule::SCSciSetMessageWindow(long hwnd){ sc_sci_set_message_window(hwnd); }
long SCModule::SCSciSetAxisState(long State){ sc_sci_set_axis_state(State); }
long SCModule::SCSciGetAxisState(long *State){ sc_sci_get_axis_state(State); }
long SCModule::SCSciLoadSettings(LPCSTR file_name){ sc_sci_load_settings(file_name); }
long SCModule::SCSciSaveSettings(LPCSTR file_name){ sc_sci_save_settings(file_name); }
long SCModule::SCSciEditSettings(void){ sc_sci_edit_settings(); }
long SCModule::SCSciGetDeviceMiscValue_d(long MiscId, double *Value){ sc_sci_get_device_misc_value_d(MiscId,Value); }
long SCModule::SCSciSetDeviceMiscValue_d(long MiscId, double Value){ sc_sci_set_device_misc_value_d(MiscId,Value); }
long SCModule::SCSciSetRotAngle(double Angle){ sc_sci_set_rot_angle(Angle); }
long SCModule::SCSciGetRotAngle(double *Angle){ sc_sci_get_rot_angle(Angle); }
long SCModule::SCSciDevicePixelLine(float *PixelLine, long PixelCount, double dx, double dy, double dz){ sc_sci_device_pixel_line(PixelLine,PixelCount,dx,dy,dz); }
long SCModule::SCSciSetSpeed(double Speed){ sc_sci_set_speed(Speed); }
long SCModule::SCSciGetSpeed(double *Speed){ sc_sci_get_speed(Speed); }
long SCModule::SCSciUpdateDeviceStyle(void){ sc_sci_update_device_style(); }
long SCModule::SCSciGetInterfaceVersion(long *Version){ sc_sci_get_interface_version(Version); }
long SCModule::SCSciGetDebugMode(long *Flags){ sc_sci_get_debug_mode(Flags); }
long SCModule::SCSciSetDebugMode(long Flags){ sc_sci_set_debug_mode(Flags); }
long SCModule::SCSciIsExposureEnd(long *Value){ sc_sci_is_exposure_end(Value); }
long SCModule::SCSciGetIdentString(char *Ident){ sc_sci_get_ident_string(Ident); }
long SCModule::SCSciGetDeviceMapLaserPort(long *Port){ sc_sci_get_device_map_laser_port(Port); }
long SCModule::SCSciSetDeviceMapLaserPort(long Port){ sc_sci_set_device_map_laser_port(Port); }