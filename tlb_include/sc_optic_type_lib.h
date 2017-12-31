

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:41 2017
 */
/* Compiler settings for d:\scaps\dll_source\optic\com\include\sc_optic_type_lib.idl:
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


#ifndef __sc_optic_type_lib_h__
#define __sc_optic_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IControlGalvoModLaser2D_FWD_DEFINED__
#define __SC_IControlGalvoModLaser2D_FWD_DEFINED__
typedef interface SC_IControlGalvoModLaser2D SC_IControlGalvoModLaser2D;
#endif 	/* __SC_IControlGalvoModLaser2D_FWD_DEFINED__ */


#ifndef __SC_IUserControlGalvoModLaser2D_FWD_DEFINED__
#define __SC_IUserControlGalvoModLaser2D_FWD_DEFINED__
typedef interface SC_IUserControlGalvoModLaser2D SC_IUserControlGalvoModLaser2D;
#endif 	/* __SC_IUserControlGalvoModLaser2D_FWD_DEFINED__ */


#ifndef __SC_IControlRTC1000_FWD_DEFINED__
#define __SC_IControlRTC1000_FWD_DEFINED__
typedef interface SC_IControlRTC1000 SC_IControlRTC1000;
#endif 	/* __SC_IControlRTC1000_FWD_DEFINED__ */


#ifndef __SC_IControlRTC2_FWD_DEFINED__
#define __SC_IControlRTC2_FWD_DEFINED__
typedef interface SC_IControlRTC2 SC_IControlRTC2;
#endif 	/* __SC_IControlRTC2_FWD_DEFINED__ */


#ifndef __SC_IStandardDevice_FWD_DEFINED__
#define __SC_IStandardDevice_FWD_DEFINED__
typedef interface SC_IStandardDevice SC_IStandardDevice;
#endif 	/* __SC_IStandardDevice_FWD_DEFINED__ */


#ifndef __SC_IOpticModule2D_FWD_DEFINED__
#define __SC_IOpticModule2D_FWD_DEFINED__
typedef interface SC_IOpticModule2D SC_IOpticModule2D;
#endif 	/* __SC_IOpticModule2D_FWD_DEFINED__ */


#ifndef __SC_IOpticModule3D2D_FWD_DEFINED__
#define __SC_IOpticModule3D2D_FWD_DEFINED__
typedef interface SC_IOpticModule3D2D SC_IOpticModule3D2D;
#endif 	/* __SC_IOpticModule3D2D_FWD_DEFINED__ */


#ifndef __SC_ITrigger_FWD_DEFINED__
#define __SC_ITrigger_FWD_DEFINED__
typedef interface SC_ITrigger SC_ITrigger;
#endif 	/* __SC_ITrigger_FWD_DEFINED__ */


#ifndef __SC_ICorrTable_FWD_DEFINED__
#define __SC_ICorrTable_FWD_DEFINED__
typedef interface SC_ICorrTable SC_ICorrTable;
#endif 	/* __SC_ICorrTable_FWD_DEFINED__ */


#ifndef ___DSC_DeviceDelaysPropertyCtrl_FWD_DEFINED__
#define ___DSC_DeviceDelaysPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_DeviceDelaysPropertyCtrl _DSC_DeviceDelaysPropertyCtrl;
#endif 	/* ___DSC_DeviceDelaysPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DeviceDelaysPropertyCtrlEvents_FWD_DEFINED__
#define ___DSC_DeviceDelaysPropertyCtrlEvents_FWD_DEFINED__
typedef interface _DSC_DeviceDelaysPropertyCtrlEvents _DSC_DeviceDelaysPropertyCtrlEvents;
#endif 	/* ___DSC_DeviceDelaysPropertyCtrlEvents_FWD_DEFINED__ */


#ifndef __ScDeviceDelaysPropertyCtrl_FWD_DEFINED__
#define __ScDeviceDelaysPropertyCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDeviceDelaysPropertyCtrl ScDeviceDelaysPropertyCtrl;
#else
typedef struct ScDeviceDelaysPropertyCtrl ScDeviceDelaysPropertyCtrl;
#endif /* __cplusplus */

#endif 	/* __ScDeviceDelaysPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DeviceMainPropertyCtrl_FWD_DEFINED__
#define ___DSC_DeviceMainPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_DeviceMainPropertyCtrl _DSC_DeviceMainPropertyCtrl;
#endif 	/* ___DSC_DeviceMainPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DeviceMainPropertyCtrlEvents_FWD_DEFINED__
#define ___DSC_DeviceMainPropertyCtrlEvents_FWD_DEFINED__
typedef interface _DSC_DeviceMainPropertyCtrlEvents _DSC_DeviceMainPropertyCtrlEvents;
#endif 	/* ___DSC_DeviceMainPropertyCtrlEvents_FWD_DEFINED__ */


#ifndef __ScDeviceMainPropertyCtrl_FWD_DEFINED__
#define __ScDeviceMainPropertyCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDeviceMainPropertyCtrl ScDeviceMainPropertyCtrl;
#else
typedef struct ScDeviceMainPropertyCtrl ScDeviceMainPropertyCtrl;
#endif /* __cplusplus */

#endif 	/* __ScDeviceMainPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DeviceLaserPropertyCtrl_FWD_DEFINED__
#define ___DSC_DeviceLaserPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_DeviceLaserPropertyCtrl _DSC_DeviceLaserPropertyCtrl;
#endif 	/* ___DSC_DeviceLaserPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DeviceLaserPropertyCtrlEvents_FWD_DEFINED__
#define ___DSC_DeviceLaserPropertyCtrlEvents_FWD_DEFINED__
typedef interface _DSC_DeviceLaserPropertyCtrlEvents _DSC_DeviceLaserPropertyCtrlEvents;
#endif 	/* ___DSC_DeviceLaserPropertyCtrlEvents_FWD_DEFINED__ */


#ifndef __ScDeviceLaserPropertyCtrl_FWD_DEFINED__
#define __ScDeviceLaserPropertyCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDeviceLaserPropertyCtrl ScDeviceLaserPropertyCtrl;
#else
typedef struct ScDeviceLaserPropertyCtrl ScDeviceLaserPropertyCtrl;
#endif /* __cplusplus */

#endif 	/* __ScDeviceLaserPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_OpticConfigCtrl_FWD_DEFINED__
#define ___DSC_OpticConfigCtrl_FWD_DEFINED__
typedef interface _DSC_OpticConfigCtrl _DSC_OpticConfigCtrl;
#endif 	/* ___DSC_OpticConfigCtrl_FWD_DEFINED__ */


#ifndef ___DSC_OpticConfigCtrlEvents_FWD_DEFINED__
#define ___DSC_OpticConfigCtrlEvents_FWD_DEFINED__
typedef interface _DSC_OpticConfigCtrlEvents _DSC_OpticConfigCtrlEvents;
#endif 	/* ___DSC_OpticConfigCtrlEvents_FWD_DEFINED__ */


#ifndef __ScOpticConfigCtrl_FWD_DEFINED__
#define __ScOpticConfigCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScOpticConfigCtrl ScOpticConfigCtrl;
#else
typedef struct ScOpticConfigCtrl ScOpticConfigCtrl;
#endif /* __cplusplus */

#endif 	/* __ScOpticConfigCtrl_FWD_DEFINED__ */


#ifndef __ScControlGalvoModLaser2D_FWD_DEFINED__
#define __ScControlGalvoModLaser2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlGalvoModLaser2D ScControlGalvoModLaser2D;
#else
typedef struct ScControlGalvoModLaser2D ScControlGalvoModLaser2D;
#endif /* __cplusplus */

#endif 	/* __ScControlGalvoModLaser2D_FWD_DEFINED__ */


#ifndef __ScUserControlGalvoModLaser2D_FWD_DEFINED__
#define __ScUserControlGalvoModLaser2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScUserControlGalvoModLaser2D ScUserControlGalvoModLaser2D;
#else
typedef struct ScUserControlGalvoModLaser2D ScUserControlGalvoModLaser2D;
#endif /* __cplusplus */

#endif 	/* __ScUserControlGalvoModLaser2D_FWD_DEFINED__ */


#ifndef __ScStandardDevice_FWD_DEFINED__
#define __ScStandardDevice_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScStandardDevice ScStandardDevice;
#else
typedef struct ScStandardDevice ScStandardDevice;
#endif /* __cplusplus */

#endif 	/* __ScStandardDevice_FWD_DEFINED__ */


#ifndef __ScOpticModule2D_FWD_DEFINED__
#define __ScOpticModule2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScOpticModule2D ScOpticModule2D;
#else
typedef struct ScOpticModule2D ScOpticModule2D;
#endif /* __cplusplus */

#endif 	/* __ScOpticModule2D_FWD_DEFINED__ */


#ifndef __ScOpticModule3D2D_FWD_DEFINED__
#define __ScOpticModule3D2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScOpticModule3D2D ScOpticModule3D2D;
#else
typedef struct ScOpticModule3D2D ScOpticModule3D2D;
#endif /* __cplusplus */

#endif 	/* __ScOpticModule3D2D_FWD_DEFINED__ */


#ifndef __ScControlRTC2_FWD_DEFINED__
#define __ScControlRTC2_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlRTC2 ScControlRTC2;
#else
typedef struct ScControlRTC2 ScControlRTC2;
#endif /* __cplusplus */

#endif 	/* __ScControlRTC2_FWD_DEFINED__ */


#ifndef __ScTriggerControl_FWD_DEFINED__
#define __ScTriggerControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScTriggerControl ScTriggerControl;
#else
typedef struct ScTriggerControl ScTriggerControl;
#endif /* __cplusplus */

#endif 	/* __ScTriggerControl_FWD_DEFINED__ */


#ifndef __ScCorrTable_FWD_DEFINED__
#define __ScCorrTable_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScCorrTable ScCorrTable;
#else
typedef struct ScCorrTable ScCorrTable;
#endif /* __cplusplus */

#endif 	/* __ScCorrTable_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_optic_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_pixel2d_type_lib.h"
#include "sc_control_ad_io_type_lib.h"



extern RPC_IF_HANDLE __MIDL_itf_sc_optic_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_optic_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamOpticModule2D_LIBRARY_DEFINED__
#define __ScapsSamOpticModule2D_LIBRARY_DEFINED__

/* library ScapsSamOpticModule2D */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 1)
typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0001
    {
    long info_version;
    double time_to_start_calculate;
    double time_to_start_mark;
    double time_to_end_mark;
    double time_to_end_execution;
    double time_expected;
    double speed_bitmap_scan_dir;
    double reserved[ 8 ];
    } 	sc_optic_module_time_info;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0002
    {
    long style_version;
    double jump_speed;
    double mark_speed;
    long step_period;
    long jump_delay;
    long mark_delay;
    long poly_delay;
    long laser_on_delay;
    long laser_off_delay;
    long long_delay;
    long bit8;
    long bit16;
    long enable_flags;
    long t1;
    long t2;
    long t3;
    long wobbel_amp;
    double wobbel_freq;
    long half_period;
    long stand_by;
    long reserved[ 50 ];
    } 	sc_com_rtc_style;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0003
    {
    long settings_version;
    long yag_parameter;
    long mode;
    long ext2_mode;
    long enable_laser;
    long global_8_bit;
    long global_16_bit;
    long co2_half_period;
    long co2_standby_pulse;
    long card_address;
    long rtc2_mode;
    double encoder_kx;
    double encoder_ky;
    long prog_version;
    long dll_version;
    long rtc2_version;
    long laser_mode_flags;
    long reserved[ 49 ];
    } 	sc_com_rtc_settings;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0004
    {
    long style_version;
    double speed;
    double power;
    double freq;
    long scanner_style;
    double co2_power1;
    double co2_power2;
    long reserved[ 16 ];
    } 	sc_com_optic_style;

typedef /* [public][public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0005
    {
    long info_version;
    long ident;
    long response;
    long i_0;
    long i_1;
    long i_2;
    double d_0;
    double d_1;
    double d_2;
    double d_3;
    double d_4;
    double d_5;
    long i_3;
    long i_4;
    long reserved[ 13 ];
    } 	sc_com_control_stream_info;

typedef /* [public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0006
    {
    float m_intensity;
    float m_lenght;
    } 	sc_com_pixel_puls;

typedef /* [public] */ struct __MIDL___MIDL_itf_sc_optic_type_lib_0000_0000_0007
    {
    long m_version;
    long m_mode;
    double m_origin_x;
    double m_origin_y;
    double m_dir_x;
    double m_dir_y;
    double m_pixel_step;
    double m_line_step;
    double m_line_offset;
    double m_raster_offset;
    double m_acceleration_time;
    double m_deceleration_time;
    double m_wait_delay_0;
    double m_wait_delay_1;
    double m_jump_speed;
    double m_blank_value;
    double m_limit_value;
    double m_vertical_dir_x;
    double m_vertical_dir_y;
    double reserved[ 5 ];
    } 	sc_com_raster_info;


#pragma pack(pop)
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("6615F756-9669-4aa1-BF17-65CFC4A29503") 
enum ScComStandardDeviceUSCInfoConstants
    {	scComStandardDeviceUSCInfoSharedFlagsFromScannerCpu	= 8,
	scComStandardDeviceUSCInfoExecutionListCount	= 60,
	scComStandardDeviceUSCInfoFlashMode	= 80,
	scComStandardDeviceUSCInfoTriggerCount	= 136,
	scComStandardDeviceUSCInfoOptoIn	= 208,
	scComStandardDeviceUSCInfoOptoOut	= 212,
	scComStandardDeviceUSCInfoOptoOutRet	= 216,
	scComStandardDeviceUSCInfoOptoOutMask	= 220,
	scComStandardDeviceUSCInfoAdcIn	= 240,
	scComStandardDeviceUSCInfoHeadStatus0	= 244,
	scComStandardDeviceUSCInfoHeadStatus1	= 248,
	scComStandardDeviceUSCInfoCustomValue	= 592,
	scComStandardDeviceUSCInfoStepperX	= 692,
	scComStandardDeviceUSCInfoStepperFlags	= 704,
	scComStandardDeviceUSCInfoStepperA	= 708,
	scComStandardDeviceUSCInfoStepperFlags2	= 720,
	scComStandardDeviceUSCInfoFlashStatus	= 1076
    } 	ScComStandardDeviceUSCInfoConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("2733C88C-34EE-4926-A381-C9D312ADF5AE") 
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
    } 	ScComStandardDeviceDelayConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("770A5DE6-ABC2-499e-87B5-06EA28BCB0AA") 
enum ScComStandardDeviceRasterModeConstants
    {	scComStandardDeviceRasterModeFlagBiDir	= 1,
	scComStandardDeviceRasterModeFlagJumpOverBlankPixels	= 2
    } 	ScComStandardDeviceRasterModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("3FFD8C31-DA63-4647-921F-1CEE11E5CAE2") 
enum ScComStandardDeviceMiscOpticModuleModeConstants
    {	scComStandardDeviceMiscOpticModuleModeHomeJumpAfterInitControl	= 1
    } 	ScComStandardDeviceMiscOpticModuleModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("43C0B83B-B570-4634-9988-B7471E563897") 
enum ScComStandardDeviceSpeedConstants
    {	scComStandardDeviceStyleIDMarkSpeed	= 0,
	scComStandardDeviceStyleIDJumpSpeed	= 1,
	scComStandardDeviceStyleIDJumpSpeedFU	= 2,
	scComStandardDeviceStyleIDDrillJumpSpeedFU	= 3,
	scComStandardDeviceStyleIDDrillJumpSpeed	= 4,
	scComStandardDeviceStyleIDMarkSpeedFU	= 5
    } 	ScComStandardDeviceSpeedConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("DED832BE-5DCC-45ad-9511-47D6728293ED") 
enum ScComStandardDeviceDataConstants
    {	scComStandardDeviceDataIDRS232_0	= 0,
	scComStandardDeviceDataIDRS232_1	= 1,
	scComStandardDeviceDataIDFlash	= 2,
	scComStandardDeviceDataIDEntityNameToMark	= 3,
	scComStandardDeviceDataIDEntityNameToMarkEntityNamesSeparatedBySemicolon	= 4,
	scComStandardDeviceDataIDRasterStart	= 5,
	scComStandardDeviceDataIDRasterEnd	= 6
    } 	ScComStandardDeviceDataConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("F785D27C-82D9-406f-95A9-5C0C87B56CBD") 
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
    } 	ScComStandardDeviceTimerConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("32BA5F44-747E-49f2-B378-E80C92DC8DEE") 
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
    } 	ScComStandardDeviceEnableFlagConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("1A2A9CDE-2B3D-4057-9AA6-DE1CC49995CB") 
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
    } 	ScComStandardDevicePortConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("9B54475D-DF47-423d-A3FB-7F450EE2C2B3") 
enum ScComStandardDeviceLaserPortMapConstants
    {	scComStandardDeviceMapLaserToNone	= 0,
	scComStandardDeviceMapLaserToPort1	= 1,
	scComStandardDeviceMapLaserToPort2	= 2,
	scComStandardDeviceMapLaserToDA1	= 3,
	scComStandardDeviceMapLaserToDA2	= 4
    } 	ScComStandardDeviceLaserPortMapConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("E671CDE9-930F-4cf8-BB5F-98C9713B37DD") 
enum ScComStandardDeviceEnableRS232FlagConstants
    {	scComStandardDeviceFlagEnableRS232_0	= 1
    } 	ScComStandardDeviceEnableRS232FlagConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D48C13AB-DA2D-421c-AF10-22035C59E36F") 
enum ScComStandardDeviceLaserPortSizeConstants
    {	scComStandardDeviceLaserPortSizeDefault	= 0,
	scComStandardDeviceLaserPortSize16Bit	= 1
    } 	ScComStandardDeviceLaserPortSizeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("C3A2FF6C-2626-44d6-81A8-C1C08F73F59E") 
enum ScComStandardDeviceMiscValueConstants
    {	scComStandardDeviceStyleIDMiscWobbleAmp	= 0,
	scComStandardDeviceStyleIDMiscBreakAngle	= 1,
	scComStandardDeviceMiscPrimaryHeadCorOffsetX	= 10,
	scComStandardDeviceMiscPrimaryHeadCorOffsetY	= 11,
	scComStandardDeviceMiscPrimaryHeadCorGainX	= 12,
	scComStandardDeviceMiscPrimaryHeadCorGainY	= 13,
	scComStandardDeviceMiscPrimaryHeadCorRotate	= 14,
	scComStandardDeviceMiscPrimaryHeadCorEnable	= 15,
	scComStandardDeviceMiscSetSecondaryHeadCorOffsetX	= 16,
	scComStandardDeviceMiscSetSecondaryHeadCorOffsetY	= 17,
	scComStandardDeviceMiscAddSecondaryHeadCorOffsetX	= 18,
	scComStandardDeviceMiscAddSecondaryHeadCorOffsetY	= 19,
	scComStandardDeviceMiscSecondaryHeadCorGainX	= 20,
	scComStandardDeviceMiscSecondaryHeadCorGainY	= 21,
	scComStandardDeviceMiscSecondaryHeadCorRotate	= 22,
	scComStandardDeviceMiscSecondaryHeadCorEnable	= 23,
	scComStandardDeviceStyleIDMiscWobbleAmp2	= 24,
	scComStandardDeviceMiscSkyBreakAngle	= 38,
	scComStandardDeviceMiscDontUseStyles	= 59,
	scComStandardDeviceMiscPolyDelayBreakAngle	= 60,
	scComStandardDeviceMiscLaserType	= 61,
	scComStandardDeviceMiscLaserTypeVersion	= 62,
	scComStandardDeviceMiscMinFreq	= 63,
	scComStandardDeviceMiscMaxFreq	= 64,
	scComStandardDeviceMiscMinPulseLength	= 65,
	scComStandardDeviceMiscMaxPulseLength	= 66,
	scComStandardDeviceStyleIDMiscSpecialLaserValue1	= 67,
	scComStandardDeviceStyleIDMiscSpecialLaserValue2	= 68,
	scComStandardDeviceStyleIDMiscSpecialLaserValue3	= 69,
	scComStandardDeviceStyleIDMiscSpecialLaserValue4	= 70,
	scComStandardDeviceStyleIDMiscSpecialLaserValue5	= 71,
	scComStandardDeviceStyleIDMiscPixelMapZone1	= 77,
	scComStandardDeviceStyleIDMiscPixelMapZone2	= 78,
	scComStandardDeviceStyleIDMiscPixelMapZone3	= 79,
	scComStandardDeviceStyleIDMiscPixelMapZone4	= 80,
	scComStandardDeviceStyleIDMiscPixelMapZone5	= 81,
	scComStandardDeviceStyleIDMiscPixelMapZone6	= 82,
	scComStandardDeviceMiscAdd2SecondaryHeadCorOffsetX	= 83,
	scComStandardDeviceMiscAdd2SecondaryHeadCorOffsetY	= 84,
	scComStandardDeviceStreamIDMiscSpecialLaserValue1	= 88,
	scComStandardDeviceStreamIDMiscSpecialLaserValue2	= 89,
	scComStandardDeviceStreamIDMiscSpecialLaserValue3	= 90,
	scComStandardDeviceStreamIDMiscSpecialLaserValue4	= 91,
	scComStandardDeviceStreamIDMiscSpecialLaserValue5	= 92,
	scComStandardDeviceMiscTimeExpected	= 95,
	scComStandardDeviceMiscTimeToEndMark	= 96,
	scComStandardDeviceMiscAdd2SecondaryHeadCorRotate	= 99,
	scComStandardDeviceMiscAdd2SecondaryHeadCorGainX	= 100,
	scComStandardDeviceMiscAdd2SecondaryHeadCorGainY	= 101,
	scComStandardDeviceBitmapOutputPowerFactor	= 151,
	scComStandardDeviceHideCO2Power2	= 152,
	scComStandardDeviceEnable3dSurface	= 153,
	scComStandardDevice3dSurfaceValue1	= 154,
	scComStandardDevice3dSurfaceValue2	= 155,
	scComStandardDevice3dSurfaceValue3	= 156,
	scComStandardDevice3dSurfaceValue4	= 157,
	scComStandardDevice3dSurfaceValue5	= 158,
	scComStandardDevice3dSurfaceValue6	= 159,
	scComStandardDevice3dSurfaceValue7	= 160,
	scComStandardDevice3dSurfaceValue8	= 161,
	scComStandardDevice3dSurfaceValue9	= 162,
	scComStandardDevice3dSurfaceValue10	= 163,
	scComStandardDeviceMiscCorrInvertX	= 166,
	scComStandardDeviceMiscCorrInvertY	= 167,
	scComStandardDeviceMiscCorrFlipXY	= 168,
	scComStandardDeviceMiscCorrInvertXCASE2	= 169,
	scComStandardDeviceMiscCorrInvertYCASE2	= 170,
	scComStandardDevice3dSurfaceSetType	= 173,
	scComStandardDevice3dSurfaceValue11	= 174,
	scComStandardDevice3dSurfaceValue12	= 175,
	scComStandardDevice3dSurfaceValue13	= 176,
	scComStandardDevice3dSurfaceValue14	= 177,
	scComStandardDevice3dSurfaceValue15	= 178,
	scComStandardDeviceStyleIDMiscWobbelMode	= 179,
	scComStandardDeviceMiscEnableIgnoreMask	= 180,
	scComStandardDeviceMiscResetRTCExtStop	= 181,
	ScComStandardDeviceMiscUSC2MOFCh0Counter	= 182,
	ScComStandardDeviceMiscUSC2MOFCh1Counter	= 183,
	scComStandardDeviceStreamIDMiscSpecialLaserAPD	= 184,
	scComStandardDeviceMiscUSC2ParaDelay	= 185,
	scComStandardDeviceMiscUSC2PreFrequency	= 186,
	scComStandardDeviceStyleIDMiscAccelRamp	= 189,
	scComStandardDeviceStyleIDMiscDecelRamp	= 190,
	scComStandardDeviceStyleIDMiscLineShift	= 191,
	scComStandardDeviceStyleIDMiscBitmapMode	= 192,
	scComStandardDeviceMiscCorrTable2DFitLow	= 193,
	scComStandardDeviceMiscCorrTable2DFitHigh	= 194,
	scComStandardDeviceMiscStartFromCorrTable	= 195,
	scComStandardDeviceMiscDoStoreValues	= 196,
	scComStandardDeviceMiscCorrTableDrawCalibPoints	= 197,
	scComStandardDeviceMiscCorrTableNumberOfDroppedCalibPoints	= 198
    } 	ScComStandardDeviceMiscValueConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("D31D3852-3712-46c8-86C4-30C78B1A91C5") 
enum ScComStandardDeviceMiscBitmapModeConstants
    {	scComStandardDeviceMiscBitmapModeInBitmap	= 1
    } 	ScComStandardDeviceMiscBitmapModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("0A0471EB-C044-4537-90EA-97CAB367B131") 
enum ScComStandardDeviceMiscEntityConstants
    {	scComStandardDeviceStyleIDMiscEntityDrillGeometry	= 1,
	scComStandardDeviceStyleIDMiscEntityPointPowerMap	= 2
    } 	ScComStandardDeviceMiscEntityConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("4A73751D-E3E0-4707-AA79-4CE927458309") 
enum ScComStandardDevicePathConstants
    {	scComStandardDeviceIDCorrectionFilePath0	= 0,
	scComStandardDeviceIDCorrectionFilePath1	= 1,
	scComStandardDeviceIDCorrectionFilePath2	= 2,
	scComStandardDeviceIDCorrectionFilePath3	= 3,
	scComStandardDeviceIDProgramFilePath	= 4,
	scComStandardDeviceIDDllFilePath	= 5,
	scComStandardDeviceIDFlashFilePath	= 6,
	scComStandardDeviceIDFlashSjfFilePath	= 7,
	scComStandardDeviceIDSTLPath	= 8
    } 	ScComStandardDevicePathConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("93F899B7-2DCE-4872-A3AA-7D0E3260CAEB") 
enum ScComStandardDeviceNameConstants
    {	scComStandardDeviceIDEntityName	= 0,
	scComStandardDeviceIDSerNumFormatString	= 1,
	scComStandardDeviceIDSerNumCurVal	= 2
    } 	ScComStandardDeviceNameConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("2EC384A7-0E52-4594-8881-5B724911CE37") 
enum ScComStandardDeviceMiscPenPathsAndMarkModeConstants
    {	scComStandardDeviceMiscPenPathsAndMarkModeFlagPathsActive	= 1,
	scComStandardDeviceMiscPenPathsAndMarkModeFlagSkipContour	= 0x10000,
	scComStandardDeviceMiscPenPathsAndMarkModeFlagSkipHatch1	= 0x20000,
	scComStandardDeviceMiscPenPathsAndMarkModeFlagSkipHatch2	= 0x40000
    } 	ScComStandardDeviceMiscPenPathsAndMarkModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("81220471-356B-4563-B3E3-92DD73F1A3DC") 
enum ScComOpticStyleMemberConstants
    {	scComOpticStyleMemberVersion	= 0,
	scComOpticStyleMemberSpeed	= 1,
	scComOpticStyleMemberFrequency	= 2,
	scComOpticStyleMemberPower	= 3,
	scComOpticStyleMemberScannerStyle	= 4,
	scComOpticStyleMemberCO2Power1	= 5,
	scComOpticStyleMemberCO2Power2	= 6
    } 	ScComOpticStyleMemberConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("6B029F02-0B3A-4b90-B65F-23F92BB3066D") 
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
    } 	ScComStandardDeviceOperationModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("44EA86F9-0F77-4623-A86E-4CF22C32424A") 
