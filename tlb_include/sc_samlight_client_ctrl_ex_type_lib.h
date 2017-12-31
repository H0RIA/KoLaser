

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:22 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\samlight_client\sc_samlight_client_ctrl_ex_type_lib.idl:
    Oicf, W1, Zp1, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __sc_samlight_client_ctrl_ex_type_lib_h__
#define __sc_samlight_client_ctrl_ex_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___Samlight_clientEx_FWD_DEFINED__
#define ___Samlight_clientEx_FWD_DEFINED__
typedef interface _Samlight_clientEx _Samlight_clientEx;
#endif 	/* ___Samlight_clientEx_FWD_DEFINED__ */


#ifndef ___DSamlight_clientEx_FWD_DEFINED__
#define ___DSamlight_clientEx_FWD_DEFINED__
typedef interface _DSamlight_clientEx _DSamlight_clientEx;
#endif 	/* ___DSamlight_clientEx_FWD_DEFINED__ */


#ifndef __ScSamlightClientCtrlEx_FWD_DEFINED__
#define __ScSamlightClientCtrlEx_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSamlightClientCtrlEx ScSamlightClientCtrlEx;
#else
typedef struct ScSamlightClientCtrlEx ScSamlightClientCtrlEx;
#endif /* __cplusplus */

#endif 	/* __ScSamlightClientCtrlEx_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __SAMLIGHT_CLIENT_CTRL_EXLib_LIBRARY_DEFINED__
#define __SAMLIGHT_CLIENT_CTRL_EXLib_LIBRARY_DEFINED__

/* library SAMLIGHT_CLIENT_CTRL_EXLib */
/* [version][uuid] */ 


#pragma pack(push, 1)
struct sc_com_pen_path
    {
    short pen;
    short enable;
    short penToUse[ 5 ];
    int loopOfPenToUse[ 5 ];
    } ;

