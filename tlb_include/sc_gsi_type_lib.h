

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:45 2017
 */
/* Compiler settings for d:\scaps\dll_source\optic_devices\gsi\com\include\sc_gsi_type_lib.idl:
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


#ifndef __sc_gsi_type_lib_h__
#define __sc_gsi_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IGsiHc2DeviceStandard_FWD_DEFINED__
#define __SC_IGsiHc2DeviceStandard_FWD_DEFINED__
typedef interface SC_IGsiHc2DeviceStandard SC_IGsiHc2DeviceStandard;
#endif 	/* __SC_IGsiHc2DeviceStandard_FWD_DEFINED__ */


#ifndef __ScGsiHc2DeviceStandard_FWD_DEFINED__
#define __ScGsiHc2DeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGsiHc2DeviceStandard ScGsiHc2DeviceStandard;
#else
typedef struct ScGsiHc2DeviceStandard ScGsiHc2DeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScGsiHc2DeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IGsiHc3DeviceStandard_FWD_DEFINED__
#define __SC_IGsiHc3DeviceStandard_FWD_DEFINED__
typedef interface SC_IGsiHc3DeviceStandard SC_IGsiHc3DeviceStandard;
#endif 	/* __SC_IGsiHc3DeviceStandard_FWD_DEFINED__ */


#ifndef __ScGsiHc3DeviceStandard_FWD_DEFINED__
#define __ScGsiHc3DeviceStandard_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGsiHc3DeviceStandard ScGsiHc3DeviceStandard;
#else
typedef struct ScGsiHc3DeviceStandard ScGsiHc3DeviceStandard;
#endif /* __cplusplus */

#endif 	/* __ScGsiHc3DeviceStandard_FWD_DEFINED__ */


#ifndef __SC_IScapsInternalDeviceStandard_FWD_DEFINED__
#define __SC_IScapsInternalDeviceStandard_FWD_DEFINED__
typedef interface SC_IScapsInternalDeviceStandard SC_IScapsInternalDeviceStandard;
#endif 	/* __SC_IScapsInternalDeviceStandard_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_gsi_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_optic_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_gsi_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_gsi_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamGsiDevices_LIBRARY_DEFINED__
#define __ScapsSamGsiDevices_LIBRARY_DEFINED__

/* library ScapsSamGsiDevices */
/* [version][helpstring][uuid] */ 

#define	sc_scaps_info_version	( 1 )


#pragma pack(push, 1)
typedef /* [public][public] */ struct __MIDL___MIDL_itf_sc_gsi_type_lib_0001_0065_0001
    {
    long info_version;
    long info_data[ 50 ];
    } 	sc_scaps_device_info;


#pragma pack(pop)

EXTERN_C const IID LIBID_ScapsSamGsiDevices;

#ifndef __SC_IGsiHc2DeviceStandard_INTERFACE_DEFINED__
#define __SC_IGsiHc2DeviceStandard_INTERFACE_DEFINED__

/* interface SC_IGsiHc2DeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGsiHc2DeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4390D0A2-DC05-11d4-BE86-0050BADBC86E")
    SC_IGsiHc2DeviceStandard : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGsiHc2DeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGsiHc2DeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGsiHc2DeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IGsiHc2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IGsiHc2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IGsiHc2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IGsiHc2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IGsiHc2DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IGsiHc2DeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IGsiHc2DeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        END_INTERFACE
    } SC_IGsiHc2DeviceStandardVtbl;

    interface SC_IGsiHc2DeviceStandard
    {
        CONST_VTBL struct SC_IGsiHc2DeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGsiHc2DeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGsiHc2DeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGsiHc2DeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGsiHc2DeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGsiHc2DeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGsiHc2DeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGsiHc2DeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGsiHc2DeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IGsiHc2DeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IGsiHc2DeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IGsiHc2DeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IGsiHc2DeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IGsiHc2DeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IGsiHc2DeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IGsiHc2DeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IGsiHc2DeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IGsiHc2DeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IGsiHc2DeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IGsiHc2DeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IGsiHc2DeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IGsiHc2DeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IGsiHc2DeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IGsiHc2DeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IGsiHc2DeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IGsiHc2DeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IGsiHc2DeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IGsiHc2DeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IGsiHc2DeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IGsiHc2DeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IGsiHc2DeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IGsiHc2DeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IGsiHc2DeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IGsiHc2DeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IGsiHc2DeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IGsiHc2DeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IGsiHc2DeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IGsiHc2DeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IGsiHc2DeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IGsiHc2DeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IGsiHc2DeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IGsiHc2DeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IGsiHc2DeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IGsiHc2DeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IGsiHc2DeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IGsiHc2DeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGsiHc2DeviceStandard_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScGsiHc2DeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("4390D0A1-DC05-11d4-BE86-0050BADBC86E")
ScGsiHc2DeviceStandard;
#endif

#ifndef __SC_IGsiHc3DeviceStandard_INTERFACE_DEFINED__
#define __SC_IGsiHc3DeviceStandard_INTERFACE_DEFINED__

/* interface SC_IGsiHc3DeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGsiHc3DeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48B3DE42-4450-11d5-BEF2-0050BADBC86E")
    SC_IGsiHc3DeviceStandard : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLaserPort( 
            /* [in] */ long PortID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLaserPort( 
            /* [retval][out] */ long *PortID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGsiHc3DeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGsiHc3DeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGsiHc3DeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IGsiHc3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IGsiHc3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IGsiHc3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IGsiHc3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IGsiHc3DeviceStandard * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IGsiHc3DeviceStandard * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSimulationDevice )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ LPDISPATCH Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMiscValue )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiscValue )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long MiscId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPosition )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPosition )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PosId,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHandle )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long HandleId,
            /* [in] */ long Handle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPixelLine )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ /* external definition not present */ sc_com_pixel_puls *Pixels,
            /* [in] */ long PixelCount,
            /* [in] */ double PixelPeriod,
            /* [in] */ double dx,
            /* [in] */ double dy,
            /* [in] */ double dz);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLaserPort )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [in] */ long PortID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLaserPort )( 
            SC_IGsiHc3DeviceStandard * This,
            /* [retval][out] */ long *PortID);
        
        END_INTERFACE
    } SC_IGsiHc3DeviceStandardVtbl;

    interface SC_IGsiHc3DeviceStandard
    {
        CONST_VTBL struct SC_IGsiHc3DeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGsiHc3DeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGsiHc3DeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGsiHc3DeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGsiHc3DeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGsiHc3DeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGsiHc3DeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGsiHc3DeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGsiHc3DeviceStandard_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IGsiHc3DeviceStandard_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IGsiHc3DeviceStandard_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IGsiHc3DeviceStandard_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IGsiHc3DeviceStandard_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IGsiHc3DeviceStandard_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IGsiHc3DeviceStandard_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IGsiHc3DeviceStandard_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IGsiHc3DeviceStandard_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IGsiHc3DeviceStandard_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IGsiHc3DeviceStandard_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IGsiHc3DeviceStandard_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IGsiHc3DeviceStandard_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IGsiHc3DeviceStandard_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IGsiHc3DeviceStandard_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IGsiHc3DeviceStandard_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IGsiHc3DeviceStandard_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IGsiHc3DeviceStandard_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IGsiHc3DeviceStandard_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IGsiHc3DeviceStandard_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IGsiHc3DeviceStandard_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IGsiHc3DeviceStandard_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IGsiHc3DeviceStandard_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IGsiHc3DeviceStandard_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IGsiHc3DeviceStandard_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IGsiHc3DeviceStandard_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IGsiHc3DeviceStandard_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IGsiHc3DeviceStandard_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IGsiHc3DeviceStandard_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IGsiHc3DeviceStandard_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IGsiHc3DeviceStandard_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IGsiHc3DeviceStandard_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScSetSimulationDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetSimulationDevice(This,Device) ) 