enum ScComStandardDeviceRS232ModeConstants
    {	scComStandardDeviceRS232Mode_1_8_NP_1	= 0,
	scComStandardDeviceRS232Mode_1_8_EP_1	= 1,
	scComStandardDeviceRS232Mode_1_8_OP_1	= 2,
	scComStandardDeviceRS232Mode_1_8_1_1	= 3,
	scComStandardDeviceRS232Mode_1_8_0_1	= 4
    } 	ScComStandardDeviceRS232ModeConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("7D2F0C28-E464-4296-B11B-197CF96AF955") 
enum ScComStandardDeviceCapsConstants
    {	scComDeviceCapsVersion	= 100,
	scComDeviceCapsWobbel	= 2,
	scComDeviceCapsMOF	= 3,
	scComDeviceCapsPixel	= 4,
	scComDeviceCapsXMinRange	= 14,
	scComDeviceCapsYMinRange	= 15,
	scComDeviceCapsXMaxRange	= 16,
	scComDeviceCapsYMaxRange	= 17,
	scComDeviceCapsLaserModeYAG	= 21,
	scComDeviceCapsLaserModeCO2	= 22,
	scComDeviceCapsLaserModeLEE	= 23,
	scComDeviceCaps3D	= 25,
	scComDeviceCapsZMinRange	= 26,
	scComDeviceCapsZMaxRange	= 27,
	scComDeviceCapsSecondaryHead	= 34,
	scComDeviceCapsMotorizedFieldSizeControl	= 41
    } 	ScComStandardDeviceCapsConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("AB7236E8-7FB0-4498-823F-4618F2F13018") 
enum ScComStandardDeviceCapsReturns
    {	scComDeviceCapsReturnNoSupport	= 0,
	scComDeviceCapsReturnSupport	= 1
    } 	ScComStandardDeviceCapsReturns;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("B3FDA034-0E64-11d6-BFE0-00055D0B73B2") 
enum ScComCorrTableConstants
    {	scComCorrTableFileTypeSCAPS_2D	= 1,
	scComCorrTableFileTypeSCANLAB_2D	= 2,
	scComCorrTableFileTypeGSI_2D	= 4
    } 	ScComCorrTableConstants;


EXTERN_C const IID LIBID_ScapsSamOpticModule2D;


#ifndef __ScConstantsOptic_MODULE_DEFINED__
#define __ScConstantsOptic_MODULE_DEFINED__


/* module ScConstantsOptic */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectControlGalvoModLaser2D	=	( 0x2000 | ( ( ( 1 * 0x1000000 )  + 0x800000 )  + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectControlRTC1000	=	( 0x2000 | ( ( ( 2 * 0x1000000 )  + 0x800000 )  + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectControlRTC2	=	( 0x2000 | ( ( ( 6 * 0x1000000 )  + 0x800000 )  + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectOpticModule2D	=	( 0x2000 | ( ( ( 4 * 0x1000000 )  + 0x800000 )  + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectStandardDevice	=	( 0x2000 | ( ( ( 8 * 0x1000000 )  + 0x800000 )  + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectCorrTable	=	( 0x2000 | ( ( 3 * 0x1000000 )  + 0x800000 )  ) ;

/* [helpstring] */ const long scComMaxOpticStyles	=	256;

/* [helpstring] */ const long scComMaxRTCStyles	=	256;

/* [helpstring] */ const long scComOpticStylesVersion	=	2;

/* [helpstring] */ const long scComRTCStylesVersion	=	1;

/* [helpstring] */ const long scComRTCSettingsVersion	=	2;

/* [helpstring] */ const long scComEnableLongDelay	=	1;

/* [helpstring] */ const long scComEnable8Bit	=	0x2;

/* [helpstring] */ const long scComEnable16Bit	=	0x4;

/* [helpstring] */ const long scComEnableWobbel	=	0x8;

/* [helpstring] */ const long scComEnableCo2List	=	0x10;

/* [helpstring] */ const long scComTriggerSourceHardware	=	1;

/* [helpstring] */ const long scComTriggerSourceSoftware	=	2;

/* [helpstring] */ const long scComLoopModeModule	=	1;

/* [helpstring] */ const long scComLoopModeControl	=	2;

/* [helpstring] */ const long scComLoopModeAutoFlush	=	0x8;

/* [helpstring] */ const long scComLoopModeAutoStop	=	0x10;

/* [helpstring] */ const long scComLoopModeNotAutoJob	=	0x20;

/* [helpstring] */ const long scComLoopModeNotAutoSequence	=	0x40;

/* [helpstring] */ const long scComLoopModeControlByEntity	=	0x80;

/* [helpstring] */ const long scComLoopModeAutoFlushBuffer	=	0x100;

/* [helpstring] */ const long scComAxisStateNone	=	0;

/* [helpstring] */ const long scComAxisStateInvertX	=	0x1;

/* [helpstring] */ const long scComAxisStateInvertY	=	0x2;

/* [helpstring] */ const long scComAxisStateFlipXY	=	0x4;

/* [helpstring] */ const long scComOpticModuleMarkOrderHatchFirst	=	0x1;

/* [helpstring] */ const long scComOpticModuleMarkOrderOnlySelected	=	0x2;

/* [helpstring] */ const long scComOpticModuleMarkOrderOnlyEntityWithSpecifiedName	=	0x4;

/* [helpstring] */ const long scComOpticModuleMarkOrderAsSpecifiedWithNames	=	0x8;

/* [helpstring] */ const long scComHeadStateTempOK	=	0x1;

/* [helpstring] */ const long scComHeadStatePowerOK	=	0x2;

/* [helpstring] */ const long scComHeadStatePositionOK	=	0x4;

/* [helpstring] */ const long scComTriggerSourceUser	=	0x3;

/* [helpstring] */ const long scComHardwareStateError	=	0;

/* [helpstring] */ const long scComHardwareStateSelected	=	0x1;

/* [helpstring] */ const long scComHardwareStateInitOK	=	0x2;

/* [helpstring] */ const long scComControlLaserSourceUndefined	=	0;

/* [helpstring] */ const long scComControlLaserSourceCO2	=	1;

/* [helpstring] */ const long scComControlLaserSourceYAG	=	0x2;

/* [helpstring] */ const long scComControlLaserSourceLEE	=	0x4;

/* [helpstring] */ const long scComOpticModuleCheckToNothing	=	0;

/* [helpstring] */ const long scComOpticModuleCheckToField	=	1;

/* [helpstring] */ const long scComOpticModuleCheckToWorkingArea	=	2;

/* [helpstring] */ const long scComOpticModuleCheckEnableZ	=	0x10000;

/* [helpstring] */ const long scComOpticModuleCheckElement	=	0x20000;

/* [helpstring] */ const long scComOpticModuleCheckDisableMessagesBox	=	0x40000;

/* [helpstring] */ const long scComOpticModuleOutputModeSimulation	=	0;

/* [helpstring] */ const long scComOpticModuleOutputModeHardware	=	1;

/* [helpstring] */ const long scComControlStreamInfoVersion	=	100;

/* [helpstring] */ const long scComControlStreamInfoIdentIdStart	=	0x10000;

/* [helpstring] */ const long scComControlStreamInfoIdentIdEnd	=	0x20000;

/* [helpstring] */ const long scComControlStreamInfoIdentIdRead	=	0x30000;

/* [helpstring] */ const long scComControlStreamInfoIdentIdReset	=	0x40000;

/* [helpstring] */ const long scComControlStreamInfoIdentIdWrite	=	0x50000;

/* [helpstring] */ const long scComControlStreamInfoIdentIdCommand	=	0x60000;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagObject	=	0x1;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagLoop	=	0x2;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagFlush	=	0x4;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagSequence	=	0x8;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagChanged	=	0x10;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagElement	=	0x20;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagGroup	=	0x40;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagNew	=	0x80;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagTime	=	0x100;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagTriggerCount	=	0x200;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagEvent	=	0x400;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagExposureInfo	=	0x800;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagProgressID	=	0x1000;

/* [helpstring] */ const long scComControlStreamInfoIdentFlagNoWait	=	0x2000;

/* [helpstring] */ const long scComControlStreamInfoResponseError	=	0;

/* [helpstring] */ const long scComControlStreamInfoResponseSend	=	0x1;

/* [helpstring] */ const long scComControlStreamInfoResponseValid	=	0x2;

/* [helpstring] */ const long scComControlStreamInfoResponsePending	=	0x3;

/* [helpstring] */ const long scComControlStreamInfoResponseDone	=	0x3;

/* [helpstring] */ const long scComControlStreamInfoResponseOk	=	0x1;

/* [helpstring] */ const long scComStandardDeviceEventIdExposureInfo	=	0x1;

/* [helpstring] */ const long scComStandardDeviceEventIdExternalStop	=	0x2;

/* [helpstring] */ const long scComStandardDeviceEventIdTriggerReady	=	0x3;

/* [helpstring] */ const long scComControlCapsVersion	=	100;

/* [helpstring] */ const long scComControlCapsWobbel	=	2;

/* [helpstring] */ const long scComControlCapsMOF	=	3;

/* [helpstring] */ const long scComControlCapsPixel	=	4;

/* [helpstring] */ const long scComControlCapsStreamControl	=	5;

/* [helpstring] */ const long scComControlCapsNumStyles	=	6;

/* [helpstring] */ const long scComControlCapsLoop	=	7;

/* [helpstring] */ const long scComControlCapsTime	=	8;

/* [helpstring] */ const long scComControlCapsTimers	=	9;

/* [helpstring] */ const long scComControlCapsDelays	=	10;

/* [helpstring] */ const long scComControlCapsSpeeds	=	11;

/* [helpstring] */ const long scComControlCapsEnableFlags	=	12;

/* [helpstring] */ const long scComControlCapsIOPorts	=	13;

/* [helpstring] */ const long scComControlCapsXMinRange	=	14;

/* [helpstring] */ const long scComControlCapsYMinRange	=	15;

/* [helpstring] */ const long scComControlCapsXMaxRange	=	16;

/* [helpstring] */ const long scComControlCapsYMaxRange	=	17;

/* [helpstring] */ const long scComControlCapsFilePaths	=	18;

/* [helpstring] */ const long scComControlCapsMovement	=	19;

/* [helpstring] */ const long scComControlCapsNames	=	20;

/* [helpstring] */ const long scComControlCapsLaserModeYAG	=	21;

/* [helpstring] */ const long scComControlCapsLaserModeCO2	=	22;

/* [helpstring] */ const long scComControlCapsLaserModeLEE	=	23;

/* [helpstring] */ const long scComControlCapsPaths	=	24;

/* [helpstring] */ const long scComControlCaps3D	=	25;

/* [helpstring] */ const long scComControlCapsZMinRange	=	26;

/* [helpstring] */ const long scComControlCapsZMaxRange	=	27;

/* [helpstring] */ const long scComControlCapsFilePathDll	=	28;

/* [helpstring] */ const long scComControlCapsFilePathProgram	=	29;

/* [helpstring] */ const long scComControlCapsFilePathCorrection0	=	30;

/* [helpstring] */ const long scComControlCapsFilePathCorrection1	=	31;

/* [helpstring] */ const long scComControlCapsFilePathCorrection2	=	32;

/* [helpstring] */ const long scComControlCapsFilePathCorrection3	=	33;

/* [helpstring] */ const long scComControlCapsSecondaryHead	=	34;

/* [helpstring] */ const long scComDeviceCapsWobbel2	=	35;

/* [helpstring] */ const long scComDeviceCapsExtensionBoard	=	36;

/* [helpstring] */ const long scComDeviceCapsProgressCounter	=	37;

/* [helpstring] */ const long scComDeviceCapsDefocus	=	38;

/* [helpstring] */ const long scComDeviceCapsDrill	=	39;

/* [helpstring] */ const long scComDeviceCapsFlash	=	40;

/* [helpstring] */ const long scComDeviceCapsHighResolution	=	42;

/* [helpstring] */ const long scComDeviceCapsLaserPortResolution	=	43;

/* [helpstring] */ const long scComControlCapsLaserOn	=	( 0x10000 | 0x1 ) ;

/* [helpstring] */ const long scComControlCapsAutoCompensate	=	( 0x10000 | 0x2 ) ;

/* [helpstring] */ const long scComControlCapsLaserOff	=	( 0x10000 | 0x3 ) ;

/* [helpstring] */ const long scComStandardDeviceCommandIDLaserOn	=	( 0x10000 | 0x1 ) ;

/* [helpstring] */ const long scComStandardDeviceCommandIDAutoCompensate	=	( 0x10000 | 0x2 ) ;

/* [helpstring] */ const long scComStandardDeviceCommandIDLaserOff	=	( 0x10000 | 0x3 ) ;

/* [helpstring] */ const long scComStandardDeviceCommandIDMoveInternalZAxis	=	( 0x10000 | 0x4 ) ;

/* [helpstring] */ const long scComStandardDeviceCommandIDSetOverwrite	=	( 0x10000 | 0x5 ) ;

/* [helpstring] */ const long scComControlStyleMinValues	=	-1;

/* [helpstring] */ const long scComControlStyleMaxValues	=	-2;

/* [helpstring] */ const long scComControlStyleDefaultValues	=	-3;

/* [helpstring] */ const long scComControlStyleResolutionValues	=	-4;

/* [helpstring] */ const long scComControlStyleUnits	=	-5;

/* [helpstring] */ const long scComControlStyleSupported	=	-6;

/* [helpstring] */ const long scComControlStyleUnitUs	=	0;

/* [helpstring] */ const long scComControlStyleUnitMs	=	1;

/* [helpstring] */ const long scComControlStyleUnitNs	=	2;

/* [helpstring] */ const long scComControlStyleUnitBitsPerSec	=	0;

/* [helpstring] */ const long scComControlStyleUnitMmPerSec	=	1;

/* [helpstring] */ const long scComControlStyleUnitBits	=	0;

/* [helpstring] */ const long scComControlStyleUnitSec	=	3;

/* [helpstring] */ const long scComControlCapsReturnStandard	=	2;

/* [helpstring] */ const long scComControlCapsReturnSupport	=	1;

/* [helpstring] */ const long scComControlCapsReturnNoSupport	=	0;

/* [helpstring] */ const long scComControlCapsReturnHardware	=	0x10000;

/* [helpstring] */ const long scComControlCapsReturnSoftware	=	0x20000;

/* [helpstring] */ const long scComControlCapsReturnSelected	=	0x40000;

/* [helpstring] */ const long scComStandardDeviceIDStyleName	=	0;

/* [helpstring] */ const long scComStandardDeviceIDCorrectionDefaultExtensionPath	=	6;

/* [helpstring] */ const long scComStandardDeviceStyleFlagPort2PanelControl	=	0x1;

/* [helpstring] */ const long scComStandardDeviceIDPortDirInput	=	0;

/* [helpstring] */ const long scComStandardDeviceIDPortDirOutput	=	1;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupStyle	=	0;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupOptoOut	=	1;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupRS232	=	2;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupOutputFlags	=	3;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupPowerRamp	=	4;

/* [helpstring] */ const long scComStandardDeviceEnableFlagGroupGlobal	=	5;

/* [helpstring] */ const long scComStandardDeviceEnableFlagSpecialLaser	=	6;

/* [helpstring] */ const long scComStandardDeviceEnableFlagSkyWriting	=	7;

/* [helpstring] */ const long scComStandardDeviceStyleIDMiscVarPolyDelay	=	2;

/* [helpstring] */ const long scComStandardDeviceStyleIDMiscEncoderKx	=	3;

/* [helpstring] */ const long scComStandardDeviceStyleIDMiscEncoderKy	=	4;

/* [helpstring] */ const long scComStandardDeviceMiscWobbleAmp	=	0;

/* [helpstring] */ const long scComStandardDeviceMiscBreakAngle	=	1;

/* [helpstring] */ const long scComStandardDeviceMiscVarPolyDelay	=	2;

/* [helpstring] */ const long scComStandardDeviceMiscEncoderKx	=	3;

/* [helpstring] */ const long scComStandardDeviceMiscEncoderKy	=	4;

/* [helpstring] */ const long scComStandardDeviceMiscMinPolyOutputStep	=	5;

/* [helpstring] */ const long scComStandardDeviceMiscFieldScaleFactorX	=	6;

/* [helpstring] */ const long scComStandardDeviceMiscFieldScaleFactorY	=	7;

/* [helpstring] */ const long scComStandardDeviceMiscFieldScaleFactorZ	=	8;

/* [helpstring] */ const long scComStandardDeviceMiscTeachInFU	=	9;

/* [helpstring] */ const long scComStandardDeviceMiscOutputRotAngle	=	25;

/* [helpstring] */ const long scComStandardDeviceMiscDefocus	=	26;

/* [helpstring] */ const long scComStandardDeviceMiscMOFExtStartDelayDelay	=	27;

/* [helpstring] */ const long scComStandardDeviceMiscMOFExtStartDelayEncoder	=	28;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSimExtStartDelay	=	29;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSimExtStartEncoder	=	30;

/* [helpstring] */ const long scComStandardDeviceMiscCutStepSize	=	31;

/* [helpstring] */ const long scComStandardDeviceMiscHEXVersion	=	32;

/* [helpstring] */ const long scComStandardDeviceMiscFPGAVersion	=	33;

/* [helpstring] */ const long scComStandardDeviceMiscUSBVersion	=	34;

/* [helpstring] */ const long scComStandardDeviceMiscDLLVersion	=	35;

/* [helpstring] */ const long scComStandardDeviceMiscNumClients	=	36;

/* [helpstring] */ const long scComStandardDeviceMiscShowServer	=	37;

/* [helpstring] */ const long scComStandardDeviceMiscBufferCount	=	39;

/* [helpstring] */ const long scComStandardDeviceMiscLastAutoCompensateResult	=	40;

/* [helpstring] */ const long scComStandardDeviceMiscEnableCorrfileInput	=	41;

/* [helpstring] */ const long scComStandardDeviceMiscDefocusList	=	42;

/* [helpstring] */ const long scComStandardDeviceMiscPowerRampUp	=	43;

/* [helpstring] */ const long scComStandardDeviceMiscPowerRampDown	=	44;

/* [helpstring] */ const long scComStandardDeviceMiscDrillNumPulses	=	45;

/* [helpstring] */ const long scComStandardDeviceMiscInputInhibitLaser	=	46;

/* [helpstring] */ const long scComStandardDeviceMiscEnableSendZCorr	=	47;

/* [helpstring] */ const long scComStandardDeviceMiscDrillDimension	=	48;

/* [helpstring] */ const long scComStandardDeviceMiscDrillType	=	49;

/* [helpstring] */ const long scComStandardDeviceMiscOperationMode2	=	50;

/* [helpstring] */ const long scComStandardDeviceMiscHeadID	=	51;

/* [helpstring] */ const long scComStandardDeviceMiscDownloadCorrectionFile	=	52;

/* [helpstring] */ const long scComStandardDeviceMiscAxisState	=	53;

/* [helpstring] */ const long scComStandardDeviceMiscSerialNumberStartValue	=	54;

/* [helpstring] */ const long scComStandardDeviceMiscSerialNumberIncValue	=	55;

/* [helpstring] */ const long scComStandardDeviceMiscSerialNumberResetValue	=	56;

/* [helpstring] */ const long scComStandardDeviceMiscSerialNumberBeatCount	=	57;

/* [helpstring] */ const long scComStandardDeviceMiscMOFSpecialFlags	=	58;

/* [helpstring] */ const long scComStandardDeviceMiscSetJobSelectMode	=	72;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrRadius1	=	73;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrRadius2	=	74;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrOffset	=	75;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrScale	=	76;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrA	=	85;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrB	=	86;

/* [helpstring] */ const long scComStandardDeviceMisc3DCorrC	=	87;

/* [helpstring] */ const long scComStandardDeviceMiscSerialNumberTimeOffset	=	93;

/* [helpstring] */ const long scComStandardDeviceMiscSendCorrTableValues	=	94;

/* [helpstring] */ const long scComStandardDeviceMiscOutputOffsetX	=	97;

/* [helpstring] */ const long scComStandardDeviceMiscOutputOffsetY	=	98;

/* [helpstring] */ const long scComStandardDeviceMiscMOFCh0SimulateEncoder	=	102;

/* [helpstring] */ const long scComStandardDeviceMiscMOFCh1SimulateEncoder	=	103;

/* [helpstring] */ const long scComStandardDeviceMiscMOFCh0UseYChannel	=	104;

/* [helpstring] */ const long scComStandardDeviceMiscMOFCh1UseYChannel	=	105;

/* [helpstring] */ const long scComStandardDeviceMiscFlashOptimizeMode	=	106;

/* [helpstring] */ const long scComStandardDeviceMiscExecServerCommand	=	107;

/* [helpstring] */ const long scComStandardDeviceMiscSetupParameterValue	=	108;

/* [helpstring] */ const long scComStandardDeviceMiscSetupParameterOffset	=	109;

/* [helpstring] */ const long scComStandardDeviceMiscIPGEmissionEnableSwitchOffModeActive	=	110;

/* [helpstring] */ const long scComStandardDeviceMiscIPGEmissionEnableSwitchOffModeDelay	=	111;

/* [helpstring] */ const long scComStandardDeviceMiscIPGEmissionEnableSwitchOffModeLength	=	112;

/* [helpstring] */ const long scComStandardDeviceMiscTotalExternalTriggerCount	=	113;

/* [helpstring] */ const long scComStandardDeviceMiscBitmapMode	=	114;

/* [helpstring] */ const long scComStandardDeviceMiscTotalCompletedExternalTriggerCount	=	115;

/* [helpstring] */ const long scComStandardDeviceMiscBufferThreshold	=	116;

/* [helpstring] */ const long scComStandardDeviceMiscOpticModuleMode	=	117;

/* [helpstring] */ const long scComStandardDeviceMiscDotMarkFlags	=	118;

/* [helpstring] */ const long scComStandardDeviceMiscDotMarkGridX	=	119;

/* [helpstring] */ const long scComStandardDeviceMiscDotMarkGridY	=	120;

/* [helpstring] */ const long scComStandardDeviceMiscBufferTransferSize	=	121;

/* [helpstring] */ const long scComStandardDeviceCorrMode	=	122;

/* [helpstring] */ const long scComStandardDeviceMiscMinVarJumpDelayInUs	=	123;

/* [helpstring] */ const long scComStandardDeviceMiscMinVarJumpLengthLimitInBit	=	124;

/* [helpstring] */ const long scComStandardDeviceMiscMOFInvertOffset	=	125;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0Enable	=	126;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1Enable	=	127;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0Simulate	=	128;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1Simulate	=	129;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0Swap	=	130;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1Swap	=	131;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0Mode	=	132;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1Mode	=	133;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0Multiplier	=	134;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1Multiplier	=	135;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0RotX	=	136;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh0RotY	=	137;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1RotX	=	138;

/* [helpstring] */ const long scComStandardDeviceMiscUSC2MOFCh1RotY	=	139;

/* [helpstring] */ const long scComStandardDeviceMiscPointCloudDeltaDrillTimeForFirstPoint	=	140;

/* [helpstring] */ const long scComStandardDeviceMiscFieldXMin	=	141;

/* [helpstring] */ const long scComStandardDeviceMiscFieldXMax	=	142;

/* [helpstring] */ const long scComStandardDeviceMiscFieldYMin	=	143;

/* [helpstring] */ const long scComStandardDeviceMiscFieldYMax	=	144;

/* [helpstring] */ const long scComStandardDeviceMiscWorkingAreaXMin	=	145;

/* [helpstring] */ const long scComStandardDeviceMiscWorkingAreaXMax	=	146;

/* [helpstring] */ const long scComStandardDeviceMiscWorkingAreaYMin	=	147;

/* [helpstring] */ const long scComStandardDeviceMiscWorkingAreaYMax	=	148;

/* [helpstring] */ const long scComStandardDeviceMiscPreFrequency	=	149;

/* [helpstring] */ const long scComStandardDeviceMultiHeadUseFullPens	=	150;

/* [helpstring] */ const long scComStandardDeviceStartHoleScan	=	164;

/* [helpstring] */ const long scComStandardDeviceMiscZOut	=	165;

/* [helpstring] */ const long scComStandardDeviceMiscOffset3DCorrtableLockup	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceMiscOffset3DCorrtableLookup	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceMiscIndexDistanceMirrorsMM	=	0;

/* [helpstring] */ const long scComStandardDeviceMiscIndexRadiusSecondMirrorMM	=	1;

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

/* [helpstring] */ const long scComStandardDeviceHandleIDResponseToDevice	=	1;

/* [helpstring] */ const long scComStandardDeviceIDCurrentPos	=	0;

/* [helpstring] */ const long scComStandardDeviceIDHomePos	=	1;

/* [helpstring] */ const long scComStandardDeviceIDMOFStartPos	=	2;

/* [helpstring] */ const long scComStandardDeviceIDMOFDir	=	3;

/* [helpstring] */ const long scComStandardDeviceIDMOFEncoder	=	4;

/* [helpstring] */ const long scComStandardDeviceIDCorrected	=	7;

/* [helpstring] */ const long scComStandardDeviceIDCorrectedFU	=	8;

/* [helpstring] */ const long scComStandardDeviceIDTeachIn	=	9;

/* [helpstring] */ const long scComStandardDeviceIDTeachInFU	=	10;

/* [helpstring] */ const long scComStandardDeviceIDZLimits	=	11;

/* [helpstring] */ const long scComStandardDeviceIDDrillPos	=	12;

/* [helpstring] */ const long scComStandardDeviceOperationModeIdMask	=	0x7f000000;

/* [helpstring] */ const long scComStandardDeviceOperationModeInvertPortLaser	=	0x8;

/* [helpstring] */ const long scComStandardDeviceOperationModeEnablePanelControl	=	0x10;

/* [helpstring] */ const long scComStandardDeviceOperationModeOptimiseScannerDelay	=	0x20;

/* [helpstring] */ const long scComStandardDeviceOperationModeJumpDeltaZ	=	0x100;

/* [helpstring] */ const long scComStandardDeviceOperationModeWobble2	=	0x1000;

/* [helpstring] */ const long scComStandardDeviceOperationModeDisableHomeJumpSequence	=	0x2000;

/* [helpstring] */ const long scComStandardDeviceOperationModeDisableForceUpdate	=	0x4000;

/* [helpstring] */ const long scComStandardDeviceOperationModeAnalog	=	0x8000;

/* [helpstring] */ const long scComStandardDeviceOperationModeDisableMarkInProgressFlag	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceOperationModeDisableScannerLaserInit	=	0x20000;

/* [helpstring] */ const long scComStandardDeviceOperationMode2StoreToFlash	=	0x1;

/* [helpstring] */ const long scComStandardDeviceOperationMode2RunFromFlash	=	0x2;

/* [helpstring] */ const long scComStandardDeviceOperationMode2IPGLaser	=	0x4;

/* [helpstring] */ const long scComStandardDeviceOperationMode2PixelAMToLaserPort	=	0x8;

/* [helpstring] */ const long scComStandardDeviceOperationMode2YAG5	=	0x10;

/* [helpstring] */ const long scComStandardDeviceOperationMode2InvertLaserOn	=	0x20;

/* [helpstring] */ const long scComStandardDeviceOperationMode2InvertLaser1_2	=	0x40;

/* [helpstring] */ const long scComStandardDeviceOperationMode2EnableAnalogIn	=	0x80;

/* [helpstring] */ const long scComStandardDeviceOperationMode2LaserMode6	=	0x100;

/* [helpstring] */ const long scComStandardDeviceOperationMode2UseLaserOnPulsesList	=	0x200;

/* [helpstring] */ const long scComStandardDeviceOperationMode2LaserOnPulsesListUseRisingEdge	=	0x400;

/* [helpstring] */ const long scComStandardDeviceOperationMode2CombineDacAWithLaserGate	=	0x800;

/* [helpstring] */ const long scComStandardDeviceOperationMode2CombineDacBWithLaserGate	=	0x1000;

/* [helpstring] */ const long scComStandardDeviceOperationMode2SetDacAToDacB	=	0x2000;

/* [helpstring] */ const long scComStandardDeviceOperationMode2DoNotCutOffPulsesOnLaserOn	=	0x4000;

/* [helpstring] */ const long scComStandardDeviceOperationMode2EnableMCBSP	=	0x8000;

/* [helpstring] */ const long scComStandardDeviceOperationMode2OutputSynchronization	=	0x10000;

/* [helpstring] */ const long scComControlStreamInfoSequenceIdJob	=	0;

/* [helpstring] */ const long scComControlStreamInfoSequenceIdMain	=	1;

/* [helpstring] */ const long scComControlStreamInfoObjectIdFont	=	0;

/* [helpstring] */ const long scComControlStreamInfoObjectIdFontChar	=	1;

/* [helpstring] */ const long scComControlStreamInfoObjectIdSerNum	=	2;

/* [helpstring] */ const long scComControlStreamInfoObjectIdEntity	=	3;

/* [helpstring] */ const long scComControlStreamInfoEventIdSimExtStart	=	1;

/* [helpstring] */ const long scComControlStreamInfoEventIdWaitForTrigger	=	2;

/* [helpstring] */ const long scComControlStreamInfoEventIdRecorder	=	3;

/* [helpstring] */ const long scComStandardDeviceHeadStateTempOK	=	0x1;

/* [helpstring] */ const long scComStandardDeviceHeadStatePowerOK	=	0x2;

/* [helpstring] */ const long scComStandardDeviceHeadStatePositionOK	=	0x4;

/* [helpstring] */ const long scComStandardDeviceHeadStateStopSignal	=	0x10;

/* [helpstring] */ const long scComStandardDeviceHeadStateStartSignal	=	0x20;

/* [helpstring] */ const long scComStandardDeviceHeadStateWasStopSignal	=	0x40;

/* [helpstring] */ const long scComStandardDeviceHeadStateWasInternalStartSignal	=	0x80;

/* [helpstring] */ const long scComStandardDeviceHeadStateWasExternalStartSignal	=	0x100;

/* [helpstring] */ const long scComStandardDeviceHeadStateResetStopSignal	=	0x200;

/* [helpstring] */ const long scComStandardDeviceHeadStateScannerOutOfDataLaserOn	=	0x400;

/* [helpstring] */ const long scComStandardDeviceHeadStateScannerOutOfData	=	0x800;

/* [helpstring] */ const long scComStandardDeviceHeadStateScannerOverFlow	=	0x1000;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusDeviceConnected	=	0x1;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusDeviceOK	=	0x2;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusDeviceMissing	=	0x8;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusDeviceUSC1	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusDeviceUSC2	=	0x20000;

/* [helpstring] */ const long scComStandardDeviceUSCServerStatusReadError	=	0x10000000;

/* [helpstring] */ const long scComStandardDeviceFlashStatusDetected	=	0x1;

/* [helpstring] */ const long scComStandardDeviceFlashStatusFlashMode	=	0x2;

/* [helpstring] */ const long scComStandardDeviceFlashStatusRun	=	0x4;

/* [helpstring] */ const long scComStandardDeviceFlashStatusRS232Mode	=	0x8;

/* [helpstring] */ const long scComStandardDeviceFlashStatusJobIOSelect	=	0x20;

/* [helpstring] */ const long scComStandardDeviceFlashStatusErrorMessage	=	0x40;

/* [helpstring] */ const long scComStandardDeviceFlashStatusInitAtStart	=	0x80;

/* [helpstring] */ const long scComStandardDeviceFlashStatusJTAGDetected	=	0x100;

/* [helpstring] */ const long scComStandardDeviceFlashStatusInvertOptoOut	=	0x200;

/* [helpstring] */ const long scComStandardDeviceFlashStatusTelnet	=	0x800;

/* [helpstring] */ const long scComStandardDeviceFlashStatusJobIOSelectExt	=	0x10000;

/* [helpstring] */ const long scComStandardDeviceFlashStatusPCMode	=	0x100000;

/* [helpstring] */ const long scComStandardDeviceFlashStatusStepper	=	0x400000;

/* [helpstring] */ const long scComStandardDeviceFlashCommandNumJobs	=	0x1;

/* [helpstring] */ const long scComStandardDeviceFlashCommandJobInfo	=	0x2;

/* [helpstring] */ const long scComStandardDeviceFlashCommandDeleteJob	=	0x3;

/* [helpstring] */ const long scComStandardDeviceFlashCommandLoadJob	=	0x4;

/* [helpstring] */ const long scComStandardDeviceFlashCommandRunJob	=	0x5;

/* [helpstring] */ const long scComStandardDeviceFlashCommandSend	=	0x6;

/* [helpstring] */ const long scComStandardDeviceFlashCommandGet	=	0x7;

/* [helpstring] */ const long scComStandardDeviceFlashCommandInit	=	0x8;

/* [helpstring] */ const long scComStandardDeviceFlashCommandMergeSJF	=	0x9;

/* [helpstring] */ const long scComStandardDeviceFlashCommandExtractSJF	=	0xa;

/* [helpstring] */ const long scComStandardDeviceFlashCommandFlashStatus	=	0xb;

/* [helpstring] */ const long scComStandardDeviceFlashCommandPathMode	=	0xc;

/* [helpstring] */ const long scComStandardDeviceFlashCommandSaveJob	=	0xd;

/* [helpstring] */ const long scComStandardDeviceFlashCommandCheckDevice	=	0xe;

/* [helpstring] */ const long scComStandardDeviceFlashCommandGetDeviceInfo	=	0xf;

/* [helpstring] */ const long scComStandardDeviceFlashCommandSetEEPromInfo	=	0x10;

/* [helpstring] */ const long scComStandardDeviceFlashCommandGetEEPromInfo	=	0x11;

/* [helpstring] */ const long scComStandardDeviceFlashCommandSetDeviceInfo	=	0x12;

/* [helpstring] */ const long scComStandardDeviceFlashCommandConvertJob	=	0x13;

/* [helpstring] */ const long scComStandardDeviceFlashCommandCopyFile	=	0x14;

/* [helpstring] */ const long scComStandardDeviceFlashCommandExecuteCMD	=	0x15;

/* [helpstring] */ const long scComStandardDeviceFlashCommandSaveJobs	=	0x16;

/* [helpstring] */ const long scComStandardDeviceFlashCommandLoadJobs	=	0x17;

/* [helpstring] */ const long scComStandardDeviceFlashCommandFlashStatusMask	=	0x18;

/* [helpstring] */ const long scComStandardDeviceFlashInfoSoftVersion	=	1;

/* [helpstring] */ const long scComStandardDeviceFlashInfoFPGAVersion	=	2;

/* [helpstring] */ const long scComStandardDeviceFlashInfoIdent	=	3;

/* [helpstring] */ const long scComStandardDeviceFlashInfoUSC1Ident	=	4;

/* [helpstring] */ const long scComStandardDeviceFlashInfoCorrectionFileName	=	5;

/* [helpstring] */ const long scComStandardDeviceFlashInfoFlashCard	=	6;

/* [helpstring] */ const long scComStandardDeviceFlashCompletePath	=	1;

/* [helpstring] */ const long scComStandardDeviceExecutionExtStop	=	0x1;

/* [helpstring] */ const long scComStandardDeviceExecutionBreak	=	0x2;

/* [helpstring] */ const long scComStandardDeviceExecutionWaitForTrigger	=	0x4;

/* [helpstring] */ const long scComStandardDeviceAutoCompensateIdRef	=	0x1;

/* [helpstring] */ const long scComStandardDeviceAutoCompensateIdCal	=	0x2;

/* [helpstring] */ const long scComStandardDeviceAutoCompensateIdOff	=	0x3;

/* [helpstring] */ const long scComStandardDeviceAutoCompensateIdTrailResult	=	0x4;

/* [helpstring] */ const long scComCorrTableModeSpecialUseDacsAsZ	=	0x1;

/* [helpstring] */ const long scComStandardDeviceFlashOptimizeModeFlagRemoveLoopLaserOnOff	=	0x1;

#endif /* __ScConstantsOptic_MODULE_DEFINED__ */

#ifndef __SC_IControlGalvoModLaser2D_INTERFACE_DEFINED__
#define __SC_IControlGalvoModLaser2D_INTERFACE_DEFINED__

/* interface SC_IControlGalvoModLaser2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlGalvoModLaser2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D3EC401-7B79-11d1-9747-008048EEE00C")
    SC_IControlGalvoModLaser2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoad( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSave( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            double speed,
            long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdentString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSetsFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSetsToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlGalvoModLaser2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlGalvoModLaser2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlGalvoModLaser2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlGalvoModLaser2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoad )( 
            SC_IControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSave )( 
            SC_IControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSets )( 
            SC_IControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSets )( 
            SC_IControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IControlGalvoModLaser2D * This,
            double speed,
            long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ BSTR *IdentString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSetsFromArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSetsToArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromDocArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToDocArchive )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOperationMode )( 
            SC_IControlGalvoModLaser2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOperationMode )( 
            SC_IControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Mode);
        
        END_INTERFACE
    } SC_IControlGalvoModLaser2DVtbl;

    interface SC_IControlGalvoModLaser2D
    {
        CONST_VTBL struct SC_IControlGalvoModLaser2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlGalvoModLaser2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlGalvoModLaser2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlGalvoModLaser2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlGalvoModLaser2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlGalvoModLaser2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlGalvoModLaser2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlGalvoModLaser2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlGalvoModLaser2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IControlGalvoModLaser2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IControlGalvoModLaser2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IControlGalvoModLaser2D_get_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,SetId) ) 

#define SC_IControlGalvoModLaser2D_put_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,SetId) ) 

#define SC_IControlGalvoModLaser2D_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IControlGalvoModLaser2D_ScLoad(This,FileName)	\
    ( (This)->lpVtbl -> ScLoad(This,FileName) ) 

#define SC_IControlGalvoModLaser2D_ScSave(This,FileName)	\
    ( (This)->lpVtbl -> ScSave(This,FileName) ) 

#define SC_IControlGalvoModLaser2D_ScLoadStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadStyleSets(This,FileName) ) 

#define SC_IControlGalvoModLaser2D_ScSaveStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveStyleSets(This,FileName) ) 

#define SC_IControlGalvoModLaser2D_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IControlGalvoModLaser2D_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IControlGalvoModLaser2D_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IControlGalvoModLaser2D_ScGetIdentString(This,IdentString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdentString) ) 

#define SC_IControlGalvoModLaser2D_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IControlGalvoModLaser2D_ScLoadStyleSetsFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadStyleSetsFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlGalvoModLaser2D_ScSaveStyleSetsToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveStyleSetsToArchive(This,Archive,Name,Error) ) 

#define SC_IControlGalvoModLaser2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlGalvoModLaser2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IControlGalvoModLaser2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IControlGalvoModLaser2D_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IControlGalvoModLaser2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IControlGalvoModLaser2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IControlGalvoModLaser2D_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IControlGalvoModLaser2D_ScMoveAbs(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z,Result) ) 

#define SC_IControlGalvoModLaser2D_ScModulate(This,OnOff,Result)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff,Result) ) 

#define SC_IControlGalvoModLaser2D_ScStartExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStartExecution(This,Result) ) 

#define SC_IControlGalvoModLaser2D_ScStopExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStopExecution(This,Result) ) 

#define SC_IControlGalvoModLaser2D_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IControlGalvoModLaser2D_ScDownLoadObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId,Result) ) 

#define SC_IControlGalvoModLaser2D_ScLoadFromDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlGalvoModLaser2D_ScSaveToDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlGalvoModLaser2D_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IControlGalvoModLaser2D_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IControlGalvoModLaser2D_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IControlGalvoModLaser2D_ScReleaseObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId,Result) ) 

#define SC_IControlGalvoModLaser2D_ScSetTriggerControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control,Result) ) 

#define SC_IControlGalvoModLaser2D_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IControlGalvoModLaser2D_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlGalvoModLaser2D_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlGalvoModLaser2D_put_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScOperationMode(This,Mode) ) 

#define SC_IControlGalvoModLaser2D_get_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScOperationMode(This,Mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlGalvoModLaser2D_INTERFACE_DEFINED__ */


#ifndef __SC_IUserControlGalvoModLaser2D_INTERFACE_DEFINED__
#define __SC_IUserControlGalvoModLaser2D_INTERFACE_DEFINED__

/* interface SC_IUserControlGalvoModLaser2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IUserControlGalvoModLaser2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D5DBFCD2-2C8A-11d3-9B02-008048EEE00C")
    SC_IUserControlGalvoModLaser2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoad( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSave( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            double speed,
            long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdentString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSetsFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSetsToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceCLSID( 
            /* [retval][out] */ CLSID *DeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAttachDevice( 
            /* [in] */ CLSID DeviceId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IUserControlGalvoModLaser2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IUserControlGalvoModLaser2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IUserControlGalvoModLaser2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoad )( 
            SC_IUserControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSave )( 
            SC_IUserControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSets )( 
            SC_IUserControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSets )( 
            SC_IUserControlGalvoModLaser2D * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IUserControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IUserControlGalvoModLaser2D * This,
            double speed,
            long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ BSTR *IdentString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IUserControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSetsFromArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSetsToArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IUserControlGalvoModLaser2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserControl )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserControl )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromDocArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToDocArchive )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOperationMode )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOperationMode )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceCLSID )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [retval][out] */ CLSID *DeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAttachDevice )( 
            SC_IUserControlGalvoModLaser2D * This,
            /* [in] */ CLSID DeviceId);
        
        END_INTERFACE
    } SC_IUserControlGalvoModLaser2DVtbl;

    interface SC_IUserControlGalvoModLaser2D
    {
        CONST_VTBL struct SC_IUserControlGalvoModLaser2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IUserControlGalvoModLaser2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IUserControlGalvoModLaser2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IUserControlGalvoModLaser2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IUserControlGalvoModLaser2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IUserControlGalvoModLaser2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IUserControlGalvoModLaser2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IUserControlGalvoModLaser2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IUserControlGalvoModLaser2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IUserControlGalvoModLaser2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IUserControlGalvoModLaser2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IUserControlGalvoModLaser2D_get_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,SetId) ) 

#define SC_IUserControlGalvoModLaser2D_put_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,SetId) ) 

#define SC_IUserControlGalvoModLaser2D_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IUserControlGalvoModLaser2D_ScLoad(This,FileName)	\
    ( (This)->lpVtbl -> ScLoad(This,FileName) ) 

#define SC_IUserControlGalvoModLaser2D_ScSave(This,FileName)	\
    ( (This)->lpVtbl -> ScSave(This,FileName) ) 

#define SC_IUserControlGalvoModLaser2D_ScLoadStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadStyleSets(This,FileName) ) 

#define SC_IUserControlGalvoModLaser2D_ScSaveStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveStyleSets(This,FileName) ) 

#define SC_IUserControlGalvoModLaser2D_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IUserControlGalvoModLaser2D_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IUserControlGalvoModLaser2D_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IUserControlGalvoModLaser2D_ScGetIdentString(This,IdentString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdentString) ) 

#define SC_IUserControlGalvoModLaser2D_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IUserControlGalvoModLaser2D_ScLoadStyleSetsFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadStyleSetsFromArchive(This,Archive,Name,Error) ) 

#define SC_IUserControlGalvoModLaser2D_ScSaveStyleSetsToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveStyleSetsToArchive(This,Archive,Name,Error) ) 

#define SC_IUserControlGalvoModLaser2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IUserControlGalvoModLaser2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IUserControlGalvoModLaser2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IUserControlGalvoModLaser2D_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IUserControlGalvoModLaser2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IUserControlGalvoModLaser2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IUserControlGalvoModLaser2D_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IUserControlGalvoModLaser2D_ScSetUserControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetUserControl(This,Control) ) 

#define SC_IUserControlGalvoModLaser2D_ScGetUserControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetUserControl(This,Control) ) 

#define SC_IUserControlGalvoModLaser2D_ScMoveAbs(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScModulate(This,OnOff,Result)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScStartExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStartExecution(This,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScStopExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStopExecution(This,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IUserControlGalvoModLaser2D_ScDownLoadObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScLoadFromDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IUserControlGalvoModLaser2D_ScSaveToDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IUserControlGalvoModLaser2D_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IUserControlGalvoModLaser2D_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IUserControlGalvoModLaser2D_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IUserControlGalvoModLaser2D_ScReleaseObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScSetTriggerControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control,Result) ) 

#define SC_IUserControlGalvoModLaser2D_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IUserControlGalvoModLaser2D_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IUserControlGalvoModLaser2D_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IUserControlGalvoModLaser2D_put_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScOperationMode(This,Mode) ) 

#define SC_IUserControlGalvoModLaser2D_get_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScOperationMode(This,Mode) ) 

#define SC_IUserControlGalvoModLaser2D_ScGetDeviceCLSID(This,DeviceId)	\
    ( (This)->lpVtbl -> ScGetDeviceCLSID(This,DeviceId) ) 

#define SC_IUserControlGalvoModLaser2D_ScAttachDevice(This,DeviceId)	\
    ( (This)->lpVtbl -> ScAttachDevice(This,DeviceId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IUserControlGalvoModLaser2D_INTERFACE_DEFINED__ */


#ifndef __SC_IControlRTC1000_INTERFACE_DEFINED__
#define __SC_IControlRTC1000_INTERFACE_DEFINED__

/* interface SC_IControlRTC1000 */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlRTC1000;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D3EC402-7B79-11d1-9747-008048EEE00C")
    SC_IControlRTC1000 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoad( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSave( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            double speed,
            long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdentString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkSpeed( 
            /* [retval][out] */ double *MarkSpeed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkSpeed( 
            /* [in] */ double MarkSpeed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJumpSpeed( 
            /* [retval][out] */ double *JumpSpeed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJumpSpeed( 
            /* [in] */ double JumpSpeed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadProgram( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadCorrection( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectStyle( 
            long StyleId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddStyle( 
            /* [retval][out] */ long *StyleId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDeleteStyle( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT1( 
            /* [retval][out] */ long *T1) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT1( 
            /* [in] */ long T1) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT2( 
            /* [retval][out] */ long *T2) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT2( 
            /* [in] */ long T2) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT3( 
            /* [retval][out] */ long *T3) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT3( 
            /* [in] */ long T3) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLaserOnDelay( 
            /* [retval][out] */ long *LO) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLaserOnDelay( 
            /* [in] */ long LO) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLaserOffDelay( 
            /* [retval][out] */ long *LF) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLaserOffDelay( 
            /* [in] */ long LF) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJumpDelay( 
            /* [retval][out] */ long *SD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJumpDelay( 
            /* [in] */ long SD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkDelay( 
            /* [retval][out] */ long *MD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkDelay( 
            /* [in] */ long MD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPolyDelay( 
            /* [retval][out] */ long *PD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPolyDelay( 
            /* [in] */ long PD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sc8Bit( 
            /* [retval][out] */ long *Bits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Sc8Bit( 
            /* [in] */ long Bit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sc16Bit( 
            /* [retval][out] */ long *Bits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Sc16Bit( 
            /* [in] */ long Bit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLongDelay( 
            /* [retval][out] */ long *Delay) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLongDelay( 
            /* [in] */ long Delay) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScYagParameter( 
            /* [retval][out] */ long *Parameter) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScYagParameter( 
            /* [in] */ long Parameter) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCo2StandByPuls( 
            /* [retval][out] */ long *Puls) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCo2StandByPuls( 
            /* [in] */ long Puls) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCo2HalfPeriod( 
            /* [retval][out] */ long *Period) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCo2HalfPeriod( 
            /* [in] */ long Period) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableLongDelay( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableLongDelay( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSetsFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSetsToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHideOutputWindow( 
            /* [retval][out] */ long *Hide) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHideOutputWindow( 
            /* [in] */ long Hide) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRTCControlMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCControlMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScScannerStyle( 
            /* [retval][out] */ sc_com_rtc_style *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScScannerStyle( 
            /* [in] */ sc_com_rtc_style *Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScProgramFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScProgramFileName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCorrectionFileName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCorrectionFileName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDllFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDllFileName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRTCSettings( 
            /* [retval][out] */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCSettings( 
            /* [in] */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScScannerStyleName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScScannerStyleName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisableStopBeep( 
            /* [retval][out] */ long *Disable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisableStopBeep( 
            /* [in] */ long Disable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExecuteListSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExecuteListSize( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlRTC1000Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlRTC1000 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlRTC1000 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlRTC1000 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlRTC1000 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlRTC1000 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlRTC1000 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlRTC1000 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoad )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSave )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSets )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSets )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IControlRTC1000 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IControlRTC1000 * This,
            double speed,
            long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ BSTR *IdentString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IControlRTC1000 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkSpeed )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ double *MarkSpeed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkSpeed )( 
            SC_IControlRTC1000 * This,
            /* [in] */ double MarkSpeed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJumpSpeed )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ double *JumpSpeed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJumpSpeed )( 
            SC_IControlRTC1000 * This,
            /* [in] */ double JumpSpeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadProgram )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadCorrection )( 
            SC_IControlRTC1000 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            SC_IControlRTC1000 * This,
            long StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddStyle )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDeleteStyle )( 
            SC_IControlRTC1000 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT1 )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *T1);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT1 )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long T1);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT2 )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *T2);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT2 )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long T2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT3 )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *T3);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT3 )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long T3);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLaserOnDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *LO);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLaserOnDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long LO);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLaserOffDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *LF);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLaserOffDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long LF);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJumpDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *SD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJumpDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long SD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *MD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long MD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPolyDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *PD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPolyDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long PD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sc8Bit )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Bits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Sc8Bit )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Bit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sc16Bit )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Bits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Sc16Bit )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Bit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLongDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Delay);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLongDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Delay);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScYagParameter )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Parameter);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScYagParameter )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Parameter);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCo2StandByPuls )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Puls);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCo2StandByPuls )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Puls);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCo2HalfPeriod )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Period);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCo2HalfPeriod )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Period);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableLongDelay )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableLongDelay )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSetsFromArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSetsToArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHideOutputWindow )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Hide);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHideOutputWindow )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Hide);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCControlMode )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCControlMode )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IControlRTC1000 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScScannerStyle )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ sc_com_rtc_style *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScScannerStyle )( 
            SC_IControlRTC1000 * This,
            /* [in] */ sc_com_rtc_style *Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScProgramFileName )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScProgramFileName )( 
            SC_IControlRTC1000 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCorrectionFileName )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCorrectionFileName )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDllFileName )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDllFileName )( 
            SC_IControlRTC1000 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCSettings )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCSettings )( 
            SC_IControlRTC1000 * This,
            /* [in] */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScScannerStyleName )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScScannerStyleName )( 
            SC_IControlRTC1000 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableStopBeep )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Disable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableStopBeep )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Disable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExecuteListSize )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExecuteListSize )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IControlRTC1000 * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IControlRTC1000 * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromDocArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToDocArchive )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IControlRTC1000 * This,
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOperationMode )( 
            SC_IControlRTC1000 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOperationMode )( 
            SC_IControlRTC1000 * This,
            /* [retval][out] */ long *Mode);
        
        END_INTERFACE
    } SC_IControlRTC1000Vtbl;

    interface SC_IControlRTC1000
    {
        CONST_VTBL struct SC_IControlRTC1000Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlRTC1000_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlRTC1000_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlRTC1000_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlRTC1000_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlRTC1000_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlRTC1000_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlRTC1000_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlRTC1000_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IControlRTC1000_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IControlRTC1000_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IControlRTC1000_get_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,SetId) ) 

