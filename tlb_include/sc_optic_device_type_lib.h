

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:43 2017
 */
/* Compiler settings for d:\scaps\dll_source\optic_devices\rtc2\com\include\sc_optic_device_type_lib.idl:
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


#ifndef __sc_optic_device_type_lib_h__
#define __sc_optic_device_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IRTC2DeviceStandard_FWD_DEFINED__
#define __SC_IRTC2DeviceStandard_FWD_DEFINED__
typedef interface SC_IRTC2DeviceStandard SC_IRTC2DeviceStandard;
#endif 	/* __SC_IRTC2DeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IRTC3DeviceStandard_FWD_DEFINED__
#define __SC_IRTC3DeviceStandard_FWD_DEFINED__
typedef interface SC_IRTC3DeviceStandard SC_IRTC3DeviceStandard;
#endif 	/* __SC_IRTC3DeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IRTC4DeviceStandard_FWD_DEFINED__
#define __SC_IRTC4DeviceStandard_FWD_DEFINED__
typedef interface SC_IRTC4DeviceStandard SC_IRTC4DeviceStandard;
#endif 	/* __SC_IRTC4DeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IRTCScanAloneDeviceStandard_FWD_DEFINED__
#define __SC_IRTCScanAloneDeviceStandard_FWD_DEFINED__
typedef interface SC_IRTCScanAloneDeviceStandard SC_IRTCScanAloneDeviceStandard;
#endif 	/* __SC_IRTCScanAloneDeviceStandard_FWD_DEFINED__ */


#ifndef __SC_ISCAPSDeviceStandard_FWD_DEFINED__
#define __SC_ISCAPSDeviceStandard_FWD_DEFINED__
typedef interface SC_ISCAPSDeviceStandard SC_ISCAPSDeviceStandard;
#endif 	/* __SC_ISCAPSDeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IRTC1000DeviceSpecial_FWD_DEFINED__
#define __SC_IRTC1000DeviceSpecial_FWD_DEFINED__
typedef interface SC_IRTC1000DeviceSpecial SC_IRTC1000DeviceSpecial;
#endif 	/* __SC_IRTC1000DeviceSpecial_FWD_DEFINED__ */


#ifndef __SC_IScanLabUSBDeviceStandard_FWD_DEFINED__
#define __SC_IScanLabUSBDeviceStandard_FWD_DEFINED__
typedef interface SC_IScanLabUSBDeviceStandard SC_IScanLabUSBDeviceStandard;
#endif 	/* __SC_IScanLabUSBDeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IRTCTrigger_FWD_DEFINED__
#define __SC_IRTCTrigger_FWD_DEFINED__
typedef interface SC_IRTCTrigger SC_IRTCTrigger;
#endif 	/* __SC_IRTCTrigger_FWD_DEFINED__ */


#ifndef __SC_ISCAPSDeviceTrigger_FWD_DEFINED__
#define __SC_ISCAPSDeviceTrigger_FWD_DEFINED__
typedef interface SC_ISCAPSDeviceTrigger SC_ISCAPSDeviceTrigger;
#endif 	/* __SC_ISCAPSDeviceTrigger_FWD_DEFINED__ */


#ifndef __ScRTC2DeviceStandard_FWD_DEFINED__
#define __ScRTC2DeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRTC2DeviceStandard ScRTC2DeviceStandard;
#else
typedef struct ScRTC2DeviceStandard ScRTC2DeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScRTC2DeviceStandard_FWD_DEFINED__ */


#ifndef __ScSCAPSDeviceStandard_FWD_DEFINED__
#define __ScSCAPSDeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSCAPSDeviceStandard ScSCAPSDeviceStandard;
#else
typedef struct ScSCAPSDeviceStandard ScSCAPSDeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScSCAPSDeviceStandard_FWD_DEFINED__ */


#ifndef __ScRTC3DeviceStandard_FWD_DEFINED__
#define __ScRTC3DeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRTC3DeviceStandard ScRTC3DeviceStandard;
#else
typedef struct ScRTC3DeviceStandard ScRTC3DeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScRTC3DeviceStandard_FWD_DEFINED__ */


