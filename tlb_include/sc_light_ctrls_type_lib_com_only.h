

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:50 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\light_ctrls\sc_light_ctrls_type_lib_com_only.idl:
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


#ifndef __sc_light_ctrls_type_lib_com_only_h__
#define __sc_light_ctrls_type_lib_com_only_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___LightExposureCtrlComOnly_FWD_DEFINED__
#define ___LightExposureCtrlComOnly_FWD_DEFINED__
typedef interface _LightExposureCtrlComOnly _LightExposureCtrlComOnly;
#endif 	/* ___LightExposureCtrlComOnly_FWD_DEFINED__ */


#ifndef __ScLightExposureCtrlComOnly_FWD_DEFINED__
#define __ScLightExposureCtrlComOnly_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLightExposureCtrlComOnly ScLightExposureCtrlComOnly;
#else
typedef struct ScLightExposureCtrlComOnly ScLightExposureCtrlComOnly;
#endif /* __cplusplus */

#endif 	/* __ScLightExposureCtrlComOnly_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_light_ctrls_type_lib_com_only_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_optic_type_lib.h"
#include "sc_property_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_light_ctrls_type_lib_com_only_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_light_ctrls_type_lib_com_only_0000_0000_v0_0_s_ifspec;


#ifndef __ScSamLightCtrlsComOnly_LIBRARY_DEFINED__
#define __ScSamLightCtrlsComOnly_LIBRARY_DEFINED__

/* library ScSamLightCtrlsComOnly */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ScSamLightCtrlsComOnly;

#ifndef ___LightExposureCtrlComOnly_INTERFACE_DEFINED__
#define ___LightExposureCtrlComOnly_INTERFACE_DEFINED__

/* interface _LightExposureCtrlComOnly */
/* [helpstring][dual][hidden][oleautomation][uuid][object] */ 