#define SC_IControlRTC1000_put_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,SetId) ) 

#define SC_IControlRTC1000_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IControlRTC1000_ScLoad(This,FileName)	\
    ( (This)->lpVtbl -> ScLoad(This,FileName) ) 

#define SC_IControlRTC1000_ScSave(This,FileName)	\
    ( (This)->lpVtbl -> ScSave(This,FileName) ) 

#define SC_IControlRTC1000_ScLoadStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadStyleSets(This,FileName) ) 

#define SC_IControlRTC1000_ScSaveStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveStyleSets(This,FileName) ) 

#define SC_IControlRTC1000_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IControlRTC1000_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IControlRTC1000_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IControlRTC1000_ScGetIdentString(This,IdentString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdentString) ) 

#define SC_IControlRTC1000_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IControlRTC1000_get_ScMarkSpeed(This,MarkSpeed)	\
    ( (This)->lpVtbl -> get_ScMarkSpeed(This,MarkSpeed) ) 

#define SC_IControlRTC1000_put_ScMarkSpeed(This,MarkSpeed)	\
    ( (This)->lpVtbl -> put_ScMarkSpeed(This,MarkSpeed) ) 

#define SC_IControlRTC1000_get_ScJumpSpeed(This,JumpSpeed)	\
    ( (This)->lpVtbl -> get_ScJumpSpeed(This,JumpSpeed) ) 

#define SC_IControlRTC1000_put_ScJumpSpeed(This,JumpSpeed)	\
    ( (This)->lpVtbl -> put_ScJumpSpeed(This,JumpSpeed) ) 

#define SC_IControlRTC1000_ScLoadProgram(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadProgram(This,FileName) ) 

#define SC_IControlRTC1000_ScLoadCorrection(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadCorrection(This,FileName) ) 

#define SC_IControlRTC1000_ScSelectStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,StyleId) ) 

#define SC_IControlRTC1000_ScAddStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScAddStyle(This,StyleId) ) 

#define SC_IControlRTC1000_ScDeleteStyle(This)	\
    ( (This)->lpVtbl -> ScDeleteStyle(This) ) 

#define SC_IControlRTC1000_get_ScT1(This,T1)	\
    ( (This)->lpVtbl -> get_ScT1(This,T1) ) 

#define SC_IControlRTC1000_put_ScT1(This,T1)	\
    ( (This)->lpVtbl -> put_ScT1(This,T1) ) 

#define SC_IControlRTC1000_get_ScT2(This,T2)	\
    ( (This)->lpVtbl -> get_ScT2(This,T2) ) 

#define SC_IControlRTC1000_put_ScT2(This,T2)	\
    ( (This)->lpVtbl -> put_ScT2(This,T2) ) 

#define SC_IControlRTC1000_get_ScT3(This,T3)	\
    ( (This)->lpVtbl -> get_ScT3(This,T3) ) 

#define SC_IControlRTC1000_put_ScT3(This,T3)	\
    ( (This)->lpVtbl -> put_ScT3(This,T3) ) 

#define SC_IControlRTC1000_get_ScLaserOnDelay(This,LO)	\
    ( (This)->lpVtbl -> get_ScLaserOnDelay(This,LO) ) 

#define SC_IControlRTC1000_put_ScLaserOnDelay(This,LO)	\
    ( (This)->lpVtbl -> put_ScLaserOnDelay(This,LO) ) 

#define SC_IControlRTC1000_get_ScLaserOffDelay(This,LF)	\
    ( (This)->lpVtbl -> get_ScLaserOffDelay(This,LF) ) 

#define SC_IControlRTC1000_put_ScLaserOffDelay(This,LF)	\
    ( (This)->lpVtbl -> put_ScLaserOffDelay(This,LF) ) 

#define SC_IControlRTC1000_get_ScJumpDelay(This,SD)	\
    ( (This)->lpVtbl -> get_ScJumpDelay(This,SD) ) 

#define SC_IControlRTC1000_put_ScJumpDelay(This,SD)	\
    ( (This)->lpVtbl -> put_ScJumpDelay(This,SD) ) 

#define SC_IControlRTC1000_get_ScMarkDelay(This,MD)	\
    ( (This)->lpVtbl -> get_ScMarkDelay(This,MD) ) 