#ifndef __ScRTC4DeviceStandard_FWD_DEFINED__
#define __ScRTC4DeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRTC4DeviceStandard ScRTC4DeviceStandard;
#else
typedef struct ScRTC4DeviceStandard ScRTC4DeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScRTC4DeviceStandard_FWD_DEFINED__ */


#ifndef __ScRTCScanAloneDeviceStandard_FWD_DEFINED__
#define __ScRTCScanAloneDeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRTCScanAloneDeviceStandard ScRTCScanAloneDeviceStandard;
#else
typedef struct ScRTCScanAloneDeviceStandard ScRTCScanAloneDeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScRTCScanAloneDeviceStandard_FWD_DEFINED__ */


#ifndef __ScScanLabUSBDeviceStandard_FWD_DEFINED__
#define __ScScanLabUSBDeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScScanLabUSBDeviceStandard ScScanLabUSBDeviceStandard;
#else
typedef struct ScScanLabUSBDeviceStandard ScScanLabUSBDeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScScanLabUSBDeviceStandard_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_optic_device_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_optic_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_optic_device_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_optic_device_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamOpticDevices_LIBRARY_DEFINED__
#define __ScapsSamOpticDevices_LIBRARY_DEFINED__

/* library ScapsSamOpticDevices */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamOpticDevices;

#ifndef __SC_IRTC2DeviceStandard_INTERFACE_DEFINED__
#define __SC_IRTC2DeviceStandard_INTERFACE_DEFINED__

