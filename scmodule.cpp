#include "scmodule.h"
#include "sci_dll_functions.h"
#include <QDir>
#include <QFileInfo>

SCModule::SCModule(ProjectData* pProjectData)
    :   mLaserLib(nullptr)
    ,mCarrFile("D:/laser/scaps/sam2d/usc1/GAPHEAD _ F160_CVI_1064_ANALOG.ucf")
    ,mSettingsFile("D:/laser/scaps/sam2d/system/sc_light_settings.sam")
    ,mLaserMode(0)
    ,mLaserPort(0)
{
    mpProjectData = pProjectData;

    mbIsDeviceInitialized = false;
    mLaserPort = scComStandardDeviceMapLaserToPort2;

    loadLibrary("C:/Users/user/Documents/GitHub/KoLaser/sc_optic.dll");

    mpExecutionTimer = new QTimer(this);

    connect(mpExecutionTimer,SIGNAL(timeout()),this,SLOT(checkExecution()));
}
SCModule::~SCModule()
{
    if(mpExecutionTimer)
    {
        delete mpExecutionTimer;
        mpExecutionTimer = 0;
    }
}

bool SCModule::loadLibrary(const QString &path)
{
#ifndef Q_OS_MACOS
    if(path.isEmpty())
        return false;

    QFileInfo testFile(path);
    if (testFile.exists() && testFile.isFile()) {
        mLaserLib = ::LoadLibraryA((path.toStdString().c_str()));
        if(mLaserLib == nullptr){
            DWORD dwError = ::GetLastError();
            // Sa moara Jean... alert the user
            dwError = 0;
            return false;
        }else{
            sci_load_dll_functions(mLaserLib);
        }

        return true;
    }

    return false;
#endif
    return true;
}

void SCModule::showMessageBox(QString qMsg)
{
    //TODO: FIX COMPILATION ERRORS QMessageBox::Information(this,QObject::tr("KoLaser"),QObject::tr(qMsg));
}
bool SCModule::initializeDevice()
{
    long device_mode;
    mbIsDeviceInitialized=false;
    long result = 0;

    long interface_version = 0;
    result = SCSciGetInterfaceVersion(&interface_version);
    TREAT_RESULT("SCSciGetInterfaceVersion", result)

            // activate the following lines if you do not want any message boxes to popup (for example correction file not found)
            /*
                long debug_mode = 0;
                sc_sci_get_debug_mode(&debug_mode);
                debug_mode |= 0x4;  // SC_ DEBUG_MODE_NO_OUTPUT
                sc_sci_set_debug_mode(debug_mode);
                */

            /* initialize the interface
                */
            result = SCSciInitInterface();
    if (result != SC_OK)
    {
        QString strError = QString("SCSciInitInterface returned %1").arg(result);
        showMessageBox(strError);
        return false;
    }

    /* specify the path to the correction file
    */
    result = SCSciSetDevicePath(0,mCarrFile.toLatin1().data());
    if (result != SC_OK)
    {
        QString strError = QString("SCSciSetDevicePath returned %1").arg(result);
        showMessageBox(strError);
    }

    /* disable simulation and hide the marking output window
    */
    result = SCSciGetDeviceOperationMode(&device_mode);
    if (result != SC_OK)
    {
        QString strError = QString("SCSciGetDeviceOperationMode returned %1").arg(result);
        showMessageBox(strError);
    }

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

    result = SCSciSetDeviceOperationMode(device_mode);
    TREAT_RESULT("SCSciSetDeviceOperationMode", result)

            /* setup z lookup table
            */
            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFieldSize, 200.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexDistanceMirrorsMM, 20.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexRadiusSecondMirrorMM, 400.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZNumControlPoints, 3);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 0, 350.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 0, 32767);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 1, 400.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 1, 0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 2, 450.0);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 2, -32768);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFlags, 0x1);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            result = SCSciSetDeviceMiscValue_d(scComStandardDeviceMiscEnableSendZCorr, 1);
    TREAT_RESULT("SCSciSetDeviceMiscValue_d", result)

            /* initialize the device
            */
            result = SCSciInitOptic();
    if (result != SC_OK)
    {
        this->showMessageBox("Initialization failed!");
        return false;
    }

    /* set field and working area
    */
    result = SCSciSetField(-100, -100, 100, 100);
    TREAT_RESULT("SCSciSetField", result)

            result = SCSciSetWorkingArea(-100, -100, 100, 100);
    TREAT_RESULT("SCSciSetWorkingArea", result)

            /* set correction offset and gain
            */
            result = SCSciSetOffset(0, 0);
    TREAT_RESULT("SCSciSetOffset", result)

            result = SCSciSetGain(1, 1);
    TREAT_RESULT("SCSciSetGain", result)

            /* specify home position and enable home jump (if necessary)
            */
            result = SCSciSetHomePosition(0, 0);
    TREAT_RESULT("SCSciSetHomePosition", result)

            result = SCSciSetHomeJump(1);
    TREAT_RESULT("SCSciSetHomeJump", result)

            /* no multihead
            */
            result = SCSciSetEnableHead(0);
    TREAT_RESULT("SCSciSetEnableHead", result)

            result = SCSciSetCurrentHead(0);
    TREAT_RESULT("SCSciSetCurrentHead", result)

            /* enable the head
            */
            result = SCSciSetEnableHead(1);
    TREAT_RESULT("SCSciSetEnableHead", result)

            /* set laserport
            */
            result = SCSciSetDeviceMapLaserPort(mLaserPort);
    TREAT_RESULT("SCSciSetDeviceMapLaserPort", result)

            /* set axis state
            */
            long axisState = 0;
    // axis_state |= scComAxisStateInvertX;  // enable this line for inverting x axis
    // axis_state |= scComAxisStateInvertY;	 // enable this line for inverting y axis
    // axis_state |= scComAxisStateFlipXY;	 // enable this line for flip xy
    result = SCSciSetAxisState(axisState);
    TREAT_RESULT("SCSciSetAxisState", result)

            /* set defined state, no execution, laser off
            */
            result = SCSciSetExecute(0);
    TREAT_RESULT("SCSciSetExecute", result)

            result = SCSciSetMoveLaserState(0);
    TREAT_RESULT("SCSciSetMoveLaserState", result)

            mbIsDeviceInitialized = true;

    if(mbAreSettingsLoaded)
    {
        result = SCSciLoadSettings(mSettingsFile.toLatin1().data());
        if(result != SC_OK)
        {
            this->showMessageBox("Error loading settings file!");
        }
    }

    return true;
}