#define SC_IControlRTC1000_put_ScMarkDelay(This,MD)	\
    ( (This)->lpVtbl -> put_ScMarkDelay(This,MD) ) 

#define SC_IControlRTC1000_get_ScPolyDelay(This,PD)	\
    ( (This)->lpVtbl -> get_ScPolyDelay(This,PD) ) 

#define SC_IControlRTC1000_put_ScPolyDelay(This,PD)	\
    ( (This)->lpVtbl -> put_ScPolyDelay(This,PD) ) 

#define SC_IControlRTC1000_get_Sc8Bit(This,Bits)	\
    ( (This)->lpVtbl -> get_Sc8Bit(This,Bits) ) 

#define SC_IControlRTC1000_put_Sc8Bit(This,Bit)	\
    ( (This)->lpVtbl -> put_Sc8Bit(This,Bit) ) 

#define SC_IControlRTC1000_get_Sc16Bit(This,Bits)	\
    ( (This)->lpVtbl -> get_Sc16Bit(This,Bits) ) 

#define SC_IControlRTC1000_put_Sc16Bit(This,Bit)	\
    ( (This)->lpVtbl -> put_Sc16Bit(This,Bit) ) 

#define SC_IControlRTC1000_get_ScLongDelay(This,Delay)	\
    ( (This)->lpVtbl -> get_ScLongDelay(This,Delay) ) 

#define SC_IControlRTC1000_put_ScLongDelay(This,Delay)	\
    ( (This)->lpVtbl -> put_ScLongDelay(This,Delay) ) 

#define SC_IControlRTC1000_get_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> get_ScYagParameter(This,Parameter) ) 

#define SC_IControlRTC1000_put_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> put_ScYagParameter(This,Parameter) ) 

#define SC_IControlRTC1000_get_ScCo2StandByPuls(This,Puls)	\
    ( (This)->lpVtbl -> get_ScCo2StandByPuls(This,Puls) ) 

#define SC_IControlRTC1000_put_ScCo2StandByPuls(This,Puls)	\
    ( (This)->lpVtbl -> put_ScCo2StandByPuls(This,Puls) ) 

#define SC_IControlRTC1000_get_ScCo2HalfPeriod(This,Period)	\
    ( (This)->lpVtbl -> get_ScCo2HalfPeriod(This,Period) ) 

#define SC_IControlRTC1000_put_ScCo2HalfPeriod(This,Period)	\
    ( (This)->lpVtbl -> put_ScCo2HalfPeriod(This,Period) ) 

#define SC_IControlRTC1000_get_ScEnableLongDelay(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableLongDelay(This,Enable) ) 

#define SC_IControlRTC1000_put_ScEnableLongDelay(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableLongDelay(This,Enable) ) 

#define SC_IControlRTC1000_ScLoadStyleSetsFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadStyleSetsFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC1000_ScSaveStyleSetsToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveStyleSetsToArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC1000_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC1000_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC1000_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IControlRTC1000_get_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> get_ScHideOutputWindow(This,Hide) ) 

#define SC_IControlRTC1000_put_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> put_ScHideOutputWindow(This,Hide) ) 

#define SC_IControlRTC1000_get_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScRTCControlMode(This,Mode) ) 

#define SC_IControlRTC1000_put_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScRTCControlMode(This,Mode) ) 

#define SC_IControlRTC1000_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IControlRTC1000_get_ScScannerStyle(This,Style)	\
    ( (This)->lpVtbl -> get_ScScannerStyle(This,Style) ) 

#define SC_IControlRTC1000_put_ScScannerStyle(This,Style)	\
    ( (This)->lpVtbl -> put_ScScannerStyle(This,Style) ) 

#define SC_IControlRTC1000_get_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScProgramFileName(This,Name) ) 

#define SC_IControlRTC1000_put_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScProgramFileName(This,Name) ) 

#define SC_IControlRTC1000_get_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> get_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IControlRTC1000_put_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> put_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IControlRTC1000_get_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScDllFileName(This,Name) ) 

#define SC_IControlRTC1000_put_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScDllFileName(This,Name) ) 

#define SC_IControlRTC1000_get_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> get_ScRTCSettings(This,Settings) ) 

#define SC_IControlRTC1000_put_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> put_ScRTCSettings(This,Settings) ) 

#define SC_IControlRTC1000_get_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> get_ScScannerStyleName(This,Name) ) 

#define SC_IControlRTC1000_put_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> put_ScScannerStyleName(This,Name) ) 

#define SC_IControlRTC1000_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IControlRTC1000_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IControlRTC1000_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IControlRTC1000_get_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> get_ScDisableStopBeep(This,Disable) ) 

#define SC_IControlRTC1000_put_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> put_ScDisableStopBeep(This,Disable) ) 

#define SC_IControlRTC1000_get_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScExecuteListSize(This,Size) ) 

#define SC_IControlRTC1000_put_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScExecuteListSize(This,Size) ) 

#define SC_IControlRTC1000_ScMoveAbs(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z,Result) ) 

#define SC_IControlRTC1000_ScModulate(This,OnOff,Result)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff,Result) ) 

#define SC_IControlRTC1000_ScStartExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStartExecution(This,Result) ) 

#define SC_IControlRTC1000_ScStopExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStopExecution(This,Result) ) 

#define SC_IControlRTC1000_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IControlRTC1000_ScDownLoadObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId,Result) ) 

#define SC_IControlRTC1000_ScLoadFromDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlRTC1000_ScSaveToDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlRTC1000_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IControlRTC1000_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IControlRTC1000_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IControlRTC1000_ScReleaseObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId,Result) ) 

#define SC_IControlRTC1000_ScSetTriggerControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control,Result) ) 

#define SC_IControlRTC1000_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IControlRTC1000_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlRTC1000_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlRTC1000_put_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScOperationMode(This,Mode) ) 

#define SC_IControlRTC1000_get_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScOperationMode(This,Mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlRTC1000_INTERFACE_DEFINED__ */


#ifndef __SC_IControlRTC2_INTERFACE_DEFINED__
#define __SC_IControlRTC2_INTERFACE_DEFINED__

/* interface SC_IControlRTC2 */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlRTC2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED8B1D92-B114-11d1-8C4A-008048EEDCB8")
    SC_IControlRTC2 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoad( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSave( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            double speed,
            long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdentString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkSpeed( 
            /* [retval][out] */ double *MarkSpeed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkSpeed( 
            /* [in] */ double MarkSpeed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJumpSpeed( 
            /* [retval][out] */ double *JumpSpeed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJumpSpeed( 
            /* [in] */ double JumpSpeed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadProgram( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadCorrection( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectStyle( 
            long StyleId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddStyle( 
            /* [retval][out] */ long *StyleId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDeleteStyle( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT1( 
            /* [retval][out] */ long *T1) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT1( 
            /* [in] */ long T1) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT2( 
            /* [retval][out] */ long *T2) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT2( 
            /* [in] */ long T2) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScT3( 
            /* [retval][out] */ long *T3) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScT3( 
            /* [in] */ long T3) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLaserOnDelay( 
            /* [retval][out] */ long *LO) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLaserOnDelay( 
            /* [in] */ long LO) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLaserOffDelay( 
            /* [retval][out] */ long *LF) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLaserOffDelay( 
            /* [in] */ long LF) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJumpDelay( 
            /* [retval][out] */ long *SD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJumpDelay( 
            /* [in] */ long SD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkDelay( 
            /* [retval][out] */ long *MD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkDelay( 
            /* [in] */ long MD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPolyDelay( 
            /* [retval][out] */ long *PD) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPolyDelay( 
            /* [in] */ long PD) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sc8Bit( 
            /* [retval][out] */ long *Bits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Sc8Bit( 
            /* [in] */ long Bit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Sc16Bit( 
            /* [retval][out] */ long *Bits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Sc16Bit( 
            /* [in] */ long Bit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLongDelay( 
            /* [retval][out] */ long *Delay) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLongDelay( 
            /* [in] */ long Delay) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScYagParameter( 
            /* [retval][out] */ long *Parameter) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScYagParameter( 
            /* [in] */ long Parameter) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCo2StandByPuls( 
            /* [retval][out] */ long *Puls) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCo2StandByPuls( 
            /* [in] */ long Puls) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCo2HalfPeriod( 
            /* [retval][out] */ long *Period) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCo2HalfPeriod( 
            /* [in] */ long Period) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableLongDelay( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableLongDelay( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSetsFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSetsToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHideOutputWindow( 
            /* [retval][out] */ long *Hide) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHideOutputWindow( 
            /* [in] */ long Hide) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRTCControlMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCControlMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScScannerStyle( 
            /* [retval][out] */ sc_com_rtc_style *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScScannerStyle( 
            /* [in] */ sc_com_rtc_style *Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScProgramFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScProgramFileName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCorrectionFileName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCorrectionFileName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDllFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDllFileName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRTCSettings( 
            /* [retval][out] */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCSettings( 
            /* [in] */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScScannerStyleName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScScannerStyleName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisableStopBeep( 
            /* [retval][out] */ long *Disable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisableStopBeep( 
            /* [in] */ long Disable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExecuteListSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExecuteListSize( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZOffset( 
            /* [retval][out] */ long *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZOffset( 
            /* [in] */ long Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadStatus( 
            /* [retval][out] */ long *Status) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMOF16Bit( 
            /* [retval][out] */ long *Bits) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDA1( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDA1( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDA2( 
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDA2( 
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlRTC2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlRTC2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlRTC2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlRTC2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlRTC2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlRTC2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlRTC2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlRTC2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IControlRTC2 * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IControlRTC2 * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoad )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSave )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSets )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSets )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IControlRTC2 * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IControlRTC2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IControlRTC2 * This,
            double speed,
            long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ BSTR *IdentString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IControlRTC2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkSpeed )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ double *MarkSpeed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkSpeed )( 
            SC_IControlRTC2 * This,
            /* [in] */ double MarkSpeed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJumpSpeed )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ double *JumpSpeed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJumpSpeed )( 
            SC_IControlRTC2 * This,
            /* [in] */ double JumpSpeed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadProgram )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadCorrection )( 
            SC_IControlRTC2 * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            SC_IControlRTC2 * This,
            long StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddStyle )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDeleteStyle )( 
            SC_IControlRTC2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT1 )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *T1);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT1 )( 
            SC_IControlRTC2 * This,
            /* [in] */ long T1);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT2 )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *T2);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT2 )( 
            SC_IControlRTC2 * This,
            /* [in] */ long T2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScT3 )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *T3);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScT3 )( 
            SC_IControlRTC2 * This,
            /* [in] */ long T3);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLaserOnDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *LO);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLaserOnDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long LO);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLaserOffDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *LF);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLaserOffDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long LF);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJumpDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *SD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJumpDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long SD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *MD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long MD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPolyDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *PD);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPolyDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long PD);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sc8Bit )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Bits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Sc8Bit )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Bit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Sc16Bit )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Bits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Sc16Bit )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Bit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLongDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Delay);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLongDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Delay);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScYagParameter )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Parameter);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScYagParameter )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Parameter);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCo2StandByPuls )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Puls);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCo2StandByPuls )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Puls);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCo2HalfPeriod )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Period);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCo2HalfPeriod )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Period);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableLongDelay )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableLongDelay )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSetsFromArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSetsToArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHideOutputWindow )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Hide);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHideOutputWindow )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Hide);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCControlMode )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCControlMode )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IControlRTC2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScScannerStyle )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ sc_com_rtc_style *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScScannerStyle )( 
            SC_IControlRTC2 * This,
            /* [in] */ sc_com_rtc_style *Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScProgramFileName )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScProgramFileName )( 
            SC_IControlRTC2 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCorrectionFileName )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCorrectionFileName )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDllFileName )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDllFileName )( 
            SC_IControlRTC2 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCSettings )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCSettings )( 
            SC_IControlRTC2 * This,
            /* [in] */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScScannerStyleName )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScScannerStyleName )( 
            SC_IControlRTC2 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableStopBeep )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Disable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableStopBeep )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Disable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExecuteListSize )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExecuteListSize )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadStatus )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Status);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMOF16Bit )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Bits);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDA1 )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDA1 )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDA2 )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDA2 )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IControlRTC2 * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IControlRTC2 * This,
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IControlRTC2 * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IControlRTC2 * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromDocArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToDocArchive )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IControlRTC2 * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IControlRTC2 * This,
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOperationMode )( 
            SC_IControlRTC2 * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOperationMode )( 
            SC_IControlRTC2 * This,
            /* [retval][out] */ long *Mode);
        
        END_INTERFACE
    } SC_IControlRTC2Vtbl;

    interface SC_IControlRTC2
    {
        CONST_VTBL struct SC_IControlRTC2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlRTC2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlRTC2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlRTC2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlRTC2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlRTC2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlRTC2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlRTC2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlRTC2_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IControlRTC2_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IControlRTC2_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IControlRTC2_get_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,SetId) ) 

#define SC_IControlRTC2_put_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,SetId) ) 

#define SC_IControlRTC2_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IControlRTC2_ScLoad(This,FileName)	\
    ( (This)->lpVtbl -> ScLoad(This,FileName) ) 

#define SC_IControlRTC2_ScSave(This,FileName)	\
    ( (This)->lpVtbl -> ScSave(This,FileName) ) 

#define SC_IControlRTC2_ScLoadStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadStyleSets(This,FileName) ) 

#define SC_IControlRTC2_ScSaveStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveStyleSets(This,FileName) ) 

#define SC_IControlRTC2_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IControlRTC2_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IControlRTC2_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IControlRTC2_ScGetIdentString(This,IdentString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdentString) ) 

#define SC_IControlRTC2_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IControlRTC2_get_ScMarkSpeed(This,MarkSpeed)	\
    ( (This)->lpVtbl -> get_ScMarkSpeed(This,MarkSpeed) ) 

#define SC_IControlRTC2_put_ScMarkSpeed(This,MarkSpeed)	\
    ( (This)->lpVtbl -> put_ScMarkSpeed(This,MarkSpeed) ) 

#define SC_IControlRTC2_get_ScJumpSpeed(This,JumpSpeed)	\
    ( (This)->lpVtbl -> get_ScJumpSpeed(This,JumpSpeed) ) 

#define SC_IControlRTC2_put_ScJumpSpeed(This,JumpSpeed)	\
    ( (This)->lpVtbl -> put_ScJumpSpeed(This,JumpSpeed) ) 

#define SC_IControlRTC2_ScLoadProgram(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadProgram(This,FileName) ) 

#define SC_IControlRTC2_ScLoadCorrection(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadCorrection(This,FileName) ) 

#define SC_IControlRTC2_ScSelectStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,StyleId) ) 

#define SC_IControlRTC2_ScAddStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScAddStyle(This,StyleId) ) 

#define SC_IControlRTC2_ScDeleteStyle(This)	\
    ( (This)->lpVtbl -> ScDeleteStyle(This) ) 

#define SC_IControlRTC2_get_ScT1(This,T1)	\
    ( (This)->lpVtbl -> get_ScT1(This,T1) ) 

#define SC_IControlRTC2_put_ScT1(This,T1)	\
    ( (This)->lpVtbl -> put_ScT1(This,T1) ) 

#define SC_IControlRTC2_get_ScT2(This,T2)	\
    ( (This)->lpVtbl -> get_ScT2(This,T2) ) 

#define SC_IControlRTC2_put_ScT2(This,T2)	\
    ( (This)->lpVtbl -> put_ScT2(This,T2) ) 

#define SC_IControlRTC2_get_ScT3(This,T3)	\
    ( (This)->lpVtbl -> get_ScT3(This,T3) ) 

#define SC_IControlRTC2_put_ScT3(This,T3)	\
    ( (This)->lpVtbl -> put_ScT3(This,T3) ) 

#define SC_IControlRTC2_get_ScLaserOnDelay(This,LO)	\
    ( (This)->lpVtbl -> get_ScLaserOnDelay(This,LO) ) 

#define SC_IControlRTC2_put_ScLaserOnDelay(This,LO)	\
    ( (This)->lpVtbl -> put_ScLaserOnDelay(This,LO) ) 

#define SC_IControlRTC2_get_ScLaserOffDelay(This,LF)	\
    ( (This)->lpVtbl -> get_ScLaserOffDelay(This,LF) ) 

#define SC_IControlRTC2_put_ScLaserOffDelay(This,LF)	\
    ( (This)->lpVtbl -> put_ScLaserOffDelay(This,LF) ) 

#define SC_IControlRTC2_get_ScJumpDelay(This,SD)	\
    ( (This)->lpVtbl -> get_ScJumpDelay(This,SD) ) 

#define SC_IControlRTC2_put_ScJumpDelay(This,SD)	\
    ( (This)->lpVtbl -> put_ScJumpDelay(This,SD) ) 

#define SC_IControlRTC2_get_ScMarkDelay(This,MD)	\
    ( (This)->lpVtbl -> get_ScMarkDelay(This,MD) ) 

#define SC_IControlRTC2_put_ScMarkDelay(This,MD)	\
    ( (This)->lpVtbl -> put_ScMarkDelay(This,MD) ) 

#define SC_IControlRTC2_get_ScPolyDelay(This,PD)	\
    ( (This)->lpVtbl -> get_ScPolyDelay(This,PD) ) 

#define SC_IControlRTC2_put_ScPolyDelay(This,PD)	\
    ( (This)->lpVtbl -> put_ScPolyDelay(This,PD) ) 

#define SC_IControlRTC2_get_Sc8Bit(This,Bits)	\
    ( (This)->lpVtbl -> get_Sc8Bit(This,Bits) ) 

#define SC_IControlRTC2_put_Sc8Bit(This,Bit)	\
    ( (This)->lpVtbl -> put_Sc8Bit(This,Bit) ) 

#define SC_IControlRTC2_get_Sc16Bit(This,Bits)	\
    ( (This)->lpVtbl -> get_Sc16Bit(This,Bits) ) 

#define SC_IControlRTC2_put_Sc16Bit(This,Bit)	\
    ( (This)->lpVtbl -> put_Sc16Bit(This,Bit) ) 

#define SC_IControlRTC2_get_ScLongDelay(This,Delay)	\
    ( (This)->lpVtbl -> get_ScLongDelay(This,Delay) ) 

#define SC_IControlRTC2_put_ScLongDelay(This,Delay)	\
    ( (This)->lpVtbl -> put_ScLongDelay(This,Delay) ) 

#define SC_IControlRTC2_get_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> get_ScYagParameter(This,Parameter) ) 

#define SC_IControlRTC2_put_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> put_ScYagParameter(This,Parameter) ) 

#define SC_IControlRTC2_get_ScCo2StandByPuls(This,Puls)	\
    ( (This)->lpVtbl -> get_ScCo2StandByPuls(This,Puls) ) 

#define SC_IControlRTC2_put_ScCo2StandByPuls(This,Puls)	\
    ( (This)->lpVtbl -> put_ScCo2StandByPuls(This,Puls) ) 

#define SC_IControlRTC2_get_ScCo2HalfPeriod(This,Period)	\
    ( (This)->lpVtbl -> get_ScCo2HalfPeriod(This,Period) ) 

#define SC_IControlRTC2_put_ScCo2HalfPeriod(This,Period)	\
    ( (This)->lpVtbl -> put_ScCo2HalfPeriod(This,Period) ) 

#define SC_IControlRTC2_get_ScEnableLongDelay(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableLongDelay(This,Enable) ) 

#define SC_IControlRTC2_put_ScEnableLongDelay(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableLongDelay(This,Enable) ) 

#define SC_IControlRTC2_ScLoadStyleSetsFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadStyleSetsFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC2_ScSaveStyleSetsToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveStyleSetsToArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC2_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC2_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IControlRTC2_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IControlRTC2_get_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> get_ScHideOutputWindow(This,Hide) ) 

#define SC_IControlRTC2_put_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> put_ScHideOutputWindow(This,Hide) ) 

#define SC_IControlRTC2_get_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScRTCControlMode(This,Mode) ) 

#define SC_IControlRTC2_put_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScRTCControlMode(This,Mode) ) 

#define SC_IControlRTC2_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IControlRTC2_get_ScScannerStyle(This,Style)	\
    ( (This)->lpVtbl -> get_ScScannerStyle(This,Style) ) 

#define SC_IControlRTC2_put_ScScannerStyle(This,Style)	\
    ( (This)->lpVtbl -> put_ScScannerStyle(This,Style) ) 

#define SC_IControlRTC2_get_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScProgramFileName(This,Name) ) 

#define SC_IControlRTC2_put_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScProgramFileName(This,Name) ) 

#define SC_IControlRTC2_get_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> get_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IControlRTC2_put_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> put_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IControlRTC2_get_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScDllFileName(This,Name) ) 

#define SC_IControlRTC2_put_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScDllFileName(This,Name) ) 

#define SC_IControlRTC2_get_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> get_ScRTCSettings(This,Settings) ) 

#define SC_IControlRTC2_put_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> put_ScRTCSettings(This,Settings) ) 

#define SC_IControlRTC2_get_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> get_ScScannerStyleName(This,Name) ) 

#define SC_IControlRTC2_put_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> put_ScScannerStyleName(This,Name) ) 

#define SC_IControlRTC2_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IControlRTC2_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IControlRTC2_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IControlRTC2_get_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> get_ScDisableStopBeep(This,Disable) ) 

#define SC_IControlRTC2_put_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> put_ScDisableStopBeep(This,Disable) ) 

#define SC_IControlRTC2_get_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScExecuteListSize(This,Size) ) 

#define SC_IControlRTC2_put_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScExecuteListSize(This,Size) ) 

#define SC_IControlRTC2_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IControlRTC2_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IControlRTC2_ScGetHeadStatus(This,Status)	\
    ( (This)->lpVtbl -> ScGetHeadStatus(This,Status) ) 

#define SC_IControlRTC2_ScGetMOF16Bit(This,Bits)	\
    ( (This)->lpVtbl -> ScGetMOF16Bit(This,Bits) ) 

#define SC_IControlRTC2_get_ScDA1(This,Value)	\
    ( (This)->lpVtbl -> get_ScDA1(This,Value) ) 

#define SC_IControlRTC2_put_ScDA1(This,Value)	\
    ( (This)->lpVtbl -> put_ScDA1(This,Value) ) 

#define SC_IControlRTC2_get_ScDA2(This,Value)	\
    ( (This)->lpVtbl -> get_ScDA2(This,Value) ) 

#define SC_IControlRTC2_put_ScDA2(This,Value)	\
    ( (This)->lpVtbl -> put_ScDA2(This,Value) ) 

#define SC_IControlRTC2_ScMoveAbs(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z,Result) ) 

#define SC_IControlRTC2_ScModulate(This,OnOff,Result)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff,Result) ) 

#define SC_IControlRTC2_ScStartExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStartExecution(This,Result) ) 

#define SC_IControlRTC2_ScStopExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStopExecution(This,Result) ) 

#define SC_IControlRTC2_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IControlRTC2_ScDownLoadObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId,Result) ) 

#define SC_IControlRTC2_ScLoadFromDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlRTC2_ScSaveToDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlRTC2_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IControlRTC2_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IControlRTC2_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IControlRTC2_ScReleaseObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId,Result) ) 

#define SC_IControlRTC2_ScSetTriggerControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control,Result) ) 

#define SC_IControlRTC2_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IControlRTC2_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlRTC2_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IControlRTC2_put_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScOperationMode(This,Mode) ) 

#define SC_IControlRTC2_get_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScOperationMode(This,Mode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlRTC2_INTERFACE_DEFINED__ */


#ifndef __SC_IStandardDevice_INTERFACE_DEFINED__
#define __SC_IStandardDevice_INTERFACE_DEFINED__