/* interface SC_IRTC2DeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTC2DeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2468D962-9522-11d3-9B58-008048EEE00C")
    SC_IRTC2DeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTC2DeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTC2DeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTC2DeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTC2DeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IRTC2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IRTC2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IRTC2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IRTC2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IRTC2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IRTC2DeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IRTC2DeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IRTC2DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IRTC2DeviceStandardVtbl;

    interface SC_IRTC2DeviceStandard
    {
        CONST_VTBL struct SC_IRTC2DeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTC2DeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTC2DeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTC2DeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTC2DeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTC2DeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTC2DeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTC2DeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTC2DeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IRTC2DeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IRTC2DeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IRTC2DeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IRTC2DeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IRTC2DeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC2DeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC2DeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IRTC2DeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IRTC2DeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IRTC2DeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IRTC2DeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IRTC2DeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IRTC2DeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IRTC2DeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IRTC2DeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IRTC2DeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IRTC2DeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IRTC2DeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IRTC2DeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IRTC2DeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IRTC2DeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IRTC2DeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IRTC2DeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IRTC2DeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IRTC2DeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IRTC2DeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC2DeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC2DeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IRTC2DeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IRTC2DeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IRTC2DeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IRTC2DeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IRTC2DeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IRTC2DeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IRTC2DeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IRTC2DeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC2DeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IRTC2DeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC2DeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC2DeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC2DeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IRTC2DeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IRTC2DeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_IRTC2DeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_IRTC2DeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IRTC2DeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_IRTC2DeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IRTC2DeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTC2DeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_IRTC3DeviceStandard_INTERFACE_DEFINED__
#define __SC_IRTC3DeviceStandard_INTERFACE_DEFINED__

/* interface SC_IRTC3DeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTC3DeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E5D18F2-42C7-11d4-9BEE-008048EEE00C")
    SC_IRTC3DeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTC3DeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTC3DeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTC3DeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTC3DeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IRTC3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IRTC3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IRTC3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IRTC3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IRTC3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IRTC3DeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IRTC3DeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IRTC3DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IRTC3DeviceStandardVtbl;

    interface SC_IRTC3DeviceStandard
    {
        CONST_VTBL struct SC_IRTC3DeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTC3DeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTC3DeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTC3DeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTC3DeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTC3DeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTC3DeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTC3DeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTC3DeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IRTC3DeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IRTC3DeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IRTC3DeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IRTC3DeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IRTC3DeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC3DeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC3DeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IRTC3DeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IRTC3DeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IRTC3DeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IRTC3DeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IRTC3DeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IRTC3DeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IRTC3DeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IRTC3DeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IRTC3DeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IRTC3DeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IRTC3DeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IRTC3DeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IRTC3DeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IRTC3DeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IRTC3DeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IRTC3DeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IRTC3DeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IRTC3DeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IRTC3DeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC3DeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC3DeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IRTC3DeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IRTC3DeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IRTC3DeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IRTC3DeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IRTC3DeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IRTC3DeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IRTC3DeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IRTC3DeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC3DeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IRTC3DeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC3DeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC3DeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC3DeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IRTC3DeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IRTC3DeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_IRTC3DeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_IRTC3DeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IRTC3DeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_IRTC3DeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IRTC3DeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTC3DeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_IRTC4DeviceStandard_INTERFACE_DEFINED__
#define __SC_IRTC4DeviceStandard_INTERFACE_DEFINED__

/* interface SC_IRTC4DeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTC4DeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("91AE29D5-FE53-4C98-9767-2A82D15814B5")
    SC_IRTC4DeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTC4DeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTC4DeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTC4DeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTC4DeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IRTC4DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IRTC4DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IRTC4DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IRTC4DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IRTC4DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IRTC4DeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IRTC4DeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IRTC4DeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IRTC4DeviceStandardVtbl;

    interface SC_IRTC4DeviceStandard
    {
        CONST_VTBL struct SC_IRTC4DeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTC4DeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTC4DeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTC4DeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTC4DeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTC4DeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTC4DeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTC4DeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTC4DeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IRTC4DeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IRTC4DeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IRTC4DeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IRTC4DeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IRTC4DeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC4DeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTC4DeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IRTC4DeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IRTC4DeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IRTC4DeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IRTC4DeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IRTC4DeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IRTC4DeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IRTC4DeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IRTC4DeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IRTC4DeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IRTC4DeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IRTC4DeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IRTC4DeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IRTC4DeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IRTC4DeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IRTC4DeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IRTC4DeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IRTC4DeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IRTC4DeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IRTC4DeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC4DeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTC4DeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IRTC4DeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IRTC4DeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IRTC4DeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IRTC4DeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IRTC4DeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IRTC4DeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IRTC4DeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IRTC4DeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTC4DeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IRTC4DeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC4DeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IRTC4DeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTC4DeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IRTC4DeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IRTC4DeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_IRTC4DeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_IRTC4DeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IRTC4DeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_IRTC4DeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IRTC4DeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTC4DeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_IRTCScanAloneDeviceStandard_INTERFACE_DEFINED__
#define __SC_IRTCScanAloneDeviceStandard_INTERFACE_DEFINED__

/* interface SC_IRTCScanAloneDeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTCScanAloneDeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE70A008-07ED-4664-9151-D987814FA690")
    SC_IRTCScanAloneDeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTCScanAloneDeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IRTCScanAloneDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IRTCScanAloneDeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IRTCScanAloneDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IRTCScanAloneDeviceStandardVtbl;

    interface SC_IRTCScanAloneDeviceStandard
    {
        CONST_VTBL struct SC_IRTCScanAloneDeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTCScanAloneDeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTCScanAloneDeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTCScanAloneDeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTCScanAloneDeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTCScanAloneDeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTCScanAloneDeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTCScanAloneDeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTCScanAloneDeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IRTCScanAloneDeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IRTCScanAloneDeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IRTCScanAloneDeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IRTCScanAloneDeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IRTCScanAloneDeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IRTCScanAloneDeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IRTCScanAloneDeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IRTCScanAloneDeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IRTCScanAloneDeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IRTCScanAloneDeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IRTCScanAloneDeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IRTCScanAloneDeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IRTCScanAloneDeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_IRTCScanAloneDeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IRTCScanAloneDeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTCScanAloneDeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_ISCAPSDeviceStandard_INTERFACE_DEFINED__
#define __SC_ISCAPSDeviceStandard_INTERFACE_DEFINED__

/* interface SC_ISCAPSDeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISCAPSDeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB422462-80E8-11d4-884F-00105A9254F2")
    SC_ISCAPSDeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ISCAPSDeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISCAPSDeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISCAPSDeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISCAPSDeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_ISCAPSDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_ISCAPSDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_ISCAPSDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_ISCAPSDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_ISCAPSDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_ISCAPSDeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_ISCAPSDeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_ISCAPSDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_ISCAPSDeviceStandardVtbl;

    interface SC_ISCAPSDeviceStandard
    {
        CONST_VTBL struct SC_ISCAPSDeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISCAPSDeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISCAPSDeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISCAPSDeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISCAPSDeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISCAPSDeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISCAPSDeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISCAPSDeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISCAPSDeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_ISCAPSDeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_ISCAPSDeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_ISCAPSDeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_ISCAPSDeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_ISCAPSDeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ISCAPSDeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ISCAPSDeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_ISCAPSDeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_ISCAPSDeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_ISCAPSDeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_ISCAPSDeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_ISCAPSDeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_ISCAPSDeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_ISCAPSDeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_ISCAPSDeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_ISCAPSDeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_ISCAPSDeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_ISCAPSDeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_ISCAPSDeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_ISCAPSDeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_ISCAPSDeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_ISCAPSDeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_ISCAPSDeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_ISCAPSDeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_ISCAPSDeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_ISCAPSDeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_ISCAPSDeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_ISCAPSDeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_ISCAPSDeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_ISCAPSDeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_ISCAPSDeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_ISCAPSDeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_ISCAPSDeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_ISCAPSDeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_ISCAPSDeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_ISCAPSDeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_ISCAPSDeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_ISCAPSDeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_ISCAPSDeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_ISCAPSDeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_ISCAPSDeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_ISCAPSDeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_ISCAPSDeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ISCAPSDeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_IRTC1000DeviceSpecial_INTERFACE_DEFINED__
#define __SC_IRTC1000DeviceSpecial_INTERFACE_DEFINED__

/* interface SC_IRTC1000DeviceSpecial */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTC1000DeviceSpecial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3C594422-42A9-11d4-9BEE-008048EEE00C")
    SC_IRTC1000DeviceSpecial : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScYagParameter( 
            /* [retval][out] */ long *Parameter) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScYagParameter( 
            /* [in] */ long Parameter) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHideOutputWindow( 
            /* [retval][out] */ long *Hide) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHideOutputWindow( 
            /* [in] */ long Hide) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRTCControlMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCControlMode( 
            /* [in] */ long Mode) = 0;
        
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
            /* [retval][out] */ /* external definition not present */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRTCSettings( 
            /* [in] */ /* external definition not present */ sc_com_rtc_settings *Settings) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScScannerStyleName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScScannerStyleName( 
            /* [in] */ BSTR Name) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTC1000DeviceSpecialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTC1000DeviceSpecial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTC1000DeviceSpecial * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScYagParameter )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Parameter);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScYagParameter )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Parameter);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHideOutputWindow )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Hide);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHideOutputWindow )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Hide);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCControlMode )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCControlMode )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScProgramFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScProgramFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCorrectionFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCorrectionFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Index,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDllFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDllFileName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRTCSettings )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ /* external definition not present */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRTCSettings )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ /* external definition not present */ sc_com_rtc_settings *Settings);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScScannerStyleName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScScannerStyleName )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableStopBeep )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Disable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableStopBeep )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Disable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScExecuteListSize )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScExecuteListSize )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [retval][out] */ long *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IRTC1000DeviceSpecial * This,
            /* [in] */ long Offset);
        
        END_INTERFACE
    } SC_IRTC1000DeviceSpecialVtbl;

    interface SC_IRTC1000DeviceSpecial
    {
        CONST_VTBL struct SC_IRTC1000DeviceSpecialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTC1000DeviceSpecial_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTC1000DeviceSpecial_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTC1000DeviceSpecial_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTC1000DeviceSpecial_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTC1000DeviceSpecial_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTC1000DeviceSpecial_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTC1000DeviceSpecial_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTC1000DeviceSpecial_get_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> get_ScYagParameter(This,Parameter) ) 