EXTERN_C const IID IID__LightExposureCtrlComOnly;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1E1C4949-7C69-455f-B1D3-B6C8C59C02C8")
    _LightExposureCtrlComOnly : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScApplyProperty( 
            /* [retval][out] */ long *Apply) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView( 
            /* [in] */ LPDISPATCH View) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTabInto( 
            /* [in] */ long Param,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateEntity( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditResource( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateResource( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutput2D( 
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOnExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEndExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExposureInfo( 
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFunctionFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPriority( 
            /* [retval][out] */ long *Priority) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPowerMap( 
            /* [in] */ long HeadId,
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetParent( 
            LPDISPATCH Parent) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOverrideSpeed( 
            /* [retval][out] */ double *Override) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOverrideSpeed( 
            /* [in] */ double Override) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOverrideFreq( 
            /* [retval][out] */ double *Override) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOverrideFreq( 
            /* [in] */ double Override) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOverridePower( 
            /* [retval][out] */ double *Override) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOverridePower( 
            /* [in] */ double Override) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOverridePower2( 
            /* [retval][out] */ double *Override) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOverridePower2( 
            /* [in] */ double Override) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsePowerMap( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsePowerMap( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableLeePanelControl( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableLeePanelControl( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetShowFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetShowFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPowerMapValue( 
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPowerMapValue( 
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMaxPower( 
            /* [in] */ long HeadId,
            /* [in] */ double Power) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMaxPower( 
            /* [in] */ long HeadId,
            /* [retval][out] */ double *Power) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPowerMapSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetValueUnit( 
            /* [in] */ BSTR Unit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGridPen( 
            /* [retval][out] */ long *Pen) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGridPen( 
            /* [in] */ long Pen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPen( 
            /* [in] */ long Pen) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoCalcMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoCalcMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCalcPowerValue( 
            /* [in] */ long HeadId,
            /* [in] */ double Power,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( 
            /* [in] */ long StyleId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetText( 
            /* [in] */ long TextId,
            BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetText( 
            /* [in] */ long TextId,
            /* [retval][out] */ BSTR *Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRampingValue( 
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetRampingValue( 
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPenValue( 
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPenValue( 
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetShutterInfo( 
            /* [in] */ long state) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLongValue( 
            /* [in] */ long Type,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLongValue( 
            /* [in] */ long Type,
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _LightExposureCtrlComOnlyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _LightExposureCtrlComOnly * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _LightExposureCtrlComOnly * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _LightExposureCtrlComOnly * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyName )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScApplyProperty )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Apply);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Param,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateEntity )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditResource )( 
            _LightExposureCtrlComOnly * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateResource )( 
            _LightExposureCtrlComOnly * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutput2D )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnExposure )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitExposure )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndExposure )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureInfo )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            _LightExposureCtrlComOnly * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFunctionFlags )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPriority )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Priority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyle )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPowerMap )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetParent )( 
            _LightExposureCtrlComOnly * This,
            LPDISPATCH Parent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideSpeed )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideSpeed )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideFreq )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideFreq )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower2 )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower2 )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsePowerMap )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsePowerMap )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableLeePanelControl )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableLeePanelControl )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetShowFlags )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShowFlags )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPowerMapValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMaxPower )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMaxPower )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [retval][out] */ double *Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapSize )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetValueUnit )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ BSTR Unit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGridPen )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Pen);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGridPen )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPen )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoCalcMode )( 
            _LightExposureCtrlComOnly * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoCalcMode )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalcPowerValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetText )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long TextId,
            BSTR Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetText )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long TextId,
            /* [retval][out] */ BSTR *Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRampingValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRampingValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShutterInfo )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            _LightExposureCtrlComOnly * This,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        END_INTERFACE
    } _LightExposureCtrlComOnlyVtbl;

    interface _LightExposureCtrlComOnly
    {
        CONST_VTBL struct _LightExposureCtrlComOnlyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _LightExposureCtrlComOnly_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _LightExposureCtrlComOnly_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _LightExposureCtrlComOnly_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _LightExposureCtrlComOnly_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _LightExposureCtrlComOnly_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _LightExposureCtrlComOnly_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _LightExposureCtrlComOnly_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _LightExposureCtrlComOnly_ScGetPropertyName(This,Name)	\
    ( (This)->lpVtbl -> ScGetPropertyName(This,Name) ) 

#define _LightExposureCtrlComOnly_ScApplyProperty(This,Apply)	\
    ( (This)->lpVtbl -> ScApplyProperty(This,Apply) ) 

#define _LightExposureCtrlComOnly_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define _LightExposureCtrlComOnly_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define _LightExposureCtrlComOnly_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define _LightExposureCtrlComOnly_ScTabInto(This,Param,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Param,Result) ) 

#define _LightExposureCtrlComOnly_ScCreateEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScCreateEntity(This,Entity) ) 

#define _LightExposureCtrlComOnly_ScEditResource(This)	\
    ( (This)->lpVtbl -> ScEditResource(This) ) 

#define _LightExposureCtrlComOnly_ScUpdateResource(This)	\
    ( (This)->lpVtbl -> ScUpdateResource(This) ) 

#define _LightExposureCtrlComOnly_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define _LightExposureCtrlComOnly_ScSetOutput2D(This,Output)	\
    ( (This)->lpVtbl -> ScSetOutput2D(This,Output) ) 

#define _LightExposureCtrlComOnly_ScOnExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScOnExposure(This,Entity,Exposure) ) 

#define _LightExposureCtrlComOnly_ScInitExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScInitExposure(This,Entity,Exposure) ) 

#define _LightExposureCtrlComOnly_ScEndExposure(This,Entity)	\
    ( (This)->lpVtbl -> ScEndExposure(This,Entity) ) 

#define _LightExposureCtrlComOnly_ScSelectStyle(This,Style,Exposure)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,Style,Exposure) ) 

#define _LightExposureCtrlComOnly_ScExposureInfo(This,Info,Exposure)	\
    ( (This)->lpVtbl -> ScExposureInfo(This,Info,Exposure) ) 

#define _LightExposureCtrlComOnly_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define _LightExposureCtrlComOnly_ScGetFunctionFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetFunctionFlags(This,Flags) ) 

#define _LightExposureCtrlComOnly_ScGetPriority(This,Priority)	\
    ( (This)->lpVtbl -> ScGetPriority(This,Priority) ) 

#define _LightExposureCtrlComOnly_ScEditStyle(This,Style,NewStyle)	\
    ( (This)->lpVtbl -> ScEditStyle(This,Style,NewStyle) ) 

#define _LightExposureCtrlComOnly_ScEditPowerMap(This,HeadId,Flags)	\
    ( (This)->lpVtbl -> ScEditPowerMap(This,HeadId,Flags) ) 

#define _LightExposureCtrlComOnly_ScSetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScSetParent(This,Parent) ) 

#define _LightExposureCtrlComOnly_get_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideSpeed(This,Override) ) 

#define _LightExposureCtrlComOnly_put_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideSpeed(This,Override) ) 

#define _LightExposureCtrlComOnly_get_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideFreq(This,Override) ) 

#define _LightExposureCtrlComOnly_put_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideFreq(This,Override) ) 

#define _LightExposureCtrlComOnly_get_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower(This,Override) ) 

#define _LightExposureCtrlComOnly_put_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower(This,Override) ) 

#define _LightExposureCtrlComOnly_get_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower2(This,Override) ) 

#define _LightExposureCtrlComOnly_put_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower2(This,Override) ) 

#define _LightExposureCtrlComOnly_get_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> get_ScUsePowerMap(This,Use) ) 

#define _LightExposureCtrlComOnly_put_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> put_ScUsePowerMap(This,Use) ) 

#define _LightExposureCtrlComOnly_get_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableLeePanelControl(This,Enable) ) 

#define _LightExposureCtrlComOnly_put_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableLeePanelControl(This,Enable) ) 

#define _LightExposureCtrlComOnly_ScGetShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetShowFlags(This,Flags) ) 

#define _LightExposureCtrlComOnly_ScSetShowFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetShowFlags(This,Flags,Mask) ) 

#define _LightExposureCtrlComOnly_ScGetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScGetPowerMapValue(This,HeadId,MapId,Value) ) 

#define _LightExposureCtrlComOnly_ScSetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScSetPowerMapValue(This,HeadId,MapId,Value) ) 

#define _LightExposureCtrlComOnly_ScSetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScSetMaxPower(This,HeadId,Power) ) 

#define _LightExposureCtrlComOnly_ScGetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScGetMaxPower(This,HeadId,Power) ) 

#define _LightExposureCtrlComOnly_ScGetPowerMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetPowerMapSize(This,Size) ) 

#define _LightExposureCtrlComOnly_ScSetValueUnit(This,Unit)	\
    ( (This)->lpVtbl -> ScSetValueUnit(This,Unit) ) 

#define _LightExposureCtrlComOnly_get_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> get_ScGridPen(This,Pen) ) 

#define _LightExposureCtrlComOnly_put_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> put_ScGridPen(This,Pen) ) 

#define _LightExposureCtrlComOnly_ScEditPen(This,Pen)	\
    ( (This)->lpVtbl -> ScEditPen(This,Pen) ) 

#define _LightExposureCtrlComOnly_get_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScAutoCalcMode(This,Mode) ) 

#define _LightExposureCtrlComOnly_put_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScAutoCalcMode(This,Mode) ) 

#define _LightExposureCtrlComOnly_ScCalcPowerValue(This,HeadId,Power,Value)	\
    ( (This)->lpVtbl -> ScCalcPowerValue(This,HeadId,Power,Value) ) 

#define _LightExposureCtrlComOnly_ScUpdateStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This,StyleId) ) 

#define _LightExposureCtrlComOnly_ScSetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScSetText(This,TextId,Text) ) 

#define _LightExposureCtrlComOnly_ScGetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScGetText(This,TextId,Text) ) 

#define _LightExposureCtrlComOnly_ScGetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetRampingValue(This,Pen,Type,Value) ) 

#define _LightExposureCtrlComOnly_ScSetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetRampingValue(This,Pen,Type,Value) ) 

#define _LightExposureCtrlComOnly_ScGetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetPenValue(This,Pen,Type,Value) ) 

#define _LightExposureCtrlComOnly_ScSetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetPenValue(This,Pen,Type,Value) ) 

#define _LightExposureCtrlComOnly_ScSetShutterInfo(This,state)	\
    ( (This)->lpVtbl -> ScSetShutterInfo(This,state) ) 

#define _LightExposureCtrlComOnly_ScGetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,Type,Value) ) 

#define _LightExposureCtrlComOnly_ScSetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,Type,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___LightExposureCtrlComOnly_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScLightExposureCtrlComOnly;

#ifdef __cplusplus

class DECLSPEC_UUID("C9683819-6CDD-4edf-8027-12D267FDB79D")
ScLightExposureCtrlComOnly;
#endif
#endif /* __ScSamLightCtrlsComOnly_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