/* interface SC_IStandardDevice */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IStandardDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19F02608-DA44-11d3-9B9D-008048EEE00C")
    SC_IStandardDevice : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoad( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSave( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSets( 
            BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            double speed,
            long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdentString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStyleSetsFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveStyleSetsToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToDocArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceCLSID( 
            /* [retval][out] */ CLSID *DeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAttachDevice( 
            /* [in] */ CLSID DeviceId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSpeed( 
            /* [in] */ long SpeedId,
            /* [in] */ double Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSpeed( 
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTimer( 
            /* [in] */ long TimerId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTimer( 
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDelay( 
            /* [in] */ long DelayId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDelay( 
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetFilePath( 
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFilePath( 
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetName( 
            /* [in] */ long NameId,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetName( 
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPortValue( 
            /* [in] */ long PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPortValue( 
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPortDir( 
            /* [in] */ long PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPortDir( 
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IStandardDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IStandardDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IStandardDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IStandardDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IStandardDevice * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IStandardDevice * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IStandardDevice * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IStandardDevice * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IStandardDevice * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IStandardDevice * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoad )( 
            SC_IStandardDevice * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSave )( 
            SC_IStandardDevice * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSets )( 
            SC_IStandardDevice * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSets )( 
            SC_IStandardDevice * This,
            BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IStandardDevice * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IStandardDevice * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IStandardDevice * This,
            double speed,
            long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ BSTR *IdentString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IStandardDevice * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStyleSetsFromArchive )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveStyleSetsToArchive )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IStandardDevice * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IStandardDevice * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IStandardDevice * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserControl )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserControl )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IStandardDevice * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IStandardDevice * This,
            /* [in] */ long OnOff,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IStandardDevice * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IStandardDevice * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromDocArchive )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToDocArchive )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IStandardDevice * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IStandardDevice * This,
            /* [in] */ long ObjectId,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IStandardDevice * This,
            /* [in] */ LPDISPATCH Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IStandardDevice * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOperationMode )( 
            SC_IStandardDevice * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOperationMode )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceCLSID )( 
            SC_IStandardDevice * This,
            /* [retval][out] */ CLSID *DeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAttachDevice )( 
            SC_IStandardDevice * This,
            /* [in] */ CLSID DeviceId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IStandardDevice * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IStandardDevice * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IStandardDevice * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IStandardDevice * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IStandardDevice * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IStandardDevice * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IStandardDevice * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IStandardDevice * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IStandardDevice * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IStandardDevice * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IStandardDevice * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IStandardDevice * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IStandardDevice * This,
            /* [in] */ long FlagsSet,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IStandardDevice * This,
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IStandardDevice * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IStandardDevice * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapPenValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long Index,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapPenValue )( 
            SC_IStandardDevice * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        END_INTERFACE
    } SC_IStandardDeviceVtbl;

    interface SC_IStandardDevice
    {
        CONST_VTBL struct SC_IStandardDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IStandardDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IStandardDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IStandardDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IStandardDevice_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IStandardDevice_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IStandardDevice_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IStandardDevice_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IStandardDevice_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IStandardDevice_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IStandardDevice_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IStandardDevice_get_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,SetId) ) 

#define SC_IStandardDevice_put_ScStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,SetId) ) 

#define SC_IStandardDevice_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IStandardDevice_ScLoad(This,FileName)	\
    ( (This)->lpVtbl -> ScLoad(This,FileName) ) 

#define SC_IStandardDevice_ScSave(This,FileName)	\
    ( (This)->lpVtbl -> ScSave(This,FileName) ) 

#define SC_IStandardDevice_ScLoadStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadStyleSets(This,FileName) ) 

#define SC_IStandardDevice_ScSaveStyleSets(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveStyleSets(This,FileName) ) 

#define SC_IStandardDevice_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IStandardDevice_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IStandardDevice_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IStandardDevice_ScGetIdentString(This,IdentString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdentString) ) 

#define SC_IStandardDevice_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IStandardDevice_ScLoadStyleSetsFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadStyleSetsFromArchive(This,Archive,Name,Error) ) 

#define SC_IStandardDevice_ScSaveStyleSetsToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveStyleSetsToArchive(This,Archive,Name,Error) ) 

#define SC_IStandardDevice_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IStandardDevice_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IStandardDevice_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IStandardDevice_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IStandardDevice_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IStandardDevice_ScSetUserControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetUserControl(This,Control) ) 

#define SC_IStandardDevice_ScGetUserControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetUserControl(This,Control) ) 

#define SC_IStandardDevice_ScMoveAbs(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z,Result) ) 

#define SC_IStandardDevice_ScModulate(This,OnOff,Result)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff,Result) ) 

#define SC_IStandardDevice_ScStartExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStartExecution(This,Result) ) 

#define SC_IStandardDevice_ScStopExecution(This,Result)	\
    ( (This)->lpVtbl -> ScStopExecution(This,Result) ) 

#define SC_IStandardDevice_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IStandardDevice_ScDownLoadObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId,Result) ) 

#define SC_IStandardDevice_ScLoadFromDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IStandardDevice_ScSaveToDocArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToDocArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IStandardDevice_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IStandardDevice_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IStandardDevice_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IStandardDevice_ScReleaseObject(This,ObjectId,Result)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId,Result) ) 

#define SC_IStandardDevice_ScSetTriggerControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control,Result) ) 

#define SC_IStandardDevice_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IStandardDevice_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IStandardDevice_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IStandardDevice_put_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScOperationMode(This,Mode) ) 

#define SC_IStandardDevice_get_ScOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScOperationMode(This,Mode) ) 

#define SC_IStandardDevice_ScGetDeviceCLSID(This,DeviceId)	\
    ( (This)->lpVtbl -> ScGetDeviceCLSID(This,DeviceId) ) 

#define SC_IStandardDevice_ScAttachDevice(This,DeviceId)	\
    ( (This)->lpVtbl -> ScAttachDevice(This,DeviceId) ) 

#define SC_IStandardDevice_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IStandardDevice_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IStandardDevice_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IStandardDevice_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IStandardDevice_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IStandardDevice_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IStandardDevice_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IStandardDevice_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IStandardDevice_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IStandardDevice_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IStandardDevice_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IStandardDevice_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IStandardDevice_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IStandardDevice_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IStandardDevice_ScSetEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsSet,Value) ) 

#define SC_IStandardDevice_ScGetEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsSet,Value) ) 

#define SC_IStandardDevice_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IStandardDevice_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IStandardDevice_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IStandardDevice_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IStandardDevice_ScSetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScSetPixelMapPenValue(This,Index,Value) ) 

#define SC_IStandardDevice_ScGetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetPixelMapPenValue(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IStandardDevice_INTERFACE_DEFINED__ */


#ifndef __SC_IOpticModule2D_INTERFACE_DEFINED__
#define __SC_IOpticModule2D_INTERFACE_DEFINED__

/* interface SC_IOpticModule2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IOpticModule2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10C990F2-65A6-11d1-9722-008048EEE00C")
    SC_IOpticModule2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpeed( 
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpeed( 
            double Speed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExecute( 
            /* [retval][out] */ long *Execute) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExecute( 
            /* [in] */ long Execute) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHomeJump( 
            /* [retval][out] */ long *HomeJump) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHomeJump( 
            /* [in] */ long HomeJump) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHomePosition( 
            /* [in] */ long Index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHomePosition( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorkingArea( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetWorkingArea( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetField( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetField( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkLine( 
            double x0,
            double y0,
            double x1,
            double y1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkObject( 
            /* external definition not present */ SC_IEntity2D *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScanInput( 
            double x_org,
            double y_org,
            double x_step,
            double y_step,
            double x_width,
            double y_width,
            /* external definition not present */ SC_IPixelArray2D *pixel,
            /* external definition not present */ SC_IControlAdIo *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlOutput( 
            /* [retval][out] */ SC_IControlGalvoModLaser2D **output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsBreakExecution( 
            /* [retval][out] */ long *Break) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOffset( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOffset( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGain( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGain( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExposureControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearCorrection( 
            long UseLinearCorrTable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddCorrectionPoint( 
            double x_target,
            double y_target,
            double x_current,
            double y_current) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRecalcCorrection( 
            long ModifyExisting) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlush( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUseExposureControl( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUseExposureControl( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetControlOutput( 
            /* [in] */ SC_IControlGalvoModLaser2D *Output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExposureControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExposureInfo( 
            /* [in] */ long Info,
            /* [in] */ LPDISPATCH Object) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTriggerCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double x,
            /* [in] */ double y) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMoveLaserState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMoveLaserState( 
            /* [in] */ long State) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAxisState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAxisState( 
            /* [in] */ long State) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExposureTime( 
            /* [retval][out] */ double *ExposureTime) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMaxExternalTriggerCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMaxExternalTriggerCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTimeInfo( 
            /* [retval][out] */ sc_optic_module_time_info *Info) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticStyle( 
            /* [in] */ long Index,
            /* [retval][out] */ sc_com_optic_style *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticStyle( 
            /* [in] */ long Index,
            /* [in] */ sc_com_optic_style *Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticStyleName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticStyleName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLoop( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLoop( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCurrentLoop( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScBreakLoop( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ SC_ITrigger *trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ SC_ITrigger **trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLoopMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLoopMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTriggerSource( 
            /* [in] */ long Source) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTriggerSource( 
            /* [retval][out] */ long *Source) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *IsEnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetExternalTriggerCount( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHardwareState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMessageWindow( 
            /* [in] */ long HWND) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMessageWindow( 
            /* [retval][out] */ long *HWND) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserSource( 
            /* [retval][out] */ long *Source) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkOrderFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkOrderFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearStream( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCurrentHead( 
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCurrentHead( 
            /* [retval][out] */ long *HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceSpeed( 
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [in] */ double Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceSpeed( 
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceTimer( 
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceTimer( 
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceDelay( 
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceDelay( 
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePortValue( 
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePortValue( 
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [in] */ ScComStandardDeviceEnableFlagConstants Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMiscValue( 
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMiscValue( 
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateDeviceStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditDeviceStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEnableHeadSelect( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceOperationMode( 
            /* [retval][out] */ ScComStandardDeviceOperationModeConstants *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceOperationMode( 
            /* [in] */ ScComStandardDeviceOperationModeConstants Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkLine3D( 
            double x0,
            double y0,
            double z0,
            double x1,
            double y1,
            double z1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceName( 
            /* [in] */ long NameId,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceName( 
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePath( 
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePath( 
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScBackUpStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRestoreStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableHead( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableHead( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMatrix( 
            /* [in] */ double M00,
            /* [in] */ double M01,
            /* [in] */ double M03,
            /* [in] */ double M10,
            /* [in] */ double M11,
            /* [in] */ double M13,
            /* [in] */ double M02,
            /* [defaultvalue][optional][in] */ double M12 = 0,
            /* [defaultvalue][optional][in] */ double M20 = 0,
            /* [defaultvalue][optional][in] */ double M21 = 0,
            /* [defaultvalue][optional][in] */ double M22 = 1,
            /* [defaultvalue][optional][in] */ double M23 = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSecondaryHeadOffset( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSecondaryHeadOffset( 
            /* [in] */ double XOffset,
            /* [in] */ double YOffset,
            /* [defaultvalue][optional][in] */ double ZOffset = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpticStyleMember( 
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticStyleMember( 
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMapLaserPort( 
            /* [retval][out] */ ScComStandardDeviceLaserPortMapConstants *Port) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMapLaserPort( 
            /* [in] */ ScComStandardDeviceLaserPortMapConstants Port) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceCaps( 
            /* [in] */ ScComStandardDeviceCapsConstants CapsID,
            /* [retval][out] */ long *CapsValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapValue( 
            /* [in] */ long Index,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapValue( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPixelMap( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableSecondaryHead( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableSecondaryHead( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpticModuleCtrl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetConfigurationName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetConfigurationName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScProgressCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScProgressCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZField( 
            /* [in] */ double ZMin,
            /* [in] */ double ZMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZWorkingArea( 
            /* [in] */ double ZMin,
            /* [in] */ double ZMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZOffset( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZGain( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZHomePosition( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStopKeyMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStopKeyMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDevicePixelLine( 
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs3D( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSteppingParams( 
            /* [in] */ long axis,
            /* [in] */ long unused,
            /* [in] */ long dir,
            /* [in] */ long steps,
            /* [in] */ double speed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisableStopWithMouseClick( 
            /* [retval][out] */ int *Disable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisableStopWithMouseClick( 
            /* [in] */ int Disable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceDataStr( 
            /* [in] */ long DataID,
            /* [in] */ BSTR Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceDataStr( 
            /* [in] */ long DataID,
            /* [retval][out] */ BSTR *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRotationAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetRotationAngle( 
            /* [in] */ double pXVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPixelMapForPen( 
            /* [in] */ long Pen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapForPen( 
            /* [in] */ long Pen,
            /* [in] */ long pixel_zone0,
            /* [in] */ long pixel_zone1,
            /* [in] */ long pixel_zone2,
            /* [in] */ long pixel_zone3,
            /* [in] */ long pixel_zone4,
            /* [in] */ long pixel_zone5) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlashCommand( 
            /* [in] */ BSTR Command,
            /* [in] */ long Flags,
            /* [in] */ long TimeOut,
            /* [out] */ BSTR *Return,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMiscEntity( 
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [in] */ /* external definition not present */ SC_IEntity *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMiscEntity( 
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRasterPixelLine( 
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUSCInfoLong( 
            /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWaitForTriggerReady( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetTriggerReady( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDevicePixelLineSafe( 
            /* [in] */ SAFEARRAY * Intensities,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyHeadSettings( 
            /* [in] */ long from_head,
            /* [in] */ long to_head) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapSize( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IOpticModule2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IOpticModule2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IOpticModule2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IOpticModule2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IOpticModule2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IOpticModule2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IOpticModule2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IOpticModule2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IOpticModule2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpeed )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpeed )( 
            SC_IOpticModule2D * This,
            double Speed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExecute )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Execute);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExecute )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Execute);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IOpticModule2D * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHomeJump )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *HomeJump);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHomeJump )( 
            SC_IOpticModule2D * This,
            /* [in] */ long HomeJump);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHomePosition )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHomePosition )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorkingArea )( 
            SC_IOpticModule2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetWorkingArea )( 
            SC_IOpticModule2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetField )( 
            SC_IOpticModule2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetField )( 
            SC_IOpticModule2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkLine )( 
            SC_IOpticModule2D * This,
            double x0,
            double y0,
            double x1,
            double y1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkObject )( 
            SC_IOpticModule2D * This,
            /* external definition not present */ SC_IEntity2D *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScanInput )( 
            SC_IOpticModule2D * This,
            double x_org,
            double y_org,
            double x_step,
            double y_step,
            double x_width,
            double y_width,
            /* external definition not present */ SC_IPixelArray2D *pixel,
            /* external definition not present */ SC_IControlAdIo *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlOutput )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ SC_IControlGalvoModLaser2D **output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsBreakExecution )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Break);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOffset )( 
            SC_IOpticModule2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOffset )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGain )( 
            SC_IOpticModule2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGain )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExposureControl )( 
            SC_IOpticModule2D * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearCorrection )( 
            SC_IOpticModule2D * This,
            long UseLinearCorrTable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddCorrectionPoint )( 
            SC_IOpticModule2D * This,
            double x_target,
            double y_target,
            double x_current,
            double y_current);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRecalcCorrection )( 
            SC_IOpticModule2D * This,
            long ModifyExisting);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlush )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUseExposureControl )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUseExposureControl )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetControlOutput )( 
            SC_IOpticModule2D * This,
            /* [in] */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExposureControl )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExposureInfo )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Info,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTriggerCount )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IOpticModule2D * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMoveLaserState )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMoveLaserState )( 
            SC_IOpticModule2D * This,
            /* [in] */ long State);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAxisState )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAxisState )( 
            SC_IOpticModule2D * This,
            /* [in] */ long State);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExposureTime )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ double *ExposureTime);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMaxExternalTriggerCount )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMaxExternalTriggerCount )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTimeInfo )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ sc_optic_module_time_info *Info);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticStyle )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ sc_com_optic_style *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticStyle )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [in] */ sc_com_optic_style *Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticStyleName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticStyleName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLoop )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLoop )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCurrentLoop )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScBreakLoop )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IOpticModule2D * This,
            /* [in] */ SC_ITrigger *trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ SC_ITrigger **trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLoopMode )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLoopMode )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IOpticModule2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IOpticModule2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTriggerSource )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Source);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTriggerSource )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Source);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *IsEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetExternalTriggerCount )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHardwareState )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMessageWindow )( 
            SC_IOpticModule2D * This,
            /* [in] */ long HWND);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMessageWindow )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *HWND);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserSource )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Source);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkOrderFlags )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkOrderFlags )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IOpticModule2D * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMatrix )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearStream )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCurrentHead )( 
            SC_IOpticModule2D * This,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadCount )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadCount )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCurrentHead )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceSpeed )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceSpeed )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceTimer )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceTimer )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceDelay )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceDelay )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePortValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePortValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceEnableFlags )( 
            SC_IOpticModule2D * This,
            /* [in] */ long FlagsSet,
            /* [in] */ ScComStandardDeviceEnableFlagConstants Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceEnableFlags )( 
            SC_IOpticModule2D * This,
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMiscValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMiscValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateDeviceStyle )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditDeviceStyleSet )( 
            SC_IOpticModule2D * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEnableHeadSelect )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePosition )( 
            SC_IOpticModule2D * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceOperationMode )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ ScComStandardDeviceOperationModeConstants *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceOperationMode )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceOperationModeConstants Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkLine3D )( 
            SC_IOpticModule2D * This,
            double x0,
            double y0,
            double z0,
            double x1,
            double y1,
            double z1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePath )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [in] */ BSTR Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePath )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [retval][out] */ BSTR *Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScBackUpStyles )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRestoreStyles )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableHead )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableHead )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMatrix )( 
            SC_IOpticModule2D * This,
            /* [in] */ double M00,
            /* [in] */ double M01,
            /* [in] */ double M03,
            /* [in] */ double M10,
            /* [in] */ double M11,
            /* [in] */ double M13,
            /* [in] */ double M02,
            /* [defaultvalue][optional][in] */ double M12,
            /* [defaultvalue][optional][in] */ double M20,
            /* [defaultvalue][optional][in] */ double M21,
            /* [defaultvalue][optional][in] */ double M22,
            /* [defaultvalue][optional][in] */ double M23);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSecondaryHeadOffset )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSecondaryHeadOffset )( 
            SC_IOpticModule2D * This,
            /* [in] */ double XOffset,
            /* [in] */ double YOffset,
            /* [defaultvalue][optional][in] */ double ZOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticStyleMember )( 
            SC_IOpticModule2D * This,
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticStyleMember )( 
            SC_IOpticModule2D * This,
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMapLaserPort )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ ScComStandardDeviceLaserPortMapConstants *Port);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMapLaserPort )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceLaserPortMapConstants Port);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceCaps )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceCapsConstants CapsID,
            /* [retval][out] */ long *CapsValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePosition )( 
            SC_IOpticModule2D * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapSize )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPixelMap )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceData )( 
            SC_IOpticModule2D * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceData )( 
            SC_IOpticModule2D * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableSecondaryHead )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableSecondaryHead )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticModuleCtrl )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetConfigurationName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetConfigurationName )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScProgressCount )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScProgressCount )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZField )( 
            SC_IOpticModule2D * This,
            /* [in] */ double ZMin,
            /* [in] */ double ZMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZWorkingArea )( 
            SC_IOpticModule2D * This,
            /* [in] */ double ZMin,
            /* [in] */ double ZMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZOffset )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZGain )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZHomePosition )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStopKeyMode )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStopKeyMode )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDevicePixelLine )( 
            SC_IOpticModule2D * This,
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs3D )( 
            SC_IOpticModule2D * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSteppingParams )( 
            SC_IOpticModule2D * This,
            /* [in] */ long axis,
            /* [in] */ long unused,
            /* [in] */ long dir,
            /* [in] */ long steps,
            /* [in] */ double speed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableStopWithMouseClick )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ int *Disable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableStopWithMouseClick )( 
            SC_IOpticModule2D * This,
            /* [in] */ int Disable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceDataStr )( 
            SC_IOpticModule2D * This,
            /* [in] */ long DataID,
            /* [in] */ BSTR Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceDataStr )( 
            SC_IOpticModule2D * This,
            /* [in] */ long DataID,
            /* [retval][out] */ BSTR *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRotationAngle )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRotationAngle )( 
            SC_IOpticModule2D * This,
            /* [in] */ double pXVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPixelMapForPen )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapForPen )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Pen,
            /* [in] */ long pixel_zone0,
            /* [in] */ long pixel_zone1,
            /* [in] */ long pixel_zone2,
            /* [in] */ long pixel_zone3,
            /* [in] */ long pixel_zone4,
            /* [in] */ long pixel_zone5);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlashCommand )( 
            SC_IOpticModule2D * This,
            /* [in] */ BSTR Command,
            /* [in] */ long Flags,
            /* [in] */ long TimeOut,
            /* [out] */ BSTR *Return,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMiscEntity )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [in] */ /* external definition not present */ SC_IEntity *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMiscEntity )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRasterPixelLine )( 
            SC_IOpticModule2D * This,
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IOpticModule2D * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUSCInfoLong )( 
            SC_IOpticModule2D * This,
            /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWaitForTriggerReady )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetTriggerReady )( 
            SC_IOpticModule2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDevicePixelLineSafe )( 
            SC_IOpticModule2D * This,
            /* [in] */ SAFEARRAY * Intensities,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyHeadSettings )( 
            SC_IOpticModule2D * This,
            /* [in] */ long from_head,
            /* [in] */ long to_head);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapSize )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapPenValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapPenValue )( 
            SC_IOpticModule2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        END_INTERFACE
    } SC_IOpticModule2DVtbl;

    interface SC_IOpticModule2D
    {
        CONST_VTBL struct SC_IOpticModule2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IOpticModule2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IOpticModule2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IOpticModule2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IOpticModule2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IOpticModule2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IOpticModule2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IOpticModule2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IOpticModule2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IOpticModule2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IOpticModule2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IOpticModule2D_get_ScSpeed(This,Speed)	\
    ( (This)->lpVtbl -> get_ScSpeed(This,Speed) ) 

#define SC_IOpticModule2D_put_ScSpeed(This,Speed)	\
    ( (This)->lpVtbl -> put_ScSpeed(This,Speed) ) 

#define SC_IOpticModule2D_get_ScExecute(This,Execute)	\
    ( (This)->lpVtbl -> get_ScExecute(This,Execute) ) 

#define SC_IOpticModule2D_put_ScExecute(This,Execute)	\
    ( (This)->lpVtbl -> put_ScExecute(This,Execute) ) 

#define SC_IOpticModule2D_get_ScStyleSet(This,pVal)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,pVal) ) 

#define SC_IOpticModule2D_put_ScStyleSet(This,newVal)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,newVal) ) 

#define SC_IOpticModule2D_get_ScHomeJump(This,HomeJump)	\
    ( (This)->lpVtbl -> get_ScHomeJump(This,HomeJump) ) 

#define SC_IOpticModule2D_put_ScHomeJump(This,HomeJump)	\
    ( (This)->lpVtbl -> put_ScHomeJump(This,HomeJump) ) 

#define SC_IOpticModule2D_ScGetHomePosition(This,Index,pVal)	\
    ( (This)->lpVtbl -> ScGetHomePosition(This,Index,pVal) ) 

#define SC_IOpticModule2D_ScSetHomePosition(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetHomePosition(This,pXVal,pYVal) ) 

#define SC_IOpticModule2D_ScGetWorkingArea(This,index,val)	\
    ( (This)->lpVtbl -> ScGetWorkingArea(This,index,val) ) 

#define SC_IOpticModule2D_ScSetWorkingArea(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetWorkingArea(This,XMin,YMin,XMax,YMax) ) 

#define SC_IOpticModule2D_ScGetField(This,index,val)	\
    ( (This)->lpVtbl -> ScGetField(This,index,val) ) 

#define SC_IOpticModule2D_ScSetField(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetField(This,XMin,YMin,XMax,YMax) ) 

#define SC_IOpticModule2D_ScMarkLine(This,x0,y0,x1,y1)	\
    ( (This)->lpVtbl -> ScMarkLine(This,x0,y0,x1,y1) ) 

#define SC_IOpticModule2D_ScMarkObject(This,input)	\
    ( (This)->lpVtbl -> ScMarkObject(This,input) ) 

#define SC_IOpticModule2D_ScScanInput(This,x_org,y_org,x_step,y_step,x_width,y_width,pixel,input)	\
    ( (This)->lpVtbl -> ScScanInput(This,x_org,y_org,x_step,y_step,x_width,y_width,pixel,input) ) 

#define SC_IOpticModule2D_ScGetControlOutput(This,output)	\
    ( (This)->lpVtbl -> ScGetControlOutput(This,output) ) 

#define SC_IOpticModule2D_ScIsBreakExecution(This,Break)	\
    ( (This)->lpVtbl -> ScIsBreakExecution(This,Break) ) 

#define SC_IOpticModule2D_ScGetOffset(This,index,val)	\
    ( (This)->lpVtbl -> ScGetOffset(This,index,val) ) 

#define SC_IOpticModule2D_ScSetOffset(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetOffset(This,pXVal,pYVal) ) 

#define SC_IOpticModule2D_ScGetGain(This,index,val)	\
    ( (This)->lpVtbl -> ScGetGain(This,index,val) ) 

#define SC_IOpticModule2D_ScSetGain(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetGain(This,pXVal,pYVal) ) 

#define SC_IOpticModule2D_ScSetExposureControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetExposureControl(This,Control) ) 

#define SC_IOpticModule2D_ScClearCorrection(This,UseLinearCorrTable)	\
    ( (This)->lpVtbl -> ScClearCorrection(This,UseLinearCorrTable) ) 

#define SC_IOpticModule2D_ScAddCorrectionPoint(This,x_target,y_target,x_current,y_current)	\
    ( (This)->lpVtbl -> ScAddCorrectionPoint(This,x_target,y_target,x_current,y_current) ) 

#define SC_IOpticModule2D_ScRecalcCorrection(This,ModifyExisting)	\
    ( (This)->lpVtbl -> ScRecalcCorrection(This,ModifyExisting) ) 

#define SC_IOpticModule2D_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IOpticModule2D_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IOpticModule2D_ScFlush(This)	\
    ( (This)->lpVtbl -> ScFlush(This) ) 

#define SC_IOpticModule2D_put_ScUseExposureControl(This,Use)	\
    ( (This)->lpVtbl -> put_ScUseExposureControl(This,Use) ) 

#define SC_IOpticModule2D_get_ScUseExposureControl(This,Use)	\
    ( (This)->lpVtbl -> get_ScUseExposureControl(This,Use) ) 

#define SC_IOpticModule2D_ScSetControlOutput(This,Output)	\
    ( (This)->lpVtbl -> ScSetControlOutput(This,Output) ) 

#define SC_IOpticModule2D_ScGetExposureControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetExposureControl(This,Control) ) 

#define SC_IOpticModule2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IOpticModule2D_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IOpticModule2D_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IOpticModule2D_ScSetExposureInfo(This,Info,Object)	\
    ( (This)->lpVtbl -> ScSetExposureInfo(This,Info,Object) ) 

#define SC_IOpticModule2D_ScGetExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule2D_ScMoveAbs(This,x,y)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,x,y) ) 

#define SC_IOpticModule2D_get_ScMoveLaserState(This,State)	\
    ( (This)->lpVtbl -> get_ScMoveLaserState(This,State) ) 

#define SC_IOpticModule2D_put_ScMoveLaserState(This,State)	\
    ( (This)->lpVtbl -> put_ScMoveLaserState(This,State) ) 

#define SC_IOpticModule2D_get_ScAxisState(This,State)	\
    ( (This)->lpVtbl -> get_ScAxisState(This,State) ) 

#define SC_IOpticModule2D_put_ScAxisState(This,State)	\
    ( (This)->lpVtbl -> put_ScAxisState(This,State) ) 

#define SC_IOpticModule2D_ScGetExposureTime(This,ExposureTime)	\
    ( (This)->lpVtbl -> ScGetExposureTime(This,ExposureTime) ) 

#define SC_IOpticModule2D_put_ScMaxExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMaxExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule2D_get_ScMaxExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMaxExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule2D_get_ScTimeInfo(This,Info)	\
    ( (This)->lpVtbl -> get_ScTimeInfo(This,Info) ) 

#define SC_IOpticModule2D_get_ScOpticStyle(This,Index,Style)	\
    ( (This)->lpVtbl -> get_ScOpticStyle(This,Index,Style) ) 

#define SC_IOpticModule2D_put_ScOpticStyle(This,Index,Style)	\
    ( (This)->lpVtbl -> put_ScOpticStyle(This,Index,Style) ) 

#define SC_IOpticModule2D_get_ScOpticStyleName(This,Index,Name)	\
    ( (This)->lpVtbl -> get_ScOpticStyleName(This,Index,Name) ) 

#define SC_IOpticModule2D_put_ScOpticStyleName(This,Index,Name)	\
    ( (This)->lpVtbl -> put_ScOpticStyleName(This,Index,Name) ) 

#define SC_IOpticModule2D_put_ScLoop(This,Count)	\
    ( (This)->lpVtbl -> put_ScLoop(This,Count) ) 

#define SC_IOpticModule2D_get_ScLoop(This,Count)	\
    ( (This)->lpVtbl -> get_ScLoop(This,Count) ) 

#define SC_IOpticModule2D_get_ScCurrentLoop(This,Count)	\
    ( (This)->lpVtbl -> get_ScCurrentLoop(This,Count) ) 

#define SC_IOpticModule2D_ScBreakLoop(This)	\
    ( (This)->lpVtbl -> ScBreakLoop(This) ) 

#define SC_IOpticModule2D_ScSetTriggerControl(This,trigger)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,trigger) ) 

#define SC_IOpticModule2D_ScGetTriggerControl(This,trigger)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,trigger) ) 

#define SC_IOpticModule2D_put_ScLoopMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScLoopMode(This,Mode) ) 

#define SC_IOpticModule2D_get_ScLoopMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScLoopMode(This,Mode) ) 

#define SC_IOpticModule2D_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define SC_IOpticModule2D_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule2D_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IOpticModule2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IOpticModule2D_put_ScTriggerSource(This,Source)	\
    ( (This)->lpVtbl -> put_ScTriggerSource(This,Source) ) 

#define SC_IOpticModule2D_get_ScTriggerSource(This,Source)	\
    ( (This)->lpVtbl -> get_ScTriggerSource(This,Source) ) 

#define SC_IOpticModule2D_ScIsExposureEnd(This,IsEnd)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,IsEnd) ) 

#define SC_IOpticModule2D_ScResetExternalTriggerCount(This)	\
    ( (This)->lpVtbl -> ScResetExternalTriggerCount(This) ) 

#define SC_IOpticModule2D_ScGetHardwareState(This,State)	\
    ( (This)->lpVtbl -> ScGetHardwareState(This,State) ) 

#define SC_IOpticModule2D_put_ScMessageWindow(This,HWND)	\
    ( (This)->lpVtbl -> put_ScMessageWindow(This,HWND) ) 

#define SC_IOpticModule2D_get_ScMessageWindow(This,HWND)	\
    ( (This)->lpVtbl -> get_ScMessageWindow(This,HWND) ) 

#define SC_IOpticModule2D_ScGetLaserSource(This,Source)	\
    ( (This)->lpVtbl -> ScGetLaserSource(This,Source) ) 

#define SC_IOpticModule2D_get_ScMarkOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScMarkOrderFlags(This,Flags) ) 

#define SC_IOpticModule2D_put_ScMarkOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScMarkOrderFlags(This,Flags) ) 

#define SC_IOpticModule2D_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IOpticModule2D_ScGetMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetMatrix(This,Index,Value) ) 

#define SC_IOpticModule2D_ScClearStream(This)	\
    ( (This)->lpVtbl -> ScClearStream(This) ) 

#define SC_IOpticModule2D_ScSetCurrentHead(This,HeadId)	\
    ( (This)->lpVtbl -> ScSetCurrentHead(This,HeadId) ) 

#define SC_IOpticModule2D_ScGetHeadCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetHeadCount(This,Count) ) 

#define SC_IOpticModule2D_ScSetHeadCount(This,Count)	\
    ( (This)->lpVtbl -> ScSetHeadCount(This,Count) ) 

#define SC_IOpticModule2D_ScGetCurrentHead(This,HeadId)	\
    ( (This)->lpVtbl -> ScGetCurrentHead(This,HeadId) ) 

#define SC_IOpticModule2D_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IOpticModule2D_ScSetDeviceSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetDeviceSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModule2D_ScGetDeviceSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetDeviceSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModule2D_ScSetDeviceTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceTimer(This,TimerId,Value) ) 

#define SC_IOpticModule2D_ScGetDeviceTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceTimer(This,TimerId,Value) ) 

#define SC_IOpticModule2D_ScSetDeviceDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceDelay(This,DelayId,Value) ) 

#define SC_IOpticModule2D_ScGetDeviceDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceDelay(This,DelayId,Value) ) 

#define SC_IOpticModule2D_ScSetDevicePortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetDevicePortValue(This,PortId,Value) ) 

#define SC_IOpticModule2D_ScGetDevicePortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetDevicePortValue(This,PortId,Value) ) 

#define SC_IOpticModule2D_ScSetDeviceEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceEnableFlags(This,FlagsSet,Value) ) 

#define SC_IOpticModule2D_ScGetDeviceEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceEnableFlags(This,FlagsSet,Value) ) 

#define SC_IOpticModule2D_ScSetDeviceMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceMiscValue(This,MiscId,Value) ) 

#define SC_IOpticModule2D_ScGetDeviceMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceMiscValue(This,MiscId,Value) ) 

#define SC_IOpticModule2D_ScUpdateDeviceStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateDeviceStyle(This) ) 

#define SC_IOpticModule2D_ScEditDeviceStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditDeviceStyleSet(This,EditId,NewId) ) 

#define SC_IOpticModule2D_ScEnableHeadSelect(This,Enable)	\
    ( (This)->lpVtbl -> ScEnableHeadSelect(This,Enable) ) 

#define SC_IOpticModule2D_ScGetDevicePosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetDevicePosition(This,PosId,X,Y,Z) ) 

#define SC_IOpticModule2D_ScGetDeviceOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetDeviceOperationMode(This,Mode) ) 

#define SC_IOpticModule2D_ScSetDeviceOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetDeviceOperationMode(This,Mode) ) 

#define SC_IOpticModule2D_ScMarkLine3D(This,x0,y0,z0,x1,y1,z1)	\
    ( (This)->lpVtbl -> ScMarkLine3D(This,x0,y0,z0,x1,y1,z1) ) 

#define SC_IOpticModule2D_ScSetDeviceName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetDeviceName(This,NameId,Name) ) 

#define SC_IOpticModule2D_ScGetDeviceName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetDeviceName(This,NameId,Name) ) 

#define SC_IOpticModule2D_ScSetDevicePath(This,PathId,Path)	\
    ( (This)->lpVtbl -> ScSetDevicePath(This,PathId,Path) ) 

#define SC_IOpticModule2D_ScGetDevicePath(This,PathId,Path)	\
    ( (This)->lpVtbl -> ScGetDevicePath(This,PathId,Path) ) 

#define SC_IOpticModule2D_ScBackUpStyles(This)	\
    ( (This)->lpVtbl -> ScBackUpStyles(This) ) 

#define SC_IOpticModule2D_ScRestoreStyles(This)	\
    ( (This)->lpVtbl -> ScRestoreStyles(This) ) 

#define SC_IOpticModule2D_ScSetEnableHead(This,Enable)	\
    ( (This)->lpVtbl -> ScSetEnableHead(This,Enable) ) 

#define SC_IOpticModule2D_ScGetEnableHead(This,Enable)	\
    ( (This)->lpVtbl -> ScGetEnableHead(This,Enable) ) 

#define SC_IOpticModule2D_ScSetMatrix(This,M00,M01,M03,M10,M11,M13,M02,M12,M20,M21,M22,M23)	\
    ( (This)->lpVtbl -> ScSetMatrix(This,M00,M01,M03,M10,M11,M13,M02,M12,M20,M21,M22,M23) ) 

#define SC_IOpticModule2D_ScGetSecondaryHeadOffset(This,Index,Offset)	\
    ( (This)->lpVtbl -> ScGetSecondaryHeadOffset(This,Index,Offset) ) 

#define SC_IOpticModule2D_ScSetSecondaryHeadOffset(This,XOffset,YOffset,ZOffset)	\
    ( (This)->lpVtbl -> ScSetSecondaryHeadOffset(This,XOffset,YOffset,ZOffset) ) 

#define SC_IOpticModule2D_ScGetOpticStyleMember(This,StyleIndex,MemberID,Value)	\
    ( (This)->lpVtbl -> ScGetOpticStyleMember(This,StyleIndex,MemberID,Value) ) 

#define SC_IOpticModule2D_ScSetOpticStyleMember(This,StyleIndex,MemberID,Value)	\
    ( (This)->lpVtbl -> ScSetOpticStyleMember(This,StyleIndex,MemberID,Value) ) 

#define SC_IOpticModule2D_ScGetDeviceMapLaserPort(This,Port)	\
    ( (This)->lpVtbl -> ScGetDeviceMapLaserPort(This,Port) ) 

#define SC_IOpticModule2D_ScSetDeviceMapLaserPort(This,Port)	\
    ( (This)->lpVtbl -> ScSetDeviceMapLaserPort(This,Port) ) 

#define SC_IOpticModule2D_ScGetDeviceCaps(This,CapsID,CapsValue)	\
    ( (This)->lpVtbl -> ScGetDeviceCaps(This,CapsID,CapsValue) ) 

#define SC_IOpticModule2D_ScSetDevicePosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetDevicePosition(This,PosId,X,Y,Z) ) 

#define SC_IOpticModule2D_ScGetPixelMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetPixelMapSize(This,Size) ) 

#define SC_IOpticModule2D_ScSetPixelMapValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScSetPixelMapValue(This,Index,Value) ) 

#define SC_IOpticModule2D_ScGetPixelMapValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetPixelMapValue(This,Index,Value) ) 

#define SC_IOpticModule2D_ScEditPixelMap(This)	\
    ( (This)->lpVtbl -> ScEditPixelMap(This) ) 

#define SC_IOpticModule2D_ScSetDeviceData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetDeviceData(This,DataID,DataLength,Data,Result) ) 

#define SC_IOpticModule2D_ScGetDeviceData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetDeviceData(This,DataID,DataLength,Data,Result) ) 

#define SC_IOpticModule2D_ScGetEnableSecondaryHead(This,Enable)	\
    ( (This)->lpVtbl -> ScGetEnableSecondaryHead(This,Enable) ) 

#define SC_IOpticModule2D_ScSetEnableSecondaryHead(This,Enable)	\
    ( (This)->lpVtbl -> ScSetEnableSecondaryHead(This,Enable) ) 

#define SC_IOpticModule2D_ScGetOpticModuleCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetOpticModuleCtrl(This,Control) ) 

#define SC_IOpticModule2D_ScGetConfigurationName(This,Index,Name)	\
    ( (This)->lpVtbl -> ScGetConfigurationName(This,Index,Name) ) 

#define SC_IOpticModule2D_ScSetConfigurationName(This,Index,Name)	\
    ( (This)->lpVtbl -> ScSetConfigurationName(This,Index,Name) ) 

#define SC_IOpticModule2D_get_ScProgressCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScProgressCount(This,Count) ) 

#define SC_IOpticModule2D_put_ScProgressCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScProgressCount(This,Count) ) 

#define SC_IOpticModule2D_ScSetZField(This,ZMin,ZMax)	\
    ( (This)->lpVtbl -> ScSetZField(This,ZMin,ZMax) ) 

#define SC_IOpticModule2D_ScSetZWorkingArea(This,ZMin,ZMax)	\
    ( (This)->lpVtbl -> ScSetZWorkingArea(This,ZMin,ZMax) ) 

#define SC_IOpticModule2D_ScSetZOffset(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZOffset(This,pZVal) ) 

#define SC_IOpticModule2D_ScSetZGain(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZGain(This,pZVal) ) 

#define SC_IOpticModule2D_ScSetZHomePosition(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZHomePosition(This,pZVal) ) 

#define SC_IOpticModule2D_get_ScStopKeyMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScStopKeyMode(This,Mode) ) 

#define SC_IOpticModule2D_put_ScStopKeyMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScStopKeyMode(This,Mode) ) 

#define SC_IOpticModule2D_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IOpticModule2D_ScDevicePixelLine(This,Intensities,PixelCount,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScDevicePixelLine(This,Intensities,PixelCount,dx,dy,dz) ) 

#define SC_IOpticModule2D_ScMoveAbs3D(This,x,y,z)	\
    ( (This)->lpVtbl -> ScMoveAbs3D(This,x,y,z) ) 

#define SC_IOpticModule2D_ScSetSteppingParams(This,axis,unused,dir,steps,speed)	\
    ( (This)->lpVtbl -> ScSetSteppingParams(This,axis,unused,dir,steps,speed) ) 

#define SC_IOpticModule2D_get_ScDisableStopWithMouseClick(This,Disable)	\
    ( (This)->lpVtbl -> get_ScDisableStopWithMouseClick(This,Disable) ) 

#define SC_IOpticModule2D_put_ScDisableStopWithMouseClick(This,Disable)	\
    ( (This)->lpVtbl -> put_ScDisableStopWithMouseClick(This,Disable) ) 

#define SC_IOpticModule2D_ScSetDeviceDataStr(This,DataID,Data)	\
    ( (This)->lpVtbl -> ScSetDeviceDataStr(This,DataID,Data) ) 

#define SC_IOpticModule2D_ScGetDeviceDataStr(This,DataID,Data)	\
    ( (This)->lpVtbl -> ScGetDeviceDataStr(This,DataID,Data) ) 

#define SC_IOpticModule2D_ScGetRotationAngle(This,pVal)	\
    ( (This)->lpVtbl -> ScGetRotationAngle(This,pVal) ) 

#define SC_IOpticModule2D_ScSetRotationAngle(This,pXVal)	\
    ( (This)->lpVtbl -> ScSetRotationAngle(This,pXVal) ) 

#define SC_IOpticModule2D_ScEditPixelMapForPen(This,Pen)	\
    ( (This)->lpVtbl -> ScEditPixelMapForPen(This,Pen) ) 

#define SC_IOpticModule2D_ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5)	\
    ( (This)->lpVtbl -> ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5) ) 

