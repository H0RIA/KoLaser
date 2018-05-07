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

#endif // STUBS_FROM_WINDOWS_H

