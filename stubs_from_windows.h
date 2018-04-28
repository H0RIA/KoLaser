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

#endif // STUBS_FROM_WINDOWS_H