#define SC_IOpticModule2D_ScFlashCommand(This,Command,Flags,TimeOut,Return,Result)	\
    ( (This)->lpVtbl -> ScFlashCommand(This,Command,Flags,TimeOut,Return,Result) ) 

#define SC_IOpticModule2D_ScSetDeviceMiscEntity(This,MiscId,input)	\
    ( (This)->lpVtbl -> ScSetDeviceMiscEntity(This,MiscId,input) ) 

#define SC_IOpticModule2D_ScGetDeviceMiscEntity(This,MiscId,output)	\
    ( (This)->lpVtbl -> ScGetDeviceMiscEntity(This,MiscId,output) ) 

#define SC_IOpticModule2D_ScRasterPixelLine(This,Intensities,PixelCount,PixelPeriod)	\
    ( (This)->lpVtbl -> ScRasterPixelLine(This,Intensities,PixelCount,PixelPeriod) ) 

#define SC_IOpticModule2D_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IOpticModule2D_ScGetUSCInfoLong(This,offset,value)	\
    ( (This)->lpVtbl -> ScGetUSCInfoLong(This,offset,value) ) 

#define SC_IOpticModule2D_ScWaitForTriggerReady(This)	\
    ( (This)->lpVtbl -> ScWaitForTriggerReady(This) ) 

#define SC_IOpticModule2D_ScResetTriggerReady(This)	\
    ( (This)->lpVtbl -> ScResetTriggerReady(This) ) 

#define SC_IOpticModule2D_ScDevicePixelLineSafe(This,Intensities,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScDevicePixelLineSafe(This,Intensities,dx,dy,dz) ) 

#define SC_IOpticModule2D_ScCopyHeadSettings(This,from_head,to_head)	\
    ( (This)->lpVtbl -> ScCopyHeadSettings(This,from_head,to_head) ) 

#define SC_IOpticModule2D_ScSetPixelMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScSetPixelMapSize(This,Size) ) 

#define SC_IOpticModule2D_ScSetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScSetPixelMapPenValue(This,Index,Value) ) 

#define SC_IOpticModule2D_ScGetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetPixelMapPenValue(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetDevicePosition_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long PosId,
    /* [in] */ double X,
    /* [in] */ double Y,
    /* [in] */ double Z);


void __RPC_STUB SC_IOpticModule2D_ScSetDevicePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetPixelMapSize_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ long *Size);


void __RPC_STUB SC_IOpticModule2D_ScGetPixelMapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetPixelMapValue_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [in] */ double Value);


void __RPC_STUB SC_IOpticModule2D_ScSetPixelMapValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetPixelMapValue_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IOpticModule2D_ScGetPixelMapValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScEditPixelMap_Proxy( 
    SC_IOpticModule2D * This);


void __RPC_STUB SC_IOpticModule2D_ScEditPixelMap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetDeviceData_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long DataID,
    /* [in] */ long DataLength,
    /* [in] */ byte *Data,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule2D_ScSetDeviceData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetDeviceData_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long DataID,
    /* [in] */ long DataLength,
    /* [in] */ byte *Data,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule2D_ScGetDeviceData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetEnableSecondaryHead_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ long *Enable);


void __RPC_STUB SC_IOpticModule2D_ScGetEnableSecondaryHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetEnableSecondaryHead_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Enable);


void __RPC_STUB SC_IOpticModule2D_ScSetEnableSecondaryHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetOpticModuleCtrl_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ LPDISPATCH *Control);


void __RPC_STUB SC_IOpticModule2D_ScGetOpticModuleCtrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetConfigurationName_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ BSTR *Name);


void __RPC_STUB SC_IOpticModule2D_ScGetConfigurationName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetConfigurationName_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [in] */ BSTR Name);


void __RPC_STUB SC_IOpticModule2D_ScSetConfigurationName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_get_ScProgressCount_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB SC_IOpticModule2D_get_ScProgressCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_put_ScProgressCount_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Count);


void __RPC_STUB SC_IOpticModule2D_put_ScProgressCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetZField_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double ZMin,
    /* [in] */ double ZMax);


void __RPC_STUB SC_IOpticModule2D_ScSetZField_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetZWorkingArea_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double ZMin,
    /* [in] */ double ZMax);


void __RPC_STUB SC_IOpticModule2D_ScSetZWorkingArea_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetZOffset_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule2D_ScSetZOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetZGain_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule2D_ScSetZGain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetZHomePosition_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule2D_ScSetZHomePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_get_ScStopKeyMode_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IOpticModule2D_get_ScStopKeyMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_put_ScStopKeyMode_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IOpticModule2D_put_ScStopKeyMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScInitControl_Proxy( 
    SC_IOpticModule2D * This);


void __RPC_STUB SC_IOpticModule2D_ScInitControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScDevicePixelLine_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ float *Intensities,
    /* [in] */ long PixelCount,
    /* [in] */ double dx,
    /* [in] */ double dy,
    /* [in] */ double dz);


void __RPC_STUB SC_IOpticModule2D_ScDevicePixelLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScMoveAbs3D_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double x,
    /* [in] */ double y,
    /* [in] */ double z);


void __RPC_STUB SC_IOpticModule2D_ScMoveAbs3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetSteppingParams_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long axis,
    /* [in] */ long unused,
    /* [in] */ long dir,
    /* [in] */ long steps,
    /* [in] */ double speed);


void __RPC_STUB SC_IOpticModule2D_ScSetSteppingParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_get_ScDisableStopWithMouseClick_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ int *Disable);


void __RPC_STUB SC_IOpticModule2D_get_ScDisableStopWithMouseClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_put_ScDisableStopWithMouseClick_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ int Disable);


void __RPC_STUB SC_IOpticModule2D_put_ScDisableStopWithMouseClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetDeviceDataStr_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long DataID,
    /* [in] */ BSTR Data);


void __RPC_STUB SC_IOpticModule2D_ScSetDeviceDataStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetDeviceDataStr_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long DataID,
    /* [retval][out] */ BSTR *Data);


void __RPC_STUB SC_IOpticModule2D_ScGetDeviceDataStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetRotationAngle_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB SC_IOpticModule2D_ScGetRotationAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetRotationAngle_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ double pXVal);


void __RPC_STUB SC_IOpticModule2D_ScSetRotationAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScEditPixelMapForPen_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Pen);


void __RPC_STUB SC_IOpticModule2D_ScEditPixelMapForPen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetPixelMapForPen_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Pen,
    /* [in] */ long pixel_zone0,
    /* [in] */ long pixel_zone1,
    /* [in] */ long pixel_zone2,
    /* [in] */ long pixel_zone3,
    /* [in] */ long pixel_zone4,
    /* [in] */ long pixel_zone5);


void __RPC_STUB SC_IOpticModule2D_ScSetPixelMapForPen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScFlashCommand_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ BSTR Command,
    /* [in] */ long Flags,
    /* [in] */ long TimeOut,
    /* [out] */ BSTR *Return,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule2D_ScFlashCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetDeviceMiscEntity_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
    /* [in] */ /* external definition not present */ SC_IEntity *input);


void __RPC_STUB SC_IOpticModule2D_ScSetDeviceMiscEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetDeviceMiscEntity_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
    /* [retval][out] */ /* external definition not present */ SC_IEntity **output);


void __RPC_STUB SC_IOpticModule2D_ScGetDeviceMiscEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScRasterPixelLine_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ float *Intensities,
    /* [in] */ long PixelCount,
    /* [in] */ double PixelPeriod);


void __RPC_STUB SC_IOpticModule2D_ScRasterPixelLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetIdentString_Proxy( 
    SC_IOpticModule2D * This,
    /* [retval][out] */ BSTR *IdString);


void __RPC_STUB SC_IOpticModule2D_ScGetIdentString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetUSCInfoLong_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
    /* [retval][out] */ long *value);


void __RPC_STUB SC_IOpticModule2D_ScGetUSCInfoLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScWaitForTriggerReady_Proxy( 
    SC_IOpticModule2D * This);


void __RPC_STUB SC_IOpticModule2D_ScWaitForTriggerReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScResetTriggerReady_Proxy( 
    SC_IOpticModule2D * This);


void __RPC_STUB SC_IOpticModule2D_ScResetTriggerReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScDevicePixelLineSafe_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ SAFEARRAY * Intensities,
    /* [in] */ double dx,
    /* [in] */ double dy,
    /* [in] */ double dz);


void __RPC_STUB SC_IOpticModule2D_ScDevicePixelLineSafe_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScCopyHeadSettings_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long from_head,
    /* [in] */ long to_head);


void __RPC_STUB SC_IOpticModule2D_ScCopyHeadSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetPixelMapSize_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Size);


void __RPC_STUB SC_IOpticModule2D_ScSetPixelMapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScSetPixelMapPenValue_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [in] */ double Value);


