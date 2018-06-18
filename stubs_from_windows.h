#ifndef STUBS_FROM_WINDOWS_H
#define STUBS_FROM_WINDOWS_H

enum ScComStandardDeviceOperationModeConstants
    {	scComStandardDeviceOperationModeIdYAG	= 0x1000000,
    scComStandardDeviceOperationModeIdCO2	= 0x2000000,
    scComStandardDeviceOperationModeIdLEE	= 0x3000000,
    scComStandardDeviceOperationModeIdIPG	= 0x4000000,
    scComStandardDeviceOperationModeSimulation	= 0x1,
    scComStandardDeviceOperationModeHideOutputWindow	= 0x2,
    scComStandardDeviceOperationModeMOF	= 0x4,
    scComStandardDeviceOperationModeInvertLaserPort	= 0x8,
    scComStandardDeviceOperationModeVarPolyDelay	= 0x20,
    scComStandardDeviceOperationModeYAG2	= 0x40,
    scComStandardDeviceOperationModeDisableStopBeep	= 0x80,
    scComStandardDeviceOperationModePixelAM	= 0x200,
    scComStandardDeviceOperationModePixelPWM	= 0x400,
    scComStandardDeviceOperationModePixelInvert	= 0x800,
    scComStandardDeviceOperationModeYAG3	= 0x40000,
    scComStandardDeviceOperationModePixelCenter	= 0x80000,
    scComStandardDeviceOperationModePixelMode0	= 0x100000,
    scComStandardDeviceOperationModeEnableStandBy	= 0x200000,
    scComStandardDeviceOperationModeAlwaysStandBy	= 0x400000,
    scComStandardDeviceOperationModeSimulationWithoutPreview	= 0x800000,
    scComStandardDeviceOperationModeIsHomejumpJob	= 0x1000000,
    scComStandardDeviceOperationModeYAG4	= 0x80000000
    };

enum ScComStandardDeviceLaserPortMapConstants
    {	scComStandardDeviceMapLaserToNone	= 0,
    scComStandardDeviceMapLaserToPort1	= 1,
    scComStandardDeviceMapLaserToPort2	= 2,
    scComStandardDeviceMapLaserToDA1	= 3,
    scComStandardDeviceMapLaserToDA2	= 4
    };

const long scComStandardDeviceMiscOffset3DCorrtableLockup	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceMiscIndexLookupZNumControlPoints	=	2;

/* [helpstring] */ const long scComStandardDeviceMiscIndexLookupZMaxNumControlPoints	=	3;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZCorrFieldSize	=	4;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZCorrFlags	=	5;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZJumpDelay	=	6;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZJumpDelayThreshold	=	7;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZCorrDistanceFocusingLenseToFirstMirror	=	8;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZCorrFocusingLenseFocalLength	=	9;

/* [helpstring] */ const long scComStandardDeviceMiscIndexZCorrZAxisTravelRange	=	10;

/* [helpstring] */ const long scComStandardDeviceMiscIndexLookupZMMStart	=	256;

/* [helpstring] */ const long scComStandardDeviceMiscIndexLookupZDacStart	=	( 256 + 0x8000 ) ;

/* [helpstring] */ const long scComStandardDeviceMiscOffsetPenPaths	=	0x20000;

/* [helpstring] */ const long scComStandardDeviceMiscIndexPenPathAndMarkMode	=	0;

/* [helpstring] */ const long scComStandardDeviceMiscIndexPenPathArraySize	=	1;

/* [helpstring] */ const long scComStandardDeviceMiscIndexPenPathPenNumberStart	=	256;

/* [helpstring] */ const long scComStandardDeviceMiscIndexPenPathLoopsStart	=	( 256 + 256 ) ;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSpecialFlagDontDisableMOFEncoderXAfterMarking	=	1;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSpecialFlagDontDisableMOFEncoderYAfterMarking	=	2;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSpecialFlagDontResetMOFEncoderXBeforeMarking	=	4;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSpecialFlagDontResetMOFEncoderYBeforeMarking	=	8;

/* [helpstring] */ const long scComStandardDeviceHandleIDEventFromDevice	=	0;

const long scComStandardDeviceMiscIndexDistanceMirrorsMM	=	0;
const long scComStandardDeviceMiscIndexRadiusSecondMirrorMM	=	1;
const long scComStandardDeviceMiscEnableSendZCorr	=	47;

enum ScComStandardDeviceDelayConstants
    {	scComStandardDeviceStyleIDMarkDelay	= 0,
    scComStandardDeviceStyleIDJumpDelay	= 1,
    scComStandardDeviceStyleIDPolyDelay	= 2,
    scComStandardDeviceStyleIDLaserOnDelay	= 3,
    scComStandardDeviceStyleIDLaserOffDelay	= 4,
    scComStandardDeviceStyleIDLongDelay	= 5,
    scComStandardDeviceStreamIDLongDelay	= 6,
    scComStandardDeviceStyleIDSkyStartDelay	= 7,
    scComStandardDeviceStyleIDSkyEndDelay	= 8,
    scComStandardDeviceStyleIDDrillJumpDelay	= 9
    };

enum ScComStandardDeviceSpeedConstants
    {	scComStandardDeviceStyleIDMarkSpeed	= 0,
    scComStandardDeviceStyleIDJumpSpeed	= 1,
    scComStandardDeviceStyleIDJumpSpeedFU	= 2,
    scComStandardDeviceStyleIDDrillJumpSpeedFU	= 3,
    scComStandardDeviceStyleIDDrillJumpSpeed	= 4,
    scComStandardDeviceStyleIDMarkSpeedFU	= 5
    };
/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupStyle	=	0;

