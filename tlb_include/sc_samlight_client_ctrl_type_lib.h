

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:21 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\samlight_client\sc_samlight_client_ctrl_type_lib.idl:
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


#ifndef __sc_samlight_client_ctrl_type_lib_h__
#define __sc_samlight_client_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IConnectionToolCtrl_FWD_DEFINED__
#define __SC_IConnectionToolCtrl_FWD_DEFINED__
typedef interface SC_IConnectionToolCtrl SC_IConnectionToolCtrl;
#endif 	/* __SC_IConnectionToolCtrl_FWD_DEFINED__ */


#ifndef __SC_DConnectionToolEvents_FWD_DEFINED__
#define __SC_DConnectionToolEvents_FWD_DEFINED__
typedef interface SC_DConnectionToolEvents SC_DConnectionToolEvents;
#endif 	/* __SC_DConnectionToolEvents_FWD_DEFINED__ */


#ifndef ___DSamlight_client_ctrl_ocx_FWD_DEFINED__
#define ___DSamlight_client_ctrl_ocx_FWD_DEFINED__
typedef interface _DSamlight_client_ctrl_ocx _DSamlight_client_ctrl_ocx;
#endif 	/* ___DSamlight_client_ctrl_ocx_FWD_DEFINED__ */


#ifndef ___DSamlight_client_ctrl_ocxEvents_FWD_DEFINED__
#define ___DSamlight_client_ctrl_ocxEvents_FWD_DEFINED__
typedef interface _DSamlight_client_ctrl_ocxEvents _DSamlight_client_ctrl_ocxEvents;
#endif 	/* ___DSamlight_client_ctrl_ocxEvents_FWD_DEFINED__ */


#ifndef __ScSamlightClientCtrl_FWD_DEFINED__
#define __ScSamlightClientCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSamlightClientCtrl ScSamlightClientCtrl;
#else
typedef struct ScSamlightClientCtrl ScSamlightClientCtrl;
#endif /* __cplusplus */

#endif 	/* __ScSamlightClientCtrl_FWD_DEFINED__ */


#ifndef __ScConnectionToolCtrl_FWD_DEFINED__
#define __ScConnectionToolCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScConnectionToolCtrl ScConnectionToolCtrl;
#else
typedef struct ScConnectionToolCtrl ScConnectionToolCtrl;
#endif /* __cplusplus */

#endif 	/* __ScConnectionToolCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_samlight_client_ctrl_type_lib_0000_0000 */
/* [local] */ 

#pragma once
// SCAPS SAM Header File
// Version 2.6


extern RPC_IF_HANDLE __MIDL_itf_sc_samlight_client_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_samlight_client_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __SAMLIGHT_CLIENT_CTRL_OCXLib_LIBRARY_DEFINED__
#define __SAMLIGHT_CLIENT_CTRL_OCXLib_LIBRARY_DEFINED__

/* library SAMLIGHT_CLIENT_CTRL_OCXLib */
/* [control][helpstring][helpfile][version][uuid] */ 


#pragma pack(push, 1)
struct sc_com_pen_path
    {
    short pen;
    short enable;
    short penToUse[ 5 ];
    int loopOfPenToUse[ 5 ];
    } ;

#pragma pack(pop)
typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("C91CC7C3-AE60-43af-B17C-82FE69D1E8A7") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_type_lib_0001_0065_0001
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

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("7ED659B9-E3AD-435a-BD44-A0CB5ADB21CB") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_type_lib_0001_0065_0002
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

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("03EEBA6A-EEDB-4cf4-8484-400A6AB265B6") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_type_lib_0001_0065_0003
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

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("030D04C8-BD94-4d70-BFF9-D46653031DEA") 
enum ScComConnectionToolCtrlResultValues
    {	scComConnectionToolCtrlResultOK	= 0,
	scComConnectionToolCtrlResultOpenFailed	= 0x1,
	scComConnectionToolCtrlResultConnectRecipientFailed	= 0x2,
	scComConnectionToolCtrlResultSendFailed	= 0x3,
	scComConnectionToolCtrlResultTimeOut	= 0x4
    } 	ScComConnectionToolCtrlResultValues;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("50A519E9-9E59-4b63-A90B-4F73C635D809") 
enum __MIDL___MIDL_itf_sc_samlight_client_ctrl_type_lib_0001_0066_0001
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


EXTERN_C const IID LIBID_SAMLIGHT_CLIENT_CTRL_OCXLib;

#ifndef __SC_IConnectionToolCtrl_INTERFACE_DEFINED__
#define __SC_IConnectionToolCtrl_INTERFACE_DEFINED__