#define SC_IRTC1000DeviceSpecial_put_ScYagParameter(This,Parameter)	\
    ( (This)->lpVtbl -> put_ScYagParameter(This,Parameter) ) 

#define SC_IRTC1000DeviceSpecial_get_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> get_ScHideOutputWindow(This,Hide) ) 

#define SC_IRTC1000DeviceSpecial_put_ScHideOutputWindow(This,Hide)	\
    ( (This)->lpVtbl -> put_ScHideOutputWindow(This,Hide) ) 

#define SC_IRTC1000DeviceSpecial_get_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScRTCControlMode(This,Mode) ) 

#define SC_IRTC1000DeviceSpecial_put_ScRTCControlMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScRTCControlMode(This,Mode) ) 

#define SC_IRTC1000DeviceSpecial_get_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScProgramFileName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_put_ScProgramFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScProgramFileName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_get_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> get_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IRTC1000DeviceSpecial_put_ScCorrectionFileName(This,Index,Name)	\
    ( (This)->lpVtbl -> put_ScCorrectionFileName(This,Index,Name) ) 

#define SC_IRTC1000DeviceSpecial_get_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScDllFileName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_put_ScDllFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScDllFileName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_get_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> get_ScRTCSettings(This,Settings) ) 

#define SC_IRTC1000DeviceSpecial_put_ScRTCSettings(This,Settings)	\
    ( (This)->lpVtbl -> put_ScRTCSettings(This,Settings) ) 