enum ScComStandardDeviceEnableFlagConstants
    {	scComStandardDeviceStyleFlagEnableLongDelay	= 0x1,
    scComStandardDeviceStyleFlagEnablePortLaser	= 0x2,
    scComStandardDeviceStyleFlagEnablePort1	= 0x4,
    scComStandardDeviceStyleFlagEnableWobble	= 0x8,
    scComStandardDeviceStyleFlagEnableCO2List	= 0x10,
    scComStandardDeviceStyleFlagEnableYAGStandBy	= 0x20,
    scComStandardDeviceStyleFlagEnablePixelOutput	= 0x40,
    scComStandardDeviceStyleFlagEnablePort2	= 0x80,
    scComStandardDeviceStyleFlagSetPortLaserFlag	= 0x100,
    scComStandardDeviceStyleFlagEnableDA1	= 0x200,
    scComStandardDeviceStyleFlagEnableDA2	= 0x400,
    scComStandardDeviceStyleFlagEnableOptoOut	= 0x800,
    scComStandardDeviceStyleFlagEnableRS232_0	= 0x1000,
    scComStandardDeviceStyleFlagEnableSkyWriting	= 0x2000,
    scComStandardDeviceStyleFlagOutputFlagDisableAutoResetTriggerCount	= 0x1,
    scComStandardDeviceStyleFlagOutputFlagEnableMultiJobInBuffer	= 0x2,
    scComStandardDeviceStyleFlagOutputFlagEnableExternalProgressCount	= 0x4,
    scComStandardDeviceStyleFlagOutputFlagDisableWaitFlags	= 0x8,
    scComStandardDeviceStyleFlagOutputFlagEnableStreamFlush	= 0x10,
    scComStandardDeviceStyleFlagOutputFlagEnablePCCorrection	= 0x20,
    scComStandardDeviceStyleFlagOutputFlagEnableUSC2PixelOutput	= 0x40,
    scComStandardDeviceStyleFlagEnablePowerRampUp	= 0x1,
    scComStandardDeviceStyleFlagEnablePowerRampDown	= 0x2,
    scComStandardDeviceStyleFlagEnableDrill	= 0x4000,
    scComStandardDeviceStyleFlagEnableDrillNumPulses	= 0x8000,
    scComStandardDeviceStyleFlagEnableDefocusList	= 0x10000,
    scComStandardDeviceStyleFlagEnableDrillCO2Power	= 0x20000,
    scComStandardDeviceStyleFlagEnablePolyDelayBreakAngle	= 0x40000,
    scComStandardDeviceStyleFlagEnablePixelMapForPen	= 0x80000,
    scComStandardDeviceStyleFlagEnableDrillUseGeometry	= 0x100000,
    scComStandardDeviceStyleFlagDisablePowerChangesDuringJump	= 0x200000,
    scComStandardDeviceStyleFlagEnablePointUsePowerMap	= 0x400000,
    scComStandardDeviceStyleFlagEnablePenPowerAsMaxBitmapPower	= 0x800000,
    scComStandardDeviceStyleFlagBitmapBWUseVectorDelays	= 0x1000000
    };

/* [helpstring] */ const long scComControlStreamInfoIdentIdEnd	=	0x20000;
enum ScComStandardDevicePortConstants
    {	scComStandardDeviceStyleIDPort1	= 1,
    scComStandardDeviceStyleIDPortLaser	= 0,
    scComStandardDeviceStyleIDPort2	= 2,
    scComStandardDeviceStreamIDPortLaser	= 3,
    scComStandardDeviceStreamIDPort1	= 4,
    scComStandardDeviceStreamIDPort2	= 5,
    scComStandardDeviceIDPortHeadStatus	= 6,
    scComStandardDeviceIDPortExecutionStatus	= 7,
    scComStandardDeviceStyleIDPortDA1	= 8,
    scComStandardDeviceStyleIDPortDA2	= 9,
    scComStandardDeviceStreamIDPortDA1	= 10,
    scComStandardDeviceStreamIDPortDA2	= 11,
    scComStandardDeviceIDPortMOF16Bit	= 12,
    scComStandardDeviceStyleIDPanelControl	= 13,
    scComStandardDeviceIDPort1Init	= 14,
    scComStandardDeviceIDPort2Init	= 15,
    scComStandardDeviceIDPortDA1Init	= 16,
    scComStandardDeviceIDPortDA2Init	= 17,
    scComStandardDeviceIDPortEnableLaser	= 18,
    scComStandardDeviceStyleIDPortOptoOut	= 19,
    scComStandardDeviceStreamIDPortOptoOut	= 20,
    scComStandardDeviceIDPortOptoIn	= 21,
    scComStandardDeviceIDPortRS232_0_Mode	= 22,
    scComStandardDeviceIDPortRS232_0_BaudRate	= 23,
    scComStandardDeviceIDPortRS232_0_BytesAvailable	= 24,
    scComStandardDeviceControlIDPortOptoOut	= 25,
    scComStandardDeviceIDOptoOutInit	= 26,
    scComStandardDeviceIDOptoOutDevice	= 27,
    scComStandardDeviceIDPortRS232_1_Mode	= 28,
    scComStandardDeviceIDPortRS232_1_BaudRate	= 29,
    scComStandardDeviceIDPortRS232_1_BytesAvailable	= 30,
    scComStandardDeviceIDPortUSCServerStatus	= 31,
    scComStandardDeviceIDPortUSCServerConnect	= 32,
    scComStandardDeviceIDPortInputWait	= 33,
    scComStandardDeviceIDPortProgressCounter	= 34,
    scComStandardDeviceControlIDPort1	= 35,
    scComStandardDeviceControlIDPort2	= 36,
    scComStandardDeviceControlIDPortDA1	= 37,
    scComStandardDeviceControlIDPortDA2	= 38,
    scComStandardDeviceControlIDPortLaser	= 39,
    scComStandardDeviceIDPortFlashStatus	= 40,
    scComStandardDeviceIDPortGalvoXTemp	= 41,
    scComStandardDeviceIDPortGalvoYTemp	= 42,
    scComStandardDeviceIDPortRS232_Init	= 43,
    scComStandardDeviceIDEnableExternalStop	= 44,
    scComStandardDeviceStreamIDPortStepperOut	= 45,
    scComStandardDeviceControlIDPortStepperOut	= 46,
    scComStandardDeviceControlIDPortDA3	= 47,
    scComStandardDeviceControlIDPortDA4	= 48,
    scComStandardDeviceControlIDPortDA5	= 49,
    scComStandardDeviceControlIDPortDA6	= 50,
    scComStandardDeviceIDEnableExternalPause	= 51,
    scComStandardDeviceIDEnableExternalStopDirect	= 52,
    scComStandardDeviceControlIDLaserOnOff	= 53,
    scComStandardDeviceStreamIDPortExternalStopFlags	= 54,
    scComStandardDeviceStreamIDPortExternalPauseFlags	= 55,
    scComStandardDeviceIDPortUSCConnectCount	= 56,
    scComStandardDeviceStreamIDPortCustomValue	= 57,
    scComStandardDeviceStreamIDPortXYStatus	= 58,
    scComStandardDeviceStreamIDPortXYStatus1	= 59,
    scComStandardDeviceIDPortGalvoZTemp	= 60,
    scComStandardDeviceIDPortServoXTemp	= 61,
    scComStandardDeviceIDPortServoYTemp	= 62,
    scComStandardDeviceIDPortServoZTemp	= 63,
    scComStandardDeviceControlIDPortCustomValue	= 64,
    scComStandardDeviceIDPortStopExecutionStatus	= 65
    };

