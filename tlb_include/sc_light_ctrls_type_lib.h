

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:49 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\light_ctrls\sc_light_ctrls_type_lib.idl:
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


#ifndef __sc_light_ctrls_type_lib_h__
#define __sc_light_ctrls_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DSC_LightExposureCtrl_FWD_DEFINED__
#define ___DSC_LightExposureCtrl_FWD_DEFINED__
typedef interface _DSC_LightExposureCtrl _DSC_LightExposureCtrl;
#endif 	/* ___DSC_LightExposureCtrl_FWD_DEFINED__ */


#ifndef ___DSC_LightExposureCtrlEvents_FWD_DEFINED__
#define ___DSC_LightExposureCtrlEvents_FWD_DEFINED__
typedef interface _DSC_LightExposureCtrlEvents _DSC_LightExposureCtrlEvents;
#endif 	/* ___DSC_LightExposureCtrlEvents_FWD_DEFINED__ */


#ifndef __SC_ILightExposureCtrl_FWD_DEFINED__
#define __SC_ILightExposureCtrl_FWD_DEFINED__
typedef interface SC_ILightExposureCtrl SC_ILightExposureCtrl;
#endif 	/* __SC_ILightExposureCtrl_FWD_DEFINED__ */


#ifndef __SC_ILightExposureCtrlPP_FWD_DEFINED__
#define __SC_ILightExposureCtrlPP_FWD_DEFINED__
typedef interface SC_ILightExposureCtrlPP SC_ILightExposureCtrlPP;
#endif 	/* __SC_ILightExposureCtrlPP_FWD_DEFINED__ */


#ifndef ___DSC_LightFlashCtrl_FWD_DEFINED__
#define ___DSC_LightFlashCtrl_FWD_DEFINED__
typedef interface _DSC_LightFlashCtrl _DSC_LightFlashCtrl;
#endif 	/* ___DSC_LightFlashCtrl_FWD_DEFINED__ */


#ifndef ___DSC_LightFlashCtrlEvents_FWD_DEFINED__
#define ___DSC_LightFlashCtrlEvents_FWD_DEFINED__
typedef interface _DSC_LightFlashCtrlEvents _DSC_LightFlashCtrlEvents;
#endif 	/* ___DSC_LightFlashCtrlEvents_FWD_DEFINED__ */


#ifndef __SC_ILightFlashCtrl_FWD_DEFINED__
#define __SC_ILightFlashCtrl_FWD_DEFINED__
typedef interface SC_ILightFlashCtrl SC_ILightFlashCtrl;
#endif 	/* __SC_ILightFlashCtrl_FWD_DEFINED__ */


#ifndef __SC_LightExposureCtrl_FWD_DEFINED__
#define __SC_LightExposureCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class SC_LightExposureCtrl SC_LightExposureCtrl;
#else
typedef struct SC_LightExposureCtrl SC_LightExposureCtrl;
#endif /* __cplusplus */

#endif 	/* __SC_LightExposureCtrl_FWD_DEFINED__ */


#ifndef __ScLightExposureCtrlPropertyPage_FWD_DEFINED__
#define __ScLightExposureCtrlPropertyPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLightExposureCtrlPropertyPage ScLightExposureCtrlPropertyPage;
#else
typedef struct ScLightExposureCtrlPropertyPage ScLightExposureCtrlPropertyPage;
#endif /* __cplusplus */

#endif 	/* __ScLightExposureCtrlPropertyPage_FWD_DEFINED__ */


#ifndef __ScLightFlashCtrl_FWD_DEFINED__
#define __ScLightFlashCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLightFlashCtrl ScLightFlashCtrl;
#else
typedef struct ScLightFlashCtrl ScLightFlashCtrl;
#endif /* __cplusplus */

#endif 	/* __ScLightFlashCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_light_ctrls_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_optic_type_lib.h"
#include "sc_property_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_light_ctrls_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_light_ctrls_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScSamLightCtrls_LIBRARY_DEFINED__
#define __ScSamLightCtrls_LIBRARY_DEFINED__

/* library ScSamLightCtrls */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_ScSamLightCtrls;