bool SCModule::beginMarking()
{
    if(mbIsDeviceInitialized)
    {
        long power, pulseLength;
        long device_flags;

        long result = 0;

        /* set style set
        */
        result = SCSciSetStyleSet(1);
        TREAT_RESULT("SCSciSetStyleSet",result);

        // configure delays (as on the pen settings page)
        result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDMarkDelay, 50);
        TREAT_RESULT("SCSciSetDeviceDelay_d",result);

        result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDPolyDelay, 20);
        TREAT_RESULT("SCSciSetDeviceDelay_d",result);

        result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDJumpDelay, 400);
        TREAT_RESULT("SCSciSetDeviceDelay_d",result);

        // set the speed for jumping, this value can also be modified within the stream
        result = SCSciSetDeviceSpeed(scComStandardDeviceStyleIDJumpSpeedFU, 7600);
        TREAT_RESULT("SCSciSetDeviceSpeed",result);

        // enable the output port
        result = SCSciSetDeviceEnableFlags(scComStandardDeviceEnableFlagGroupStyle,&device_flags);
        TREAT_RESULT("SCSciSetDeviceEnableFlags",result);

        device_flags|=scComStandardDeviceStyleFlagEnablePortLaser;

        result = SCSciSetDeviceEnableFlags(scComStandardDeviceEnableFlagGroupStyle,device_flags);
        TREAT_RESULT("SCSciSetDeviceEnableFlags",result);

        // calculate and set power and frequency values for YAG laser
        result = SCSciSetDevicePortValue(scComStandardDeviceStyleIDPortLaser,mpProjectData->getTaskList()->at(0)->mPutereDioda);
        TREAT_RESULT("SCSciSetDevicePortValue",result);

        result = SCSciSetDeviceTimer(scComStandardDeviceStyleIDQSwitchPeriod,1/mpProjectData->getTaskList()->at(0)->mFrecventaQ*1e+6);
        TREAT_RESULT("SCSciSetDeviceTimer",result);

        result = SCSciSetDeviceTimer(scComStandardDeviceStyleIDQSwitchLength,10); //TODO: ???????????/
        TREAT_RESULT("SCSciSetDeviceTimer",result);

        result = SCSciSetContinuousMode(true);
        TREAT_RESULT("SCSciSetContinuousMode",result);

        result = SCSciSetExternalTrigger(true);
        TREAT_RESULT("SCSciSetExternalTrigger",result);

        result = SCSciSetExecute(true);
        TREAT_RESULT("SCSciSetExecute",result);

        result = SCSciStreamInfo(scComControlStreamInfoIdentIdStart,-1,scComControlStreamInfoSequenceIdJob);
        TREAT_RESULT("SCSciStreamInfo",result);
    }
    else
    {
        this->showMessageBox("ScModule Not initialized!!!");
    }
}