enum ScComStandardDeviceTimerConstants
    {	scComStandardDeviceStyleIDQSwitchPeriod	= 1,
    scComStandardDeviceStyleIDLaser1Length	= 2,
    scComStandardDeviceStyleIDQSwitchLength	= 3,
    scComStandardDeviceStyleIDLaser2Length	= 4,
    scComStandardDeviceStyleIDFirstPulseLength	= 5,
    scComStandardDeviceStyleIDStepPeriod	= 6,
    scComStandardDeviceStyleIDHalfPeriod	= 7,
    scComStandardDeviceStyleIDStandByPulse	= 8,
    scComStandardDeviceStyleIDWobblePeriod	= 9,
    scComStandardDeviceStyleIDHalfPeriodCO2	= 10,
    scComStandardDeviceStyleIDWobblePeriod2	= 11,
    scComStandardDeviceStreamIDStandByPulse	= 12,
    scComStandardDeviceStyleIDHalfPeriodStandBy	= 13,
    scComStandardDeviceStyleIDDrillPeriod	= 14,
    scComStandardDeviceStyleIDDrillLength	= 15,
    scComStandardDeviceStyleIDDrillDuration	= 16,
    scComStandardDeviceStyleIDDrillCO2HalfPeriod	= 17,
    scComStandardDeviceStyleIDDrillCO2Lenght1	= 14,
    scComStandardDeviceStyleIDDrillCO2Lenght2	= 15,
    scComStandardDeviceIDHalfPeriodStandBy	= 18,
    scComStandardDeviceIDStandByPulse	= 19
    };

/* [helpstring] */ const long scComControlStreamInfoSequenceIdJob	=	0;

/* [helpstring] */ const long scComControlStreamInfoIdentIdStart	=	0x10000;
/* [helpstring] */ const long scComControlStreamInfoSequenceIdMain	=	1;
////////////////////////////////////////////////////////////

// VC_SCIExampleDlg.cpp : Implementierungsdatei
//