#pragma pack(pop)
typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D06C32DD-6632-4728-BD4B-FD61B72E10DA") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_0001
    {	scComSAMLightClientCtrlExecCommandResetSequence	= 0x2,
	scComSAMLightClientCtrlExecCommandTest	= 0x1,
	scComSAMLightClientCtrlExecCommandNewJob	= 0x3,
	scComSAMLightClientCtrlExecCommandFitViewToWorkingArea	= 0x4,
	scComSAMLightClientCtrlExecCommandFitViewToAllEntities	= 0x5,
	scComSAMLightClientCtrlExecCommandFitViewToSelectedEntities	= 0x6,
	scComSAMLightClientCtrlExecCommandResetCounter	= 0x7,
	scComSAMLightClientCtrlOutlineIndexMinX	= 0,
	scComSAMLightClientCtrlOutlineIndexMinY	= 0x1,
	scComSAMLightClientCtrlOutlineIndexMinZ	= 0x2,
	scComSAMLightClientCtrlOutlineIndexMaxX	= 0x3,
	scComSAMLightClientCtrlOutlineIndexMaxY	= 0x4,
	scComSAMLightClientCtrlOutlineIndexMaxZ	= 0x5,
	scComSAMLightClientCtrlOutlineSliceIndexMinX	= 0x6,
	scComSAMLightClientCtrlOutlineSliceIndexMinY	= 0x7,
	scComSAMLightClientCtrlOutlineSliceIndexMinZ	= 0x8,
	scComSAMLightClientCtrlOutlineSliceIndexMaxX	= 0x9,
	scComSAMLightClientCtrlOutlineSliceIndexMaxY	= 0xa,
	scComSAMLightClientCtrlOutlineSliceIndexMaxZ	= 0xb,
	scComSAMLightClientCtrlExecCommandResetSerialNumber	= 0x8,
	scComSAMLightClientCtrlExecCommandUpdateScannerPos	= 0x9,
	scComSAMLightClientCtrlExecCommandAutoCompensateOff	= 0xa,
	scComSAMLightClientCtrlExecCommandAutoCompensateRef	= 0xb,
	scComSAMLightClientCtrlExecCommandAutoCompensateCal	= 0xc,
	scComSAMLightClientCtrlExecCommandResplitJob	= 0xd,
	scComSAMLightClientCtrlExecCommandMotionStopMove	= 0xe,
	scComSAMLightClientCtrlExecCommandMotionHome	= 0xf,
	scComSAMLightClientCtrlExecCommandMotionGo	= 0x10,
	scComSAMLightClientCtrlExecCommandMotionSendString	= 0x11,
	scComSAMLightClientCtrlExecCommandMotionUpdatePos	= 0x12,
	scComSAMLightClientCtrlExecCommandStopExecution	= 0x13,
	scComSAMLightClientCtrlExecCommandRedPointerStart	= 0x14,
	scComSAMLightClientCtrlExecCommandRedPointerStop	= 0x15,
	scComSAMLightClientCtrlExecCommandUpdateViewNow	= 0x16,
	scComSAMLightClientCtrlExecCommandIncSerialNumber	= 0x17,
	scComSAMLightClientCtrlExecCommandDecSerialNumber	= 0x18,
	scComSAMLightClientCtrlExecCommandSpecial1	= 0x19,
	scComSAMLightClientCtrlExecCommandSpecial1_1	= 0x20,
	scComSAMLightClientCtrlExecCommandSpecial2	= 0x21,
	scComSAMLightClientCtrlExecCommandSpecial2_1	= 0x23,
	scComSAMLightClientCtrlExecCommandSpecial3	= 0x22,
	scComSAMLightClientCtrlExecCommandSpecial3_1	= 0x24,
	scComSAMLightClientCtrlExecCommandCreateBeamCompedCopy	= 0x25,
	scComSAMLightClientCtrlExecCommandSaveSplitsAsEntities	= 0x26,
	scComSAMLightClientCtrlExecCommandCheckIfJobIsInField	= 0x28,
	scComSAMLightClientCtrlExecCommandExitTriggerMode	= 0x29,
	scComSAMLightClientCtrlExecCommandOpenMarkDialog	= 0x30,
	scComSAMLightClientCtrlExecCommandCloseMarkDialog	= 0x31,
	scComSAMLightClientCtrlExecCommandCorrectSamLight	= 0x32,
	scComSAMLightClientCtrlExecCommandSaveSettingsNow	= 0x33,
	scComSAMLightClientCtrlExecCommandSortJobByName	= 0x34,
	scComSAMLightClientCtrlExecCommandSetMotf	= 0x35,
	scComSAMLightClientCtrlExecCommandUndo	= 0x36,
	scComSAMLightClientCtrlExecCommandWizardOrder	= 0x37,
	scComSAMLightClientCtrlExecCommandWizardCreateOneGroup	= 0x39,
	scComSAMLightClientCtrlExecCommandStoreFlashSettings	= 0x3a,
	scComSAMLightClientCtrlExecCommandGroupEntities	= 0x3b,
	scComSAMLightClientCtrlExecCommandUngroupEntities	= 0x3c
    } 	ScComSAMLightClientCtrlExecCommandConstants;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("9ABC4D62-E324-4126-BB9C-DE91E1F9A4D2") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_0002
    {	scComSAMLightClientCtrlMarkFlagWaitForTrigger	= 0x1,
	scComSAMLightClientCtrlMarkFlagTriggerMode2	= 0x2,
	scComSAMLightClientCtrlMarkFlagHideOutput	= 0x4,
	scComSAMLightClientCtrlMarkFlagDisableHomeJump	= 0x8,
	scComSAMLightClientCtrlMarkFlagPreview	= 0x10,
	scComSAMLightClientCtrlMarkFlagSelected	= 0x20,
	scComSAMLightClientCtrlMarkFlagDisablePreProcessing	= 0x40,
	scComSAMLightClientCtrlMarkFlagDisablePostProcessing	= 0x80,
	scComSAMLightClientCtrlMarkFlagControlLoopByEntity	= 0x400,
	scComSAMLightClientCtrlMarkFlagCloseTriggerWindowAtStop	= 0x800,
	scComSAMLightClientCtrlMarkFlagManualLayerPreparation	= 0x2000
    } 	ScComSAMLightClientCtrlMarkFlags;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("ED4268CD-5CF7-468f-98D8-00C9B4E27232") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_0003
    {	scComSAMLightClientCtrlLongValueTypeNumMarksCompleted	= 0x1,
	scComSAMLightClientCtrlLongValueTypeHeadStatus	= 0x2,
	scComSAMLightClientCtrlLongValueTypeExecutionStatus	= 0x3,
	scComSAMLightClientCtrlLongValueTypeOptoIO	= 0x4,
	scComSAMLightClientCtrlLongValueTypeQuantity	= 0x5,
	scComSAMLightClientCtrlLongValueTypeDA1	= 0x6,
	scComSAMLightClientCtrlLongValueTypeDA2	= 0x7,
	scComSAMLightClientCtrlLongValueTypeDA3	= 0x22,
	scComSAMLightClientCtrlLongValueTypeDA4	= 0x23,
	scComSAMLightClientCtrlLongValueTypeDA5	= 0x24,
	scComSAMLightClientCtrlLongValueTypeDA6	= 0x25,
	scComSAMLightClientCtrlLongValueTypeDongleUserNumber	= 0x27,
	scComSAMLightClientCtrlLongValueTypeDongleSystemNumber	= 0x28,
	scComSAMLightClientCtrlLongValueTypeDeviceEnableFlagsValue	= 0x9,
	scComSAMLightClientCtrlLongValueTypeDeviceEnableFlagsSet	= 0x8,
	scComSAMLightClientCtrlLongValueTypeTotalEntityNum	= 0xa,
	scComSAMLightClientCtrlLongValueTypeTopLevelEntityNum	= 0xb,
	scComSAMLightClientCtrlLongValueTypeJobExecutionDelay	= 0xc,
	scComSAMLightClientCtrlLongValueTypeGetMarkCount	= 0xd,
	scComSAMLightClientCtrlLongValueTypeQueueLength	= 0xe,
	scComSAMLightClientCtrlLongValueTypeMaxQuantity	= 0xf,
	scComSAMLightClientCtrlLongValueTypeOverridePen	= 0x10,
	scComSAMLightClientCtrlLongValueTypeMotionAxis	= 0x11,
	scComSAMLightClientCtrlLongValueTypeMotionWaitForEnd	= 0x12,
	scComSAMLightClientCtrlLongValueTypeMotionMoving	= 0x13,
	scComSAMLightClientCtrlLongValueTypeSpiG3Waveform	= 0x14,
	scComSAMLightClientCtrlLongValueTypeSpiG3Cw	= 0x15,
	scComSAMLightClientCtrlLongValueTypeLineRampingPowerStartRampActive	= 0x16,
	scComSAMLightClientCtrlLongValueTypeLineRampingPowerEndRampActive	= 0x17,
	scComSAMLightClientCtrlLongValueTypeLineRampingSpeedStartRampActive	= 0x18,
	scComSAMLightClientCtrlLongValueTypeLineRampingSpeedEndRampActive	= 0x19,
	scComSAMLightClientCtrlLongValueTypeStoreRestoreTransformation	= 0x20,
	scComSAMLightClientCtrlLongValueTypeAngularSplittingParts	= 0x21,
	scComSAMLightClientCtrlLongValueTypeLastAutoCompensateResult	= 0x26,
	scComSAMLightClientCtrlLongValueTypeLineRampingLengthenStartActive	= 0x1a,
	scComSAMLightClientCtrlLongValueTypeLineRampingLengthenEndActive	= 0x1b,
	scComSAMLightClientCtrlLongValueTypeClientCtrlAsyncMode	= 0x1c,
	scComSAMLightClientCtrlLongValueTypeClientCtrlAsyncModeIsRunning	= 0x1d,
	scComSAMLightClientCtrlLongValueTypeClientCtrlAsyncModeResult	= 0x1e,
	scComSAMLightClientCtrlLongValueTypeGetOptoOut	= 0x1f,
	scComSAMLightClientCtrlLongValueTypeHardwareState	= 0x29,
	scComSAMLightClientCtrlLongValueTypePort2	= 0x30,
	scComSAMLightClientCtrlLongValueTypeGetTotalSlices	= 0x2c,
	scComSAMLightClientCtrlLongValueTypeSliceFrom	= 0x2d,
	scComSAMLightClientCtrlLongValueTypeSliceTo	= 0x2e,
	scComSAMLightClientCtrlLongValueTypeGetCurrentSliceNum	= 0x2f,
	scComSAMLightClientCtrlLongValueTypeCurrentSliceNum	= 0x2f,
	scComSAMLightClientCtrlLongValueTypeBmpAlphaBlendSourceConstantAlpha	= 0x32,
	scComSAMLightClientCtrlLongValueTypeBmpAlphaBlendCenterPointX	= 0x33,
	scComSAMLightClientCtrlLongValueTypeBmpAlphaBlendCenterPointY	= 0x34,
	scComSAMLightClientCtrlLongValueTypeBmpAlphaBlendBmpDimX	= 0x35,
	scComSAMLightClientCtrlLongValueTypeBmpAlphaBlendBmpDimY	= 0x36,
	scComSAMLightClientCtrlLongValueTypeDrillEnable	= 0x37,
	scComSAMLightClientCtrlLongValueTypeDrillEnableCo2Power	= 0x38,
	scComSAMLightClientCtrlLongValueTypeSelectRedpointerForMoveAbs	= 0x39,
	scComSAMLightClientCtrlLongValueTypeSelectHatchPair	= 0x40,
	scComSAMLightClientCtrlLongValueTypeSizePixelMap	= 0x2a,
	scComSAMLightClientCtrlLongValueTypeSwitchToPane	= 0x2b,
	scComSAMLightClientCtrlLongValueTypeRedpointerMode	= 0x41,
	scComSAMLightClientCtrlLongValueTypeSetLockSjfToDongleFlags	= 0x42,
	scComSAMLightClientCtrlLongValueTypeServerStatus	= 0x43,
	scComSAMLightClientCtrlLongValueTypeXYStatus	= 0x44,
	scComSAMLightClientCtrlLongValueTypeXYStatus1	= 0x45,
	scComSAMLightClientCtrlLongValueTypeSimulationMode	= 0x46,
	scComSAMLightClientCtrlLongValueType3D	= 0x47,
	scComSAMLightClientCtrlLongValueTypeRTCTempX	= 0x48,
	scComSAMLightClientCtrlLongValueTypeRTCTempY	= 0x49,
	scComSAMLightClientCtrlLongValueTypeRTCTempZ	= 0x50,
	scComSAMLightClientCtrlLongValueTypeCorrectionMode	= 0x51,
	scComSAMLightClientCtrlLongValueTypeCorrectionPoints	= 0x52,
	scComSAMLightClientCtrlLongValueTypeRTCServoTempX	= 0x53,
	scComSAMLightClientCtrlLongValueTypeRTCServoTempY	= 0x54,
	scComSAMLightClientCtrlLongValueTypeRTCServoTempZ	= 0x55,
	scComSAMLightClientCtrlLongValueType3DSurfaceSetType	= 0x56,
	scComSAMLightClientCtrlLongValueTypeEnable3DSurface	= 0x57,
	scComSAMLightClientCtrlLongValueTypeEnableJobToolbar	= 0x58,
	scComSAMLightClientCtrlLongValueTypeBitmapPixelHardwareMode	= 0x59,
	scComSAMLightClientCtrlLongValueTypeBitmapPenPowerAsMaxPower	= 0x5a,
	scComSAMLightClientCtrlLongValueTypeEntityArrayCountX	= 0x3a,
	scComSAMLightClientCtrlLongValueTypeEntityArrayCountY	= 0x3b,
	scComSAMLightClientCtrlLongValueTypeEntityArrayOrderFlags	= 0x3c,
	scComSAMLightClientCtrlLongValueTypeGetHeadCount	= 0x3d,
	scComSAMLightClientCtrlLongValueTypeSaveView2DBitmapMode	= 0x3f,
	scComSAMLightClientCtrlLongValueTypeEnableUsc2Motf	= 0x5b,
	scComSAMLightClientCtrlLongValueTypeEnableMotf	= 0x5b,
	scComSAMLightClientCtrlLongValueTypePrepareLayer	= 0x43,
	scComSAMLightClientCtrlLongValueType2dFitType	= 0x5c,
	scComSAMLightClientCtrlLongValueTypeEnableBmpSplitting	= 0x5d,
	scComSAMLightClientCtrlLongValueTypeAngularSplittingSplitAxis	= 0x5e,
	scComSAMLightClientCtrlLongValueTypeEnableAllSerialNumbersInJob	= 0x5f,
	scComSAMLightClientCtrlLongValueTypeRingSplittingEnableZTiltCompensation	= 0x60,
	scComSAMLightClientCtrlLongValueTypeRingSplittingZMotionAxis	= 0x61,
	scComSAMLightClientCtrlLongValueTypePauseBuild	= 0x62,
	scComSAMLightClientCtrlLongValueTypeShowEntityList	= 0x63,
	scComSAMLightClientCtrlLongValueTypeShowPropSheet	= 0x64,
	scComSAMLightClientCtrlCorrectionModeOLD	= 0,
	scComSAMLightClientCtrlCorrectionModeRTS	= 0x1,
	scComSAMLightClientCtrlCorrectionModeIDW	= 0x2,
	scComSAMLightClientCtrlCorrectionMode2dFit	= 0x4,
	scComSAMLightClientCtrlLockToDongleFlagLockLoadToSystemId	= 0x1,
	scComSAMLightClientCtrlLockToDongleFlagLockLoadToUserId	= 0x2,
	scComSAMLightClientCtrlLockToDongleFlagLockExport	= 0x4,
	scComSAMLightClientCtrlDoubleValueTypeOverrideSpeed	= 0x1,
	scComSAMLightClientCtrlDoubleValueTypeOverridePower	= 0x2,
	scComSAMLightClientCtrlDoubleValueTypeOverrideFrequ	= 0x3,
	scComSAMLightClientCtrlDoubleValueTypeMarkSpeed	= 4,
	scComSAMLightClientCtrlDoubleValueTypeJumpSpeed	= 5,
	scComSAMLightClientCtrlDoubleValueTypeFrequency	= 6,
	scComSAMLightClientCtrlDoubleValueTypeHalfPeriod	= 43,
	scComSAMLightClientCtrlDoubleValueTypeJumpDelay	= 7,
	scComSAMLightClientCtrlDoubleValueTypeMarkDelay	= 8,
	scComSAMLightClientCtrlDoubleValueTypePolyDelay	= 9,
	scComSAMLightClientCtrlDoubleValueTypeLaserOnDelay	= 10,
	scComSAMLightClientCtrlDoubleValueTypeLaserOffDelay	= 11,
	scComSAMLightClientCtrlDoubleValueTypeScannerXPos	= 12,
	scComSAMLightClientCtrlDoubleValueTypeScannerYPos	= 13,
	scComSAMLightClientCtrlDoubleValueTypeScannerZPos	= 14,
	scComSAMLightClientCtrlDoubleValueTypePulseLength	= 15,
	scComSAMLightClientCtrlDoubleValueTypeFirstPulseLength	= 16,
	scComSAMLightClientCtrlDoubleValueTypeLaserPower	= 17,
	scComSAMLightClientCtrlDoubleValueTypeSizePowerMap	= 18,
	scComSAMLightClientCtrlDoubleValueTypePowerMapStartId	= 19,
	scComSAMLightClientCtrlDoubleValueTypeMaxPower	= 20,
	scComSAMLightClientCtrlDoubleValueTypeLastMarkTime	= 21,
	scComSAMLightClientCtrlDoubleValueTypeOverridePower2	= 22,
	scComSAMLightClientCtrlDoubleValueTypeHomePosX	= 23,
	scComSAMLightClientCtrlDoubleValueTypeHomePosY	= 24,
	scComSAMLightClientCtrlDoubleValueTypeHomePosZ	= 25,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingPowerStartRampValue	= 26,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingPowerStartRampLength	= 27,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingPowerEndRampValue	= 28,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingPowerEndRampLength	= 29,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingSpeedStartRampValue	= 30,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingSpeedStartRampLength	= 31,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingSpeedEndRampValue	= 32,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingSpeedEndRampLength	= 33,
	scComSAMLightClientCtrlDoubleValueTypeLastExpectedMarkTime	= 34,
	scComSAMLightClientCtrlDoubleValueTypeSkyWritingStartLength	= 35,
	scComSAMLightClientCtrlDoubleValueTypeSkyWritingEndLength	= 36,
	scComSAMLightClientCtrlDoubleValueTypeSkyWritingBreakAngle	= 37,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisPosition	= 38,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisAngle	= 39,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisPositionRelative	= 40,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisAngleRelative	= 41,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisSpeed	= 42,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapDPI	= 44,
	scComSAMLightClientCtrlDoubleValueTypeSpiLaserSimmer	= 45,
	scComSAMLightClientCtrlDoubleValueTypeGainX	= 46,
	scComSAMLightClientCtrlDoubleValueTypeGainY	= 47,
	scComSAMLightClientCtrlDoubleValueTypeLaserCo2Power1	= 48,
	scComSAMLightClientCtrlDoubleValueTypeLaserCo2Power2	= 49,
	scComSAMLightClientCtrlDoubleValueTypeAngularSplittingTotalDiameter	= 50,
	scComSAMLightClientCtrlDoubleValueTypeAngularSplittingAngle	= 51,
	scComSAMLightClientCtrlDoubleValueTypeHorizontalSplittingValue	= 52,
	scComSAMLightClientCtrlDoubleValueType2DSplitHeightValue	= 114,
	scComSAMLightClientCtrlDoubleValueTypeVerticalSplittingValue	= 53,
	scComSAMLightClientCtrlDoubleValueType2DSplitWidthValue	= 113,
	scComSAMLightClientCtrlDoubleValueTypeWobbleFrequency	= 54,
	scComSAMLightClientCtrlDoubleValueTypeWobbleAmplitude	= 55,
	scComSAMLightClientCtrlDoubleValueTypeStartSplittingPosX	= 56,
	scComSAMLightClientCtrlDoubleValueTypeStartSplittingPosY	= 57,
	scComSAMLightClientCtrlDoubleValueTypeOffsetX	= 58,
	scComSAMLightClientCtrlDoubleValueTypeOffsetY	= 59,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadOffsetX	= ( 65536 + 10 ) ,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadOffsetY	= ( 65536 + 11 ) ,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadGainX	= ( 65536 + 12 ) ,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadGainY	= ( 65536 + 13 ) ,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadRotate	= ( 65536 + 14 ) ,
	scComSAMLightClientCtrlDoubleValueTypePrimaryHeadEnable	= ( 65536 + 15 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadOffsetX	= ( 65536 + 16 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadOffsetY	= ( 65536 + 17 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadGainX	= ( 65536 + 20 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadGainY	= ( 65536 + 21 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadRotate	= ( 65536 + 22 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSecondaryHeadEnable	= ( 65536 + 23 ) ,
	scComSAMLightClientCtrlDoubleValueTypeSendCorTableValues	= ( 65536 + 94 ) ,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingLengthenStart	= 60,
	scComSAMLightClientCtrlDoubleValueTypeLineRampingLengthenEnd	= 61,
	scComSAMLightClientCtrlDoubleValueTypeDefocus	= 62,
	scComSAMLightClientCtrlDoubleValueTypeAsyncModeResult	= 63,
	scComSAMLightClientCtrlDoubleValueTypeMotionAxisAddControl	= 64,
	scComSAMLightClientCtrlDoubleValueTypeMOFExtStartDelay	= 65,
	scComSAMLightClientCtrlDoubleValueTypeUserValue	= 20000,
	scComSAMLightClientCtrlDoubleValueTypeDoublePara1	= 66,
	scComSAMLightClientCtrlDoubleValueTypeDoublePara2	= 67,
	scComSAMLightClientCtrlDoubleValueTypeWorkingAreaMinX	= 68,
	scComSAMLightClientCtrlDoubleValueTypeWorkingAreaMinY	= 69,
	scComSAMLightClientCtrlDoubleValueTypeWorkingAreaMaxX	= 70,
	scComSAMLightClientCtrlDoubleValueTypeWorkingAreaMaxY	= 71,
	scComSAMLightClientCtrlDoubleValueTypeDrillPeriod	= 72,
	scComSAMLightClientCtrlDoubleValueTypeDrillDuration	= 73,
	scComSAMLightClientCtrlDoubleValueTypeDrillLength	= 74,
	scComSAMLightClientCtrlDoubleValueTypeDrillJumpSpeed	= 75,
	scComSAMLightClientCtrlDoubleValueTypeDrillJumpDelay	= 76,
	scComSAMLightClientCtrlDoubleValueTypeDrillDimension	= 78,
	scComSAMLightClientCtrlDoubleValueTypeDrillCo2HalfPeriod	= 79,
	scComSAMLightClientCtrlDoubleValueTypeLongDelay	= 89,
	scComSAMLightClientCtrlDoubleValueTypeStyleIDPixelMapZone	= 4096,
	scComSAMLightClientCtrlDoubleValueType3DVariHatchAngle	= 80,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapVariableSize	= 81,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapX	= 82,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapY	= 83,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapXW	= 84,
	scComSAMLightClientCtrlDoubleValueTypeSaveView2DBitmapYW	= 85,
	scComSAMLightClientCtrlDoubleValueTypeSaveView3DBitmapVariableSize	= 81,
	scComSAMLightClientCtrlDoubleValueTypeSaveView3DBitmapX	= 82,
	scComSAMLightClientCtrlDoubleValueTypeSaveView3DBitmapY	= 83,
	scComSAMLightClientCtrlDoubleValueTypeSaveView3DBitmapXW	= 84,
	scComSAMLightClientCtrlDoubleValueTypeSaveView3DBitmapYW	= 85,
	scComSAMLightClientCtrlDoubleValueTypeSelPointXPos	= 86,
	scComSAMLightClientCtrlDoubleValueTypeSelPointYPos	= 87,
	scComSAMLightClientCtrlDoubleValueTypeSelPointZPos	= 88,
	scComSAMLightClientCtrlDoubleValueTypeOffsetZ	= 90,
	scComSAMLightClientCtrlDoubleValueTypeSpeedMotfEntityBasedSplitting	= 91,
	scComSAMLightClientCtrlDoubleValueTypeEntityArrayStepX	= 92,
	scComSAMLightClientCtrlDoubleValueTypeEntityArrayStepY	= 93,
	scComSAMLightClientCtrlDoubleValueTypeEntityBasedSplittingGroupedEntityWidth	= 94,
	scComSAMLightClientCtrlDoubleValueTypeDoublePara3	= 95,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue1	= 96,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue2	= 97,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue3	= 98,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue4	= 99,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue5	= 100,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue6	= 101,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue7	= 102,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue8	= 103,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue9	= 104,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue10	= 105,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue11	= 106,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue12	= 107,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue13	= 108,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue14	= 109,
	scComSAMLightClientCtrlDoubleValueType3DSurfaceValue15	= 110,
	scComSAMLightClientCtrlDoubleValueTypeOpticRotation	= 111,
	scComSAMLightClientCtrlDoubleValueTypeLastPreviewTime	= 112,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh0Enable	= ( 65536 + 126 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh1Enable	= ( 65536 + 127 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh0Simulate	= ( 65536 + 128 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh1Simulate	= ( 65536 + 129 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh0Multiplier	= ( 65536 + 134 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh1Multiplier	= ( 65536 + 135 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh0Counter	= ( 65536 + 182 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc2MotfCh1Counter	= ( 65536 + 183 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc1MotfSimulate	= ( 65536 + 102 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc1MotfCh0Multiplier	= ( 65536 + 3 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc1MotfCh1Multiplier	= ( 65536 + 4 ) ,
	scComSAMLightClientCtrlDoubleValueTypeUsc1MotfUseYChannel	= ( 65536 + 104 ) ,
	scComSAMLightClientCtrlDoubleValueTypeRingSplittingZTiltAngle	= 115,
	scComSAMLightClientCtrlDoubleValueTypeRingSplittingZSpindleCenterHeight	= 116,
	scComSAMLightClientCtrlDoubleValueTypeRingSplittingSpindleRadius	= 117,
	scComSAMLightClientCtrlDoubleValueTypeRingSplittingZRingCenterHeight	= 118,
	scComSAMLightClientCtrlDoubleValueTypeFieldMinX	= 119,
	scComSAMLightClientCtrlDoubleValueTypeFieldMinY	= 120,
	scComSAMLightClientCtrlDoubleValueTypeFieldMaxX	= 121,
	scComSAMLightClientCtrlDoubleValueTypeFieldMaxY	= 122,
	scComSAMLightClientCtrlStringValueTypeRs232BaudRate	= 0x1,
	scComSAMLightClientCtrlStringValueTypeRs232OutputString	= 0x2,
	scComSAMLightClientCtrlStringValueTypeRs232Mode	= 0x3,
	scComSAMLightClientCtrlStringValueTypeJobFileName	= 0x4,
	scComSAMLightClientCtrlStringValueTypeSaveView2D160	= 0x6,
	scComSAMLightClientCtrlStringValueTypeSaveView2D320	= 0x7,
	scComSAMLightClientCtrlStringValueTypeSaveView2DVariableSize	= 0x8,
	scComSAMLightClientCtrlStringValueTypeSaveView2DFull	= 0x9,
	scComSAMLightClientCtrlStringValueTypeEntityNamesWithType	= 0x10,
	scComSAMLightClientCtrlStringValueTypeEntityNameAtTopLevel	= 0xa,
	scComSAMLightClientCtrlStringValueTypeControlCmdCW300	= 50,
	scComSAMLightClientCtrlStringValueTypeMotionString	= 0xb,
	scComSAMLightClientCtrlStringValueTypeSaveView2DAdjustableDPI	= 0xc,
	scComSAMLightClientCtrlStringValueTypeCorrectionFile	= 0xd,
	scComSAMLightClientCtrlStringValueTypeCorrectionFileHead2	= 0x17,
	scComSAMLightClientCtrlStringValueTypeSaveLayerAdjustableDPI	= 0x18,
	scComSAMLightClientCtrlStringValueTypeGetLastErrorMessageInput	= 0xe,
	scComSAMLightClientCtrlStringValueTypeGetLastInfoMessageInput	= 0xf,
	scComSAMLightClientCtrlStringValueTypeSubEntityForGetIdStringDataGetTopLevelEntityName	= 0x11,
	scComSAMLightClientCtrlStringValueTypeSetToTopLevelEntity	= 0x11,
	scComSAMLightClientCtrlStringValueTypeAsyncModeResult	= 0x12,
	scComSAMLightClientCtrlStringValueTypeUserValue	= 20000,
	scComSAMLightClientCtrlStringValueTypeStringPara1	= 0x13,
	scComSAMLightClientCtrlStringValueTypeStringPara2	= 0x14,
	scComSAMLightClientCtrlStringValueTypeSaveSplitsJobFileName	= 0x15,
	scComSAMLightClientCtrlStringValueTypeCurrentPenName	= 0x16,
	scComSAMLightClientCtrlStringValueTypeSaveView3DVariableSize	= 0x19,
	scComSAMLightClientCtrlStringValueTypeSaveView3DFull	= 0x1a,
	scComSAMLightClientCtrlStringValueTypeBmpAlphaBlendPathBmp	= 0x1b,
	scComSAMLightClientCtrlStringValueTypePenPixelMap	= 0x1c,
	scComSAMLightClientCtrlStringValueTypeCorrectionFileLcf	= 0x1d,
	scComSAMLightClientCtrlStringValueTypeCorrectionFileLcfLensInit	= 0x1e,
	scComSAMLightClientCtrlStringValueTypeTrail	= 0x1f,
	scComSAMLightClientCtrlStringValueTypeLoadStl	= 0x20,
	scComSAMLightClientCtrlStringValueTypeCurrentUserName	= 0x21,
	scComSAMLightClientCtrlStringValueTypeLanguage	= 0x22
    } 	ScComSAMLightClientCtrlValueTypes;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("96CFB63A-D578-4648-A684-17DAB91145A4") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_ex_type_lib_0000_0000_0004
    {	scComSAMLightClientCtrlModeFlagTopLevelOnly	= 0x1,
	scComSAMLightClientCtrlModeFlagDontUpdateView	= 0x2,
	scComSAMLightClientCtrlModeFlagSuppressErrorMessages	= 0x4,
	scComSAMLightClientCtrlModeFlagUniqueEntityNames	= 0x8,
	scComSAMLightClientCtrlModeFlagDisableFileCompression	= 0x10,
	scComSAMLightClientCtrlModeFlagEntityNamesSeparatedBySemicolon	= 0x20,
	scComSAMLightClientCtrlModeFlagMarkOrderAsSpecifiedWithNames	= 0x40,
	scComSAMLightClientCtrlModeFlagEntityOrderFlagArrayXDown	= 0x100,
	scComSAMLightClientCtrlModeFlagEntityOrderFlagArrayYDown	= 0x200,
	scComSAMLightClientCtrlModeFlagEntityOrderFlagArrayXMainDir	= 0x400,
	scComSAMLightClientCtrlModeFlagEntityOrderFlagArrayBiDir	= 0x800,
	scComSAMLightClientCtrlModeFlagReGenerateObjectAfterScale	= 0x1000,
	scComSAMLightClientCtrlModeFlagUseFormatAtTextText	= 0x2000,
	scComSAMLightClientCtrlImportFlagReadPenInfo	= 0x80,
	scComSAMLightClientCtrlImportFlagKeepOrder	= 0x8,
	scComSAMLightClientCtrlImportFlagPointCloud	= 0x4000,
	scComSAMLightClientCtrlImportFlagNotTryToClose	= 0x20000,
	scComSAMLightClientCtrlImportFlagOptimized	= 0x80000,
	scComSAMLightClientCtrlImportFlagBitmapReimport	= 0x100000,
	scComSAMLightClientCtrlImportFlagDontUpdateView	= 0x200000,
	scComSAMLightClientCtrlImportFlagVectorReimport	= 0x800000,
	scComSAMLightClientCtrlImportFlagToplevelOnly	= 0x1000000,
	scComSAMLightClientCtrlImportFlagFillWithDefaultHatchStyle	= 0x2000000,
	scComSAMLightClientCtrlImportFlagNoErrorMsg	= 0x4000000,
	scComSAMLightClientCtrlImportFlagCreateOneGroup	= 0x8000000,
	scComSAMLightClientCtrlImportFlagCenterToField	= 0x10000000,
	scComSAMLightClientCtrlImportFlagImportToPenGroups	= 0x20000000,
	scComSAMLightClientCtrlImportFlagUsePenColors	= 0x40000000,
	scComSAMLightClientCtrlImportFlagProtected	= 0x80000000,
	scComSAMLightClientCtrlLongDataIdFlagDontUpdateView	= 0x10000,
	scComSAMLightClientCtrlLongDataIdFlagDontUpdateEntity	= 0x20000,
	scComSAMLightClientCtrlLongDataIdFlagEnqueueCtrlCmd	= 0x80000,
	scComSAMLightClientCtrlLongDataIdFlagEnqueueLastCtrlCmd	= 0x100000,
	scComSAMLightClientCtrlLongDataIdFlagToplevelOnly	= 0x200000,
	scComSAMLightClientCtrlLongDataIdUserData	= 0x1,
	scComSAMLightClientCtrlLongDataIdTextAlignment	= 0x2,
	scComSAMLightClientCtrlTextAlignmentCenter	= 0x1,
	scComSAMLightClientCtrlTextAlignmentLeft	= 0x2,
	scComSAMLightClientCtrlTextAlignmentRight	= 0x4,
	scComSAMLightClientCtrlTextAlignmentTop	= 0x8,
	scComSAMLightClientCtrlTextAlignmentBottom	= 0x10,
	scComSAMLightClientCtrlTextAlignmentMiddle	= 0x20,
	scComSAMLightClientCtrlTextAlignmentRadialCenter	= 0x40,
	scComSAMLightClientCtrlTextAlignmentRadialEnd	= 0x80,
	scComSAMLightClientCtrlTextAlignmentLineLeft	= 0x100,
	scComSAMLightClientCtrlTextAlignmentLineRight	= 0x200,
	scComSAMLightClientCtrlTextAlignmentLineCenter	= 0x400,
	scComSAMLightClientCtrlLongDataIdEntitySelected	= 0x3,
	scComSAMLightClientCtrlLongDataIdEntityArrayCountX	= 0x4,
	scComSAMLightClientCtrlLongDataIdEntityArrayCountY	= 0x5,
	scComSAMLightClientCtrlLongDataIdEntityArrayStepX	= 0x6,
	scComSAMLightClientCtrlLongDataIdEntityArrayStepY	= 0x7,
	scComSAMLightClientCtrlLongDataIdEntityArrayOrderFlags	= 0x8,
	scComSAMLightClientCtrlLongDataIdTextCharFlags	= 0x9,
	scComSAMLightClientCtrlLongDataIdTextFontAvailable	= 0xa,
	scComSAMLightClientCtrlLongDataIdTextCharFlagItalic	= 0x10000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagRadial	= 0x20000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagRadialAlignToCharOutline	= 0x40000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagReverseOrder	= 0x80000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagMirrorCharOnXAxis	= 0x100000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagMirrorCharOnYAxis	= 0x200000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagSwapLines	= 0x400000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagSetToLimitLength	= 0x800000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagSetToLimitHeight	= 0x1000000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagSetToLimitKeepAspect	= 0x2000000,
	scComSAMLightClientCtrlLongDataIdTextCharFlagRadialCenterMode	= 0x40000000,
	scComSAMLightClientCtrlLongDataIdBitmapMode	= ( 0x30 + 1 ) ,
	scComSAMLightClientCtrlLongDataIdTextWeight	= ( 0x30 + 2 ) ,
	scComSAMLightClientCtrlLongDataIdEnableHatching1	= ( 0x30 + 3 ) ,
	scComSAMLightClientCtrlLongDataIdEnableHatching2	= ( 0x30 + 4 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMarkLoopCount	= ( 0x30 + 7 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMarkBeatCount	= ( 0x30 + 8 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMarkStartCount	= ( 0x30 + 9 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMarkFlags	= ( 0x30 + 10 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetPen	= ( 0x30 + 12 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetTimerValue	= ( 0x30 + 13 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetInOutValue	= ( 0x30 + 14 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetOutputPulse	= ( 0x30 + 16 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetInOutLevel	= ( 0x30 + 17 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGetTimerValue	= ( 0x30 + 18 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGetInOutValue	= ( 0x30 + 19 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGetOutputPulse	= ( 0x30 + 21 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGetInOutLevel	= ( 0x30 + 22 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialStartValue	= ( 0x30 + 23 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialIncrValue	= ( 0x30 + 24 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialCurrValue	= ( 0x30 + 25 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialBeatCount	= ( 0x30 + 31 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialResetCount	= ( 0x30 + 32 ) ,
	scComSAMLightClientCtrlLongDataIdEntityOpticFlags	= ( 0x30 + 27 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySplittable	= ( 0x30 + 28 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMarkFlagMarkContour	= 0x1,
	scComSAMLightClientCtrlLongDataIdEntityMarkFlagMarkHatch	= 0x2,
	scComSAMLightClientCtrlLongDataIdEntityOpticFlagContour	= 0x1,
	scComSAMLightClientCtrlLongDataIdEntityOpticFlagHatch	= 0x2,
	scComSAMLightClientCtrlLongDataIdEntityLayerCount	= ( 0x30 + 63 ) ,
	scComSAMLightClientCtrlLongDataIdBitmapModeInvert	= 0x1,
	scComSAMLightClientCtrlLongDataIdBitmapModeGreyscale	= 0x2,
	scComSAMLightClientCtrlLongDataIdBitmapModeDrillmode	= 0x4,
	scComSAMLightClientCtrlLongDataIdBitmapModeBidirectional	= 0x8,
	scComSAMLightClientCtrlLongDataIdBitmapModeStartlastline	= 0x10,
	scComSAMLightClientCtrlLongDataIdBitmapModeNolineincr	= 0x20,
	scComSAMLightClientCtrlLongDataIdBitmapModeShowBitmap	= 0x100,
	scComSAMLightClientCtrlLongDataIdBitmapModeShowScanner	= 0x200,
	scComSAMLightClientCtrlLongDataIdBitmapModeScanXDir	= 0x400,
	scComSAMLightClientCtrlLongDataIdBitmapModePenFrequency	= 0x800,
	scComSAMLightClientCtrlLongDataIdBitmapModeJumpOverBlankPixels	= 0x1000,
	scComSAMLightClientCtrlLongDataIdBitmapModeDrillGreyscale	= 0x2000,
	scComSAMLightClientCtrlLongDataIdBitmapBlankThreshold	= ( 0x30 + 74 ) ,
	scComSAMLightClientCtrlLongDataIdBitmapLineIndexStep	= ( 0x30 + 75 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGetPen	= ( 0x30 + 26 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialNumLines	= ( 0x30 + 29 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetAsBackgroundEntity	= ( 0x30 + 30 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySetAsHiddenEntity	= ( 0x30 + 64 ) ,
	scComSAMLightClientCtrlLongDataIdSpiralNumInnerRotations	= ( 0x30 + 65 ) ,
	scComSAMLightClientCtrlLongDataIdSpiralNumOuterRotations	= ( 0x30 + 66 ) ,
	scComSAMLightClientCtrlLongDataIdSpiralNumOuterSegments	= ( 0x30 + 67 ) ,
	scComSAMLightClientCtrlLongDataIdSpiralFlags	= ( 0x30 + 68 ) ,
	scComSAMLightClientCtrlLongDataIdDataMatrixNumberOfDots	= ( 0x30 + 76 ) ,
	scComSAMLightClientCtrlLongDataIdEntitySerialNumModesFlags	= ( 0x30 + 69 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGroupPenPaths	= ( 0x30 + 70 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGroupCluster	= ( 0x30 + 71 ) ,
	scComSAMLightClientCtrlLongDataIdEntityMirrorOnPlane	= ( 0x30 + 72 ) ,
	scComSAMLightClientCtrlLongDataIdEntityOutputAsBitmap	= ( 0x30 + 73 ) ,
	scComSAMLightClientCtrlLongDataIdEntityGenerate	= ( 0x30 + 77 ) ,
	scComSAMLightClientCtrlDoubleDataIdBitmapIntensity	= ( 0x20 + 1 ) ,
	scComSAMLightClientCtrlDoubleDataIdBitmapBrightness	= ( 0x20 + 2 ) ,
	scComSAMLightClientCtrlDoubleDataIdBitmapDitherstep	= ( 0x20 + 3 ) ,
	scComSAMLightClientCtrlDoubleDataIdTextOrientation	= ( 0x20 + 4 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchDistance1	= ( 0x20 + 5 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchAngle1	= ( 0x20 + 6 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchMinjump1	= ( 0x20 + 7 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchStartoffset1	= ( 0x20 + 8 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchLinereduct1	= ( 0x20 + 9 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchEndoffset1	= ( 0x20 + 10 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchBeamcompensation1	= ( 0x20 + 11 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchNumloops1	= ( 0x20 + 12 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchPointOffset1	= ( 0x20 + 51 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchMinLength1	= ( 0x20 + 52 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchDistance2	= ( 0x20 + 13 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchAngle2	= ( 0x20 + 14 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchMinjump2	= ( 0x20 + 15 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchStartoffset2	= ( 0x20 + 16 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchLinereduct2	= ( 0x20 + 17 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchEndoffset2	= ( 0x20 + 18 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchBeamcompensation2	= ( 0x20 + 19 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchNumloops2	= ( 0x20 + 20 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchPointOffset2	= ( 0x20 + 53 ) ,
	scComSAMLightClientCtrlDoubleDataIdHatchMinLength2	= ( 0x20 + 54 ) ,
	scComSAMLightClientCtrlDoubleDataIdBarcodeLinereduction	= ( 0x20 + 37 ) ,
	scComSAMLightClientCtrlDoubleDataIdMotfOffset	= ( 0x20 + 38 ) ,
	scComSAMLightClientCtrlDoubleDataIdEntityRotationAngle	= ( 0x20 + 39 ) ,
	scComSAMLightClientCtrlEntityArrayOrderFlagMainDirX	= 0x400,
	scComSAMLightClientCtrlEntityArrayOrderFlagNegX	= 0x100,
	scComSAMLightClientCtrlEntityArrayOrderFlagNegY	= 0x200,
	scComSAMLightClientCtrlEntityArrayOrderFlagBiDir	= 0x800,
	scComSAMLightClientCtrlDoubleDataIdFlagDontUpdateView	= 0x10000,
	scComSAMLightClientCtrlDoubleDataIdFlagDontUpdateEntity	= 0x20000,
	scComSAMLightClientCtrlDoubleDataIdFlagToplevelOnly	= 0x40000,
	scComSAMLightClientCtrlDoubleDataIdTextSize	= 0x1,
	scComSAMLightClientCtrlDoubleDataIdTextCharSpacing	= 0x2,
	scComSAMLightClientCtrlDoubleDataIdTextLengthLimit	= 0x3,
	scComSAMLightClientCtrlDoubleDataIdTextHeightLimit	= 0x4,
	scComSAMLightClientCtrlDoubleDataIdTextRadius	= 0x5,
	scComSAMLightClientCtrlDoubleDataIdTextStartAngle	= 0x6,
	scComSAMLightClientCtrlDoubleDataIdTextPointResolution	= 0x7,
	scComSAMLightClientCtrlDoubleDataIdTextBaseline	= 0x8,
	scComSAMLightClientCtrlDoubleDataIdTextRadialCenterX	= 0x9,
	scComSAMLightClientCtrlDoubleDataIdTextRadialCenterY	= 0xa,
	scComSAMLightClientCtrlDoubleDataIdDataMatrixCellSizeX	= ( 0x20 + 40 ) ,
	scComSAMLightClientCtrlDoubleDataIdDataMatrixCellSizeY	= ( 0x20 + 41 ) ,
	scComSAMLightClientCtrlDoubleDataIdDataMatrixQuietZoneX	= ( 0x20 + 49 ) ,
	ScComSAMLightClientCtrlDoubleDataIdDataMatrixQuietZoneY	= ( 0x20 + 50 ) ,
	ScComSAMLightClientCtrlDoubleDataIdDataMatrixDistanceBetweenDots	= ( 0x20 + 55 ) ,
	scComSAMLightClientCtrlDoubleDataIdSpiral2DInnerRadius	= ( 0x20 + 42 ) ,
	scComSAMLightClientCtrlDoubleDataIdSpiral2DOuterRadius	= ( 0x20 + 43 ) ,
	scComSAMLightClientCtrlDoubleDataIdSpiral2DRise	= ( 0x20 + 44 ) ,
	scComSAMLIghtClientCtrlDoubleDataIdEllipse2DRadiusX	= ( 0x20 + 45 ) ,
	scComSAMLIghtClientCtrlDoubleDataIdEllipse2DRadiusY	= ( 0x20 + 46 ) ,
	scComSAMLIghtClientCtrlDoubleDataIdEllipse2DCenterX	= ( 0x20 + 47 ) ,
	scComSAMLIghtClientCtrlDoubleDataIdEllipse2DCenterY	= ( 0x20 + 48 ) ,
	scComSAMLightClientCtrlStringDataIdFlagDontUpdateView	= 0x10000,
	scComSAMLightClientCtrlStringDataIdFlagDontUpdateEntity	= 0x20000,
	scComSAMLightClientCtrlStringDataIdFlagToplevelOnly	= 0x200000,
	scComSAMLightClientCtrlStringDataIdFlagSelected	= 0x400000,
	scComSAMLightClientCtrlStringDataIdTextFontName	= 1,
	scComSAMLightClientCtrlStringDataIdTextText	= 2,
	scComSAMLightClientCtrlStringDataIdGetToplevelEntity	= ( 16 + 1 ) ,
	scComSAMLightClientCtrlStringDataIdSetToplevelEntity	= ( 16 + 9 ) ,
	scComSAMLightClientCtrlStringDataIdFindEntityWithText	= ( 16 + 2 ) ,
	scComSAMLightClientCtrlStringDataIdSetBarcodeType	= ( 16 + 3 ) ,
	scComSAMLightClientCtrlStringDataIdGetBarcodeType	= ( 16 + 4 ) ,
	scComSAMLightClientCtrlStringDataIdGetEntityName	= ( 16 + 5 ) ,
	scComSAMLightClientCtrlStringDataIdGetEntityType	= ( 16 + 6 ) ,
	scComSAMLightClientCtrlStringDataIdSetEntityName	= ( 16 + 7 ) ,
	scComSAMLightClientCtrlStringDataIdEntitySerialASCIIFileName	= ( 16 + 8 ) ,
	scComSAMLightClientCtrlStringDataIdEntitySerialExcelFileName	= ( 16 + 8 ) ,
	scComSAMLightClientCtrlStringDataIdSetMotionCtrls	= ( 16 + 10 ) ,
	scComSAMLightClientCtrlStringDataIdSerialNumberFormatString	= ( 16 + 11 ) ,
	scComSAMLightClientCtrlStringDataIdArrayCopyHard	= ( 16 + 12 ) ,
	scComSAMLightClientCtrlStringDataIdTranslate	= ( 16 + 13 ) ,
	scComSAMLightClientCtrlStringDataIdRotate	= ( 16 + 14 ) ,
	scComSAMLightClientCtrlStringDataIdOutlineAndRotate	= ( 16 + 15 ) ,
	scComSAMLightClientCtrlStringDataIdBarCodeFormatString	= ( 16 + 16 ) ,
	scComSAMLightClientCtrlStringDataIdSetMotionCtrlsString	= ( 16 + 17 ) ,
	scComSAMLightClientCtrlProcessFlashJobModeStoreCurrentToFlash	= 1,
	scComSAMLightClientCtrlProcessFlashJobModeLoadFromFlash	= 2,
	scComSAMLightClientCtrlProcessFlashJobModeStoreFromDiskToFlash	= 3,
	scComSAMLightClientCtrlFlashCommandFlagWaitForTimeOut	= 0x80000000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeRectangle	= 0x1,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeAutoSize	= 0x10000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeAutoEncodation	= 0x20000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeDots	= 0x40000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeTilde	= 0x80000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeCells	= 0x100000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeNoFinderCells	= 0x200000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeEllipse	= 0x400000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExSymbolModeTextFreelyEditable	= 0x800000,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationAscii	= 1,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationBase256	= 2,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationC40	= 3,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationText	= 4,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationAnsiX12	= 5,
	scComSAMLightClientCtrlLongDataIdDataMatrixExEncodationEdifact	= 6,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagVariableLength	= 0x1,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagInvert	= 0x2,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagDisableAutoQuietZone	= 0x4,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagQuietZoneAbsolute	= 0x8,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagGenerateCheckCode	= 0x10,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagInvertExceptText	= 0x20,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagInvertCellMode	= 0x40,
	scComSAMLightClientCtrlLongDataIdBarcodeFlagCompactMode	= 0x80,
	scComSAMLightClientCtrlLongDataIdHatchFlagAllLines	= 0x400,
	scComSAMLightClientCtrlLongDataIdHatchFlagNoSort	= 0x100,
	scComSAMLightClientCtrlLongDataIdHatchFlagKeepAngle	= 0x80000,
	scComSAMLightClientCtrlLongDataIdHatchFlagEqualizeDistance	= 0x1000000,
	scComSAMLightClientCtrlLongDataIdHatchFlagDontFillRest	= 0x4000,
	scComSAMLightClientCtrlLongDataIdHatchFlagPolyLineBeamComp	= 0x2000,
	scComSAMLightClientCtrlLongDataIdSetHatchFlags1	= ( 0x30 + 33 ) ,
	scComSAMLightClientCtrlLongDataIdClearHatchFlags1	= ( 0x30 + 43 ) ,
	scComSAMLightClientCtrlLongDataIdSetHatchFlags2	= ( 0x30 + 34 ) ,
	scComSAMLightClientCtrlLongDataIdClearHatchFlags2	= ( 0x30 + 44 ) ,
	scComSAMLightClientCtrlLongDataIdBarcodeSetFlags	= ( 0x30 + 53 ) ,
	scComSAMLightClientCtrlLongDataIdBarcodeClearFlags	= ( 0x30 + 54 ) ,
	scComSAMLightClientCtrlLongDataIdDataMatrixSetSymbolMode	= ( 0x30 + 55 ) ,
	scComSAMLightClientCtrlLongDataIdDataMatrixClearSymbolMode	= ( 0x30 + 56 ) ,
	scComSAMLightClientCtrlLongDataIdDataMatrixSymbolSize	= ( 0x30 + 57 ) ,
	scComSAMLightClientCtrlLongDataIdDataMatrixEncoding	= ( 0x30 + 58 ) ,
	scComSAMLightClientCtrlLongDataIdDataBarcodeTextEnable	= ( 0x30 + 59 ) ,
	scComSAMLightClientCtrlLongDataIdDataBarcodeLevel	= ( 0x30 + 60 ) ,
	scComSAMLightClientCtrlLongDataIdDataBarcodeMode	= ( 0x30 + 61 ) ,
	scComSAMLightClientCtrlLongDataIdDataBarcodeSize	= ( 0x30 + 62 ) ,
	scComSAMLightSaveFlagEntities	= 0x1,
	scComSAMLightSaveFlagMaterials	= 0x2,
	scComSAMLightSaveFlagUseCurrentJobName	= 0x4
    } 	ScComSAMLightClientCtrlFlags;


EXTERN_C const IID LIBID_SAMLIGHT_CLIENT_CTRL_EXLib;

#ifndef ___Samlight_clientEx_INTERFACE_DEFINED__
#define ___Samlight_clientEx_INTERFACE_DEFINED__

/* interface _Samlight_clientEx */
/* [helpstring][dual][oleautomation][uuid][object] */ 


EXTERN_C const IID IID__Samlight_clientEx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D81CCA6E-4FEA-49b3-A82E-32137F101728")
    _Samlight_clientEx : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScIsRunning( 
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScExecCommand( 
            long CmdID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScChangeTextByName( 
            BSTR EntityName,
            BSTR Text) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScMarkEntityByName( 
            BSTR EntityName,
            long WaitForMarkEnd) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScIsMarking( 
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScStopMarking( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScLoadJob( 
            BSTR FileName,
            long LoadEntities,
            long OverwriteEntities,
            long LoadMaterials) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityOutline( 
            BSTR EntityName,
            long Index,
            /* [retval][out] */ double *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetWorkingArea( 
            long Index,
            /* [retval][out] */ double *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScOpticMatrixReset( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScOpticMatrixTranslate( 
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScOpticMatrixRotate( 
            double CenterX,
            double CenterY,
            double Angle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScCloseTCPConnection( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetDoubleValue( 
            long Type,
            double Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetDoubleValue( 
            long Type,
            /* [retval][out] */ double *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetLongValue( 
            long Type,
            long Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetLongValue( 
            long Type,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetLongData( 
            long Type,
            VARIANT *Data,
            BSTR FileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScTranslateEntity( 
            BSTR EntityName,
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScScaleEntity( 
            BSTR EntityName,
            double ScaleX,
            double ScaleY,
            double ScaleZ) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScRotateEntity( 
            BSTR EntityName,
            double X,
            double Y,
            double Angle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            BSTR EntityName,
            BSTR FileName,
            BSTR Type,
            double Resolution,
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetEntityLongData( 
            BSTR EntityName,
            long DataId,
            long Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityLongData( 
            BSTR EntityName,
            long DataId,
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScDeleteEntity( 
            BSTR EntityName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetLongData( 
            long Type,
            VARIANT *Data,
            BSTR FileName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetConnectionStatus( 
            /* [retval][out] */ long *res) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetStringValue( 
            long Type,
            BSTR Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetStringValue( 
            long Type,
            BSTR *Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScShutDown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetOpticMatrix( 
            long Index,
            double *Value) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSwitchLaser( 
            long LaserOnOff) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetPen( 
            long Pen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetPen( 
            long *Pen) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScShowApp( 
            long Show) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetHead( 
            long Head) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetHead( 
            long *Head) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSaveJob( 
            BSTR FileName,
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetEntityDoubleData( 
            BSTR EntityName,
            long DataId,
            double Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityDoubleData( 
            BSTR EntityName,
            long DataId,
            double *Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetEntityStringData( 
            BSTR EntityName,
            long DataId,
            BSTR Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityStringData( 
            BSTR EntityName,
            long DataId,
            BSTR *Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetStringLongValue( 
            long Type,
            BSTR SValue,
            long LValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetStringDblValue( 
            long Type,
            BSTR SValue,
            double DValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetStringDblValue( 
            long Type,
            BSTR SValue,
            double *RValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetIDStringData( 
            long Type,
            long index,
            BSTR *Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScOpenTCPConnection( 
            BSTR RecipientAddr,
            long RecipientPort) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScOpticMatrixScale( 
            double ScaleX,
            double ScaleY) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapForPen( 
            long Pen,
            long pixel_zone0,
            long pixel_zone1,
            long pixel_zone2,
            long pixel_zone3,
            long pixel_zone4,
            long pixel_zone5) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetMode( 
            long Mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetMode( 
            long *Mode) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScDuplicateEntity( 
            BSTR EntityName,
            BSTR DuplicatedEntityName) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScProcessFlashJob( 
            BSTR Name,
            long JobNum,
            long Mode,
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScFlashCommand( 
            BSTR Command,
            long Flags,
            BSTR *Return) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetIDStringData( 
            long Type,
            long index,
            BSTR Data) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScExport( 
            BSTR EntityName,
            BSTR FileName,
            BSTR Type,
            double Resolution,
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSlice( 
            BSTR EntityName,
            BSTR LayerSolidName,
            double sliceThickness,
            long doSliceOnlySelected,
            long doReverseDirection) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetPenPathForPen( 
            short *pen,
            short *enable,
            short *penToUse1,
            int *loopOfPenToUse1,
            short *penToUse2,
            int *loopOfPenToUse2,
            short *penToUse3,
            int *loopOfPenToUse3,
            short *penToUse4,
            int *loopOfPenToUse4,
            short *penToUse5,
            int *loopOfPenToUse5) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetPenPathForPen( 
            short *pen,
            short *enable,
            short *penToUse1,
            int *loopOfPenToUse1,
            short *penToUse2,
            int *loopOfPenToUse2,
            short *penToUse3,
            int *loopOfPenToUse3,
            short *penToUse4,
            int *loopOfPenToUse4,
            short *penToUse5,
            int *loopOfPenToUse5) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScRotateEntity3D( 
            BSTR EntityName,
            double px,
            double py,
            double pz,
            double vx,
            double vy,
            double vz,
            double angle) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityOutline2D( 
            BSTR EntityName,
            double *MinX,
            double *MinY,
            double *MaxX,
            double *MaxY) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetEntityOutline3D( 
            BSTR EntityName,
            double *MinX,
            double *MinY,
            double *MaxX,
            double *MaxY,
            double *MinZ,
            double *MaxZ) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetData( 
            long Type,
            BSTR EntityName,
            unsigned char *Array,
            unsigned long size,
            BSTR FileType,
            double resolution,
            long Flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _Samlight_clientExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Samlight_clientEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Samlight_clientEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Samlight_clientEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Samlight_clientEx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Samlight_clientEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Samlight_clientEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Samlight_clientEx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScIsRunning )( 
            _Samlight_clientEx * This,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScExecCommand )( 
            _Samlight_clientEx * This,
            long CmdID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeTextByName )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            BSTR Text);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkEntityByName )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long WaitForMarkEnd);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScIsMarking )( 
            _Samlight_clientEx * This,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScStopMarking )( 
            _Samlight_clientEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadJob )( 
            _Samlight_clientEx * This,
            BSTR FileName,
            long LoadEntities,
            long OverwriteEntities,
            long LoadMaterials);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityOutline )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long Index,
            /* [retval][out] */ double *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorkingArea )( 
            _Samlight_clientEx * This,
            long Index,
            /* [retval][out] */ double *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScOpticMatrixReset )( 
            _Samlight_clientEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScOpticMatrixTranslate )( 
            _Samlight_clientEx * This,
            double X,
            double Y,
            double Z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScOpticMatrixRotate )( 
            _Samlight_clientEx * This,
            double CenterX,
            double CenterY,
            double Angle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            _Samlight_clientEx * This,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            _Samlight_clientEx * This,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScCloseTCPConnection )( 
            _Samlight_clientEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDoubleValue )( 
            _Samlight_clientEx * This,
            long Type,
            double Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDoubleValue )( 
            _Samlight_clientEx * This,
            long Type,
            /* [retval][out] */ double *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            _Samlight_clientEx * This,
            long Type,
            long Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            _Samlight_clientEx * This,
            long Type,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongData )( 
            _Samlight_clientEx * This,
            long Type,
            VARIANT *Data,
            BSTR FileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateEntity )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double X,
            double Y,
            double Z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleEntity )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double ScaleX,
            double ScaleY,
            double ScaleZ);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScRotateEntity )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double X,
            double Y,
            double Angle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            BSTR FileName,
            BSTR Type,
            double Resolution,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityLongData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            long Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityLongData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScDeleteEntity )( 
            _Samlight_clientEx * This,
            BSTR EntityName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongData )( 
            _Samlight_clientEx * This,
            long Type,
            VARIANT *Data,
            BSTR FileName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetConnectionStatus )( 
            _Samlight_clientEx * This,
            /* [retval][out] */ long *res);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStringValue )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStringValue )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR *Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScShutDown )( 
            _Samlight_clientEx * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticMatrix )( 
            _Samlight_clientEx * This,
            long Index,
            double *Value);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            _Samlight_clientEx * This,
            double X,
            double Y,
            double Z);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSwitchLaser )( 
            _Samlight_clientEx * This,
            long LaserOnOff);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPen )( 
            _Samlight_clientEx * This,
            long Pen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPen )( 
            _Samlight_clientEx * This,
            long *Pen);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScShowApp )( 
            _Samlight_clientEx * This,
            long Show);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHead )( 
            _Samlight_clientEx * This,
            long Head);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHead )( 
            _Samlight_clientEx * This,
            long *Head);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveJob )( 
            _Samlight_clientEx * This,
            BSTR FileName,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityDoubleData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            double Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityDoubleData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            double *Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityStringData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            BSTR Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityStringData )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            long DataId,
            BSTR *Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStringLongValue )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR SValue,
            long LValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStringDblValue )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR SValue,
            double DValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStringDblValue )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR SValue,
            double *RValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIDStringData )( 
            _Samlight_clientEx * This,
            long Type,
            long index,
            BSTR *Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenTCPConnection )( 
            _Samlight_clientEx * This,
            BSTR RecipientAddr,
            long RecipientPort);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScOpticMatrixScale )( 
            _Samlight_clientEx * This,
            double ScaleX,
            double ScaleY);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapForPen )( 
            _Samlight_clientEx * This,
            long Pen,
            long pixel_zone0,
            long pixel_zone1,
            long pixel_zone2,
            long pixel_zone3,
            long pixel_zone4,
            long pixel_zone5);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMode )( 
            _Samlight_clientEx * This,
            long Mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMode )( 
            _Samlight_clientEx * This,
            long *Mode);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScDuplicateEntity )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            BSTR DuplicatedEntityName);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScProcessFlashJob )( 
            _Samlight_clientEx * This,
            BSTR Name,
            long JobNum,
            long Mode,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScFlashCommand )( 
            _Samlight_clientEx * This,
            BSTR Command,
            long Flags,
            BSTR *Return);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetIDStringData )( 
            _Samlight_clientEx * This,
            long Type,
            long index,
            BSTR Data);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            BSTR FileName,
            BSTR Type,
            double Resolution,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSlice )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            BSTR LayerSolidName,
            double sliceThickness,
            long doSliceOnlySelected,
            long doReverseDirection);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenPathForPen )( 
            _Samlight_clientEx * This,
            short *pen,
            short *enable,
            short *penToUse1,
            int *loopOfPenToUse1,
            short *penToUse2,
            int *loopOfPenToUse2,
            short *penToUse3,
            int *loopOfPenToUse3,
            short *penToUse4,
            int *loopOfPenToUse4,
            short *penToUse5,
            int *loopOfPenToUse5);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenPathForPen )( 
            _Samlight_clientEx * This,
            short *pen,
            short *enable,
            short *penToUse1,
            int *loopOfPenToUse1,
            short *penToUse2,
            int *loopOfPenToUse2,
            short *penToUse3,
            int *loopOfPenToUse3,
            short *penToUse4,
            int *loopOfPenToUse4,
            short *penToUse5,
            int *loopOfPenToUse5);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScRotateEntity3D )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double px,
            double py,
            double pz,
            double vx,
            double vy,
            double vz,
            double angle);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityOutline2D )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double *MinX,
            double *MinY,
            double *MaxX,
            double *MaxY);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityOutline3D )( 
            _Samlight_clientEx * This,
            BSTR EntityName,
            double *MinX,
            double *MinY,
            double *MaxX,
            double *MaxY,
            double *MinZ,
            double *MaxZ);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            _Samlight_clientEx * This,
            long Type,
            BSTR EntityName,
            unsigned char *Array,
            unsigned long size,
            BSTR FileType,
            double resolution,
            long Flags);
        
        END_INTERFACE
    } _Samlight_clientExVtbl;

    interface _Samlight_clientEx
    {
        CONST_VTBL struct _Samlight_clientExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Samlight_clientEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Samlight_clientEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Samlight_clientEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Samlight_clientEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Samlight_clientEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Samlight_clientEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Samlight_clientEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _Samlight_clientEx_ScIsRunning(This,res)	\
    ( (This)->lpVtbl -> ScIsRunning(This,res) ) 

#define _Samlight_clientEx_ScExecCommand(This,CmdID)	\
    ( (This)->lpVtbl -> ScExecCommand(This,CmdID) ) 

#define _Samlight_clientEx_ScChangeTextByName(This,EntityName,Text)	\
    ( (This)->lpVtbl -> ScChangeTextByName(This,EntityName,Text) ) 

#define _Samlight_clientEx_ScMarkEntityByName(This,EntityName,WaitForMarkEnd)	\
    ( (This)->lpVtbl -> ScMarkEntityByName(This,EntityName,WaitForMarkEnd) ) 

#define _Samlight_clientEx_ScIsMarking(This,res)	\
    ( (This)->lpVtbl -> ScIsMarking(This,res) ) 

#define _Samlight_clientEx_ScStopMarking(This)	\
    ( (This)->lpVtbl -> ScStopMarking(This) ) 

#define _Samlight_clientEx_ScLoadJob(This,FileName,LoadEntities,OverwriteEntities,LoadMaterials)	\
    ( (This)->lpVtbl -> ScLoadJob(This,FileName,LoadEntities,OverwriteEntities,LoadMaterials) ) 

#define _Samlight_clientEx_ScGetEntityOutline(This,EntityName,Index,res)	\
    ( (This)->lpVtbl -> ScGetEntityOutline(This,EntityName,Index,res) ) 

#define _Samlight_clientEx_ScGetWorkingArea(This,Index,res)	\
    ( (This)->lpVtbl -> ScGetWorkingArea(This,Index,res) ) 

#define _Samlight_clientEx_ScOpticMatrixReset(This)	\
    ( (This)->lpVtbl -> ScOpticMatrixReset(This) ) 

#define _Samlight_clientEx_ScOpticMatrixTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScOpticMatrixTranslate(This,X,Y,Z) ) 

#define _Samlight_clientEx_ScOpticMatrixRotate(This,CenterX,CenterY,Angle)	\
    ( (This)->lpVtbl -> ScOpticMatrixRotate(This,CenterX,CenterY,Angle) ) 

#define _Samlight_clientEx_ScSetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags) ) 

#define _Samlight_clientEx_ScGetMarkFlags(This,res)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,res) ) 

#define _Samlight_clientEx_ScCloseTCPConnection(This)	\
    ( (This)->lpVtbl -> ScCloseTCPConnection(This) ) 

#define _Samlight_clientEx_ScSetDoubleValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetDoubleValue(This,Type,Value) ) 

#define _Samlight_clientEx_ScGetDoubleValue(This,Type,res)	\
    ( (This)->lpVtbl -> ScGetDoubleValue(This,Type,res) ) 

#define _Samlight_clientEx_ScSetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,Type,Value) ) 

#define _Samlight_clientEx_ScGetLongValue(This,Type,res)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,Type,res) ) 

#define _Samlight_clientEx_ScSetLongData(This,Type,Data,FileName)	\
    ( (This)->lpVtbl -> ScSetLongData(This,Type,Data,FileName) ) 

#define _Samlight_clientEx_ScTranslateEntity(This,EntityName,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslateEntity(This,EntityName,X,Y,Z) ) 

#define _Samlight_clientEx_ScScaleEntity(This,EntityName,ScaleX,ScaleY,ScaleZ)	\
    ( (This)->lpVtbl -> ScScaleEntity(This,EntityName,ScaleX,ScaleY,ScaleZ) ) 

#define _Samlight_clientEx_ScRotateEntity(This,EntityName,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotateEntity(This,EntityName,X,Y,Angle) ) 

#define _Samlight_clientEx_ScImport(This,EntityName,FileName,Type,Resolution,Flags)	\
    ( (This)->lpVtbl -> ScImport(This,EntityName,FileName,Type,Resolution,Flags) ) 

#define _Samlight_clientEx_ScSetEntityLongData(This,EntityName,DataId,Data)	\
    ( (This)->lpVtbl -> ScSetEntityLongData(This,EntityName,DataId,Data) ) 

#define _Samlight_clientEx_ScGetEntityLongData(This,EntityName,DataId,res)	\
    ( (This)->lpVtbl -> ScGetEntityLongData(This,EntityName,DataId,res) ) 

#define _Samlight_clientEx_ScDeleteEntity(This,EntityName)	\
    ( (This)->lpVtbl -> ScDeleteEntity(This,EntityName) ) 

#define _Samlight_clientEx_ScGetLongData(This,Type,Data,FileName)	\
    ( (This)->lpVtbl -> ScGetLongData(This,Type,Data,FileName) ) 

#define _Samlight_clientEx_ScGetConnectionStatus(This,res)	\
    ( (This)->lpVtbl -> ScGetConnectionStatus(This,res) ) 

#define _Samlight_clientEx_ScSetStringValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetStringValue(This,Type,Value) ) 

#define _Samlight_clientEx_ScGetStringValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetStringValue(This,Type,Value) ) 

#define _Samlight_clientEx_ScShutDown(This)	\
    ( (This)->lpVtbl -> ScShutDown(This) ) 

#define _Samlight_clientEx_ScGetOpticMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetOpticMatrix(This,Index,Value) ) 

#define _Samlight_clientEx_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define _Samlight_clientEx_ScSwitchLaser(This,LaserOnOff)	\
    ( (This)->lpVtbl -> ScSwitchLaser(This,LaserOnOff) ) 

#define _Samlight_clientEx_ScSetPen(This,Pen)	\
    ( (This)->lpVtbl -> ScSetPen(This,Pen) ) 

#define _Samlight_clientEx_ScGetPen(This,Pen)	\
    ( (This)->lpVtbl -> ScGetPen(This,Pen) ) 

#define _Samlight_clientEx_ScShowApp(This,Show)	\
    ( (This)->lpVtbl -> ScShowApp(This,Show) ) 

#define _Samlight_clientEx_ScSetHead(This,Head)	\
    ( (This)->lpVtbl -> ScSetHead(This,Head) ) 

#define _Samlight_clientEx_ScGetHead(This,Head)	\
    ( (This)->lpVtbl -> ScGetHead(This,Head) ) 

#define _Samlight_clientEx_ScSaveJob(This,FileName,Flags)	\
    ( (This)->lpVtbl -> ScSaveJob(This,FileName,Flags) ) 

#define _Samlight_clientEx_ScSetEntityDoubleData(This,EntityName,DataId,Data)	\
    ( (This)->lpVtbl -> ScSetEntityDoubleData(This,EntityName,DataId,Data) ) 

#define _Samlight_clientEx_ScGetEntityDoubleData(This,EntityName,DataId,Data)	\
    ( (This)->lpVtbl -> ScGetEntityDoubleData(This,EntityName,DataId,Data) ) 

#define _Samlight_clientEx_ScSetEntityStringData(This,EntityName,DataId,Data)	\
    ( (This)->lpVtbl -> ScSetEntityStringData(This,EntityName,DataId,Data) ) 

#define _Samlight_clientEx_ScGetEntityStringData(This,EntityName,DataId,Data)	\
    ( (This)->lpVtbl -> ScGetEntityStringData(This,EntityName,DataId,Data) ) 

#define _Samlight_clientEx_ScSetStringLongValue(This,Type,SValue,LValue)	\
    ( (This)->lpVtbl -> ScSetStringLongValue(This,Type,SValue,LValue) ) 

#define _Samlight_clientEx_ScSetStringDblValue(This,Type,SValue,DValue)	\
    ( (This)->lpVtbl -> ScSetStringDblValue(This,Type,SValue,DValue) ) 

#define _Samlight_clientEx_ScGetStringDblValue(This,Type,SValue,RValue)	\
    ( (This)->lpVtbl -> ScGetStringDblValue(This,Type,SValue,RValue) ) 

#define _Samlight_clientEx_ScGetIDStringData(This,Type,index,Data)	\
    ( (This)->lpVtbl -> ScGetIDStringData(This,Type,index,Data) ) 

#define _Samlight_clientEx_ScOpenTCPConnection(This,RecipientAddr,RecipientPort)	\
    ( (This)->lpVtbl -> ScOpenTCPConnection(This,RecipientAddr,RecipientPort) ) 

#define _Samlight_clientEx_ScOpticMatrixScale(This,ScaleX,ScaleY)	\
    ( (This)->lpVtbl -> ScOpticMatrixScale(This,ScaleX,ScaleY) ) 

#define _Samlight_clientEx_ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5)	\
    ( (This)->lpVtbl -> ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5) ) 

#define _Samlight_clientEx_ScSetMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetMode(This,Mode) ) 

#define _Samlight_clientEx_ScGetMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetMode(This,Mode) ) 

#define _Samlight_clientEx_ScDuplicateEntity(This,EntityName,DuplicatedEntityName)	\
    ( (This)->lpVtbl -> ScDuplicateEntity(This,EntityName,DuplicatedEntityName) ) 

#define _Samlight_clientEx_ScProcessFlashJob(This,Name,JobNum,Mode,Flags)	\
    ( (This)->lpVtbl -> ScProcessFlashJob(This,Name,JobNum,Mode,Flags) ) 

#define _Samlight_clientEx_ScFlashCommand(This,Command,Flags,Return)	\
    ( (This)->lpVtbl -> ScFlashCommand(This,Command,Flags,Return) ) 

#define _Samlight_clientEx_ScSetIDStringData(This,Type,index,Data)	\
    ( (This)->lpVtbl -> ScSetIDStringData(This,Type,index,Data) ) 

#define _Samlight_clientEx_ScExport(This,EntityName,FileName,Type,Resolution,Flags)	\
    ( (This)->lpVtbl -> ScExport(This,EntityName,FileName,Type,Resolution,Flags) ) 

#define _Samlight_clientEx_ScSlice(This,EntityName,LayerSolidName,sliceThickness,doSliceOnlySelected,doReverseDirection)	\
    ( (This)->lpVtbl -> ScSlice(This,EntityName,LayerSolidName,sliceThickness,doSliceOnlySelected,doReverseDirection) ) 

#define _Samlight_clientEx_ScSetPenPathForPen(This,pen,enable,penToUse1,loopOfPenToUse1,penToUse2,loopOfPenToUse2,penToUse3,loopOfPenToUse3,penToUse4,loopOfPenToUse4,penToUse5,loopOfPenToUse5)	\
    ( (This)->lpVtbl -> ScSetPenPathForPen(This,pen,enable,penToUse1,loopOfPenToUse1,penToUse2,loopOfPenToUse2,penToUse3,loopOfPenToUse3,penToUse4,loopOfPenToUse4,penToUse5,loopOfPenToUse5) ) 

#define _Samlight_clientEx_ScGetPenPathForPen(This,pen,enable,penToUse1,loopOfPenToUse1,penToUse2,loopOfPenToUse2,penToUse3,loopOfPenToUse3,penToUse4,loopOfPenToUse4,penToUse5,loopOfPenToUse5)	\
    ( (This)->lpVtbl -> ScGetPenPathForPen(This,pen,enable,penToUse1,loopOfPenToUse1,penToUse2,loopOfPenToUse2,penToUse3,loopOfPenToUse3,penToUse4,loopOfPenToUse4,penToUse5,loopOfPenToUse5) ) 

#define _Samlight_clientEx_ScRotateEntity3D(This,EntityName,px,py,pz,vx,vy,vz,angle)	\
    ( (This)->lpVtbl -> ScRotateEntity3D(This,EntityName,px,py,pz,vx,vy,vz,angle) ) 

#define _Samlight_clientEx_ScGetEntityOutline2D(This,EntityName,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScGetEntityOutline2D(This,EntityName,MinX,MinY,MaxX,MaxY) ) 

#define _Samlight_clientEx_ScGetEntityOutline3D(This,EntityName,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScGetEntityOutline3D(This,EntityName,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define _Samlight_clientEx_ScSetData(This,Type,EntityName,Array,size,FileType,resolution,Flags)	\
    ( (This)->lpVtbl -> ScSetData(This,Type,EntityName,Array,size,FileType,resolution,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___Samlight_clientEx_INTERFACE_DEFINED__ */


#ifndef ___DSamlight_clientEx_DISPINTERFACE_DEFINED__
#define ___DSamlight_clientEx_DISPINTERFACE_DEFINED__

/* dispinterface _DSamlight_clientEx */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSamlight_clientEx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A47068AD-AF94-4E91-8452-469234E598D3")
    _DSamlight_clientEx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSamlight_clientExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSamlight_clientEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSamlight_clientEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSamlight_clientEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSamlight_clientEx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSamlight_clientEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSamlight_clientEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSamlight_clientEx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSamlight_clientExVtbl;

    interface _DSamlight_clientEx
    {
        CONST_VTBL struct _DSamlight_clientExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSamlight_clientEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSamlight_clientEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSamlight_clientEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSamlight_clientEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSamlight_clientEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSamlight_clientEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSamlight_clientEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSamlight_clientEx_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScSamlightClientCtrlEx;

#ifdef __cplusplus

class DECLSPEC_UUID("3E6FBC49-6C3D-4c10-81DD-DAD74E7B39AC")
ScSamlightClientCtrlEx;
#endif
#endif /* __SAMLIGHT_CLIENT_CTRL_EXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