bool SCModule::startMarking(QList<Punct *> *pPointList)
{
    long result = 0;
    double x,y;

    this->beginMarking();

    double mark_speed = 50;    // not relevant
    double jump_speed = 40000;    // relevant, unit in mm/s
    // lets assume 50 kHz, we want to give two pulses each
    double drill_time = 41; // in us

    result =  SCSciSetDeviceSpeed(scComStandardDeviceStyleIDMarkSpeedFU, mark_speed);
    TREAT_RESULT("SCSciSetDeviceSpeed",result);

    result = SCSciSetDeviceSpeed(scComStandardDeviceStyleIDJumpSpeedFU, jump_speed);
    TREAT_RESULT("SCSciSetDeviceSpeed",result);

    result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDLaserOnDelay,1);
    TREAT_RESULT("SCSciSetDeviceDelay_d",result);

    result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDLaserOffDelay,drill_time);
    TREAT_RESULT("SCSciSetDeviceDelay_d",result);

    result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDJumpDelay, 10);
    TREAT_RESULT("SCSciSetDeviceDelay_d",result);

    result = SCSciSetDeviceDelay_d(scComStandardDeviceStyleIDMarkDelay,drill_time);
    TREAT_RESULT("SCSciSetDeviceDelay_d",result);

    long left_to_right = 1;
    // in total we mark 10000 points
    for (y=-30.0; y<=30.0; y+=1)
    {
        {
            // alternate line direction
            if(left_to_right)
            {
                for (x=-30.0; x<=30.0; x+=1)
                {
                    result = SCSciSetMoveLaserState(0);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);

                    result = SCSciMoveAbs(x,y);
                    TREAT_RESULT("SCSciMoveAbs",result);

                    result = SCSciSetMoveLaserState(1);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);

                    result = SCSciMoveAbs(x,y);
                    TREAT_RESULT("SCSciMoveAbs",result);

                    result = SCSciSetMoveLaserState(0);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);
                }
                left_to_right = 0;
            }
            else
            {
                for (x=30.0; x>=-30.0; x-=1)
                {
                    result = SCSciSetMoveLaserState(0);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);

                    result = SCSciMoveAbs(x,y);
                    TREAT_RESULT("SCSciMoveAbs",result);

                    result = SCSciSetMoveLaserState(1);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);

                    result = SCSciMoveAbs(x,y);
                    TREAT_RESULT("SCSciMoveAbs",result);

                    result = SCSciSetMoveLaserState(0);
                    TREAT_RESULT("SCSciSetMoveLaserState",result);
                }
                left_to_right = 1;
            }
        }
    }

    result = SCSciSetMoveLaserState(0);
    TREAT_RESULT("SCSciSetMoveLaserState",result);

    result = SCSciMoveAbs(0.0,0.0);
    TREAT_RESULT("SCSciMoveAbs",result);
}

bool SCModule::endMarking()
{
    long result = 0;
    /* signal stream start
        */
    result = SCSciStreamInfo(scComControlStreamInfoIdentIdEnd,-1,scComControlStreamInfoSequenceIdMain);
    TREAT_RESULT("SCSciStreamInfo",result);

    result = SCSciStreamInfo(scComControlStreamInfoIdentIdEnd,-1,scComControlStreamInfoSequenceIdJob);
    TREAT_RESULT("SCSciStreamInfo",result);
    /* if non continuous mode, start execution of the job now
        */
    result = SCSciSetExecute(1);
    TREAT_RESULT("SCSciSetExecute",result);

    /* flush remaining stream data and block until all commands have been executed -
           will return immediately if set for external trigger or non continuous mode
        */
    result = SCSciFlush();
    TREAT_RESULT("SCSciFlush",result);

    // check if external trigger is set
    long isExternalTrigger;
    result = SCSciGetExternalTrigger(&isExternalTrigger);

    long isContinuousMode;
    result = SCSciGetContinuousMode(&isContinuousMode);

    if (!isContinuousMode && isExternalTrigger)
    {
        mpExecutionTimer->start(100);
    }
}