#define SC_IRTC1000DeviceSpecial_get_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> get_ScScannerStyleName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_put_ScScannerStyleName(This,Name)	\
    ( (This)->lpVtbl -> put_ScScannerStyleName(This,Name) ) 

#define SC_IRTC1000DeviceSpecial_get_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> get_ScDisableStopBeep(This,Disable) ) 

#define SC_IRTC1000DeviceSpecial_put_ScDisableStopBeep(This,Disable)	\
    ( (This)->lpVtbl -> put_ScDisableStopBeep(This,Disable) ) 

#define SC_IRTC1000DeviceSpecial_get_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScExecuteListSize(This,Size) ) 

#define SC_IRTC1000DeviceSpecial_put_ScExecuteListSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScExecuteListSize(This,Size) ) 

#define SC_IRTC1000DeviceSpecial_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IRTC1000DeviceSpecial_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTC1000DeviceSpecial_INTERFACE_DEFINED__ */


#ifndef __SC_IScanLabUSBDeviceStandard_INTERFACE_DEFINED__
#define __SC_IScanLabUSBDeviceStandard_INTERFACE_DEFINED__

/* interface SC_IScanLabUSBDeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IScanLabUSBDeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F519F32-2A3B-11d4-9BDD-008048EEE00C")
    SC_IScanLabUSBDeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
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
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSimulationDevice( 
            /* [in] */ LPDISPATCH Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMiscValue( 
            /* [in] */ long MiscId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiscValue( 
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPosition( 
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHandle( 
            /* [in] */ long HandleId,
            /* [in] */ long Handle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPixelLine( 
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHeadID( 
            /* [retval][out] */ long *HeadID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IScanLabUSBDeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IScanLabUSBDeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IScanLabUSBDeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHeadID )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *HeadID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetData )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetData )( 
            SC_IScanLabUSBDeviceStandard * This,
            /* [in] */ long DataID,
            /* [in] */ long DataLength,
            /* [in] */ byte *Data,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IScanLabUSBDeviceStandardVtbl;

    interface SC_IScanLabUSBDeviceStandard
    {
        CONST_VTBL struct SC_IScanLabUSBDeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IScanLabUSBDeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IScanLabUSBDeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IScanLabUSBDeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IScanLabUSBDeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IScanLabUSBDeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IScanLabUSBDeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IScanLabUSBDeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IScanLabUSBDeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IScanLabUSBDeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IScanLabUSBDeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IScanLabUSBDeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IScanLabUSBDeviceStandard_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IScanLabUSBDeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IScanLabUSBDeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IScanLabUSBDeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IScanLabUSBDeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IScanLabUSBDeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IScanLabUSBDeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IScanLabUSBDeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IScanLabUSBDeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IScanLabUSBDeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IScanLabUSBDeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScGetHeadID(This,HeadID) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#define SC_IScanLabUSBDeviceStandard_ScSetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScSetData(This,DataID,DataLength,Data,Result) ) 

#define SC_IScanLabUSBDeviceStandard_ScGetData(This,DataID,DataLength,Data,Result)	\
    ( (This)->lpVtbl -> ScGetData(This,DataID,DataLength,Data,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IScanLabUSBDeviceStandard_INTERFACE_DEFINED__ */


#ifndef __SC_IRTCTrigger_INTERFACE_DEFINED__
#define __SC_IRTCTrigger_INTERFACE_DEFINED__

/* interface SC_IRTCTrigger */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRTCTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("551DC882-72B8-11d4-9C0C-008048EEE00C")
    SC_IRTCTrigger : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetRTC( 
            /* [in] */ long *RTC,
            /* [in] */ long Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerList( 
            /* [in] */ long List) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadID( 
            /* [in] */ long HeadID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRTCTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRTCTrigger * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRTCTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRTCTrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRTCTrigger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRTCTrigger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRTCTrigger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRTCTrigger * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInit )( 
            SC_IRTCTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTrigger )( 
            SC_IRTCTrigger * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureStart )( 
            SC_IRTCTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureEnd )( 
            SC_IRTCTrigger * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntity )( 
            SC_IRTCTrigger * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntity )( 
            SC_IRTCTrigger * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTriggerMode )( 
            SC_IRTCTrigger * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTriggerMode )( 
            SC_IRTCTrigger * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTrigger )( 
            SC_IRTCTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetTrigger )( 
            SC_IRTCTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRTC )( 
            SC_IRTCTrigger * This,
            /* [in] */ long *RTC,
            /* [in] */ long Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerList )( 
            SC_IRTCTrigger * This,
            /* [in] */ long List);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadID )( 
            SC_IRTCTrigger * This,
            /* [in] */ long HeadID);
        
        END_INTERFACE
    } SC_IRTCTriggerVtbl;

    interface SC_IRTCTrigger
    {
        CONST_VTBL struct SC_IRTCTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRTCTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRTCTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRTCTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRTCTrigger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRTCTrigger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRTCTrigger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRTCTrigger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRTCTrigger_ScInit(This)	\
    ( (This)->lpVtbl -> ScInit(This) ) 

#define SC_IRTCTrigger_ScGetTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetTrigger(This,Trigger) ) 

#define SC_IRTCTrigger_ScExposureStart(This)	\
    ( (This)->lpVtbl -> ScExposureStart(This) ) 

#define SC_IRTCTrigger_ScExposureEnd(This)	\
    ( (This)->lpVtbl -> ScExposureEnd(This) ) 

#define SC_IRTCTrigger_get_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> get_ScEntity(This,Entity) ) 

#define SC_IRTCTrigger_put_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> put_ScEntity(This,Entity) ) 

#define SC_IRTCTrigger_get_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScTriggerMode(This,Mode) ) 

#define SC_IRTCTrigger_put_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScTriggerMode(This,Mode) ) 

#define SC_IRTCTrigger_ScSetTrigger(This)	\
    ( (This)->lpVtbl -> ScSetTrigger(This) ) 

#define SC_IRTCTrigger_ScResetTrigger(This)	\
    ( (This)->lpVtbl -> ScResetTrigger(This) ) 

#define SC_IRTCTrigger_ScSetRTC(This,RTC,Type)	\
    ( (This)->lpVtbl -> ScSetRTC(This,RTC,Type) ) 

#define SC_IRTCTrigger_ScSetTriggerList(This,List)	\
    ( (This)->lpVtbl -> ScSetTriggerList(This,List) ) 

#define SC_IRTCTrigger_ScSetHeadID(This,HeadID)	\
    ( (This)->lpVtbl -> ScSetHeadID(This,HeadID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRTCTrigger_INTERFACE_DEFINED__ */


#ifndef __SC_ISCAPSDeviceTrigger_INTERFACE_DEFINED__
#define __SC_ISCAPSDeviceTrigger_INTERFACE_DEFINED__

/* interface SC_ISCAPSDeviceTrigger */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISCAPSDeviceTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BBBD0203-35C0-4998-A122-D0DDA04542BB")
    SC_ISCAPSDeviceTrigger : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUSC( 
            /* [in] */ long *USC,
            /* [in] */ long Type) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ISCAPSDeviceTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISCAPSDeviceTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISCAPSDeviceTrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInit )( 
            SC_ISCAPSDeviceTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTrigger )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureStart )( 
            SC_ISCAPSDeviceTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureEnd )( 
            SC_ISCAPSDeviceTrigger * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntity )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntity )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTriggerMode )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTriggerMode )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTrigger )( 
            SC_ISCAPSDeviceTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetTrigger )( 
            SC_ISCAPSDeviceTrigger * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUSC )( 
            SC_ISCAPSDeviceTrigger * This,
            /* [in] */ long *USC,
            /* [in] */ long Type);
        
        END_INTERFACE
    } SC_ISCAPSDeviceTriggerVtbl;

    interface SC_ISCAPSDeviceTrigger
    {
        CONST_VTBL struct SC_ISCAPSDeviceTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISCAPSDeviceTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISCAPSDeviceTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISCAPSDeviceTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISCAPSDeviceTrigger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISCAPSDeviceTrigger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISCAPSDeviceTrigger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISCAPSDeviceTrigger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISCAPSDeviceTrigger_ScInit(This)	\
    ( (This)->lpVtbl -> ScInit(This) ) 

#define SC_ISCAPSDeviceTrigger_ScGetTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetTrigger(This,Trigger) ) 

#define SC_ISCAPSDeviceTrigger_ScExposureStart(This)	\
    ( (This)->lpVtbl -> ScExposureStart(This) ) 

#define SC_ISCAPSDeviceTrigger_ScExposureEnd(This)	\
    ( (This)->lpVtbl -> ScExposureEnd(This) ) 

#define SC_ISCAPSDeviceTrigger_get_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> get_ScEntity(This,Entity) ) 

#define SC_ISCAPSDeviceTrigger_put_ScEntity(This,Entity)	\
    ( (This)->lpVtbl -> put_ScEntity(This,Entity) ) 

#define SC_ISCAPSDeviceTrigger_get_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScTriggerMode(This,Mode) ) 

#define SC_ISCAPSDeviceTrigger_put_ScTriggerMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScTriggerMode(This,Mode) ) 

#define SC_ISCAPSDeviceTrigger_ScSetTrigger(This)	\
    ( (This)->lpVtbl -> ScSetTrigger(This) ) 

#define SC_ISCAPSDeviceTrigger_ScResetTrigger(This)	\
    ( (This)->lpVtbl -> ScResetTrigger(This) ) 

#define SC_ISCAPSDeviceTrigger_ScSetUSC(This,USC,Type)	\
    ( (This)->lpVtbl -> ScSetUSC(This,USC,Type) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ISCAPSDeviceTrigger_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScRTC2DeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("2468D965-9522-11d3-9B58-008048EEE00C")
ScRTC2DeviceStandard;
#endif

EXTERN_C const CLSID CLSID_ScSCAPSDeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("017690A2-8119-11d4-884F-00105A9254F2")
ScSCAPSDeviceStandard;
#endif

EXTERN_C const CLSID CLSID_ScRTC3DeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("3E5D18F4-42C7-11d4-9BEE-008048EEE00C")
ScRTC3DeviceStandard;
#endif

EXTERN_C const CLSID CLSID_ScRTC4DeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("3BBD6150-1885-4B33-A988-AEf9AC561C86")
ScRTC4DeviceStandard;
#endif

EXTERN_C const CLSID CLSID_ScRTCScanAloneDeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("14DCBFFE-F90B-4fec-A90D-1F9F3341C849")
ScRTCScanAloneDeviceStandard;
#endif

EXTERN_C const CLSID CLSID_ScScanLabUSBDeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("2F519F33-2A3B-11d4-9BDD-008048EEE00C")
ScScanLabUSBDeviceStandard;
#endif
#endif /* __ScapsSamOpticDevices_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