#ifndef ___DSC_LightExposureCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_LightExposureCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LightExposureCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LightExposureCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("D696C6F5-E53E-11D2-9AD6-008048EEE00C")
    _DSC_LightExposureCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LightExposureCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LightExposureCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LightExposureCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LightExposureCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LightExposureCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LightExposureCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LightExposureCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LightExposureCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LightExposureCtrlVtbl;

    interface _DSC_LightExposureCtrl
    {
        CONST_VTBL struct _DSC_LightExposureCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LightExposureCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LightExposureCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LightExposureCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LightExposureCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LightExposureCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LightExposureCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LightExposureCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LightExposureCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_LightExposureCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_LightExposureCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LightExposureCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LightExposureCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("D696C6F6-E53E-11D2-9AD6-008048EEE00C")
    _DSC_LightExposureCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LightExposureCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LightExposureCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LightExposureCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LightExposureCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LightExposureCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LightExposureCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LightExposureCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LightExposureCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LightExposureCtrlEventsVtbl;

    interface _DSC_LightExposureCtrlEvents
    {
        CONST_VTBL struct _DSC_LightExposureCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LightExposureCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LightExposureCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LightExposureCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LightExposureCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LightExposureCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LightExposureCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LightExposureCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LightExposureCtrlEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_ILightExposureCtrl_INTERFACE_DEFINED__
#define __SC_ILightExposureCtrl_INTERFACE_DEFINED__

/* interface SC_ILightExposureCtrl */
/* [dual][oleautomation][hidden][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILightExposureCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5EFEFA82-E554-11d2-9AD7-008048EEE00C")
    SC_ILightExposureCtrl : public IDispatch
    {
    public:
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckEntity( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperty( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoCalcMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoCalcMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPowerMap( 
            /* [in] */ long HeadId) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateResource( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLongValue( 
            /* [in] */ long Type,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLongValue( 
            /* [in] */ long Type,
            /* [in] */ long Value) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILightExposureCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILightExposureCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILightExposureCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILightExposureCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutput2D )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnExposure )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitExposure )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndExposure )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureInfo )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            SC_ILightExposureCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFunctionFlags )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPriority )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Priority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckEntity )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperty )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyName )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScApplyProperty )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Apply);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Param,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateEntity )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditResource )( 
            SC_ILightExposureCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetParent )( 
            SC_ILightExposureCtrl * This,
            LPDISPATCH Parent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideSpeed )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideSpeed )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideFreq )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideFreq )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower2 )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower2 )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsePowerMap )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsePowerMap )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableLeePanelControl )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableLeePanelControl )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetShowFlags )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShowFlags )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPowerMapValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMaxPower )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMaxPower )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId,
            /* [retval][out] */ double *Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapSize )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetValueUnit )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ BSTR Unit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGridPen )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Pen);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGridPen )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPen )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyle )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoCalcMode )( 
            SC_ILightExposureCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoCalcMode )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPowerMap )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalcPowerValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetText )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long TextId,
            BSTR Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetText )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long TextId,
            /* [retval][out] */ BSTR *Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRampingValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRampingValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShutterInfo )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateResource )( 
            SC_ILightExposureCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            SC_ILightExposureCtrl * This,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        END_INTERFACE
    } SC_ILightExposureCtrlVtbl;

    interface SC_ILightExposureCtrl
    {
        CONST_VTBL struct SC_ILightExposureCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILightExposureCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILightExposureCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILightExposureCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILightExposureCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILightExposureCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILightExposureCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILightExposureCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILightExposureCtrl_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define SC_ILightExposureCtrl_ScSetOutput2D(This,Output)	\
    ( (This)->lpVtbl -> ScSetOutput2D(This,Output) ) 

#define SC_ILightExposureCtrl_ScOnExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScOnExposure(This,Entity,Exposure) ) 

#define SC_ILightExposureCtrl_ScInitExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScInitExposure(This,Entity,Exposure) ) 

#define SC_ILightExposureCtrl_ScEndExposure(This,Entity)	\
    ( (This)->lpVtbl -> ScEndExposure(This,Entity) ) 

#define SC_ILightExposureCtrl_ScSelectStyle(This,Style,Exposure)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,Style,Exposure) ) 

#define SC_ILightExposureCtrl_ScExposureInfo(This,Info,Exposure)	\
    ( (This)->lpVtbl -> ScExposureInfo(This,Info,Exposure) ) 

#define SC_ILightExposureCtrl_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define SC_ILightExposureCtrl_ScGetFunctionFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetFunctionFlags(This,Flags) ) 

#define SC_ILightExposureCtrl_ScGetPriority(This,Priority)	\
    ( (This)->lpVtbl -> ScGetPriority(This,Priority) ) 

#define SC_ILightExposureCtrl_ScCheckEntity(This,Entity,Check)	\
    ( (This)->lpVtbl -> ScCheckEntity(This,Entity,Check) ) 

#define SC_ILightExposureCtrl_ScEditProperty(This,Entity)	\
    ( (This)->lpVtbl -> ScEditProperty(This,Entity) ) 

#define SC_ILightExposureCtrl_ScGetPropertyName(This,Name)	\
    ( (This)->lpVtbl -> ScGetPropertyName(This,Name) ) 

#define SC_ILightExposureCtrl_ScApplyProperty(This,Apply)	\
    ( (This)->lpVtbl -> ScApplyProperty(This,Apply) ) 

#define SC_ILightExposureCtrl_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define SC_ILightExposureCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ILightExposureCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ILightExposureCtrl_ScTabInto(This,Param,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Param,Result) ) 

#define SC_ILightExposureCtrl_ScCreateEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScCreateEntity(This,Entity) ) 

#define SC_ILightExposureCtrl_ScEditResource(This)	\
    ( (This)->lpVtbl -> ScEditResource(This) ) 

#define SC_ILightExposureCtrl_ScSetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScSetParent(This,Parent) ) 

#define SC_ILightExposureCtrl_get_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideSpeed(This,Override) ) 

#define SC_ILightExposureCtrl_put_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideSpeed(This,Override) ) 

#define SC_ILightExposureCtrl_get_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideFreq(This,Override) ) 

#define SC_ILightExposureCtrl_put_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideFreq(This,Override) ) 

#define SC_ILightExposureCtrl_get_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower(This,Override) ) 

#define SC_ILightExposureCtrl_put_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower(This,Override) ) 

#define SC_ILightExposureCtrl_get_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower2(This,Override) ) 

#define SC_ILightExposureCtrl_put_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower2(This,Override) ) 

#define SC_ILightExposureCtrl_get_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> get_ScUsePowerMap(This,Use) ) 

#define SC_ILightExposureCtrl_put_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> put_ScUsePowerMap(This,Use) ) 

#define SC_ILightExposureCtrl_get_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableLeePanelControl(This,Enable) ) 

#define SC_ILightExposureCtrl_put_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableLeePanelControl(This,Enable) ) 

#define SC_ILightExposureCtrl_ScGetShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetShowFlags(This,Flags) ) 

#define SC_ILightExposureCtrl_ScSetShowFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetShowFlags(This,Flags,Mask) ) 

#define SC_ILightExposureCtrl_ScGetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScGetPowerMapValue(This,HeadId,MapId,Value) ) 

#define SC_ILightExposureCtrl_ScSetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScSetPowerMapValue(This,HeadId,MapId,Value) ) 

#define SC_ILightExposureCtrl_ScSetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScSetMaxPower(This,HeadId,Power) ) 

#define SC_ILightExposureCtrl_ScGetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScGetMaxPower(This,HeadId,Power) ) 

#define SC_ILightExposureCtrl_ScGetPowerMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetPowerMapSize(This,Size) ) 

#define SC_ILightExposureCtrl_ScSetValueUnit(This,Unit)	\
    ( (This)->lpVtbl -> ScSetValueUnit(This,Unit) ) 

#define SC_ILightExposureCtrl_get_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> get_ScGridPen(This,Pen) ) 

#define SC_ILightExposureCtrl_put_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> put_ScGridPen(This,Pen) ) 

#define SC_ILightExposureCtrl_ScEditPen(This,Pen)	\
    ( (This)->lpVtbl -> ScEditPen(This,Pen) ) 

#define SC_ILightExposureCtrl_ScEditStyle(This,Style,NewStyle)	\
    ( (This)->lpVtbl -> ScEditStyle(This,Style,NewStyle) ) 

#define SC_ILightExposureCtrl_get_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScAutoCalcMode(This,Mode) ) 

#define SC_ILightExposureCtrl_put_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScAutoCalcMode(This,Mode) ) 

#define SC_ILightExposureCtrl_ScEditPowerMap(This,HeadId)	\
    ( (This)->lpVtbl -> ScEditPowerMap(This,HeadId) ) 

#define SC_ILightExposureCtrl_ScCalcPowerValue(This,HeadId,Power,Value)	\
    ( (This)->lpVtbl -> ScCalcPowerValue(This,HeadId,Power,Value) ) 

#define SC_ILightExposureCtrl_ScUpdateStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This,StyleId) ) 

#define SC_ILightExposureCtrl_ScSetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScSetText(This,TextId,Text) ) 

#define SC_ILightExposureCtrl_ScGetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScGetText(This,TextId,Text) ) 

#define SC_ILightExposureCtrl_ScGetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetRampingValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrl_ScSetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetRampingValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrl_ScGetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetPenValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrl_ScSetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetPenValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrl_ScSetShutterInfo(This,state)	\
    ( (This)->lpVtbl -> ScSetShutterInfo(This,state) ) 

#define SC_ILightExposureCtrl_ScUpdateResource(This)	\
    ( (This)->lpVtbl -> ScUpdateResource(This) ) 

#define SC_ILightExposureCtrl_ScGetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,Type,Value) ) 

#define SC_ILightExposureCtrl_ScSetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,Type,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILightExposureCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_ILightExposureCtrlPP_INTERFACE_DEFINED__
#define __SC_ILightExposureCtrlPP_INTERFACE_DEFINED__

/* interface SC_ILightExposureCtrlPP */
/* [dual][oleautomation][hidden][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILightExposureCtrlPP;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81B6ED22-7E91-11d4-9C1A-008048EEE00C")
    SC_ILightExposureCtrlPP : public SC_ILightExposureCtrl
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct SC_ILightExposureCtrlPPVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILightExposureCtrlPP * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILightExposureCtrlPP * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILightExposureCtrlPP * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutput2D )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnExposure )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitExposure )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndExposure )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureInfo )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            SC_ILightExposureCtrlPP * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFunctionFlags )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPriority )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Priority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckEntity )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperty )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyName )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScApplyProperty )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Apply);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Param,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateEntity )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditResource )( 
            SC_ILightExposureCtrlPP * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetParent )( 
            SC_ILightExposureCtrlPP * This,
            LPDISPATCH Parent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideSpeed )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideSpeed )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverrideFreq )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverrideFreq )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOverridePower2 )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ double *Override);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOverridePower2 )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ double Override);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsePowerMap )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsePowerMap )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableLeePanelControl )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableLeePanelControl )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetShowFlags )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShowFlags )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPowerMapValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId,
            /* [in] */ long MapId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMaxPower )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMaxPower )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId,
            /* [retval][out] */ double *Power);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPowerMapSize )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetValueUnit )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ BSTR Unit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGridPen )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Pen);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGridPen )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPen )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyle )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoCalcMode )( 
            SC_ILightExposureCtrlPP * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoCalcMode )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPowerMap )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalcPowerValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long HeadId,
            /* [in] */ double Power,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long StyleId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetText )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long TextId,
            BSTR Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetText )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long TextId,
            /* [retval][out] */ BSTR *Text);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRampingValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetRampingValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Pen,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShutterInfo )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long state);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateResource )( 
            SC_ILightExposureCtrlPP * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            SC_ILightExposureCtrlPP * This,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        END_INTERFACE
    } SC_ILightExposureCtrlPPVtbl;

    interface SC_ILightExposureCtrlPP
    {
        CONST_VTBL struct SC_ILightExposureCtrlPPVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILightExposureCtrlPP_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILightExposureCtrlPP_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILightExposureCtrlPP_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILightExposureCtrlPP_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILightExposureCtrlPP_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILightExposureCtrlPP_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILightExposureCtrlPP_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILightExposureCtrlPP_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define SC_ILightExposureCtrlPP_ScSetOutput2D(This,Output)	\
    ( (This)->lpVtbl -> ScSetOutput2D(This,Output) ) 

#define SC_ILightExposureCtrlPP_ScOnExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScOnExposure(This,Entity,Exposure) ) 

#define SC_ILightExposureCtrlPP_ScInitExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScInitExposure(This,Entity,Exposure) ) 

#define SC_ILightExposureCtrlPP_ScEndExposure(This,Entity)	\
    ( (This)->lpVtbl -> ScEndExposure(This,Entity) ) 

#define SC_ILightExposureCtrlPP_ScSelectStyle(This,Style,Exposure)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,Style,Exposure) ) 

#define SC_ILightExposureCtrlPP_ScExposureInfo(This,Info,Exposure)	\
    ( (This)->lpVtbl -> ScExposureInfo(This,Info,Exposure) ) 

#define SC_ILightExposureCtrlPP_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define SC_ILightExposureCtrlPP_ScGetFunctionFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetFunctionFlags(This,Flags) ) 

#define SC_ILightExposureCtrlPP_ScGetPriority(This,Priority)	\
    ( (This)->lpVtbl -> ScGetPriority(This,Priority) ) 

#define SC_ILightExposureCtrlPP_ScCheckEntity(This,Entity,Check)	\
    ( (This)->lpVtbl -> ScCheckEntity(This,Entity,Check) ) 

#define SC_ILightExposureCtrlPP_ScEditProperty(This,Entity)	\
    ( (This)->lpVtbl -> ScEditProperty(This,Entity) ) 

#define SC_ILightExposureCtrlPP_ScGetPropertyName(This,Name)	\
    ( (This)->lpVtbl -> ScGetPropertyName(This,Name) ) 

#define SC_ILightExposureCtrlPP_ScApplyProperty(This,Apply)	\
    ( (This)->lpVtbl -> ScApplyProperty(This,Apply) ) 

#define SC_ILightExposureCtrlPP_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define SC_ILightExposureCtrlPP_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ILightExposureCtrlPP_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_ILightExposureCtrlPP_ScTabInto(This,Param,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Param,Result) ) 

#define SC_ILightExposureCtrlPP_ScCreateEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScCreateEntity(This,Entity) ) 

#define SC_ILightExposureCtrlPP_ScEditResource(This)	\
    ( (This)->lpVtbl -> ScEditResource(This) ) 

#define SC_ILightExposureCtrlPP_ScSetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScSetParent(This,Parent) ) 

#define SC_ILightExposureCtrlPP_get_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideSpeed(This,Override) ) 

#define SC_ILightExposureCtrlPP_put_ScOverrideSpeed(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideSpeed(This,Override) ) 

#define SC_ILightExposureCtrlPP_get_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverrideFreq(This,Override) ) 

#define SC_ILightExposureCtrlPP_put_ScOverrideFreq(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverrideFreq(This,Override) ) 

#define SC_ILightExposureCtrlPP_get_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower(This,Override) ) 

#define SC_ILightExposureCtrlPP_put_ScOverridePower(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower(This,Override) ) 

#define SC_ILightExposureCtrlPP_get_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> get_ScOverridePower2(This,Override) ) 

#define SC_ILightExposureCtrlPP_put_ScOverridePower2(This,Override)	\
    ( (This)->lpVtbl -> put_ScOverridePower2(This,Override) ) 

#define SC_ILightExposureCtrlPP_get_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> get_ScUsePowerMap(This,Use) ) 

#define SC_ILightExposureCtrlPP_put_ScUsePowerMap(This,Use)	\
    ( (This)->lpVtbl -> put_ScUsePowerMap(This,Use) ) 

#define SC_ILightExposureCtrlPP_get_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableLeePanelControl(This,Enable) ) 

#define SC_ILightExposureCtrlPP_put_ScEnableLeePanelControl(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableLeePanelControl(This,Enable) ) 

#define SC_ILightExposureCtrlPP_ScGetShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetShowFlags(This,Flags) ) 

#define SC_ILightExposureCtrlPP_ScSetShowFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetShowFlags(This,Flags,Mask) ) 

#define SC_ILightExposureCtrlPP_ScGetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScGetPowerMapValue(This,HeadId,MapId,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetPowerMapValue(This,HeadId,MapId,Value)	\
    ( (This)->lpVtbl -> ScSetPowerMapValue(This,HeadId,MapId,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScSetMaxPower(This,HeadId,Power) ) 

#define SC_ILightExposureCtrlPP_ScGetMaxPower(This,HeadId,Power)	\
    ( (This)->lpVtbl -> ScGetMaxPower(This,HeadId,Power) ) 

#define SC_ILightExposureCtrlPP_ScGetPowerMapSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetPowerMapSize(This,Size) ) 

#define SC_ILightExposureCtrlPP_ScSetValueUnit(This,Unit)	\
    ( (This)->lpVtbl -> ScSetValueUnit(This,Unit) ) 

#define SC_ILightExposureCtrlPP_get_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> get_ScGridPen(This,Pen) ) 

#define SC_ILightExposureCtrlPP_put_ScGridPen(This,Pen)	\
    ( (This)->lpVtbl -> put_ScGridPen(This,Pen) ) 

#define SC_ILightExposureCtrlPP_ScEditPen(This,Pen)	\
    ( (This)->lpVtbl -> ScEditPen(This,Pen) ) 

#define SC_ILightExposureCtrlPP_ScEditStyle(This,Style,NewStyle)	\
    ( (This)->lpVtbl -> ScEditStyle(This,Style,NewStyle) ) 

#define SC_ILightExposureCtrlPP_get_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScAutoCalcMode(This,Mode) ) 

#define SC_ILightExposureCtrlPP_put_ScAutoCalcMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScAutoCalcMode(This,Mode) ) 

#define SC_ILightExposureCtrlPP_ScEditPowerMap(This,HeadId)	\
    ( (This)->lpVtbl -> ScEditPowerMap(This,HeadId) ) 

#define SC_ILightExposureCtrlPP_ScCalcPowerValue(This,HeadId,Power,Value)	\
    ( (This)->lpVtbl -> ScCalcPowerValue(This,HeadId,Power,Value) ) 

#define SC_ILightExposureCtrlPP_ScUpdateStyle(This,StyleId)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This,StyleId) ) 

#define SC_ILightExposureCtrlPP_ScSetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScSetText(This,TextId,Text) ) 

#define SC_ILightExposureCtrlPP_ScGetText(This,TextId,Text)	\
    ( (This)->lpVtbl -> ScGetText(This,TextId,Text) ) 

#define SC_ILightExposureCtrlPP_ScGetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetRampingValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetRampingValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetRampingValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrlPP_ScGetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScGetPenValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetPenValue(This,Pen,Type,Value)	\
    ( (This)->lpVtbl -> ScSetPenValue(This,Pen,Type,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetShutterInfo(This,state)	\
    ( (This)->lpVtbl -> ScSetShutterInfo(This,state) ) 

#define SC_ILightExposureCtrlPP_ScUpdateResource(This)	\
    ( (This)->lpVtbl -> ScUpdateResource(This) ) 

#define SC_ILightExposureCtrlPP_ScGetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,Type,Value) ) 

#define SC_ILightExposureCtrlPP_ScSetLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,Type,Value) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILightExposureCtrlPP_INTERFACE_DEFINED__ */


#ifndef ___DSC_LightFlashCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_LightFlashCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LightFlashCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LightFlashCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EB34D7CF-E241-4038-B9AF-614DAF9C375B")
    _DSC_LightFlashCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LightFlashCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LightFlashCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LightFlashCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LightFlashCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LightFlashCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LightFlashCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LightFlashCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LightFlashCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LightFlashCtrlVtbl;

    interface _DSC_LightFlashCtrl
    {
        CONST_VTBL struct _DSC_LightFlashCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LightFlashCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LightFlashCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LightFlashCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LightFlashCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LightFlashCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LightFlashCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LightFlashCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LightFlashCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_LightFlashCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_LightFlashCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LightFlashCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LightFlashCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8DBDE5D1-9AE7-4fca-B150-BE16D5D2B63E")
    _DSC_LightFlashCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LightFlashCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LightFlashCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LightFlashCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LightFlashCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LightFlashCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LightFlashCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LightFlashCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LightFlashCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LightFlashCtrlEventsVtbl;

    interface _DSC_LightFlashCtrlEvents
    {
        CONST_VTBL struct _DSC_LightFlashCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LightFlashCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LightFlashCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LightFlashCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LightFlashCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LightFlashCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LightFlashCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LightFlashCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LightFlashCtrlEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_ILightFlashCtrl_INTERFACE_DEFINED__
#define __SC_ILightFlashCtrl_INTERFACE_DEFINED__

/* interface SC_ILightFlashCtrl */
/* [dual][oleautomation][hidden][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILightFlashCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("946F8CB6-E325-4e74-A4C6-7ACB40A2DBC1")
    SC_ILightFlashCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* external definition not present */ SC_IOpticModule2D *OpticModule) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntity( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSAMLight( 
            /* [in] */ LPDISPATCH SamLight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateSize( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSAMLightExposureCtrl( 
            /* [in] */ LPDISPATCH ExposureCtrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSendRs232String( 
            /* [in] */ BSTR Rs232String,
            /* [in] */ long TimeOut,
            /* [in] */ BOOL ParseReturn,
            /* [in] */ BSTR TerminateCh,
            /* [retval][out] */ BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRs232String( 
            /* [retval][out] */ BSTR *Rs232String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumFlashCards( 
            /* [retval][out] */ long *NumCards) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectFlashCard( 
            /* [in] */ long CardId,
            /* [retval][out] */ BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRS232ParsParameter( 
            /* [in] */ long ParamId,
            /* [retval][out] */ BSTR *Param) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumParsParameters( 
            /* [retval][out] */ long *NumParams) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILightFlashCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILightFlashCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILightFlashCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILightFlashCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_ILightFlashCtrl * This,
            /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntity )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSAMLight )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ LPDISPATCH SamLight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSize )( 
            SC_ILightFlashCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMode )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSAMLightExposureCtrl )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ LPDISPATCH ExposureCtrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSendRs232String )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ BSTR Rs232String,
            /* [in] */ long TimeOut,
            /* [in] */ BOOL ParseReturn,
            /* [in] */ BSTR TerminateCh,
            /* [retval][out] */ BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRs232String )( 
            SC_ILightFlashCtrl * This,
            /* [retval][out] */ BSTR *Rs232String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumFlashCards )( 
            SC_ILightFlashCtrl * This,
            /* [retval][out] */ long *NumCards);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectFlashCard )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ long CardId,
            /* [retval][out] */ BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRS232ParsParameter )( 
            SC_ILightFlashCtrl * This,
            /* [in] */ long ParamId,
            /* [retval][out] */ BSTR *Param);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumParsParameters )( 
            SC_ILightFlashCtrl * This,
            /* [retval][out] */ long *NumParams);
        
        END_INTERFACE
    } SC_ILightFlashCtrlVtbl;

    interface SC_ILightFlashCtrl
    {
        CONST_VTBL struct SC_ILightFlashCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILightFlashCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILightFlashCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILightFlashCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILightFlashCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILightFlashCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILightFlashCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILightFlashCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILightFlashCtrl_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define SC_ILightFlashCtrl_ScSetEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScSetEntity(This,Entity) ) 

#define SC_ILightFlashCtrl_ScSetSAMLight(This,SamLight)	\
    ( (This)->lpVtbl -> ScSetSAMLight(This,SamLight) ) 

#define SC_ILightFlashCtrl_ScUpdateSize(This)	\
    ( (This)->lpVtbl -> ScUpdateSize(This) ) 

#define SC_ILightFlashCtrl_ScSetMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetMode(This,Mode) ) 

#define SC_ILightFlashCtrl_ScSetSAMLightExposureCtrl(This,ExposureCtrl)	\
    ( (This)->lpVtbl -> ScSetSAMLightExposureCtrl(This,ExposureCtrl) ) 

#define SC_ILightFlashCtrl_ScSendRs232String(This,Rs232String,TimeOut,ParseReturn,TerminateCh,Result)	\
    ( (This)->lpVtbl -> ScSendRs232String(This,Rs232String,TimeOut,ParseReturn,TerminateCh,Result) ) 

#define SC_ILightFlashCtrl_ScGetRs232String(This,Rs232String)	\
    ( (This)->lpVtbl -> ScGetRs232String(This,Rs232String) ) 

#define SC_ILightFlashCtrl_ScGetNumFlashCards(This,NumCards)	\
    ( (This)->lpVtbl -> ScGetNumFlashCards(This,NumCards) ) 

#define SC_ILightFlashCtrl_ScSelectFlashCard(This,CardId,Result)	\
    ( (This)->lpVtbl -> ScSelectFlashCard(This,CardId,Result) ) 

#define SC_ILightFlashCtrl_ScGetRS232ParsParameter(This,ParamId,Param)	\
    ( (This)->lpVtbl -> ScGetRS232ParsParameter(This,ParamId,Param) ) 

#define SC_ILightFlashCtrl_ScGetNumParsParameters(This,NumParams)	\
    ( (This)->lpVtbl -> ScGetNumParsParameters(This,NumParams) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILightFlashCtrl_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLightExposureControl_MODULE_DEFINED__
#define __ScConstantsLightExposureControl_MODULE_DEFINED__


/* module ScConstantsLightExposureControl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComLightExposureCtrlShowPower1	=	0x1;

/* [helpstring] */ const long scComLightExposureCtrlShowPower2	=	0x2;

/* [helpstring] */ const long scComLightExposureCtrlShowFrequency	=	0x4;

/* [helpstring] */ const long scComLightExposureCtrlShowName	=	0x8;

/* [helpstring] */ const long scComLightExposureCtrlShowWobble	=	0x10;

/* [helpstring] */ const long scComLightExposureCtrlShowHalfPeriod	=	0x20;

/* [helpstring] */ const long scComLightExposureCtrlShowOverwritePenValues	=	0x40;

/* [helpstring] */ const long scComLightExposureCtrlShowEditPens	=	0x80;

/* [helpstring] */ const long scComLightExposureCtrlShowPenAdvanced	=	0x100;

/* [helpstring] */ const long scComLightExposureCtrlShowPenApply	=	0x200;

/* [helpstring] */ const long scComLightExposureCtrlShowEditSpeedFreq	=	0x400;

/* [helpstring] */ const long scComLightExposureCtrlShowSpiDialog	=	0x800;

/* [helpstring] */ const long scComLightExposureCtrlShowEditScannerDelaysAndJumpSpeed	=	0x1000;

/* [helpstring] */ const long scComLightExposureCtrlSetAndUpdateShowDirectly	=	0x80000000;

/* [helpstring] */ const long scComAutoCalcFirstPulseWidth	=	0x1;

/* [helpstring] */ const long scComLongValueTypeOverridePen	=	0x1;

/* [helpstring] */ const long scComLongValueTypeSLDP10_UVConsole	=	0x2;

#endif /* __ScConstantsLightExposureControl_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_SC_LightExposureCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("D696C6F7-E53E-11D2-9AD6-008048EEE00C")
SC_LightExposureCtrl;
#endif

EXTERN_C const CLSID CLSID_ScLightExposureCtrlPropertyPage;

#ifdef __cplusplus

class DECLSPEC_UUID("7FBC3792-7E8A-11d4-9C1A-008048EEE00C")
ScLightExposureCtrlPropertyPage;
#endif

EXTERN_C const CLSID CLSID_ScLightFlashCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("5F10107F-7499-4C4D-9712-8891B5B5AEC9")
ScLightFlashCtrl;
#endif
#endif /* __ScSamLightCtrls_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