/* interface SC_IConnectionToolCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IConnectionToolCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7EB1D711-5F08-4708-B37C-BA0EC0A72F65")
    SC_IConnectionToolCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScConnectionType( 
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScConnectionType( 
            /* [in] */ long Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitWriteBuffer( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitReadBuffer( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenConnection( 
            /* [in] */ BSTR ListenName,
            /* [in] */ long ListenPort,
            /* [in] */ BSTR RecipientName,
            /* [in] */ long RecipientPort,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddString( 
            /* [in] */ BSTR Str,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLong( 
            /* [in] */ long Value,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddDouble( 
            /* [in] */ double Value,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetString( 
            /* [retval][out] */ BSTR *Str) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLong( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDouble( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSend( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWaitForReceived( 
            /* [in] */ long TimeOut,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLastResult( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateSocket( 
            /* [in] */ BSTR ListenName,
            /* [in] */ long ListenPort,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConnectTo( 
            /* [in] */ BSTR RecipientName,
            /* [in] */ long RecipientPort,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClose( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLastError( 
            /* [retval][out] */ long *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IConnectionToolCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IConnectionToolCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IConnectionToolCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IConnectionToolCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScConnectionType )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScConnectionType )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ long Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitWriteBuffer )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitReadBuffer )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenConnection )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ BSTR ListenName,
            /* [in] */ long ListenPort,
            /* [in] */ BSTR RecipientName,
            /* [in] */ long RecipientPort,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddString )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ BSTR Str,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLong )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ long Value,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddDouble )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ double Value,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetString )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ BSTR *Str);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLong )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDouble )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSend )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWaitForReceived )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ long TimeOut,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLastResult )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMode )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMode )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateSocket )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ BSTR ListenName,
            /* [in] */ long ListenPort,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConnectTo )( 
            SC_IConnectionToolCtrl * This,
            /* [in] */ BSTR RecipientName,
            /* [in] */ long RecipientPort,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLastError )( 
            SC_IConnectionToolCtrl * This,
            /* [retval][out] */ long *Value);
        
        END_INTERFACE
    } SC_IConnectionToolCtrlVtbl;

    interface SC_IConnectionToolCtrl
    {
        CONST_VTBL struct SC_IConnectionToolCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IConnectionToolCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IConnectionToolCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IConnectionToolCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IConnectionToolCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IConnectionToolCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IConnectionToolCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IConnectionToolCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IConnectionToolCtrl_get_ScConnectionType(This,Type)	\
    ( (This)->lpVtbl -> get_ScConnectionType(This,Type) ) 

#define SC_IConnectionToolCtrl_put_ScConnectionType(This,Type)	\
    ( (This)->lpVtbl -> put_ScConnectionType(This,Type) ) 

#define SC_IConnectionToolCtrl_ScInitWriteBuffer(This,Result)	\
    ( (This)->lpVtbl -> ScInitWriteBuffer(This,Result) ) 

#define SC_IConnectionToolCtrl_ScInitReadBuffer(This,Result)	\
    ( (This)->lpVtbl -> ScInitReadBuffer(This,Result) ) 

#define SC_IConnectionToolCtrl_ScOpenConnection(This,ListenName,ListenPort,RecipientName,RecipientPort,Result)	\
    ( (This)->lpVtbl -> ScOpenConnection(This,ListenName,ListenPort,RecipientName,RecipientPort,Result) ) 

#define SC_IConnectionToolCtrl_ScAddString(This,Str,Result)	\
    ( (This)->lpVtbl -> ScAddString(This,Str,Result) ) 

#define SC_IConnectionToolCtrl_ScAddLong(This,Value,Result)	\
    ( (This)->lpVtbl -> ScAddLong(This,Value,Result) ) 

#define SC_IConnectionToolCtrl_ScAddDouble(This,Value,Result)	\
    ( (This)->lpVtbl -> ScAddDouble(This,Value,Result) ) 

#define SC_IConnectionToolCtrl_ScGetString(This,Str)	\
    ( (This)->lpVtbl -> ScGetString(This,Str) ) 

#define SC_IConnectionToolCtrl_ScGetLong(This,Value)	\
    ( (This)->lpVtbl -> ScGetLong(This,Value) ) 

#define SC_IConnectionToolCtrl_ScGetDouble(This,Value)	\
    ( (This)->lpVtbl -> ScGetDouble(This,Value) ) 

#define SC_IConnectionToolCtrl_ScSend(This,Result)	\
    ( (This)->lpVtbl -> ScSend(This,Result) ) 

#define SC_IConnectionToolCtrl_ScWaitForReceived(This,TimeOut,Result)	\
    ( (This)->lpVtbl -> ScWaitForReceived(This,TimeOut,Result) ) 

#define SC_IConnectionToolCtrl_ScGetLastResult(This,Value)	\
    ( (This)->lpVtbl -> ScGetLastResult(This,Value) ) 

#define SC_IConnectionToolCtrl_get_ScMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScMode(This,Mode) ) 

#define SC_IConnectionToolCtrl_put_ScMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScMode(This,Mode) ) 

#define SC_IConnectionToolCtrl_ScCreateSocket(This,ListenName,ListenPort,Result)	\
    ( (This)->lpVtbl -> ScCreateSocket(This,ListenName,ListenPort,Result) ) 

#define SC_IConnectionToolCtrl_ScConnectTo(This,RecipientName,RecipientPort,Result)	\
    ( (This)->lpVtbl -> ScConnectTo(This,RecipientName,RecipientPort,Result) ) 

#define SC_IConnectionToolCtrl_ScClose(This,Result)	\
    ( (This)->lpVtbl -> ScClose(This,Result) ) 

#define SC_IConnectionToolCtrl_ScGetLastError(This,Value)	\
    ( (This)->lpVtbl -> ScGetLastError(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IConnectionToolCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_DConnectionToolEvents_DISPINTERFACE_DEFINED__
#define __SC_DConnectionToolEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_DConnectionToolEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DConnectionToolEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9B5B5103-C107-4cd7-9D58-AA11408037A3")
    SC_DConnectionToolEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DConnectionToolEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DConnectionToolEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DConnectionToolEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DConnectionToolEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DConnectionToolEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DConnectionToolEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DConnectionToolEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DConnectionToolEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DConnectionToolEventsVtbl;

    interface SC_DConnectionToolEvents
    {
        CONST_VTBL struct SC_DConnectionToolEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DConnectionToolEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DConnectionToolEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DConnectionToolEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DConnectionToolEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DConnectionToolEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DConnectionToolEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DConnectionToolEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DConnectionToolEvents_DISPINTERFACE_DEFINED__ */



#ifndef __ScConstantsTools_MODULE_DEFINED__
#define __ScConstantsTools_MODULE_DEFINED__


/* module ScConstantsTools */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComConnectionToolTypeIP_TCP	=	0x1;

/* [helpstring] */ const long scComConnectionToolTypeIP_UDP	=	0x2;

#endif /* __ScConstantsTools_MODULE_DEFINED__ */

#ifndef ___DSamlight_client_ctrl_ocx_DISPINTERFACE_DEFINED__
#define ___DSamlight_client_ctrl_ocx_DISPINTERFACE_DEFINED__

/* dispinterface _DSamlight_client_ctrl_ocx */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSamlight_client_ctrl_ocx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("05D31AA6-1306-4da0-9AE2-A8771FF6FA94")
    _DSamlight_client_ctrl_ocx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSamlight_client_ctrl_ocxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSamlight_client_ctrl_ocx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSamlight_client_ctrl_ocx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSamlight_client_ctrl_ocx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSamlight_client_ctrl_ocx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSamlight_client_ctrl_ocx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSamlight_client_ctrl_ocx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSamlight_client_ctrl_ocx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSamlight_client_ctrl_ocxVtbl;

    interface _DSamlight_client_ctrl_ocx
    {
        CONST_VTBL struct _DSamlight_client_ctrl_ocxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSamlight_client_ctrl_ocx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSamlight_client_ctrl_ocx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSamlight_client_ctrl_ocx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSamlight_client_ctrl_ocx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSamlight_client_ctrl_ocx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSamlight_client_ctrl_ocx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSamlight_client_ctrl_ocx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSamlight_client_ctrl_ocx_DISPINTERFACE_DEFINED__ */


#ifndef ___DSamlight_client_ctrl_ocxEvents_DISPINTERFACE_DEFINED__
#define ___DSamlight_client_ctrl_ocxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSamlight_client_ctrl_ocxEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSamlight_client_ctrl_ocxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5F3246AD-5086-45e1-A3DA-CB9B0BA234ED")
    _DSamlight_client_ctrl_ocxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSamlight_client_ctrl_ocxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSamlight_client_ctrl_ocxEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSamlight_client_ctrl_ocxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSamlight_client_ctrl_ocxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSamlight_client_ctrl_ocxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSamlight_client_ctrl_ocxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSamlight_client_ctrl_ocxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSamlight_client_ctrl_ocxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSamlight_client_ctrl_ocxEventsVtbl;

    interface _DSamlight_client_ctrl_ocxEvents
    {
        CONST_VTBL struct _DSamlight_client_ctrl_ocxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSamlight_client_ctrl_ocxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSamlight_client_ctrl_ocxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSamlight_client_ctrl_ocxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSamlight_client_ctrl_ocxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSamlight_client_ctrl_ocxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSamlight_client_ctrl_ocxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSamlight_client_ctrl_ocxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSamlight_client_ctrl_ocxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScSamlightClientCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("5BBCB419-0B12-4f87-85AF-C0B66A73DECB")
ScSamlightClientCtrl;
#endif

EXTERN_C const CLSID CLSID_ScConnectionToolCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("27B1C6DC-6EBD-44ea-8A68-275F9DDFC8EE")
ScConnectionToolCtrl;
#endif
#endif /* __SAMLIGHT_CLIENT_CTRL_OCXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