void SCModule::checkExecution()
{
    long isExecuting = true;
    long result = 0;

    result = SCSciGetExecute(&isExecuting);
    TREAT_RESULT("SCSciGetExecute",result);

    if(!isExecuting)
    {
        result = SCSciSetExecute(0);
        TREAT_RESULT("SCSciSetExecute",result);
    }

}
/////////

long SCModule::SCSciSetCardType(char *card_type){ return sc_sci_set_card_type(card_type); }
long SCModule::SCSciInitInterface(void){ return sc_sci_init_interface(); }
long SCModule::SCSciInitOptic(void){ return sc_sci_init_optic(); }
void SCModule::SCSciExit(void){ sc_sci_exit(); }
long SCModule::SCSciSetWorkingArea(double XMin, double YMin, double XMax, double YMax){ return sc_sci_set_working_area(XMin,YMin,XMax,YMax); }
long SCModule::SCSciGetWorkingArea(double *XMin, double *YMin, double *XMax, double *YMax){ return sc_sci_get_working_area(XMin,YMin,XMax,YMax); }
long SCModule::SCSciSetField(double XMin, double YMin, double XMax, double YMax){ return sc_sci_set_field(XMin,YMin,XMax,YMax); }
long SCModule::SCSciGetField(double *XMin, double *YMin, double *XMax, double *YMax){ return sc_sci_get_field(XMin,YMin,XMax,YMax); }
long SCModule::SCSciSetDevicePath(long path_id,LPCSTR Path){ return sc_sci_set_device_path(path_id,Path); }
long SCModule::SCSciGetDevicePath(long path_id,LPSTR Path){ return sc_sci_get_device_path(path_id,Path); }
long SCModule::SCSciSetDeviceSpeed(long SpeedId,double Value){ return sc_sci_set_device_speed(SpeedId,Value); }
long SCModule::SCSciMoveAbs(double X,double Y){ return sc_sci_move_abs(X,Y); }
long SCModule::SCSciMoveAbs3d(double X, double Y, double Z){ return sc_sci_move_abs_3d(X,Y,Z); }
long SCModule::SCSciSetOffset(double OffsetX, double OffsetY){ return sc_sci_set_offset(OffsetX,OffsetY); }
long SCModule::SCSciSetGain(double GainX, double GainY){ return sc_sci_set_gain(GainX,GainY); }
long SCModule::SCSciSetHomePosition(double HomeX, double HomeY){ return sc_sci_set_home_position(HomeX,HomeY); }
long SCModule::SCSciSetHomeJump(long Value){ return sc_sci_set_home_jump(Value); }
long SCModule::SCSciSetMoveLaserState(long Value){ return sc_sci_set_move_laser_state(Value); }
long SCModule::SCSciStreamInfo(long ident,long i_1,long i_2){ return sc_sci_stream_info(ident,i_1,i_2); }
long SCModule::SCSciFlush(void){ return sc_sci_flush(); }
long SCModule::SCSciEnableHeadSelect(int Enable){ return sc_sci_enable_head_select(Enable); }
long SCModule::SCSciSetCurrentHead(long HeadId){ return sc_sci_set_current_head(HeadId); }
long SCModule::SCSciSetEnableHead(long Value){ return sc_sci_set_enable_head(Value); }
long SCModule::SCSciSetHeadCount(unsigned long Count){ return sc_sci_set_head_count(Count); }
long SCModule::SCSciGetDeviceOperationMode(long *Value){ return sc_sci_get_device_operation_mode(Value); }
long SCModule::SCSciSetDeviceOperationMode(long Value){ return sc_sci_set_device_operation_mode(Value); }
long SCModule::SCSciSetDeviceEnableFlags(long FlagsId, long Flags){ return sc_sci_set_device_enable_flags(FlagsId,Flags); }
long SCModule::SCSciGetDeviceEnableFlags(long FlagsId, long *Flags){ return sc_sci_get_device_enable_flags(FlagsId,Flags); }
long SCModule::SCSciGetDeviceTimer(long TimerId,double *Value){ return sc_sci_get_device_timer(TimerId,Value); }
long SCModule::SCSciSetDeviceTimer(long TimerId,double Value){ return sc_sci_set_device_timer(TimerId,Value); }
long SCModule::SCSciGetDeviceName(long NameId,LPCSTR Name){ return sc_sci_get_device_name(NameId,Name); }
long SCModule::SCSciGetDeviceData(long DataId, long DataLength, unsigned char *Data){ return sc_sci_get_device_data(DataId,DataLength,Data); }
long SCModule::SCSciSetDeviceData(long DataId, long DataLength, unsigned char *Data){ return sc_sci_set_device_data(DataId,DataLength,Data); }
long SCModule::SCSciSetExecute(long Value){ return sc_sci_set_execute(Value); }
long SCModule::SCSciGetExecute(long *Value){ return sc_sci_get_execute(Value); }
long SCModule::SCSciGetMoveLaserState(long *Value){ return sc_sci_get_move_laser_state(Value); }
long SCModule::SCSciSetStyleSet(unsigned long Style){return sc_sci_set_style_set(Style); }
long SCModule::SCSciGetStyleSet(unsigned long *Style){ return sc_sci_get_style_set(Style); }
long SCModule::SCSciSetDeviceDelay_d(long DelayId, double Value){ return sc_sci_set_device_delay_d(DelayId,Value); }
long SCModule::SCSciGetDeviceDelay_d(long DelayId, double *Value){ return sc_sci_get_device_delay_d(DelayId,Value); }
long SCModule::SCSciSetDevicePortValue(long PortId,long Value){ return sc_sci_set_device_port_value(PortId,Value); }
long SCModule::SCSciGetDevicePortValue(long PortId,long *Value){ return sc_sci_get_device_port_value(PortId,Value); }
long SCModule::SCSciResetExternalTriggerCount(void){ return sc_sci_reset_external_trigger_count(); }
long SCModule::SCSciGetExternalTriggerCount(long *Count){ return sc_sci_get_external_trigger_count(Count); }
long SCModule::SCSciMaxExternalTriggerCount(long Count){ return sc_sci_max_external_trigger_count(Count); }
long SCModule::SCSciSetContinuousMode(long Mode){ return sc_sci_set_continuous_mode(Mode); }
long SCModule::SCSciGetContinuousMode(long *Mode){ return sc_sci_get_continuous_mode(Mode); }
long SCModule::SCSciSetExternalTrigger(long Value){ return sc_sci_set_external_trigger(Value); }
long SCModule::SCSciGetExternalTrigger(long *Value){ return sc_sci_get_external_trigger(Value); }
long SCModule::SCSciSetMessageWindow(long hwnd){ return sc_sci_set_message_window(hwnd); }
long SCModule::SCSciSetAxisState(long State){ return sc_sci_set_axis_state(State); }
long SCModule::SCSciGetAxisState(long *State){ return sc_sci_get_axis_state(State); }
long SCModule::SCSciLoadSettings(LPCSTR file_name){ return sc_sci_load_settings(file_name); }
long SCModule::SCSciSaveSettings(LPCSTR file_name){ return sc_sci_save_settings(file_name); }
long SCModule::SCSciEditSettings(void){ return sc_sci_edit_settings(); }
long SCModule::SCSciGetDeviceMiscValue_d(long MiscId, double *Value){ return sc_sci_get_device_misc_value_d(MiscId,Value); }
long SCModule::SCSciSetDeviceMiscValue_d(long MiscId, double Value){ return sc_sci_set_device_misc_value_d(MiscId,Value); }
long SCModule::SCSciSetRotAngle(double Angle){ return sc_sci_set_rot_angle(Angle); }
long SCModule::SCSciGetRotAngle(double *Angle){ return sc_sci_get_rot_angle(Angle); }
long SCModule::SCSciDevicePixelLine(float *PixelLine, long PixelCount, double dx, double dy, double dz){ return sc_sci_device_pixel_line(PixelLine,PixelCount,dx,dy,dz); }
long SCModule::SCSciSetSpeed(double Speed){ return sc_sci_set_speed(Speed); }
long SCModule::SCSciGetSpeed(double *Speed){ return sc_sci_get_speed(Speed); }
long SCModule::SCSciUpdateDeviceStyle(void){ return sc_sci_update_device_style(); }
long SCModule::SCSciGetInterfaceVersion(long *Version){ return sc_sci_get_interface_version(Version); }
long SCModule::SCSciGetDebugMode(long *Flags){ return sc_sci_get_debug_mode(Flags); }
long SCModule::SCSciSetDebugMode(long Flags){ return sc_sci_set_debug_mode(Flags); }
long SCModule::SCSciIsExposureEnd(long *Value){ return sc_sci_is_exposure_end(Value); }
long SCModule::SCSciGetIdentString(char *Ident){ return sc_sci_get_ident_string(Ident); }
long SCModule::SCSciGetDeviceMapLaserPort(long *Port){ return sc_sci_get_device_map_laser_port(Port); }
long SCModule::SCSciSetDeviceMapLaserPort(long Port){ return sc_sci_set_device_map_laser_port(Port); }