void __RPC_STUB SC_IOpticModule2D_ScSetPixelMapPenValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule2D_ScGetPixelMapPenValue_Proxy( 
    SC_IOpticModule2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IOpticModule2D_ScGetPixelMapPenValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IOpticModule2D_INTERFACE_DEFINED__ */


#ifndef __SC_IOpticModule3D2D_INTERFACE_DEFINED__
#define __SC_IOpticModule3D2D_INTERFACE_DEFINED__

/* interface SC_IOpticModule3D2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IOpticModule3D2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4AE08D82-F9D7-11d3-8EA1-008048EEDCB8")
    SC_IOpticModule3D2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpeed( 
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpeed( 
            double Speed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExecute( 
            /* [retval][out] */ long *Execute) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExecute( 
            /* [in] */ long Execute) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyleSet( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyleSet( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHomeJump( 
            /* [retval][out] */ long *HomeJump) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHomeJump( 
            /* [in] */ long HomeJump) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHomePosition( 
            /* [in] */ long Index,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHomePosition( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorkingArea( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetWorkingArea( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetField( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetField( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkLine( 
            double x0,
            double y0,
            double x1,
            double y1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkObject( 
            /* external definition not present */ SC_IEntity2D *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScanInput( 
            double x_org,
            double y_org,
            double x_step,
            double y_step,
            double x_width,
            double y_width,
            /* external definition not present */ SC_IPixelArray2D *pixel,
            /* external definition not present */ SC_IControlAdIo *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlOutput( 
            /* [retval][out] */ SC_IControlGalvoModLaser2D **output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsBreakExecution( 
            /* [retval][out] */ long *Break) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOffset( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOffset( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGain( 
            /* [in] */ long index,
            /* [retval][out] */ double *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGain( 
            /* [in] */ double pXVal,
            /* [in] */ double pYVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExposureControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearCorrection( 
            long UseLinearCorrTable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddCorrectionPoint( 
            double x_target,
            double y_target,
            double x_current,
            double y_current) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRecalcCorrection( 
            long ModifyExisting) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlush( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUseExposureControl( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUseExposureControl( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetControlOutput( 
            /* [in] */ SC_IControlGalvoModLaser2D *Output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExposureControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExposureInfo( 
            /* [in] */ long Info,
            /* [in] */ LPDISPATCH Object) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTriggerCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double x,
            /* [in] */ double y) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMoveLaserState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMoveLaserState( 
            /* [in] */ long State) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAxisState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAxisState( 
            /* [in] */ long State) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExposureTime( 
            /* [retval][out] */ double *ExposureTime) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMaxExternalTriggerCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMaxExternalTriggerCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTimeInfo( 
            /* [retval][out] */ sc_optic_module_time_info *Info) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticStyle( 
            /* [in] */ long Index,
            /* [retval][out] */ sc_com_optic_style *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticStyle( 
            /* [in] */ long Index,
            /* [in] */ sc_com_optic_style *Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticStyleName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticStyleName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLoop( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLoop( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCurrentLoop( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScBreakLoop( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ SC_ITrigger *trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ SC_ITrigger **trigger) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLoopMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLoopMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTriggerSource( 
            /* [in] */ long Source) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTriggerSource( 
            /* [retval][out] */ long *Source) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *IsEnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetExternalTriggerCount( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHardwareState( 
            /* [retval][out] */ long *State) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMessageWindow( 
            /* [in] */ long HWND) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMessageWindow( 
            /* [retval][out] */ long *HWND) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserSource( 
            /* [retval][out] */ long *Source) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkOrderFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkOrderFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearStream( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCurrentHead( 
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCurrentHead( 
            /* [retval][out] */ long *HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceSpeed( 
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [in] */ double Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceSpeed( 
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceTimer( 
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceTimer( 
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceDelay( 
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceDelay( 
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePortValue( 
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePortValue( 
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [in] */ ScComStandardDeviceEnableFlagConstants Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceEnableFlags( 
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMiscValue( 
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMiscValue( 
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateDeviceStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditDeviceStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEnableHeadSelect( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceOperationMode( 
            /* [retval][out] */ ScComStandardDeviceOperationModeConstants *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceOperationMode( 
            /* [in] */ ScComStandardDeviceOperationModeConstants Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkLine3D( 
            double x0,
            double y0,
            double z0,
            double x1,
            double y1,
            double z1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceName( 
            /* [in] */ long NameId,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceName( 
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePath( 
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDevicePath( 
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScBackUpStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRestoreStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableHead( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableHead( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMatrix( 
            /* [in] */ double M00,
            /* [in] */ double M01,
            /* [in] */ double M03,
            /* [in] */ double M10,
            /* [in] */ double M11,
            /* [in] */ double M13,
            /* [in] */ double M02,
            /* [defaultvalue][optional][in] */ double M12 = 0,
            /* [defaultvalue][optional][in] */ double M20 = 0,
            /* [defaultvalue][optional][in] */ double M21 = 0,
            /* [defaultvalue][optional][in] */ double M22 = 1,
            /* [defaultvalue][optional][in] */ double M23 = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSecondaryHeadOffset( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSecondaryHeadOffset( 
            /* [in] */ double XOffset,
            /* [in] */ double YOffset,
            /* [defaultvalue][optional][in] */ double ZOffset = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpticStyleMember( 
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticStyleMember( 
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMapLaserPort( 
            /* [retval][out] */ ScComStandardDeviceLaserPortMapConstants *Port) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMapLaserPort( 
            /* [in] */ ScComStandardDeviceLaserPortMapConstants Port) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceCaps( 
            /* [in] */ ScComStandardDeviceCapsConstants CapsID,
            /* [retval][out] */ long *CapsValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDevicePosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapValue( 
            /* [in] */ long Index,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapValue( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPixelMap( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceData( 
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableSecondaryHead( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableSecondaryHead( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpticModuleCtrl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetConfigurationName( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetConfigurationName( 
            /* [in] */ long Index,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScProgressCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScProgressCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZField( 
            /* [in] */ double ZMin,
            /* [in] */ double ZMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZWorkingArea( 
            /* [in] */ double ZMin,
            /* [in] */ double ZMax) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZOffset( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZGain( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetZHomePosition( 
            /* [in] */ double pZVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStopKeyMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStopKeyMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDevicePixelLine( 
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs3D( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSteppingParams( 
            /* [in] */ long axis,
            /* [in] */ long unused,
            /* [in] */ long dir,
            /* [in] */ long steps,
            /* [in] */ double speed) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisableStopWithMouseClick( 
            /* [retval][out] */ int *Disable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisableStopWithMouseClick( 
            /* [in] */ int Disable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceDataStr( 
            /* [in] */ long DataID,
            /* [in] */ BSTR Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceDataStr( 
            /* [in] */ long DataID,
            /* [retval][out] */ BSTR *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRotationAngle( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetRotationAngle( 
            /* [in] */ double pXVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPixelMapForPen( 
            /* [in] */ long Pen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapForPen( 
            /* [in] */ long Pen,
            /* [in] */ long pixel_zone0,
            /* [in] */ long pixel_zone1,
            /* [in] */ long pixel_zone2,
            /* [in] */ long pixel_zone3,
            /* [in] */ long pixel_zone4,
            /* [in] */ long pixel_zone5) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlashCommand( 
            /* [in] */ BSTR Command,
            /* [in] */ long Flags,
            /* [in] */ long TimeOut,
            /* [out] */ BSTR *Return,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDeviceMiscEntity( 
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [in] */ /* external definition not present */ SC_IEntity *input) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDeviceMiscEntity( 
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRasterPixelLine( 
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUSCInfoLong( 
            /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWaitForTriggerReady( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetTriggerReady( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDevicePixelLineSafe( 
            /* [in] */ SAFEARRAY * Intensities,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyHeadSettings( 
            /* [in] */ long from_head,
            /* [in] */ long to_head) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapSize( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelMapPenValue( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IOpticModule3D2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IOpticModule3D2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IOpticModule3D2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IOpticModule3D2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpeed )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpeed )( 
            SC_IOpticModule3D2D * This,
            double Speed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExecute )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Execute);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExecute )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Execute);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyleSet )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyleSet )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHomeJump )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *HomeJump);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHomeJump )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long HomeJump);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHomePosition )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHomePosition )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorkingArea )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetWorkingArea )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetField )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetField )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkLine )( 
            SC_IOpticModule3D2D * This,
            double x0,
            double y0,
            double x1,
            double y1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkObject )( 
            SC_IOpticModule3D2D * This,
            /* external definition not present */ SC_IEntity2D *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScanInput )( 
            SC_IOpticModule3D2D * This,
            double x_org,
            double y_org,
            double x_step,
            double y_step,
            double x_width,
            double y_width,
            /* external definition not present */ SC_IPixelArray2D *pixel,
            /* external definition not present */ SC_IControlAdIo *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlOutput )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ SC_IControlGalvoModLaser2D **output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsBreakExecution )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Break);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOffset )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOffset )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGain )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGain )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pXVal,
            /* [in] */ double pYVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExposureControl )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearCorrection )( 
            SC_IOpticModule3D2D * This,
            long UseLinearCorrTable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddCorrectionPoint )( 
            SC_IOpticModule3D2D * This,
            double x_target,
            double y_target,
            double x_current,
            double y_current);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRecalcCorrection )( 
            SC_IOpticModule3D2D * This,
            long ModifyExisting);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScContinuousMode )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScContinuousMode )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlush )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUseExposureControl )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUseExposureControl )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetControlOutput )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExposureControl )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExternalTrigger )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExternalTrigger )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExposureInfo )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Info,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTriggerCount )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double x,
            /* [in] */ double y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMoveLaserState )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMoveLaserState )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long State);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAxisState )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAxisState )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long State);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExposureTime )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ double *ExposureTime);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMaxExternalTriggerCount )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMaxExternalTriggerCount )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTimeInfo )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ sc_optic_module_time_info *Info);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticStyle )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ sc_com_optic_style *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticStyle )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [in] */ sc_com_optic_style *Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticStyleName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticStyleName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLoop )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLoop )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCurrentLoop )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScBreakLoop )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ SC_ITrigger *trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ SC_ITrigger **trigger);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLoopMode )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLoopMode )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTriggerSource )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Source);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTriggerSource )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Source);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *IsEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetExternalTriggerCount )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHardwareState )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *State);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMessageWindow )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long HWND);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMessageWindow )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *HWND);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserSource )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Source);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkOrderFlags )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkOrderFlags )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMatrix )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearStream )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCurrentHead )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadCount )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadCount )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCurrentHead )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceSpeed )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceSpeed )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceSpeedConstants SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceTimer )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceTimer )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceTimerConstants TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceDelay )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceDelay )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceDelayConstants DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePortValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePortValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDevicePortConstants PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceEnableFlags )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long FlagsSet,
            /* [in] */ ScComStandardDeviceEnableFlagConstants Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceEnableFlags )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long FlagsSet,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMiscValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMiscValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceMiscValueConstants MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateDeviceStyle )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditDeviceStyleSet )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEnableHeadSelect )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePosition )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceOperationMode )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ ScComStandardDeviceOperationModeConstants *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceOperationMode )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceOperationModeConstants Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkLine3D )( 
            SC_IOpticModule3D2D * This,
            double x0,
            double y0,
            double z0,
            double x1,
            double y1,
            double z1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePath )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [in] */ BSTR Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDevicePath )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDevicePathConstants PathId,
            /* [retval][out] */ BSTR *Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScBackUpStyles )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRestoreStyles )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableHead )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableHead )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMatrix )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double M00,
            /* [in] */ double M01,
            /* [in] */ double M03,
            /* [in] */ double M10,
            /* [in] */ double M11,
            /* [in] */ double M13,
            /* [in] */ double M02,
            /* [defaultvalue][optional][in] */ double M12,
            /* [defaultvalue][optional][in] */ double M20,
            /* [defaultvalue][optional][in] */ double M21,
            /* [defaultvalue][optional][in] */ double M22,
            /* [defaultvalue][optional][in] */ double M23);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSecondaryHeadOffset )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSecondaryHeadOffset )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double XOffset,
            /* [in] */ double YOffset,
            /* [defaultvalue][optional][in] */ double ZOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticStyleMember )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticStyleMember )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long StyleIndex,
            /* [in] */ ScComOpticStyleMemberConstants MemberID,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMapLaserPort )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ ScComStandardDeviceLaserPortMapConstants *Port);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMapLaserPort )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceLaserPortMapConstants Port);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceCaps )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceCapsConstants CapsID,
            /* [retval][out] */ long *CapsValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDevicePosition )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapSize )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPixelMap )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceData )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceData )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableSecondaryHead )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableSecondaryHead )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticModuleCtrl )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetConfigurationName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetConfigurationName )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScProgressCount )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScProgressCount )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZField )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double ZMin,
            /* [in] */ double ZMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZWorkingArea )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double ZMin,
            /* [in] */ double ZMax);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZOffset )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZGain )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetZHomePosition )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pZVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStopKeyMode )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStopKeyMode )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDevicePixelLine )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs3D )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSteppingParams )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long axis,
            /* [in] */ long unused,
            /* [in] */ long dir,
            /* [in] */ long steps,
            /* [in] */ double speed);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableStopWithMouseClick )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ int *Disable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableStopWithMouseClick )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ int Disable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceDataStr )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long DataID,
            /* [in] */ BSTR Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceDataStr )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long DataID,
            /* [retval][out] */ BSTR *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRotationAngle )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRotationAngle )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ double pXVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPixelMapForPen )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapForPen )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Pen,
            /* [in] */ long pixel_zone0,
            /* [in] */ long pixel_zone1,
            /* [in] */ long pixel_zone2,
            /* [in] */ long pixel_zone3,
            /* [in] */ long pixel_zone4,
            /* [in] */ long pixel_zone5);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlashCommand )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ BSTR Command,
            /* [in] */ long Flags,
            /* [in] */ long TimeOut,
            /* [out] */ BSTR *Return,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDeviceMiscEntity )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [in] */ /* external definition not present */ SC_IEntity *input);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDeviceMiscEntity )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRasterPixelLine )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ float *Intensities,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IOpticModule3D2D * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUSCInfoLong )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWaitForTriggerReady )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetTriggerReady )( 
            SC_IOpticModule3D2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDevicePixelLineSafe )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ SAFEARRAY * Intensities,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyHeadSettings )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long from_head,
            /* [in] */ long to_head);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapSize )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelMapPenValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelMapPenValue )( 
            SC_IOpticModule3D2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        END_INTERFACE
    } SC_IOpticModule3D2DVtbl;

    interface SC_IOpticModule3D2D
    {
        CONST_VTBL struct SC_IOpticModule3D2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IOpticModule3D2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IOpticModule3D2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IOpticModule3D2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IOpticModule3D2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IOpticModule3D2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IOpticModule3D2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IOpticModule3D2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IOpticModule3D2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IOpticModule3D2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IOpticModule3D2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IOpticModule3D2D_get_ScSpeed(This,Speed)	\
    ( (This)->lpVtbl -> get_ScSpeed(This,Speed) ) 

#define SC_IOpticModule3D2D_put_ScSpeed(This,Speed)	\
    ( (This)->lpVtbl -> put_ScSpeed(This,Speed) ) 

#define SC_IOpticModule3D2D_get_ScExecute(This,Execute)	\
    ( (This)->lpVtbl -> get_ScExecute(This,Execute) ) 

#define SC_IOpticModule3D2D_put_ScExecute(This,Execute)	\
    ( (This)->lpVtbl -> put_ScExecute(This,Execute) ) 

#define SC_IOpticModule3D2D_get_ScStyleSet(This,pVal)	\
    ( (This)->lpVtbl -> get_ScStyleSet(This,pVal) ) 

#define SC_IOpticModule3D2D_put_ScStyleSet(This,newVal)	\
    ( (This)->lpVtbl -> put_ScStyleSet(This,newVal) ) 

#define SC_IOpticModule3D2D_get_ScHomeJump(This,HomeJump)	\
    ( (This)->lpVtbl -> get_ScHomeJump(This,HomeJump) ) 

#define SC_IOpticModule3D2D_put_ScHomeJump(This,HomeJump)	\
    ( (This)->lpVtbl -> put_ScHomeJump(This,HomeJump) ) 

#define SC_IOpticModule3D2D_ScGetHomePosition(This,Index,pVal)	\
    ( (This)->lpVtbl -> ScGetHomePosition(This,Index,pVal) ) 

#define SC_IOpticModule3D2D_ScSetHomePosition(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetHomePosition(This,pXVal,pYVal) ) 

#define SC_IOpticModule3D2D_ScGetWorkingArea(This,index,val)	\
    ( (This)->lpVtbl -> ScGetWorkingArea(This,index,val) ) 

#define SC_IOpticModule3D2D_ScSetWorkingArea(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetWorkingArea(This,XMin,YMin,XMax,YMax) ) 

#define SC_IOpticModule3D2D_ScGetField(This,index,val)	\
    ( (This)->lpVtbl -> ScGetField(This,index,val) ) 

#define SC_IOpticModule3D2D_ScSetField(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetField(This,XMin,YMin,XMax,YMax) ) 

#define SC_IOpticModule3D2D_ScMarkLine(This,x0,y0,x1,y1)	\
    ( (This)->lpVtbl -> ScMarkLine(This,x0,y0,x1,y1) ) 

#define SC_IOpticModule3D2D_ScMarkObject(This,input)	\
    ( (This)->lpVtbl -> ScMarkObject(This,input) ) 

#define SC_IOpticModule3D2D_ScScanInput(This,x_org,y_org,x_step,y_step,x_width,y_width,pixel,input)	\
    ( (This)->lpVtbl -> ScScanInput(This,x_org,y_org,x_step,y_step,x_width,y_width,pixel,input) ) 

#define SC_IOpticModule3D2D_ScGetControlOutput(This,output)	\
    ( (This)->lpVtbl -> ScGetControlOutput(This,output) ) 

#define SC_IOpticModule3D2D_ScIsBreakExecution(This,Break)	\
    ( (This)->lpVtbl -> ScIsBreakExecution(This,Break) ) 

#define SC_IOpticModule3D2D_ScGetOffset(This,index,val)	\
    ( (This)->lpVtbl -> ScGetOffset(This,index,val) ) 

#define SC_IOpticModule3D2D_ScSetOffset(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetOffset(This,pXVal,pYVal) ) 

#define SC_IOpticModule3D2D_ScGetGain(This,index,val)	\
    ( (This)->lpVtbl -> ScGetGain(This,index,val) ) 

#define SC_IOpticModule3D2D_ScSetGain(This,pXVal,pYVal)	\
    ( (This)->lpVtbl -> ScSetGain(This,pXVal,pYVal) ) 

#define SC_IOpticModule3D2D_ScSetExposureControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetExposureControl(This,Control) ) 

#define SC_IOpticModule3D2D_ScClearCorrection(This,UseLinearCorrTable)	\
    ( (This)->lpVtbl -> ScClearCorrection(This,UseLinearCorrTable) ) 

#define SC_IOpticModule3D2D_ScAddCorrectionPoint(This,x_target,y_target,x_current,y_current)	\
    ( (This)->lpVtbl -> ScAddCorrectionPoint(This,x_target,y_target,x_current,y_current) ) 

#define SC_IOpticModule3D2D_ScRecalcCorrection(This,ModifyExisting)	\
    ( (This)->lpVtbl -> ScRecalcCorrection(This,ModifyExisting) ) 

#define SC_IOpticModule3D2D_get_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScContinuousMode(This,Mode) ) 

#define SC_IOpticModule3D2D_put_ScContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScContinuousMode(This,Mode) ) 

#define SC_IOpticModule3D2D_ScFlush(This)	\
    ( (This)->lpVtbl -> ScFlush(This) ) 

#define SC_IOpticModule3D2D_put_ScUseExposureControl(This,Use)	\
    ( (This)->lpVtbl -> put_ScUseExposureControl(This,Use) ) 

#define SC_IOpticModule3D2D_get_ScUseExposureControl(This,Use)	\
    ( (This)->lpVtbl -> get_ScUseExposureControl(This,Use) ) 

#define SC_IOpticModule3D2D_ScSetControlOutput(This,Output)	\
    ( (This)->lpVtbl -> ScSetControlOutput(This,Output) ) 

#define SC_IOpticModule3D2D_ScGetExposureControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetExposureControl(This,Control) ) 

#define SC_IOpticModule3D2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IOpticModule3D2D_get_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> get_ScExternalTrigger(This,Trigger) ) 

#define SC_IOpticModule3D2D_put_ScExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> put_ScExternalTrigger(This,Trigger) ) 

#define SC_IOpticModule3D2D_ScSetExposureInfo(This,Info,Object)	\
    ( (This)->lpVtbl -> ScSetExposureInfo(This,Info,Object) ) 

#define SC_IOpticModule3D2D_ScGetExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule3D2D_ScMoveAbs(This,x,y)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,x,y) ) 

#define SC_IOpticModule3D2D_get_ScMoveLaserState(This,State)	\
    ( (This)->lpVtbl -> get_ScMoveLaserState(This,State) ) 

#define SC_IOpticModule3D2D_put_ScMoveLaserState(This,State)	\
    ( (This)->lpVtbl -> put_ScMoveLaserState(This,State) ) 

#define SC_IOpticModule3D2D_get_ScAxisState(This,State)	\
    ( (This)->lpVtbl -> get_ScAxisState(This,State) ) 

#define SC_IOpticModule3D2D_put_ScAxisState(This,State)	\
    ( (This)->lpVtbl -> put_ScAxisState(This,State) ) 

#define SC_IOpticModule3D2D_ScGetExposureTime(This,ExposureTime)	\
    ( (This)->lpVtbl -> ScGetExposureTime(This,ExposureTime) ) 

#define SC_IOpticModule3D2D_put_ScMaxExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMaxExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule3D2D_get_ScMaxExternalTriggerCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMaxExternalTriggerCount(This,Count) ) 

#define SC_IOpticModule3D2D_get_ScTimeInfo(This,Info)	\
    ( (This)->lpVtbl -> get_ScTimeInfo(This,Info) ) 

#define SC_IOpticModule3D2D_get_ScOpticStyle(This,Index,Style)	\
    ( (This)->lpVtbl -> get_ScOpticStyle(This,Index,Style) ) 

#define SC_IOpticModule3D2D_put_ScOpticStyle(This,Index,Style)	\
    ( (This)->lpVtbl -> put_ScOpticStyle(This,Index,Style) ) 

#define SC_IOpticModule3D2D_get_ScOpticStyleName(This,Index,Name)	\
    ( (This)->lpVtbl -> get_ScOpticStyleName(This,Index,Name) ) 

#define SC_IOpticModule3D2D_put_ScOpticStyleName(This,Index,Name)	\
    ( (This)->lpVtbl -> put_ScOpticStyleName(This,Index,Name) ) 

#define SC_IOpticModule3D2D_put_ScLoop(This,Count)	\
    ( (This)->lpVtbl -> put_ScLoop(This,Count) ) 

#define SC_IOpticModule3D2D_get_ScLoop(This,Count)	\
    ( (This)->lpVtbl -> get_ScLoop(This,Count) ) 

#define SC_IOpticModule3D2D_get_ScCurrentLoop(This,Count)	\
    ( (This)->lpVtbl -> get_ScCurrentLoop(This,Count) ) 

#define SC_IOpticModule3D2D_ScBreakLoop(This)	\
    ( (This)->lpVtbl -> ScBreakLoop(This) ) 

#define SC_IOpticModule3D2D_ScSetTriggerControl(This,trigger)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,trigger) ) 

#define SC_IOpticModule3D2D_ScGetTriggerControl(This,trigger)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,trigger) ) 

#define SC_IOpticModule3D2D_put_ScLoopMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScLoopMode(This,Mode) ) 

#define SC_IOpticModule3D2D_get_ScLoopMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScLoopMode(This,Mode) ) 

#define SC_IOpticModule3D2D_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define SC_IOpticModule3D2D_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule3D2D_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule3D2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IOpticModule3D2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IOpticModule3D2D_put_ScTriggerSource(This,Source)	\
    ( (This)->lpVtbl -> put_ScTriggerSource(This,Source) ) 

#define SC_IOpticModule3D2D_get_ScTriggerSource(This,Source)	\
    ( (This)->lpVtbl -> get_ScTriggerSource(This,Source) ) 

#define SC_IOpticModule3D2D_ScIsExposureEnd(This,IsEnd)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,IsEnd) ) 

#define SC_IOpticModule3D2D_ScResetExternalTriggerCount(This)	\
    ( (This)->lpVtbl -> ScResetExternalTriggerCount(This) ) 

#define SC_IOpticModule3D2D_ScGetHardwareState(This,State)	\
    ( (This)->lpVtbl -> ScGetHardwareState(This,State) ) 

#define SC_IOpticModule3D2D_put_ScMessageWindow(This,HWND)	\
    ( (This)->lpVtbl -> put_ScMessageWindow(This,HWND) ) 

#define SC_IOpticModule3D2D_get_ScMessageWindow(This,HWND)	\
    ( (This)->lpVtbl -> get_ScMessageWindow(This,HWND) ) 

#define SC_IOpticModule3D2D_ScGetLaserSource(This,Source)	\
    ( (This)->lpVtbl -> ScGetLaserSource(This,Source) ) 

#define SC_IOpticModule3D2D_get_ScMarkOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScMarkOrderFlags(This,Flags) ) 

#define SC_IOpticModule3D2D_put_ScMarkOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScMarkOrderFlags(This,Flags) ) 

#define SC_IOpticModule3D2D_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IOpticModule3D2D_ScGetMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetMatrix(This,Index,Value) ) 

#define SC_IOpticModule3D2D_ScClearStream(This)	\
    ( (This)->lpVtbl -> ScClearStream(This) ) 

#define SC_IOpticModule3D2D_ScSetCurrentHead(This,HeadId)	\
    ( (This)->lpVtbl -> ScSetCurrentHead(This,HeadId) ) 

#define SC_IOpticModule3D2D_ScGetHeadCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetHeadCount(This,Count) ) 

#define SC_IOpticModule3D2D_ScSetHeadCount(This,Count)	\
    ( (This)->lpVtbl -> ScSetHeadCount(This,Count) ) 

#define SC_IOpticModule3D2D_ScGetCurrentHead(This,HeadId)	\
    ( (This)->lpVtbl -> ScGetCurrentHead(This,HeadId) ) 

#define SC_IOpticModule3D2D_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IOpticModule3D2D_ScSetDeviceSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetDeviceSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModule3D2D_ScGetDeviceSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetDeviceSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModule3D2D_ScSetDeviceTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceTimer(This,TimerId,Value) ) 

#define SC_IOpticModule3D2D_ScGetDeviceTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceTimer(This,TimerId,Value) ) 

#define SC_IOpticModule3D2D_ScSetDeviceDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceDelay(This,DelayId,Value) ) 

#define SC_IOpticModule3D2D_ScGetDeviceDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceDelay(This,DelayId,Value) ) 

#define SC_IOpticModule3D2D_ScSetDevicePortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetDevicePortValue(This,PortId,Value) ) 

#define SC_IOpticModule3D2D_ScGetDevicePortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetDevicePortValue(This,PortId,Value) ) 

#define SC_IOpticModule3D2D_ScSetDeviceEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceEnableFlags(This,FlagsSet,Value) ) 

#define SC_IOpticModule3D2D_ScGetDeviceEnableFlags(This,FlagsSet,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceEnableFlags(This,FlagsSet,Value) ) 

#define SC_IOpticModule3D2D_ScSetDeviceMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetDeviceMiscValue(This,MiscId,Value) ) 

#define SC_IOpticModule3D2D_ScGetDeviceMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetDeviceMiscValue(This,MiscId,Value) ) 

#define SC_IOpticModule3D2D_ScUpdateDeviceStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateDeviceStyle(This) ) 

#define SC_IOpticModule3D2D_ScEditDeviceStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditDeviceStyleSet(This,EditId,NewId) ) 

#define SC_IOpticModule3D2D_ScEnableHeadSelect(This,Enable)	\
    ( (This)->lpVtbl -> ScEnableHeadSelect(This,Enable) ) 

#define SC_IOpticModule3D2D_ScGetDevicePosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetDevicePosition(This,PosId,X,Y,Z) ) 

#define SC_IOpticModule3D2D_ScGetDeviceOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetDeviceOperationMode(This,Mode) ) 

#define SC_IOpticModule3D2D_ScSetDeviceOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetDeviceOperationMode(This,Mode) ) 

#define SC_IOpticModule3D2D_ScMarkLine3D(This,x0,y0,z0,x1,y1,z1)	\
    ( (This)->lpVtbl -> ScMarkLine3D(This,x0,y0,z0,x1,y1,z1) ) 

#define SC_IOpticModule3D2D_ScSetDeviceName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetDeviceName(This,NameId,Name) ) 

#define SC_IOpticModule3D2D_ScGetDeviceName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetDeviceName(This,NameId,Name) ) 

#define SC_IOpticModule3D2D_ScSetDevicePath(This,PathId,Path)	\
    ( (This)->lpVtbl -> ScSetDevicePath(This,PathId,Path) ) 

#define SC_IOpticModule3D2D_ScGetDevicePath(This,PathId,Path)	\
    ( (This)->lpVtbl -> ScGetDevicePath(This,PathId,Path) ) 

#define SC_IOpticModule3D2D_ScBackUpStyles(This)	\
    ( (This)->lpVtbl -> ScBackUpStyles(This) ) 

#define SC_IOpticModule3D2D_ScRestoreStyles(This)	\
    ( (This)->lpVtbl -> ScRestoreStyles(This) ) 

#define SC_IOpticModule3D2D_ScSetEnableHead(This,Enable)	\
    ( (This)->lpVtbl -> ScSetEnableHead(This,Enable) ) 

#define SC_IOpticModule3D2D_ScGetEnableHead(This,Enable)	\
    ( (This)->lpVtbl -> ScGetEnableHead(This,Enable) ) 

#define SC_IOpticModule3D2D_ScSetMatrix(This,M00,M01,M03,M10,M11,M13,M02,M12,M20,M21,M22,M23)	\
    ( (This)->lpVtbl -> ScSetMatrix(This,M00,M01,M03,M10,M11,M13,M02,M12,M20,M21,M22,M23) ) 

#define SC_IOpticModule3D2D_ScGetSecondaryHeadOffset(This,Index,Offset)	\
    ( (This)->lpVtbl -> ScGetSecondaryHeadOffset(This,Index,Offset) ) 

#define SC_IOpticModule3D2D_ScSetSecondaryHeadOffset(This,XOffset,YOffset,ZOffset)	\
    ( (This)->lpVtbl -> ScSetSecondaryHeadOffset(This,XOffset,YOffset,ZOffset) ) 

#define SC_IOpticModule3D2D_ScGetOpticStyleMember(This,StyleIndex,MemberID,Value)	\
    ( (This)->lpVtbl -> ScGetOpticStyleMember(This,StyleIndex,MemberID,Value) ) 

#define SC_IOpticModule3D2D_ScSetOpticStyleMember(This,StyleIndex,MemberID,Value)	\
    ( (This)->lpVtbl -> ScSetOpticStyleMember(This,StyleIndex,MemberID,Value) ) 

#define SC_IOpticModule3D2D_ScGetDeviceMapLaserPort(This,Port)	\
    ( (This)->lpVtbl -> ScGetDeviceMapLaserPort(This,Port) ) 

#define SC_IOpticModule3D2D_ScSetDeviceMapLaserPort(This,Port)	\
    ( (This)->lpVtbl -> ScSetDeviceMapLaserPort(This,Port) ) 

#define SC_IOpticModule3D2D_ScGetDeviceCaps(This,CapsID,CapsValue)	\
    ( (This)->lpVtbl -> ScGetDeviceCaps(This,CapsID,CapsValue) ) 

#define SC_IOpticModule3D2D_ScSetDevicePosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetDevicePosition(This,PosId,X,Y,Z) ) 

#define SC_IOpticModule3D2D_ScGetPixelMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetPixelMapSize(This,Size) ) 

#define SC_IOpticModule3D2D_ScSetPixelMapValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScSetPixelMapValue(This,Index,Value) ) 

#define SC_IOpticModule3D2D_ScGetPixelMapValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetPixelMapValue(This,Index,Value) ) 

#define SC_IOpticModule3D2D_ScEditPixelMap(This)	\
    ( (This)->lpVtbl -> ScEditPixelMap(This) ) 

#define SC_IOpticModule3D2D_ScSetDeviceData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetDeviceData(This,DataID,DataLength,Data,Result) ) 

#define SC_IOpticModule3D2D_ScGetDeviceData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetDeviceData(This,DataID,DataLength,Data,Result) ) 

#define SC_IOpticModule3D2D_ScGetEnableSecondaryHead(This,Enable)	\
    ( (This)->lpVtbl -> ScGetEnableSecondaryHead(This,Enable) ) 

#define SC_IOpticModule3D2D_ScSetEnableSecondaryHead(This,Enable)	\
    ( (This)->lpVtbl -> ScSetEnableSecondaryHead(This,Enable) ) 

#define SC_IOpticModule3D2D_ScGetOpticModuleCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetOpticModuleCtrl(This,Control) ) 

#define SC_IOpticModule3D2D_ScGetConfigurationName(This,Index,Name)	\
    ( (This)->lpVtbl -> ScGetConfigurationName(This,Index,Name) ) 

#define SC_IOpticModule3D2D_ScSetConfigurationName(This,Index,Name)	\
    ( (This)->lpVtbl -> ScSetConfigurationName(This,Index,Name) ) 

#define SC_IOpticModule3D2D_get_ScProgressCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScProgressCount(This,Count) ) 

#define SC_IOpticModule3D2D_put_ScProgressCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScProgressCount(This,Count) ) 

#define SC_IOpticModule3D2D_ScSetZField(This,ZMin,ZMax)	\
    ( (This)->lpVtbl -> ScSetZField(This,ZMin,ZMax) ) 

#define SC_IOpticModule3D2D_ScSetZWorkingArea(This,ZMin,ZMax)	\
    ( (This)->lpVtbl -> ScSetZWorkingArea(This,ZMin,ZMax) ) 

#define SC_IOpticModule3D2D_ScSetZOffset(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZOffset(This,pZVal) ) 

#define SC_IOpticModule3D2D_ScSetZGain(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZGain(This,pZVal) ) 

#define SC_IOpticModule3D2D_ScSetZHomePosition(This,pZVal)	\
    ( (This)->lpVtbl -> ScSetZHomePosition(This,pZVal) ) 

#define SC_IOpticModule3D2D_get_ScStopKeyMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScStopKeyMode(This,Mode) ) 

#define SC_IOpticModule3D2D_put_ScStopKeyMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScStopKeyMode(This,Mode) ) 

#define SC_IOpticModule3D2D_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IOpticModule3D2D_ScDevicePixelLine(This,Intensities,PixelCount,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScDevicePixelLine(This,Intensities,PixelCount,dx,dy,dz) ) 

#define SC_IOpticModule3D2D_ScMoveAbs3D(This,x,y,z)	\
    ( (This)->lpVtbl -> ScMoveAbs3D(This,x,y,z) ) 

#define SC_IOpticModule3D2D_ScSetSteppingParams(This,axis,unused,dir,steps,speed)	\
    ( (This)->lpVtbl -> ScSetSteppingParams(This,axis,unused,dir,steps,speed) ) 

#define SC_IOpticModule3D2D_get_ScDisableStopWithMouseClick(This,Disable)	\
    ( (This)->lpVtbl -> get_ScDisableStopWithMouseClick(This,Disable) ) 

#define SC_IOpticModule3D2D_put_ScDisableStopWithMouseClick(This,Disable)	\
    ( (This)->lpVtbl -> put_ScDisableStopWithMouseClick(This,Disable) ) 

#define SC_IOpticModule3D2D_ScSetDeviceDataStr(This,DataID,Data)	\
    ( (This)->lpVtbl -> ScSetDeviceDataStr(This,DataID,Data) ) 

#define SC_IOpticModule3D2D_ScGetDeviceDataStr(This,DataID,Data)	\
    ( (This)->lpVtbl -> ScGetDeviceDataStr(This,DataID,Data) ) 

#define SC_IOpticModule3D2D_ScGetRotationAngle(This,pVal)	\
    ( (This)->lpVtbl -> ScGetRotationAngle(This,pVal) ) 

#define SC_IOpticModule3D2D_ScSetRotationAngle(This,pXVal)	\
    ( (This)->lpVtbl -> ScSetRotationAngle(This,pXVal) ) 

#define SC_IOpticModule3D2D_ScEditPixelMapForPen(This,Pen)	\
    ( (This)->lpVtbl -> ScEditPixelMapForPen(This,Pen) ) 

#define SC_IOpticModule3D2D_ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5)	\
    ( (This)->lpVtbl -> ScSetPixelMapForPen(This,Pen,pixel_zone0,pixel_zone1,pixel_zone2,pixel_zone3,pixel_zone4,pixel_zone5) ) 

#define SC_IOpticModule3D2D_ScFlashCommand(This,Command,Flags,TimeOut,Return,Result)	\
    ( (This)->lpVtbl -> ScFlashCommand(This,Command,Flags,TimeOut,Return,Result) ) 

#define SC_IOpticModule3D2D_ScSetDeviceMiscEntity(This,MiscId,input)	\
    ( (This)->lpVtbl -> ScSetDeviceMiscEntity(This,MiscId,input) ) 

#define SC_IOpticModule3D2D_ScGetDeviceMiscEntity(This,MiscId,output)	\
    ( (This)->lpVtbl -> ScGetDeviceMiscEntity(This,MiscId,output) ) 

#define SC_IOpticModule3D2D_ScRasterPixelLine(This,Intensities,PixelCount,PixelPeriod)	\
    ( (This)->lpVtbl -> ScRasterPixelLine(This,Intensities,PixelCount,PixelPeriod) ) 

#define SC_IOpticModule3D2D_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IOpticModule3D2D_ScGetUSCInfoLong(This,offset,value)	\
    ( (This)->lpVtbl -> ScGetUSCInfoLong(This,offset,value) ) 

#define SC_IOpticModule3D2D_ScWaitForTriggerReady(This)	\
    ( (This)->lpVtbl -> ScWaitForTriggerReady(This) ) 

#define SC_IOpticModule3D2D_ScResetTriggerReady(This)	\
    ( (This)->lpVtbl -> ScResetTriggerReady(This) ) 

#define SC_IOpticModule3D2D_ScDevicePixelLineSafe(This,Intensities,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScDevicePixelLineSafe(This,Intensities,dx,dy,dz) ) 

#define SC_IOpticModule3D2D_ScCopyHeadSettings(This,from_head,to_head)	\
    ( (This)->lpVtbl -> ScCopyHeadSettings(This,from_head,to_head) ) 

#define SC_IOpticModule3D2D_ScSetPixelMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScSetPixelMapSize(This,Size) ) 

#define SC_IOpticModule3D2D_ScSetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScSetPixelMapPenValue(This,Index,Value) ) 

#define SC_IOpticModule3D2D_ScGetPixelMapPenValue(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetPixelMapPenValue(This,Index,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetDevicePosition_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long PosId,
    /* [in] */ double X,
    /* [in] */ double Y,
    /* [in] */ double Z);