#define SC_IGsiHc3DeviceStandard_ScSetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScSetMiscValue(This,MiscId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScGetMiscValue(This,MiscId,Value)	\
    ( (This)->lpVtbl -> ScGetMiscValue(This,MiscId,Value) ) 

#define SC_IGsiHc3DeviceStandard_ScSetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetPosition(This,PosId,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScGetPosition(This,PosId,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetPosition(This,PosId,X,Y,Z) ) 

#define SC_IGsiHc3DeviceStandard_ScSetHandle(This,HandleId,Handle)	\
    ( (This)->lpVtbl -> ScSetHandle(This,HandleId,Handle) ) 

#define SC_IGsiHc3DeviceStandard_ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz)	\
    ( (This)->lpVtbl -> ScPixelLine(This,Pixels,PixelCount,PixelPeriod,dx,dy,dz) ) 

#define SC_IGsiHc3DeviceStandard_ScSetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScSetLaserPort(This,PortID) ) 

#define SC_IGsiHc3DeviceStandard_ScGetLaserPort(This,PortID)	\
    ( (This)->lpVtbl -> ScGetLaserPort(This,PortID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGsiHc3DeviceStandard_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScGsiHc3DeviceStandard;

#ifdef __cplusplus

class DECLSPEC_UUID("48B3DE43-4450-11d5-BEF2-0050BADBC86E")
ScGsiHc3DeviceStandard;
#endif

#ifndef __SC_IScapsInternalDeviceStandard_INTERFACE_DEFINED__
#define __SC_IScapsInternalDeviceStandard_INTERFACE_DEFINED__

/* interface SC_IScapsInternalDeviceStandard */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IScapsInternalDeviceStandard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4178A872-8E19-11d4-9386-0060673AC7A2")
    SC_IScapsInternalDeviceStandard : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScapsDeviceInfo( 
            /* [retval][out] */ sc_scaps_device_info **Info) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IScapsInternalDeviceStandardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IScapsInternalDeviceStandard * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IScapsInternalDeviceStandard * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScapsDeviceInfo )( 
            SC_IScapsInternalDeviceStandard * This,
            /* [retval][out] */ sc_scaps_device_info **Info);
        
        END_INTERFACE
    } SC_IScapsInternalDeviceStandardVtbl;

    interface SC_IScapsInternalDeviceStandard
    {
        CONST_VTBL struct SC_IScapsInternalDeviceStandardVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IScapsInternalDeviceStandard_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IScapsInternalDeviceStandard_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IScapsInternalDeviceStandard_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IScapsInternalDeviceStandard_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IScapsInternalDeviceStandard_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IScapsInternalDeviceStandard_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IScapsInternalDeviceStandard_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IScapsInternalDeviceStandard_ScGetScapsDeviceInfo(This,Info)	\
    ( (This)->lpVtbl -> ScGetScapsDeviceInfo(This,Info) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IScapsInternalDeviceStandard_INTERFACE_DEFINED__ */

#endif /* __ScapsSamGsiDevices_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