/*
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

#define SCI_LASER_YAG 0x0001
#define SCI_LASER_CO2 0x0002

#define SCI_LASERPORT_8BIT 0x0001
#define SCI_LASERPORT_DA1  0x0002
#define SCI_LASERPORT_DA2  0x0003

    : CDialog(CVC_SCIExampleDlg::IDD, pParent)
{
    //{{AFX_DATA_INIT(CVC_SCIExampleDlg)
    m_q_switch_frequency = 0.0;
    m_q_switch_pulse_length = 0;
    m_laserpower = 0;
    m_stdby_halfperiod = 0;
    m_stdby_pulse = 0;
    m_store_to_flash = false;
    m_corrfile = _T("");
    //}}AFX_DATA_INIT
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

    m_deviceInitialized=false;
    m_dlgStop=NULL;
    m_lasermode=SCI_LASER_CO2;
    m_laserpower=50;
    m_q_switch_frequency=10000;
    m_q_switch_pulse_length=10;
    m_halfperiod=10;
    m_stdby_halfperiod=10; // 50 kHz
    m_stdby_pulse=0;
    m_corrfile="cor_neutral.ucf";
    m_card_type="";
    m_laserport=scComStandardDeviceMapLaserToPort2;
    m_settings_file="C:\\scaps\\sam2d\\system\\sci_dll_settings.sam";
    m_ext_trigger=false;
    m_continuous_mode=true;
    m_load_settings=false;
    m_dlgStop=new SCIStopDialog(this);
    if(m_dlgStop)
        m_dlgStop->Create(IDD_SCI_STOPDIALOG);
}



CVC_SCIExampleDlg::~CVC_SCIExampleDlg()
{
    if (m_dlgStop) delete m_dlgStop;
}



void CVC_SCIExampleDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    //{{AFX_DATA_MAP(CVC_SCIExampleDlg)
    DDX_Text(pDX, IDC_EDIT_QFREQ, m_q_switch_frequency);
    DDX_Text(pDX, IDC_EDIT_QPULSE, m_q_switch_pulse_length);
    DDX_Text(pDX, IDC_EDIT_LASERPOWER, m_laserpower);
    DDX_Text(pDX, IDC_EDIT_STDBY_HALFPERIOD, m_stdby_halfperiod);
    DDX_Text(pDX, IDC_EDIT_STDBY_PULSE, m_stdby_pulse);
    DDX_Text(pDX, IDC_EDIT_CORRFILE, m_corrfile);
    //}}AFX_DATA_MAP
    DDX_Check(pDX, IDC_CHECK_LOAD_SETTINGS, m_load_settings);
    DDX_Text(pDX, IDC_EDIT_SETT_FILE, m_settings_file);
    DDX_Check(pDX, IDC_CHECK_EXT_TRIGGER, m_ext_trigger);
    DDX_Check(pDX, IDC_CHECK_CONTINUOUS_MODE, m_continuous_mode);
    DDX_Check(pDX, IDC_CHECK_LOOP_MODE, m_loop_mode);
    DDX_Check(pDX, IDC_CHECK_STORE_TO_FLASH, m_store_to_flash);
    DDX_Text(pDX, IDC_EDIT_HALFPERIOD, m_halfperiod);
}

BEGIN_MESSAGE_MAP(CVC_SCIExampleDlg, CDialog)
    //{{AFX_MSG_MAP(CVC_SCIExampleDlg)
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_BN_CLICKED(IDC_BUTTON_INITIALIZE, OnButtonInitialize)
    ON_BN_CLICKED(IDC_BUTTON_VECTORS, OnButtonVectors)
    ON_BN_CLICKED(IDC_RADIO_LASER_YAG, OnRadioLaserYag)
    ON_BN_CLICKED(IDC_RADIO_LASER_CO2, OnRadioLaserCo2)
    ON_BN_CLICKED(IDC_RADIO_LASERPORT_8BITLP, OnRadioPowerLp)
    ON_BN_CLICKED(IDC_RADIO_LASERPORT_DA1, OnRadioPowerDa1)
    ON_BN_CLICKED(IDC_RADIO_LASERPORT_DA2, OnRadioPowerDa2)
    ON_WM_CLOSE()
    //}}AFX_MSG_MAP
    ON_BN_CLICKED(IDC_BUTTON_POINTS, OnBnClickedButtonPoints)
    ON_BN_CLICKED(IDC_BUTTON_EDIT_SETTINGS, OnBnClickedButtonEditSettings)
    ON_BN_CLICKED(IDC_BUTTON_SAVE_SETTINGS, OnBnClickedButtonSaveSettings)
    ON_BN_CLICKED(IDOK, OnBnClickedOk)
    ON_BN_CLICKED(IDC_BUTTON_BITMAP, OnBnClickedButtonBitmap)
    ON_BN_CLICKED(IDC_BTN_CORR_BROWSE, OnBnClickedCorrBrowse)
    ON_BN_CLICKED(IDC_CHECK_LOAD_SETTINGS, OnBnClickedCheckLoadSettings)
    ON_BN_CLICKED(IDC_BTN_SETT_BROWSE, OnBnClickedBtnSettBrowse)
    ON_BN_CLICKED(IDC_CHECK_CONTINUOUS_MODE, &CVC_SCIExampleDlg::OnBnClickedCheckContinuousMode)
    ON_BN_CLICKED(IDC_BUTTON_VECTORS3, &CVC_SCIExampleDlg::OnBnClickedButtonVectors3)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVC_SCIExampleDlg Nachrichten-Handler

BOOL CVC_SCIExampleDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    SetIcon(m_hIcon, TRUE);
    SetIcon(m_hIcon, FALSE);

    if (!AfxOleInit())
    {
    }
    updateGUI();

    // sc_optic_d.dll:  SCAPS internal purpose only:
    m_sc_optic_dll_handle = LoadLibrary("sc_optic_d.dll");

    if (m_sc_optic_dll_handle==NULL)
        m_sc_optic_dll_handle = LoadLibrary("sc_optic.dll");

    if (m_sc_optic_dll_handle==NULL)
    {
        MessageBox("Can't load Optic-DLL!","Error",MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
        return FALSE;
    }

    sci_load_dll_functions(m_sc_optic_dll_handle);

    check_function(sc_sci_update_device_style,"ScSCIUpdateDeviceStyle");
    check_function(sc_sci_get_interface_version,"ScSCIGetInterfaceVersion");
    check_function(sc_sci_set_debug_mode,"ScSCISetDebugMode");

    return TRUE;  // Geben Sie TRUE zurück, außer ein Steuerelement soll den Fokus erhalten
}

// Wollen Sie Ihrem Dialogfeld eine Schaltfläche "Minimieren" hinzufügen, benötigen Sie
//  den nachstehenden Code, um das Symbol zu zeichnen. Für MFC-Anwendungen, die das
//  Dokument/Ansicht-Modell verwenden, wird dies automatisch für Sie erledigt.

void CVC_SCIExampleDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // Gerätekontext für Zeichnen

        SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

        // Symbol in Client-Rechteck zentrieren
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);
        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // Symbol zeichnen
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }
}

HCURSOR CVC_SCIExampleDlg::OnQueryDragIcon()
{
    return (HCURSOR) m_hIcon;
}


void CVC_SCIExampleDlg::initializeDevice(void)
{
    long                     device_mode;

    m_deviceInitialized=false;

    long interface_version = 0;
    sc_sci_get_interface_version(&interface_version);

    // activate the following lines if you do not want any message boxes to popup (for example correction file not found)

    long debug_mode = 0;
    sc_sci_get_debug_mode(&debug_mode);
    debug_mode |= 0x4;  // SC_ DEBUG_MODE_NO_OUTPUT
    sc_sci_set_debug_mode(debug_mode);


     initialize the interface

    if (sc_sci_init_interface()!=SC_OK)
    {
       MessageBox("Initialization failed!","Error",MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
       return;
    }

     specify the path to the correction file

    sc_sci_set_device_path(scComStandardDeviceIDCorrectionFilePath0,(LPCSTR)m_corrfile);

    disable simulation and hide the marking output window

    sc_sci_get_device_operation_mode(&device_mode);
    device_mode = device_mode & ~scComStandardDeviceOperationModeSimulation;
    device_mode = device_mode | scComStandardDeviceOperationModePixelAM;
    device_mode = device_mode |  scComStandardDeviceOperationModeHideOutputWindow;

    select the laser type

    device_mode = device_mode & ~scComStandardDeviceOperationModeIdCO2;
    device_mode = device_mode & ~scComStandardDeviceOperationModeIdLEE;
    device_mode = device_mode & ~scComStandardDeviceOperationModeIdYAG;
    if (m_lasermode==SCI_LASER_YAG)
        device_mode = device_mode | scComStandardDeviceOperationModeIdYAG;
    else
        device_mode = device_mode | scComStandardDeviceOperationModeIdCO2;

     enable global standby

    device_mode = device_mode | scComStandardDeviceOperationModeEnableStandBy;

    sc_sci_set_device_operation_mode(device_mode);

     setup z lookup table

    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFieldSize, 200.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexDistanceMirrorsMM, 20.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexRadiusSecondMirrorMM, 400.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZNumControlPoints, 3);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 0, 350.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 0, 32767);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 1, 400.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 1, 0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZMMStart + 2, 450.0);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexLookupZDacStart + 2, -32768);

    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscOffset3DCorrtableLockup | scComStandardDeviceMiscIndexZCorrFlags, 0x1);
    sc_sci_set_device_misc_value_d(scComStandardDeviceMiscEnableSendZCorr, 1);

     initialize the device

    if (sc_sci_init_optic()!=SC_OK)
    {
       MessageBox("Initialization failed!","Error",MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
       return;
    }

     set field and working area

    sc_sci_set_field(-100, -100, 100, 100);
    sc_sci_set_working_area(-100, -100, 100, 100);

     set correction offset and gain

    sc_sci_set_offset(0, 0);
    sc_sci_set_gain(1, 1);

     specify home position and enable home jump (if necessary)

    sc_sci_set_home_position(0, 0);
    sc_sci_set_home_jump(1);

     no multihead

    sc_sci_enable_head_select(0);
    sc_sci_set_current_head(0);

     enable the head

    sc_sci_set_enable_head(1);

     set laserport

    sc_sci_set_device_map_laser_port(m_laserport);

     set axis state

    long axis_state = 0;
    // axis_state |= scComAxisStateInvertX;  // enable this line for inverting x axis
    // axis_state |= scComAxisStateInvertY;	 // enable this line for inverting y axis
    // axis_state |= scComAxisStateFlipXY;	 // enable this line for flip xy
    sc_sci_set_axis_state(axis_state);

     set defined state, no execution, laser off

    sc_sci_set_execute(0);
    sc_sci_set_move_laser_state(0);

    m_deviceInitialized=true;
}



void CVC_SCIExampleDlg::OnButtonInitialize()
{
    UpdateData(true);
    initializeDevice();

    // determine attached card type to update gui
    sc_sci_get_ident_string(m_card_type.GetBuffer(100));
    m_card_type.ReleaseBuffer();

    if(m_load_settings)
    {
        long ret = sc_sci_load_settings((LPCSTR)m_settings_file);

        if(ret != SC_OK)
        {
            MessageBox("Error loading settings file!");
        }
        else
        {
            // get laser mode to update gui
            long device_mode = 0;
            sc_sci_get_device_operation_mode(&device_mode);
            m_lasermode=(device_mode & scComStandardDeviceOperationModeIdYAG) ? SCI_LASER_YAG : SCI_LASER_CO2;

            // make sure simulation is disabled
            device_mode = device_mode & ~scComStandardDeviceOperationModeSimulation;
            sc_sci_set_device_operation_mode(device_mode);

            if (sc_sci_init_optic()!=SC_OK)
            {
               MessageBox("Initialization failed!","Error",MB_OK|MB_ICONERROR|MB_SYSTEMMODAL);
               return;
            }

            // get laserport to update gui
            sc_sci_get_device_map_laser_port(&m_laserport);

            // get correction file path to update gui
            sc_sci_get_device_path(scComStandardDeviceIDCorrectionFilePath0,m_corrfile.GetBuffer(MAX_PATH));
            m_corrfile.ReleaseBuffer();
            UpdateData(false);

        }
    }
    updateGUI();
}

void CVC_SCIExampleDlg::waitForExposureEnd(void)
{
    long is_exposure_end;
    sc_sci_is_exposure_end(&is_exposure_end);

    while(!is_exposure_end)
    {
        Sleep(1);
        sc_sci_is_exposure_end(&is_exposure_end);

        // handle messages for the stop dialog
        MSG msg;
        if (PeekMessage(&msg,m_dlgStop->GetSafeHwnd(),0,0,PM_REMOVE))
            DispatchMessage(&msg);
    }
}

void CVC_SCIExampleDlg::waitForExecutionEnd(void)
{
    long is_executing, ext_trigger;
    sc_sci_get_execute(&is_executing);
    while(is_executing)
    {
        Sleep(1);
        sc_sci_get_execute(&is_executing);
        sc_sci_get_external_trigger_count(&ext_trigger);

        // handle messages for the stop dialog
        MSG msg;
        if (PeekMessage(&msg,m_dlgStop->GetSafeHwnd(),0,0,PM_REMOVE))
            DispatchMessage(&msg);
    }
}

void CVC_SCIExampleDlg::endMarking(void)
{
    long                       device_flags = 0;

 signal stream start

    sc_sci_stream_info(scComControlStreamInfoIdentIdEnd,-1,scComControlStreamInfoSequenceIdMain);
    sc_sci_stream_info(scComControlStreamInfoIdentIdEnd,-1,scComControlStreamInfoSequenceIdJob);

 if non continuous mode, start execution of the job now

    if(!m_continuous_mode)
        sc_sci_set_execute(1);

     flush remaining stream data and block until all commands have been executed -
       will return immediately if set for external trigger or non continuous mode

    sc_sci_flush();

    // check if external trigger is set
    long is_ext_trigger;
    sc_sci_get_external_trigger(&is_ext_trigger);

    long is_continuous_mode;
    sc_sci_get_continuous_mode(&is_continuous_mode);

    if (is_continuous_mode && is_ext_trigger)
    {    in continuous mode with external trigger we wait for the current exposure
           operation to end

        waitForExposureEnd();
    }
    else if(!is_continuous_mode)
    {    in non continuous mode we wait until the device has finished all execution

        waitForExecutionEnd();
    }
    else
    {   otherwise flush already blocked till execution end

    }

    char buffer[64];
    memset(buffer, 0, 64);

    sc_sci_get_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle, &device_flags);
    itoa(device_flags, buffer, 10);
    MessageBox(buffer, "smen");

    device_flags ^= scComStandardDeviceStyleFlagEnablePortLaser;
    sc_sci_set_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle, device_flags);

    itoa(device_flags, buffer, 10);
    MessageBox(buffer, "smen");

    sc_sci_set_device_timer(scComStandardDeviceStyleIDQSwitchPeriod, 10);
    sc_sci_set_device_timer(scComStandardDeviceStyleIDQSwitchLength, 0);

    // stop execution and hide stop dialog
    sc_sci_set_execute(0);

    //sc_sci_set_device_port_value(scComStandardDeviceStyleIDPortLaser, 0);
    if(m_dlgStop)
        m_dlgStop->ShowWindow(SW_HIDE);

    if (m_store_to_flash)
    {
        m_flash.end_flash_job();
        m_flash.load_job_to_flash(0,""); //as the job number is zero based, we store it to number 1
    }
}



void CVC_SCIExampleDlg::beginMarking(void)
{
    double                     power, pulseLength;
    long                       device_flags;

    sc_sci_set_style_set(1);

    if (m_store_to_flash) {
        CString tempPath;
        GetTempPath(MAX_PATH,tempPath.GetBuffer(MAX_PATH));
        tempPath.ReleaseBuffer();
        m_flash.init_flash_job(tempPath + "flash.unf");
    }

    // configure delays (as on the pen settings page)
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDMarkDelay, 50);
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDPolyDelay, 20);
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDJumpDelay, 400);

    // set the speed for jumping, this value can also be modified within the stream
    sc_sci_set_device_speed(scComStandardDeviceStyleIDJumpSpeedFU, 7600);

    if (m_lasermode==SCI_LASER_YAG)
    {
        // enable the output port
        sc_sci_get_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle,&device_flags);
        device_flags|=scComStandardDeviceStyleFlagEnablePortLaser;
        sc_sci_set_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle,device_flags);

        // calculate and set power and frequency values for YAG laser
        sc_sci_set_device_port_value(scComStandardDeviceStyleIDPortLaser,m_laserpower);
        sc_sci_set_device_timer(scComStandardDeviceStyleIDQSwitchPeriod,1/m_q_switch_frequency*1e+6);
        sc_sci_set_device_timer(scComStandardDeviceStyleIDQSwitchLength,m_q_switch_pulse_length);
    }
    else
    {
        // endable CO2 standby pulse
        sc_sci_get_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle,&device_flags);
        device_flags = device_flags | scComStandardDeviceStyleFlagEnableCO2List;
        sc_sci_set_device_enable_flags(scComStandardDeviceEnableFlagGroupStyle,device_flags);
        // calculate and set power and frequency values for CO2
        power = m_laserpower;      //in percent
        pulseLength = power / 100.0 * 2 * m_halfperiod; // calculate the power on pulse length out of pulse length and power
        sc_sci_set_device_timer(scComStandardDeviceStyleIDHalfPeriodCO2, m_halfperiod); // defines the frequency by setting the length of half of a period, 50 means 10 kHz
        sc_sci_set_device_timer(scComStandardDeviceStyleIDLaser1Length, pulseLength);
        sc_sci_set_device_timer(scComStandardDeviceStyleIDHalfPeriodStandBy, m_stdby_halfperiod);
        sc_sci_set_device_timer(scComStandardDeviceStyleIDStandByPulse, m_stdby_pulse);
    }

     enable following lines for wobbling

    long deviceFlags=0;
    sc_sci_get_device_enable_flags(0,&deviceFlags);
    deviceFlags|=scComStandardDeviceStyleFlagEnableWobble;
    sc_sci_set_device_enable_flags(0,deviceFlags);

    double wobbleFreq = 100.;
    sc_sci_set_device_timer(scComStandardDeviceStyleIDWobblePeriod,1./wobbleFreq);
    sc_sci_set_device_misc_value_d(scComStandardDeviceStyleIDMiscWobbleAmp,2000);

    // show our custom stop dialog and pass its handle for message pumping
    if(m_dlgStop)
    {
        m_dlgStop->ShowWindow(SW_SHOW);
    }
    sc_sci_set_message_window((long)m_dlgStop->m_hWnd);

    set continuous mode and external trigger according to user selection

    sc_sci_set_continuous_mode(m_continuous_mode?1:0);
    sc_sci_set_external_trigger(m_ext_trigger?1:0);

     in continuous mode start execution now

    if(m_continuous_mode)
        sc_sci_set_execute(1);

     signal stream end

    sc_sci_stream_info(scComControlStreamInfoIdentIdStart,-1,scComControlStreamInfoSequenceIdJob);

    long ident = scComControlStreamInfoIdentIdStart;
    if(!m_continuous_mode && m_loop_mode) // loop mode requires non continuous mode
        ident |= scComControlStreamInfoIdentFlagLoop;
    sc_sci_stream_info(ident,-1,scComControlStreamInfoSequenceIdMain); // i_1 specifies loop count, -1 is infinite

}



void CVC_SCIExampleDlg::OnButtonVectors()
{
   UpdateData(true);

   if (m_deviceInitialized)
   {
      //pre-job sequence/initialization
      beginMarking();

      //we draw 100 rectangles with different speeds
      double mark_speed = 50;
      for (int i=0; i<100; i++)
      {

         mark_speed += 50;
         if(mark_speed > 2500)
            mark_speed = 2500;
         sc_sci_set_device_speed(scComStandardDeviceStyleIDMarkSpeedFU, mark_speed);
         sc_sci_set_move_laser_state(0);
         sc_sci_move_abs(-30, -30);
         sc_sci_set_move_laser_state(1);
         sc_sci_move_abs(30, -30);
         sc_sci_move_abs(30, 30);
         sc_sci_move_abs(-30, 30);
         sc_sci_move_abs(-30, -30);

         sc_sci_set_move_laser_state(0);
         sc_sci_move_abs(-10, -10);
         sc_sci_set_move_laser_state(1);
         sc_sci_move_abs(10, -10);
         sc_sci_move_abs(10, 10);
         sc_sci_move_abs(-10, 10);
         sc_sci_move_abs(-10, -10);

         // handle messages for the stop dialog
         MSG	msg;
         if (PeekMessage(&msg,m_dlgStop->GetSafeHwnd(),0,0,PM_REMOVE))
            DispatchMessage(&msg);
      }
      sc_sci_set_move_laser_state(0);
      sc_sci_move_abs(0.0, 0.0);

      //post-job sequence/initialization
      endMarking();
   }
   else
   {
       MessageBox("Not initialized!");
   }
}



void CVC_SCIExampleDlg::set_button_selected(unsigned long id, bool enable,CWnd *cd)
{
    CButton *button=(CButton*)cd->GetDlgItem(id);
    if (button)
    {
        if (enable) button->SetCheck(BST_CHECKED);
        else button->SetCheck(BST_UNCHECKED);
    }
}



void CVC_SCIExampleDlg::enable_window(long id,bool enable,CWnd *cd)
{
    CWnd *wnd =cd->GetDlgItem(id);
    if (wnd) wnd->EnableWindow(enable);
}

void CVC_SCIExampleDlg::show_window(long id,bool show,CWnd *cd)
{
    CWnd *wnd = cd->GetDlgItem(id);
    if (wnd)
    {
        if (show)
            wnd->ShowWindow(SW_SHOW);
        else
            wnd->ShowWindow(SW_HIDE);
    }
}

void CVC_SCIExampleDlg::updateGUI(void)
{
    bool enable;

    UpdateData(TRUE);

    enable=(m_lasermode==SCI_LASER_YAG);
    enable_window(IDC_STATIC_QFREQ,enable,this);
    enable_window(IDC_STATIC_QPULSE,enable,this);
    enable_window(IDC_EDIT_QFREQ,enable,this);
    enable_window(IDC_EDIT_QPULSE,enable,this);
    set_button_selected(IDC_RADIO_LASER_YAG,enable,this);
    show_window(IDC_STATIC_LASER_POWER_YAG,enable,this);

    enable=(m_lasermode==SCI_LASER_CO2);
    enable_window(IDC_STATIC_STDBY_HALFPERIOD,enable,this);
    enable_window(IDC_STATIC_STDBY_PULSE,enable,this);
    enable_window(IDC_EDIT_STDBY_HALFPERIOD,enable,this);
    enable_window(IDC_EDIT_STDBY_PULSE,enable,this);
    set_button_selected(IDC_RADIO_LASER_CO2,enable,this);
    show_window(IDC_STATIC_LASER_POWER_CO2,enable,this);

    set_button_selected(IDC_RADIO_LASERPORT_8BITLP,m_laserport==scComStandardDeviceMapLaserToPort2,this);
    set_button_selected(IDC_RADIO_LASERPORT_DA1,m_laserport==scComStandardDeviceMapLaserToDA1,this);
    set_button_selected(IDC_RADIO_LASERPORT_DA2,m_laserport==scComStandardDeviceMapLaserToDA2,this);

    enable_window(IDC_RADIO_LASER_YAG,!m_load_settings,this);
    enable_window(IDC_RADIO_LASER_CO2,!m_load_settings,this);

    enable = (m_lasermode==SCI_LASER_YAG)&&!m_load_settings;
    enable_window(IDC_RADIO_LASERPORT_8BITLP,enable,this);
    enable_window(IDC_RADIO_LASERPORT_DA1,enable,this);
    enable_window(IDC_RADIO_LASERPORT_DA2,enable,this);

    enable_window(IDC_EDIT_CORRFILE,!m_load_settings,this);
    enable_window(IDC_STATIC_CORR_PATH,!m_load_settings,this);
    enable_window(IDC_BTN_CORR_BROWSE,!m_load_settings,this);

    set_button_selected(IDC_RADIO_USC2,m_card_type=="SCAPS USC-2",this);
    set_button_selected(IDC_RADIO_USC1,m_card_type=="SCAPS USC-1",this);

    enable_window(IDC_CHECK_STORE_TO_FLASH,m_deviceInitialized && m_card_type=="SCAPS USC-2",this);
    enable_window(IDC_CHECK_CONTINUOUS_MODE,m_deviceInitialized,this);
    enable_window(IDC_CHECK_EXT_TRIGGER,m_deviceInitialized,this);
    enable_window(IDC_CHECK_LOOP_MODE,m_deviceInitialized && !m_continuous_mode,this);
    enable_window(IDC_BUTTON_VECTORS,m_deviceInitialized,this);
    enable_window(IDC_BUTTON_VECTORS3, m_deviceInitialized, this);
    enable_window(IDC_BUTTON_BITMAP,m_deviceInitialized,this);
    enable_window(IDC_BUTTON_POINTS,m_deviceInitialized,this);
}

void CVC_SCIExampleDlg::check_function(void *pfunc,CString func_name)
{
    if(pfunc==NULL)
    {
        CString msg = "Function " + func_name + " not found. Please use latest Scaps Installer.";
        MessageBox(msg,"Error",MB_ICONEXCLAMATION);
    }
}


void CVC_SCIExampleDlg::OnRadioLaserYag()
{
   m_lasermode=SCI_LASER_YAG;
   updateGUI();
}



void CVC_SCIExampleDlg::OnRadioLaserCo2()
{
   m_lasermode=SCI_LASER_CO2;
   updateGUI();
}



void CVC_SCIExampleDlg::OnRadioPowerLp()
{
    m_laserport=scComStandardDeviceMapLaserToPort2;
    updateGUI();
}



void CVC_SCIExampleDlg::OnRadioPowerDa1()
{
   m_laserport=scComStandardDeviceMapLaserToDA1;
   updateGUI();
}



void CVC_SCIExampleDlg::OnRadioPowerDa2()
{
   m_laserport=scComStandardDeviceMapLaserToDA2;
   updateGUI();
}

void CVC_SCIExampleDlg::OnClose()
{
    sc_sci_exit();
    CDialog::OnClose();
}

void CVC_SCIExampleDlg::OnBnClickedButtonPoints()
{
    double x,y;

    UpdateData(true);

    if (m_deviceInitialized)
    {
        //pre-job sequence/initialization
        beginMarking();

        double mark_speed = 50;    // not relevant
        double jump_speed = 40000;    // relevant, unit in mm/s
        // lets assume 50 kHz, we want to give two pulses each
        double drill_time = 41; // in us

        sc_sci_set_device_speed(scComStandardDeviceStyleIDMarkSpeedFU, mark_speed);
        sc_sci_set_device_speed(scComStandardDeviceStyleIDJumpSpeedFU, jump_speed);
        sc_sci_set_device_delay_d(scComStandardDeviceStyleIDLaserOnDelay, 1);
        sc_sci_set_device_delay_d(scComStandardDeviceStyleIDLaserOffDelay, drill_time);
        sc_sci_set_device_delay_d(scComStandardDeviceStyleIDJumpDelay, 10);
        sc_sci_set_device_delay_d(scComStandardDeviceStyleIDMarkDelay, drill_time);

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
                        sc_sci_set_move_laser_state(0);
                        sc_sci_move_abs(x,y);
                        sc_sci_set_move_laser_state(1);
                        sc_sci_move_abs(x,y);
                        sc_sci_set_move_laser_state(0);
                    }
                    left_to_right = 0;
                }
                else
                {
                    for (x=30.0; x>=-30.0; x-=1)
                    {
                        sc_sci_set_move_laser_state(0);
                        sc_sci_move_abs(x,y);
                        sc_sci_set_move_laser_state(1);
                        sc_sci_move_abs(x,y);
                        sc_sci_set_move_laser_state(0);
                    }
                    left_to_right = 1;
                }

                // handle messages for the stop dialog
                MSG	msg;
                if (PeekMessage(&msg,m_dlgStop->GetSafeHwnd(),0,0,PM_REMOVE))
                    DispatchMessage(&msg);
            }
        }

        sc_sci_set_move_laser_state(0);
        sc_sci_move_abs(0.0, 0.0);

        //post-job sequence/initialization
        endMarking();
    }
    else
        MessageBox("Not initialized!");
}

void CVC_SCIExampleDlg::OnBnClickedButtonEditSettings()
{
    if (!m_deviceInitialized)
    {
        MessageBox("Not initialized!");
        return;
    }

    sc_sci_edit_settings();

    // get visible settings to update gui
    long device_mode = 0;
    sc_sci_get_device_operation_mode(&device_mode);
    m_lasermode=(device_mode & scComStandardDeviceOperationModeIdYAG) ? SCI_LASER_YAG : SCI_LASER_CO2;

    sc_sci_get_device_map_laser_port(&m_laserport);
    updateGUI();
}

void CVC_SCIExampleDlg::OnBnClickedButtonSaveSettings()
{
    if (!m_deviceInitialized)
    {
        MessageBox("Not initialized!");
        return;
    }
    long ret = sc_sci_save_settings((LPCSTR)m_settings_file);
    if(ret != SC_OK) {
        MessageBox("Error saving settings file!");
    }
}

CString CVC_SCIExampleDlg::get_settings_file_name()
{
    CString file_name;
    TCHAR *sc_sam=_tgetenv( _T( "SCAPS_SAM" ));
    CString name;
    if (sc_sam)
    {
        file_name = CString(sc_sam);
        file_name +=  _T( "\\system\\" );
        file_name += "sci_dll_settings.sam";
    }
    return file_name;
}

void CVC_SCIExampleDlg::OnBnClickedOk()
{
    sc_sci_exit();
    OnOK();
}

void CVC_SCIExampleDlg::OnBnClickedButtonBitmap()
{
   long i;

   UpdateData(true);
    if (!m_deviceInitialized)
    {
        MessageBox("Not initialized!");
        return;
    }

    //pre-job sequence/initialization
    beginMarking();

    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDLaserOnDelay, 1);
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDLaserOffDelay, 2);
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDJumpDelay, 10);
    sc_sci_set_device_delay_d(scComStandardDeviceStyleIDMarkDelay, 10);
    sc_sci_set_device_speed(scComStandardDeviceStyleIDJumpSpeedFU, 30000);

    sc_sci_update_device_style();

    float pixel[100];
    for (i=0;i<100;i++)
        pixel[i] = (float)i / 100.0f;

    double bitmap_speed = 300.;
    sc_sci_set_device_speed(scComStandardDeviceStyleIDMarkSpeedFU, bitmap_speed);

    for (i=0; i<100; i++)   // iterate through lines
    {
        sc_sci_set_move_laser_state(0);
        sc_sci_move_abs(-50.0, -50.0 + i);

        sc_sci_device_pixel_line(pixel,100,0.15,0,0);

        MSG	msg;
        if (PeekMessage(&msg,m_dlgStop->GetSafeHwnd(),0,0,PM_REMOVE))
            DispatchMessage(&msg);
    }

    // jump to home position
    sc_sci_set_move_laser_state(0);
    sc_sci_move_abs(0.0, 0.0);

    //post-job sequence/initialization
    endMarking();
}

long CVC_SCIExampleDlg::is_marking()
{
    long val = 0;
    sc_sci_get_device_port_value(scComStandardDeviceIDOptoOutDevice,&val);
    if((val && 1) == 1)
        return 1;
    return 0;
}

void CVC_SCIExampleDlg::OnBnClickedCorrBrowse()
{
    CFileDialog ldFile( TRUE, "ucf", "",OFN_FILEMUSTEXIST,"Correction File (*.ucf)|*.ucf||");
    ldFile.m_ofn.lpstrTitle = "Path to Correction File";
    if (ldFile.DoModal() == IDOK)
    {
        m_corrfile = ldFile.GetPathName();
        UpdateData(FALSE);
    }
}

void CVC_SCIExampleDlg::OnBnClickedCheckLoadSettings()
{
    updateGUI();
}

void CVC_SCIExampleDlg::OnBnClickedBtnSettBrowse()
{
    CFileDialog ldFile( TRUE, "sam", "sci_dll_settings.sam",OFN_FILEMUSTEXIST,"Settings File (*.sam)|*.sam||");
    ldFile.m_ofn.lpstrTitle = "Path to Settings File";
    if (ldFile.DoModal() == IDOK)
    {
        m_settings_file = ldFile.GetPathName();
        UpdateData(FALSE);
    }
}

void CVC_SCIExampleDlg::OnBnClickedCheckContinuousMode()
{
    updateGUI();
}


void CVC_SCIExampleDlg::OnBnClickedButtonVectors3()
{
    UpdateData(true);

    if(m_deviceInitialized)
    {
        //pre-job sequence/initialization
        beginMarking();

        //we draw 100 rectangles with different speeds
        double mark_speed = 50;
        for(long i = 0; i<100; i++)
        {

            mark_speed += 50;
            if(mark_speed > 2500)
                mark_speed = 2500;
            sc_sci_set_device_speed(scComStandardDeviceStyleIDMarkSpeedFU, mark_speed);
            sc_sci_set_move_laser_state(0);
            sc_sci_move_abs_3d(-30, -30, 0);
            sc_sci_set_move_laser_state(1);
            sc_sci_move_abs_3d(30, -30, 30);
            sc_sci_move_abs_3d(30, 30, 30);
            sc_sci_move_abs_3d(-30, 30, 0);
            sc_sci_move_abs_3d(-30, -30, 0);

            sc_sci_set_move_laser_state(0);
            sc_sci_move_abs_3d(-10, -10, 0);
            sc_sci_set_move_laser_state(1);
            sc_sci_move_abs_3d(10, -10, 30);
            sc_sci_move_abs_3d(10, 10, 30);
            sc_sci_move_abs_3d(-10, 10, 0);
            sc_sci_move_abs_3d(-10, -10, 0);

            // handle messages for the stop dialog
            MSG	msg;
            if(PeekMessage(&msg, m_dlgStop->GetSafeHwnd(), 0, 0, PM_REMOVE))
                DispatchMessage(&msg);
        }
        sc_sci_set_move_laser_state(0);
        sc_sci_move_abs_3d(0.0, 0.0, 0.0);

        //post-job sequence/initialization
        endMarking();
    }
    else
        MessageBox("Not initialized!");
}


*/

#endif // STUBS_FROM_WINDOWS_H