void __RPC_STUB SC_IOpticModule3D2D_ScSetDevicePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetPixelMapSize_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ long *Size);


void __RPC_STUB SC_IOpticModule3D2D_ScGetPixelMapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetPixelMapValue_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [in] */ double Value);


void __RPC_STUB SC_IOpticModule3D2D_ScSetPixelMapValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetPixelMapValue_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IOpticModule3D2D_ScGetPixelMapValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScEditPixelMap_Proxy( 
    SC_IOpticModule3D2D * This);


void __RPC_STUB SC_IOpticModule3D2D_ScEditPixelMap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetDeviceData_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long DataID,
    /* [in] */ long DataLength,
    /* [in] */ byte *Data,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule3D2D_ScSetDeviceData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetDeviceData_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long DataID,
    /* [in] */ long DataLength,
    /* [in] */ byte *Data,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule3D2D_ScGetDeviceData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetEnableSecondaryHead_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ long *Enable);


void __RPC_STUB SC_IOpticModule3D2D_ScGetEnableSecondaryHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetEnableSecondaryHead_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Enable);


void __RPC_STUB SC_IOpticModule3D2D_ScSetEnableSecondaryHead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetOpticModuleCtrl_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ LPDISPATCH *Control);


void __RPC_STUB SC_IOpticModule3D2D_ScGetOpticModuleCtrl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetConfigurationName_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ BSTR *Name);


void __RPC_STUB SC_IOpticModule3D2D_ScGetConfigurationName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetConfigurationName_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [in] */ BSTR Name);


void __RPC_STUB SC_IOpticModule3D2D_ScSetConfigurationName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_get_ScProgressCount_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB SC_IOpticModule3D2D_get_ScProgressCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_put_ScProgressCount_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Count);


void __RPC_STUB SC_IOpticModule3D2D_put_ScProgressCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetZField_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double ZMin,
    /* [in] */ double ZMax);


void __RPC_STUB SC_IOpticModule3D2D_ScSetZField_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetZWorkingArea_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double ZMin,
    /* [in] */ double ZMax);


void __RPC_STUB SC_IOpticModule3D2D_ScSetZWorkingArea_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetZOffset_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule3D2D_ScSetZOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetZGain_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule3D2D_ScSetZGain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetZHomePosition_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double pZVal);


void __RPC_STUB SC_IOpticModule3D2D_ScSetZHomePosition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_get_ScStopKeyMode_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IOpticModule3D2D_get_ScStopKeyMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_put_ScStopKeyMode_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IOpticModule3D2D_put_ScStopKeyMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScInitControl_Proxy( 
    SC_IOpticModule3D2D * This);


void __RPC_STUB SC_IOpticModule3D2D_ScInitControl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScDevicePixelLine_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ float *Intensities,
    /* [in] */ long PixelCount,
    /* [in] */ double dx,
    /* [in] */ double dy,
    /* [in] */ double dz);


void __RPC_STUB SC_IOpticModule3D2D_ScDevicePixelLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScMoveAbs3D_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double x,
    /* [in] */ double y,
    /* [in] */ double z);


void __RPC_STUB SC_IOpticModule3D2D_ScMoveAbs3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetSteppingParams_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long axis,
    /* [in] */ long unused,
    /* [in] */ long dir,
    /* [in] */ long steps,
    /* [in] */ double speed);


void __RPC_STUB SC_IOpticModule3D2D_ScSetSteppingParams_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_get_ScDisableStopWithMouseClick_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ int *Disable);


void __RPC_STUB SC_IOpticModule3D2D_get_ScDisableStopWithMouseClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_put_ScDisableStopWithMouseClick_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ int Disable);


void __RPC_STUB SC_IOpticModule3D2D_put_ScDisableStopWithMouseClick_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetDeviceDataStr_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long DataID,
    /* [in] */ BSTR Data);


void __RPC_STUB SC_IOpticModule3D2D_ScSetDeviceDataStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetDeviceDataStr_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long DataID,
    /* [retval][out] */ BSTR *Data);


void __RPC_STUB SC_IOpticModule3D2D_ScGetDeviceDataStr_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetRotationAngle_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB SC_IOpticModule3D2D_ScGetRotationAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetRotationAngle_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ double pXVal);


void __RPC_STUB SC_IOpticModule3D2D_ScSetRotationAngle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScEditPixelMapForPen_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Pen);


void __RPC_STUB SC_IOpticModule3D2D_ScEditPixelMapForPen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetPixelMapForPen_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Pen,
    /* [in] */ long pixel_zone0,
    /* [in] */ long pixel_zone1,
    /* [in] */ long pixel_zone2,
    /* [in] */ long pixel_zone3,
    /* [in] */ long pixel_zone4,
    /* [in] */ long pixel_zone5);


void __RPC_STUB SC_IOpticModule3D2D_ScSetPixelMapForPen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScFlashCommand_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ BSTR Command,
    /* [in] */ long Flags,
    /* [in] */ long TimeOut,
    /* [out] */ BSTR *Return,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IOpticModule3D2D_ScFlashCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetDeviceMiscEntity_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
    /* [in] */ /* external definition not present */ SC_IEntity *input);


void __RPC_STUB SC_IOpticModule3D2D_ScSetDeviceMiscEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetDeviceMiscEntity_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ ScComStandardDeviceMiscEntityConstants MiscId,
    /* [retval][out] */ /* external definition not present */ SC_IEntity **output);


void __RPC_STUB SC_IOpticModule3D2D_ScGetDeviceMiscEntity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScRasterPixelLine_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ float *Intensities,
    /* [in] */ long PixelCount,
    /* [in] */ double PixelPeriod);


void __RPC_STUB SC_IOpticModule3D2D_ScRasterPixelLine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetIdentString_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [retval][out] */ BSTR *IdString);


void __RPC_STUB SC_IOpticModule3D2D_ScGetIdentString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetUSCInfoLong_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ ScComStandardDeviceUSCInfoConstants offset,
    /* [retval][out] */ long *value);


void __RPC_STUB SC_IOpticModule3D2D_ScGetUSCInfoLong_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScWaitForTriggerReady_Proxy( 
    SC_IOpticModule3D2D * This);


void __RPC_STUB SC_IOpticModule3D2D_ScWaitForTriggerReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScResetTriggerReady_Proxy( 
    SC_IOpticModule3D2D * This);


void __RPC_STUB SC_IOpticModule3D2D_ScResetTriggerReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScDevicePixelLineSafe_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ SAFEARRAY * Intensities,
    /* [in] */ double dx,
    /* [in] */ double dy,
    /* [in] */ double dz);


void __RPC_STUB SC_IOpticModule3D2D_ScDevicePixelLineSafe_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScCopyHeadSettings_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long from_head,
    /* [in] */ long to_head);


void __RPC_STUB SC_IOpticModule3D2D_ScCopyHeadSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetPixelMapSize_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Size);


void __RPC_STUB SC_IOpticModule3D2D_ScSetPixelMapSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScSetPixelMapPenValue_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [in] */ double Value);


void __RPC_STUB SC_IOpticModule3D2D_ScSetPixelMapPenValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IOpticModule3D2D_ScGetPixelMapPenValue_Proxy( 
    SC_IOpticModule3D2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IOpticModule3D2D_ScGetPixelMapPenValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IOpticModule3D2D_INTERFACE_DEFINED__ */


#ifndef __SC_ITrigger_INTERFACE_DEFINED__
#define __SC_ITrigger_INTERFACE_DEFINED__

/* interface SC_ITrigger */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ITrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D38A272-F313-11d2-9AE4-008048EEE00C")
    SC_ITrigger : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExposureStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExposureEnd( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEntity( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEntity( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTriggerMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTriggerMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTrigger( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetTrigger( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ITriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ITrigger * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ITrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ITrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ITrigger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ITrigger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ITrigger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ITrigger * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInit )( 
            SC_ITrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTrigger )( 
            SC_ITrigger * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureStart )( 
            SC_ITrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureEnd )( 
            SC_ITrigger * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntity )( 
            SC_ITrigger * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntity )( 
            SC_ITrigger * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTriggerMode )( 
            SC_ITrigger * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTriggerMode )( 
            SC_ITrigger * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTrigger )( 
            SC_ITrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetTrigger )( 
            SC_ITrigger * This);
        
        END_INTERFACE
    } SC_ITriggerVtbl;

    interface SC_ITrigger
    {
        CONST_VTBL struct SC_ITriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ITrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ITrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ITrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ITrigger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ITrigger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ITrigger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ITrigger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ITrigger_ScInit(This)	\
    ( (This)->lpVtbl -> ScInit(This) ) 

#define SC_ITrigger_ScGetTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetTrigger(This,Trigger) ) 

#define SC_ITrigger_ScExposureStart(This)	\
    ( (This)->lpVtbl -> ScExposureStart(This) ) 

#define SC_ITrigger_ScExposureEnd(This)	\
    ( (This)->lpVtbl -> ScExposureEnd(This) ) 

#define SC_ITrigger_get_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> get_ScEntity(This,Entity) ) 

#define SC_ITrigger_put_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> put_ScEntity(This,Entity) ) 

#define SC_ITrigger_get_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScTriggerMode(This,Mode) ) 

#define SC_ITrigger_put_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScTriggerMode(This,Mode) ) 

#define SC_ITrigger_ScSetTrigger(This)	\
    ( (This)->lpVtbl -> ScSetTrigger(This) ) 

#define SC_ITrigger_ScResetTrigger(This)	\
    ( (This)->lpVtbl -> ScResetTrigger(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ITrigger_INTERFACE_DEFINED__ */


#ifndef __SC_ICorrTable_INTERFACE_DEFINED__
#define __SC_ICorrTable_INTERFACE_DEFINED__

/* interface SC_ICorrTable */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ICorrTable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B0F3B441-0E63-11d6-BFE0-00055D0B73B2")
    SC_ICorrTable : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            /* [in] */ BSTR FileName,
            /* [in] */ long FileType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExport( 
            /* [in] */ BSTR FileName,
            /* [in] */ long FileType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPoint( 
            /* [in] */ long IndX,
            /* [in] */ long IndY,
            /* [in] */ long *CX,
            /* [in] */ long *CY,
            /* [in] */ long *CZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPoint( 
            /* [in] */ long IndX,
            /* [in] */ long IndY,
            /* [in] */ long CX,
            /* [in] */ long CY,
            /* [in] */ long CZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDacValue( 
            /* [in] */ long PosX,
            /* [in] */ long PosY,
            /* [in] */ long PosZ,
            /* [in] */ long *PX,
            /* [in] */ long *PY,
            /* [in] */ long *PZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCalibStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCalibAddPoint( 
            /* [in] */ long OldPosX,
            /* [in] */ long OldPosY,
            /* [in] */ long OldPosZ,
            /* [in] */ long NewPosX,
            /* [in] */ long NewPosY,
            /* [in] */ long NewPosZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCalibCalculate( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveCalibPoints( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadCalibPoints( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDacValue2( 
            /* [in] */ long PosX,
            /* [in] */ long PosY,
            /* [in] */ long PosZ,
            /* [in] */ long *PX,
            /* [in] */ long *PY,
            /* [in] */ long *PZ) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ICorrTableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ICorrTable * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ICorrTable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ICorrTable * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ICorrTable * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ICorrTable * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ICorrTable * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ICorrTable * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ICorrTable * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ICorrTable * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ICorrTable * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ICorrTable * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ICorrTable * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ICorrTable * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ICorrTable * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long FileType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ICorrTable * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long FileType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPoint )( 
            SC_ICorrTable * This,
            /* [in] */ long IndX,
            /* [in] */ long IndY,
            /* [in] */ long *CX,
            /* [in] */ long *CY,
            /* [in] */ long *CZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPoint )( 
            SC_ICorrTable * This,
            /* [in] */ long IndX,
            /* [in] */ long IndY,
            /* [in] */ long CX,
            /* [in] */ long CY,
            /* [in] */ long CZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDacValue )( 
            SC_ICorrTable * This,
            /* [in] */ long PosX,
            /* [in] */ long PosY,
            /* [in] */ long PosZ,
            /* [in] */ long *PX,
            /* [in] */ long *PY,
            /* [in] */ long *PZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalibStart )( 
            SC_ICorrTable * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalibAddPoint )( 
            SC_ICorrTable * This,
            /* [in] */ long OldPosX,
            /* [in] */ long OldPosY,
            /* [in] */ long OldPosZ,
            /* [in] */ long NewPosX,
            /* [in] */ long NewPosY,
            /* [in] */ long NewPosZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalibCalculate )( 
            SC_ICorrTable * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMode )( 
            SC_ICorrTable * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveCalibPoints )( 
            SC_ICorrTable * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadCalibPoints )( 
            SC_ICorrTable * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDacValue2 )( 
            SC_ICorrTable * This,
            /* [in] */ long PosX,
            /* [in] */ long PosY,
            /* [in] */ long PosZ,
            /* [in] */ long *PX,
            /* [in] */ long *PY,
            /* [in] */ long *PZ);
        
        END_INTERFACE
    } SC_ICorrTableVtbl;

    interface SC_ICorrTable
    {
        CONST_VTBL struct SC_ICorrTableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ICorrTable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ICorrTable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ICorrTable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ICorrTable_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ICorrTable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ICorrTable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ICorrTable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ICorrTable_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ICorrTable_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ICorrTable_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ICorrTable_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ICorrTable_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ICorrTable_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ICorrTable_ScImport(This,FileName,FileType)	\
    ( (This)->lpVtbl -> ScImport(This,FileName,FileType) ) 

#define SC_ICorrTable_ScExport(This,FileName,FileType)	\
    ( (This)->lpVtbl -> ScExport(This,FileName,FileType) ) 

#define SC_ICorrTable_ScGetPoint(This,IndX,IndY,CX,CY,CZ)	\
    ( (This)->lpVtbl -> ScGetPoint(This,IndX,IndY,CX,CY,CZ) ) 

#define SC_ICorrTable_ScSetPoint(This,IndX,IndY,CX,CY,CZ)	\
    ( (This)->lpVtbl -> ScSetPoint(This,IndX,IndY,CX,CY,CZ) ) 

#define SC_ICorrTable_ScGetDacValue(This,PosX,PosY,PosZ,PX,PY,PZ)	\
    ( (This)->lpVtbl -> ScGetDacValue(This,PosX,PosY,PosZ,PX,PY,PZ) ) 

#define SC_ICorrTable_ScCalibStart(This)	\
    ( (This)->lpVtbl -> ScCalibStart(This) ) 

#define SC_ICorrTable_ScCalibAddPoint(This,OldPosX,OldPosY,OldPosZ,NewPosX,NewPosY,NewPosZ)	\
    ( (This)->lpVtbl -> ScCalibAddPoint(This,OldPosX,OldPosY,OldPosZ,NewPosX,NewPosY,NewPosZ) ) 

#define SC_ICorrTable_ScCalibCalculate(This,Flags)	\
    ( (This)->lpVtbl -> ScCalibCalculate(This,Flags) ) 

#define SC_ICorrTable_ScSetMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetMode(This,Mode) ) 

#define SC_ICorrTable_ScSaveCalibPoints(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveCalibPoints(This,FileName) ) 

#define SC_ICorrTable_ScLoadCalibPoints(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadCalibPoints(This,FileName) ) 

#define SC_ICorrTable_ScGetDacValue2(This,PosX,PosY,PosZ,PX,PY,PZ)	\
    ( (This)->lpVtbl -> ScGetDacValue2(This,PosX,PosY,PosZ,PX,PY,PZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ICorrTable_INTERFACE_DEFINED__ */


#ifndef ___DSC_DeviceDelaysPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceDelaysPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceDelaysPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceDelaysPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F45-2A3B-11d4-9BDD-008048EEE00C")
    _DSC_DeviceDelaysPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceDelaysPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceDelaysPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceDelaysPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceDelaysPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceDelaysPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceDelaysPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceDelaysPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceDelaysPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceDelaysPropertyCtrlVtbl;

    interface _DSC_DeviceDelaysPropertyCtrl
    {
        CONST_VTBL struct _DSC_DeviceDelaysPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceDelaysPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceDelaysPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceDelaysPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceDelaysPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceDelaysPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceDelaysPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceDelaysPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceDelaysPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DeviceDelaysPropertyCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceDelaysPropertyCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceDelaysPropertyCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceDelaysPropertyCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F47-2A3B-11d4-9BDD-008048EEE00C")
    _DSC_DeviceDelaysPropertyCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceDelaysPropertyCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceDelaysPropertyCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceDelaysPropertyCtrlEventsVtbl;

    interface _DSC_DeviceDelaysPropertyCtrlEvents
    {
        CONST_VTBL struct _DSC_DeviceDelaysPropertyCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceDelaysPropertyCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceDelaysPropertyCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceDelaysPropertyCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceDelaysPropertyCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceDelaysPropertyCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceDelaysPropertyCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceDelaysPropertyCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceDelaysPropertyCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDeviceDelaysPropertyCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("2F519F49-2A3B-11d4-9BDD-008048EEE00C")
ScDeviceDelaysPropertyCtrl;
#endif

#ifndef ___DSC_DeviceMainPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceMainPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceMainPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceMainPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F4B-2A3B-11d4-9BDD-008048EEE00C")
    _DSC_DeviceMainPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceMainPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceMainPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceMainPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceMainPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceMainPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceMainPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceMainPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceMainPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceMainPropertyCtrlVtbl;

    interface _DSC_DeviceMainPropertyCtrl
    {
        CONST_VTBL struct _DSC_DeviceMainPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceMainPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceMainPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceMainPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceMainPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceMainPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceMainPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceMainPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceMainPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DeviceMainPropertyCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceMainPropertyCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceMainPropertyCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceMainPropertyCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F4D-2A3B-11d4-9BDD-008048EEE00C")
    _DSC_DeviceMainPropertyCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceMainPropertyCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceMainPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceMainPropertyCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceMainPropertyCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceMainPropertyCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceMainPropertyCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceMainPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceMainPropertyCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceMainPropertyCtrlEventsVtbl;

    interface _DSC_DeviceMainPropertyCtrlEvents
    {
        CONST_VTBL struct _DSC_DeviceMainPropertyCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceMainPropertyCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceMainPropertyCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceMainPropertyCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceMainPropertyCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceMainPropertyCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceMainPropertyCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceMainPropertyCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceMainPropertyCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDeviceMainPropertyCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("2F519F4F-2A3B-11d4-9BDD-008048EEE00C")
ScDeviceMainPropertyCtrl;
#endif

#ifndef ___DSC_DeviceLaserPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceLaserPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceLaserPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceLaserPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("29D74894-574A-11d4-933C-0060673AC7A2")
    _DSC_DeviceLaserPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceLaserPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceLaserPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceLaserPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceLaserPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceLaserPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceLaserPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceLaserPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceLaserPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceLaserPropertyCtrlVtbl;

    interface _DSC_DeviceLaserPropertyCtrl
    {
        CONST_VTBL struct _DSC_DeviceLaserPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceLaserPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceLaserPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceLaserPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceLaserPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceLaserPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceLaserPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceLaserPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceLaserPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DeviceLaserPropertyCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_DeviceLaserPropertyCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DeviceLaserPropertyCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DeviceLaserPropertyCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("29D74896-574A-11d4-933C-0060673AC7A2")
    _DSC_DeviceLaserPropertyCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DeviceLaserPropertyCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DeviceLaserPropertyCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DeviceLaserPropertyCtrlEventsVtbl;

    interface _DSC_DeviceLaserPropertyCtrlEvents
    {
        CONST_VTBL struct _DSC_DeviceLaserPropertyCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DeviceLaserPropertyCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DeviceLaserPropertyCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DeviceLaserPropertyCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DeviceLaserPropertyCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DeviceLaserPropertyCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DeviceLaserPropertyCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DeviceLaserPropertyCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DeviceLaserPropertyCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDeviceLaserPropertyCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("29D74898-574A-11d4-933C-0060673AC7A2")
ScDeviceLaserPropertyCtrl;
#endif

#ifndef ___DSC_OpticConfigCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_OpticConfigCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_OpticConfigCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_OpticConfigCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85074BEC-DD5E-49c3-8BE1-6E2AEF97134F")
    _DSC_OpticConfigCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_OpticConfigCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_OpticConfigCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_OpticConfigCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_OpticConfigCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_OpticConfigCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_OpticConfigCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_OpticConfigCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_OpticConfigCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_OpticConfigCtrlVtbl;

    interface _DSC_OpticConfigCtrl
    {
        CONST_VTBL struct _DSC_OpticConfigCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_OpticConfigCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_OpticConfigCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_OpticConfigCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_OpticConfigCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_OpticConfigCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_OpticConfigCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_OpticConfigCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_OpticConfigCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_OpticConfigCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_OpticConfigCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_OpticConfigCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_OpticConfigCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("74BDE042-2BF8-4de5-A747-35D78C063C27")
    _DSC_OpticConfigCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_OpticConfigCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_OpticConfigCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_OpticConfigCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_OpticConfigCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_OpticConfigCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_OpticConfigCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_OpticConfigCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_OpticConfigCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_OpticConfigCtrlEventsVtbl;

    interface _DSC_OpticConfigCtrlEvents
    {
        CONST_VTBL struct _DSC_OpticConfigCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_OpticConfigCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_OpticConfigCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_OpticConfigCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_OpticConfigCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_OpticConfigCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_OpticConfigCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_OpticConfigCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_OpticConfigCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScOpticConfigCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("DECF00AE-E7AF-4c0c-A47E-1595D5E0F66E")
ScOpticConfigCtrl;
#endif

EXTERN_C const CLSID CLSID_ScControlGalvoModLaser2D;

#ifdef __cplusplus

class DECLSPEC_UUID("55104971-7F7B-11d1-974C-008048EEE00C")
ScControlGalvoModLaser2D;
#endif

EXTERN_C const CLSID CLSID_ScUserControlGalvoModLaser2D;

#ifdef __cplusplus

class DECLSPEC_UUID("04C52362-2C8B-11d3-9B02-008048EEE00C")
ScUserControlGalvoModLaser2D;
#endif

EXTERN_C const CLSID CLSID_ScStandardDevice;

#ifdef __cplusplus

class DECLSPEC_UUID("19F0260A-DA44-11d3-9B9D-008048EEE00C")
ScStandardDevice;
#endif

EXTERN_C const CLSID CLSID_ScOpticModule2D;

#ifdef __cplusplus

class DECLSPEC_UUID("10C990F6-65A6-11d1-9722-008048EEE00C")
ScOpticModule2D;
#endif

EXTERN_C const CLSID CLSID_ScOpticModule3D2D;

#ifdef __cplusplus

class DECLSPEC_UUID("4AE08D85-F9D7-11d3-8EA1-008048EEDCB8")
ScOpticModule3D2D;
#endif

EXTERN_C const CLSID CLSID_ScControlRTC2;

#ifdef __cplusplus

class DECLSPEC_UUID("46572B52-B118-11d1-8C4A-008048EEDCB8")
ScControlRTC2;
#endif

EXTERN_C const CLSID CLSID_ScTriggerControl;

#ifdef __cplusplus

class DECLSPEC_UUID("A1683965-0F9D-11d3-9AF1-008048EEE00C")
ScTriggerControl;
#endif

EXTERN_C const CLSID CLSID_ScCorrTable;

#ifdef __cplusplus

class DECLSPEC_UUID("B3FDA033-0E64-11d6-BFE0-00055D0B73B2")
ScCorrTable;
#endif
#endif /* __ScapsSamOpticModule2D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


