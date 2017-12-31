

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:48 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\standard_prop\sc_standard_prop_ctrl_type_lib.idl:
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


#ifndef __sc_standard_prop_ctrl_type_lib_h__
#define __sc_standard_prop_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DSC_Text2DProperty_FWD_DEFINED__
#define ___DSC_Text2DProperty_FWD_DEFINED__
typedef interface _DSC_Text2DProperty _DSC_Text2DProperty;
#endif 	/* ___DSC_Text2DProperty_FWD_DEFINED__ */


#ifndef ___DSC_Text2DPropertyEvents_FWD_DEFINED__
#define ___DSC_Text2DPropertyEvents_FWD_DEFINED__
typedef interface _DSC_Text2DPropertyEvents _DSC_Text2DPropertyEvents;
#endif 	/* ___DSC_Text2DPropertyEvents_FWD_DEFINED__ */


#ifndef __ScText2DProperty_FWD_DEFINED__
#define __ScText2DProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScText2DProperty ScText2DProperty;
#else
typedef struct ScText2DProperty ScText2DProperty;
#endif /* __cplusplus */

#endif 	/* __ScText2DProperty_FWD_DEFINED__ */


#ifndef ___DSC_BarCodeProperty_FWD_DEFINED__
#define ___DSC_BarCodeProperty_FWD_DEFINED__
typedef interface _DSC_BarCodeProperty _DSC_BarCodeProperty;
#endif 	/* ___DSC_BarCodeProperty_FWD_DEFINED__ */


#ifndef ___DSC_BarCodePropertyEvents_FWD_DEFINED__
#define ___DSC_BarCodePropertyEvents_FWD_DEFINED__
typedef interface _DSC_BarCodePropertyEvents _DSC_BarCodePropertyEvents;
#endif 	/* ___DSC_BarCodePropertyEvents_FWD_DEFINED__ */


#ifndef __ScBarCodeProperty_FWD_DEFINED__
#define __ScBarCodeProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCodeProperty ScBarCodeProperty;
#else
typedef struct ScBarCodeProperty ScBarCodeProperty;
#endif /* __cplusplus */

#endif 	/* __ScBarCodeProperty_FWD_DEFINED__ */


#ifndef ___DSC_BarCodePropertyEx_FWD_DEFINED__
#define ___DSC_BarCodePropertyEx_FWD_DEFINED__
typedef interface _DSC_BarCodePropertyEx _DSC_BarCodePropertyEx;
#endif 	/* ___DSC_BarCodePropertyEx_FWD_DEFINED__ */


#ifndef ___DSC_BarCodePropertyExEvents_FWD_DEFINED__
#define ___DSC_BarCodePropertyExEvents_FWD_DEFINED__
typedef interface _DSC_BarCodePropertyExEvents _DSC_BarCodePropertyExEvents;
#endif 	/* ___DSC_BarCodePropertyExEvents_FWD_DEFINED__ */


#ifndef __ScBarCodePropertyEx_FWD_DEFINED__
#define __ScBarCodePropertyEx_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCodePropertyEx ScBarCodePropertyEx;
#else
typedef struct ScBarCodePropertyEx ScBarCodePropertyEx;
#endif /* __cplusplus */

#endif 	/* __ScBarCodePropertyEx_FWD_DEFINED__ */


#ifndef ___DSC_BitMapProperty_FWD_DEFINED__
#define ___DSC_BitMapProperty_FWD_DEFINED__
typedef interface _DSC_BitMapProperty _DSC_BitMapProperty;
#endif 	/* ___DSC_BitMapProperty_FWD_DEFINED__ */


#ifndef ___DSC_BitMapPropertyEvents_FWD_DEFINED__
#define ___DSC_BitMapPropertyEvents_FWD_DEFINED__
typedef interface _DSC_BitMapPropertyEvents _DSC_BitMapPropertyEvents;
#endif 	/* ___DSC_BitMapPropertyEvents_FWD_DEFINED__ */


#ifndef __ScBitMapProperty_FWD_DEFINED__
#define __ScBitMapProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBitMapProperty ScBitMapProperty;
#else
typedef struct ScBitMapProperty ScBitMapProperty;
#endif /* __cplusplus */

#endif 	/* __ScBitMapProperty_FWD_DEFINED__ */


#ifndef ___DSC_HatchProperty_FWD_DEFINED__
#define ___DSC_HatchProperty_FWD_DEFINED__
typedef interface _DSC_HatchProperty _DSC_HatchProperty;
#endif 	/* ___DSC_HatchProperty_FWD_DEFINED__ */


#ifndef ___DSC_HatchPropertyEvents_FWD_DEFINED__
#define ___DSC_HatchPropertyEvents_FWD_DEFINED__
typedef interface _DSC_HatchPropertyEvents _DSC_HatchPropertyEvents;
#endif 	/* ___DSC_HatchPropertyEvents_FWD_DEFINED__ */


#ifndef __ScHatchProperty_FWD_DEFINED__
#define __ScHatchProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScHatchProperty ScHatchProperty;
#else
typedef struct ScHatchProperty ScHatchProperty;
#endif /* __cplusplus */

#endif 	/* __ScHatchProperty_FWD_DEFINED__ */


#ifndef ___DSC_EntityInfoProperty_FWD_DEFINED__
#define ___DSC_EntityInfoProperty_FWD_DEFINED__
typedef interface _DSC_EntityInfoProperty _DSC_EntityInfoProperty;
#endif 	/* ___DSC_EntityInfoProperty_FWD_DEFINED__ */


#ifndef ___DSC_EntityInfoPropertyEvents_FWD_DEFINED__
#define ___DSC_EntityInfoPropertyEvents_FWD_DEFINED__
typedef interface _DSC_EntityInfoPropertyEvents _DSC_EntityInfoPropertyEvents;
#endif 	/* ___DSC_EntityInfoPropertyEvents_FWD_DEFINED__ */


#ifndef __ScEntityInfoProperty_FWD_DEFINED__
#define __ScEntityInfoProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntityInfoProperty ScEntityInfoProperty;
#else
typedef struct ScEntityInfoProperty ScEntityInfoProperty;
#endif /* __cplusplus */

#endif 	/* __ScEntityInfoProperty_FWD_DEFINED__ */


#ifndef ___DSC_StyleProperty_FWD_DEFINED__
#define ___DSC_StyleProperty_FWD_DEFINED__
typedef interface _DSC_StyleProperty _DSC_StyleProperty;
#endif 	/* ___DSC_StyleProperty_FWD_DEFINED__ */


#ifndef ___DSC_StylePropertyEvents_FWD_DEFINED__
#define ___DSC_StylePropertyEvents_FWD_DEFINED__
typedef interface _DSC_StylePropertyEvents _DSC_StylePropertyEvents;
#endif 	/* ___DSC_StylePropertyEvents_FWD_DEFINED__ */


#ifndef __ScStyleProperty_FWD_DEFINED__
#define __ScStyleProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScStyleProperty ScStyleProperty;
#else
typedef struct ScStyleProperty ScStyleProperty;
#endif /* __cplusplus */

#endif 	/* __ScStyleProperty_FWD_DEFINED__ */


#ifndef ___DSC_VarEntityProperty_FWD_DEFINED__
#define ___DSC_VarEntityProperty_FWD_DEFINED__
typedef interface _DSC_VarEntityProperty _DSC_VarEntityProperty;
#endif 	/* ___DSC_VarEntityProperty_FWD_DEFINED__ */


#ifndef ___DSC_VarEntityPropertyEvents_FWD_DEFINED__
#define ___DSC_VarEntityPropertyEvents_FWD_DEFINED__
typedef interface _DSC_VarEntityPropertyEvents _DSC_VarEntityPropertyEvents;
#endif 	/* ___DSC_VarEntityPropertyEvents_FWD_DEFINED__ */


#ifndef __ScVarEntityProperty_FWD_DEFINED__
#define __ScVarEntityProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScVarEntityProperty ScVarEntityProperty;
#else
typedef struct ScVarEntityProperty ScVarEntityProperty;
#endif /* __cplusplus */

#endif 	/* __ScVarEntityProperty_FWD_DEFINED__ */


#ifndef ___DSC_DateTimeProperty_FWD_DEFINED__
#define ___DSC_DateTimeProperty_FWD_DEFINED__
typedef interface _DSC_DateTimeProperty _DSC_DateTimeProperty;
#endif 	/* ___DSC_DateTimeProperty_FWD_DEFINED__ */


#ifndef ___DSC_DateTimePropertyEvents_FWD_DEFINED__
#define ___DSC_DateTimePropertyEvents_FWD_DEFINED__
typedef interface _DSC_DateTimePropertyEvents _DSC_DateTimePropertyEvents;
#endif 	/* ___DSC_DateTimePropertyEvents_FWD_DEFINED__ */


#ifndef __ScDateTimeProperty_FWD_DEFINED__
#define __ScDateTimeProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDateTimeProperty ScDateTimeProperty;
#else
typedef struct ScDateTimeProperty ScDateTimeProperty;
#endif /* __cplusplus */

#endif 	/* __ScDateTimeProperty_FWD_DEFINED__ */


#ifndef ___DSC_MacroProperty_FWD_DEFINED__
#define ___DSC_MacroProperty_FWD_DEFINED__
typedef interface _DSC_MacroProperty _DSC_MacroProperty;
#endif 	/* ___DSC_MacroProperty_FWD_DEFINED__ */


#ifndef ___DSC_MacroPropertyEvents_FWD_DEFINED__
#define ___DSC_MacroPropertyEvents_FWD_DEFINED__
typedef interface _DSC_MacroPropertyEvents _DSC_MacroPropertyEvents;
#endif 	/* ___DSC_MacroPropertyEvents_FWD_DEFINED__ */


#ifndef __ScMacroProperty_FWD_DEFINED__
#define __ScMacroProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScMacroProperty ScMacroProperty;
#else
typedef struct ScMacroProperty ScMacroProperty;
#endif /* __cplusplus */

#endif 	/* __ScMacroProperty_FWD_DEFINED__ */


#ifndef ___DSC_UserProperty_FWD_DEFINED__
#define ___DSC_UserProperty_FWD_DEFINED__
typedef interface _DSC_UserProperty _DSC_UserProperty;
#endif 	/* ___DSC_UserProperty_FWD_DEFINED__ */


#ifndef ___DSC_UserPropertyEvents_FWD_DEFINED__
#define ___DSC_UserPropertyEvents_FWD_DEFINED__
typedef interface _DSC_UserPropertyEvents _DSC_UserPropertyEvents;
#endif 	/* ___DSC_UserPropertyEvents_FWD_DEFINED__ */


#ifndef __ScUserProperty_FWD_DEFINED__
#define __ScUserProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScUserProperty ScUserProperty;
#else
typedef struct ScUserProperty ScUserProperty;
#endif /* __cplusplus */

#endif 	/* __ScUserProperty_FWD_DEFINED__ */


#ifndef ___DSC_ExposureProperty_FWD_DEFINED__
#define ___DSC_ExposureProperty_FWD_DEFINED__
typedef interface _DSC_ExposureProperty _DSC_ExposureProperty;
#endif 	/* ___DSC_ExposureProperty_FWD_DEFINED__ */


#ifndef ___DSC_ExposurePropertyEvents_FWD_DEFINED__
#define ___DSC_ExposurePropertyEvents_FWD_DEFINED__
typedef interface _DSC_ExposurePropertyEvents _DSC_ExposurePropertyEvents;
#endif 	/* ___DSC_ExposurePropertyEvents_FWD_DEFINED__ */


#ifndef __ScExposureProperty_FWD_DEFINED__
#define __ScExposureProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScExposureProperty ScExposureProperty;
#else
typedef struct ScExposureProperty ScExposureProperty;
#endif /* __cplusplus */

#endif 	/* __ScExposureProperty_FWD_DEFINED__ */


#ifndef ___DSC_LayerProperty_FWD_DEFINED__
#define ___DSC_LayerProperty_FWD_DEFINED__
typedef interface _DSC_LayerProperty _DSC_LayerProperty;
#endif 	/* ___DSC_LayerProperty_FWD_DEFINED__ */


#ifndef ___DSC_DimensionPropertyCtrl_FWD_DEFINED__
#define ___DSC_DimensionPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_DimensionPropertyCtrl _DSC_DimensionPropertyCtrl;
#endif 	/* ___DSC_DimensionPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_DimensionPropertyEvents_FWD_DEFINED__
#define ___DSC_DimensionPropertyEvents_FWD_DEFINED__
typedef interface _DSC_DimensionPropertyEvents _DSC_DimensionPropertyEvents;
#endif 	/* ___DSC_DimensionPropertyEvents_FWD_DEFINED__ */


#ifndef __ScDimensionProperty_FWD_DEFINED__
#define __ScDimensionProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDimensionProperty ScDimensionProperty;
#else
typedef struct ScDimensionProperty ScDimensionProperty;
#endif /* __cplusplus */

#endif 	/* __ScDimensionProperty_FWD_DEFINED__ */


#ifndef ___DSC_3DDimensionPropertyCtrl_FWD_DEFINED__
#define ___DSC_3DDimensionPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_3DDimensionPropertyCtrl _DSC_3DDimensionPropertyCtrl;
#endif 	/* ___DSC_3DDimensionPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_3DDimensionPropertyEvents_FWD_DEFINED__
#define ___DSC_3DDimensionPropertyEvents_FWD_DEFINED__
typedef interface _DSC_3DDimensionPropertyEvents _DSC_3DDimensionPropertyEvents;
#endif 	/* ___DSC_3DDimensionPropertyEvents_FWD_DEFINED__ */


#ifndef __Sc3DDimensionProperty_FWD_DEFINED__
#define __Sc3DDimensionProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class Sc3DDimensionProperty Sc3DDimensionProperty;
#else
typedef struct Sc3DDimensionProperty Sc3DDimensionProperty;
#endif /* __cplusplus */

#endif 	/* __Sc3DDimensionProperty_FWD_DEFINED__ */


#ifndef ___DSC_ZDimensionPropertyCtrl_FWD_DEFINED__
#define ___DSC_ZDimensionPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_ZDimensionPropertyCtrl _DSC_ZDimensionPropertyCtrl;
#endif 	/* ___DSC_ZDimensionPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_ZDimensionPropertyEvents_FWD_DEFINED__
#define ___DSC_ZDimensionPropertyEvents_FWD_DEFINED__
typedef interface _DSC_ZDimensionPropertyEvents _DSC_ZDimensionPropertyEvents;
#endif 	/* ___DSC_ZDimensionPropertyEvents_FWD_DEFINED__ */


#ifndef __ScZDimensionProperty_FWD_DEFINED__
#define __ScZDimensionProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScZDimensionProperty ScZDimensionProperty;
#else
typedef struct ScZDimensionProperty ScZDimensionProperty;
#endif /* __cplusplus */

#endif 	/* __ScZDimensionProperty_FWD_DEFINED__ */


#ifndef ___DSC_GeometryPropertyCtrl_FWD_DEFINED__
#define ___DSC_GeometryPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_GeometryPropertyCtrl _DSC_GeometryPropertyCtrl;
#endif 	/* ___DSC_GeometryPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_GeometryPropertyEvents_FWD_DEFINED__
#define ___DSC_GeometryPropertyEvents_FWD_DEFINED__
typedef interface _DSC_GeometryPropertyEvents _DSC_GeometryPropertyEvents;
#endif 	/* ___DSC_GeometryPropertyEvents_FWD_DEFINED__ */


#ifndef __ScGeometryProperty_FWD_DEFINED__
#define __ScGeometryProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGeometryProperty ScGeometryProperty;
#else
typedef struct ScGeometryProperty ScGeometryProperty;
#endif /* __cplusplus */

#endif 	/* __ScGeometryProperty_FWD_DEFINED__ */


#ifndef ___DSC_LineStylePropertyCtrl_FWD_DEFINED__
#define ___DSC_LineStylePropertyCtrl_FWD_DEFINED__
typedef interface _DSC_LineStylePropertyCtrl _DSC_LineStylePropertyCtrl;
#endif 	/* ___DSC_LineStylePropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_LineStylePropertyEvents_FWD_DEFINED__
#define ___DSC_LineStylePropertyEvents_FWD_DEFINED__
typedef interface _DSC_LineStylePropertyEvents _DSC_LineStylePropertyEvents;
#endif 	/* ___DSC_LineStylePropertyEvents_FWD_DEFINED__ */


#ifndef __ScLineStyleProperty_FWD_DEFINED__
#define __ScLineStyleProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLineStyleProperty ScLineStyleProperty;
#else
typedef struct ScLineStyleProperty ScLineStyleProperty;
#endif /* __cplusplus */

#endif 	/* __ScLineStyleProperty_FWD_DEFINED__ */


#ifndef ___DSC_EventPropertyCtrl_FWD_DEFINED__
#define ___DSC_EventPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_EventPropertyCtrl _DSC_EventPropertyCtrl;
#endif 	/* ___DSC_EventPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_EventPropertyEvents_FWD_DEFINED__
#define ___DSC_EventPropertyEvents_FWD_DEFINED__
typedef interface _DSC_EventPropertyEvents _DSC_EventPropertyEvents;
#endif 	/* ___DSC_EventPropertyEvents_FWD_DEFINED__ */


#ifndef __ScEventProperty_FWD_DEFINED__
#define __ScEventProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEventProperty ScEventProperty;
#else
typedef struct ScEventProperty ScEventProperty;
#endif /* __cplusplus */

#endif 	/* __ScEventProperty_FWD_DEFINED__ */


#ifndef ___DSC_SpecialGeometryPropertyCtrl_FWD_DEFINED__
#define ___DSC_SpecialGeometryPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_SpecialGeometryPropertyCtrl _DSC_SpecialGeometryPropertyCtrl;
#endif 	/* ___DSC_SpecialGeometryPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_SpecialGeometryPropertyEvents_FWD_DEFINED__
#define ___DSC_SpecialGeometryPropertyEvents_FWD_DEFINED__
typedef interface _DSC_SpecialGeometryPropertyEvents _DSC_SpecialGeometryPropertyEvents;
#endif 	/* ___DSC_SpecialGeometryPropertyEvents_FWD_DEFINED__ */


#ifndef __ScSpecialGeometryProperty_FWD_DEFINED__
#define __ScSpecialGeometryProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSpecialGeometryProperty ScSpecialGeometryProperty;
#else
typedef struct ScSpecialGeometryProperty ScSpecialGeometryProperty;
#endif /* __cplusplus */

#endif 	/* __ScSpecialGeometryProperty_FWD_DEFINED__ */


#ifndef ___DSC_UIIPropertyCtrl_FWD_DEFINED__
#define ___DSC_UIIPropertyCtrl_FWD_DEFINED__
typedef interface _DSC_UIIPropertyCtrl _DSC_UIIPropertyCtrl;
#endif 	/* ___DSC_UIIPropertyCtrl_FWD_DEFINED__ */


#ifndef ___DSC_UIIPropertyEvents_FWD_DEFINED__
#define ___DSC_UIIPropertyEvents_FWD_DEFINED__
typedef interface _DSC_UIIPropertyEvents _DSC_UIIPropertyEvents;
#endif 	/* ___DSC_UIIPropertyEvents_FWD_DEFINED__ */


#ifndef __ScUIIProperty_FWD_DEFINED__
#define __ScUIIProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScUIIProperty ScUIIProperty;
#else
typedef struct ScUIIProperty ScUIIProperty;
#endif /* __cplusplus */

#endif 	/* __ScUIIProperty_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_standard_prop_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_optic_type_lib.h"
#include "sc_property_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_standard_prop_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_standard_prop_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamStdProperty_LIBRARY_DEFINED__
#define __ScapsSamStdProperty_LIBRARY_DEFINED__

/* library ScapsSamStdProperty */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamStdProperty;

#ifndef ___DSC_Text2DProperty_DISPINTERFACE_DEFINED__
#define ___DSC_Text2DProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_Text2DProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_Text2DProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("00113F74-CC82-11D1-8C6C-008048EEDCB8")
    _DSC_Text2DProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_Text2DPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_Text2DProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_Text2DProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_Text2DProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_Text2DProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_Text2DProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_Text2DProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_Text2DProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_Text2DPropertyVtbl;

    interface _DSC_Text2DProperty
    {
        CONST_VTBL struct _DSC_Text2DPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_Text2DProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_Text2DProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_Text2DProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_Text2DProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_Text2DProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_Text2DProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_Text2DProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_Text2DProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_Text2DPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_Text2DPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_Text2DPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_Text2DPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("00113F75-CC82-11D1-8C6C-008048EEDCB8")
    _DSC_Text2DPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_Text2DPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_Text2DPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_Text2DPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_Text2DPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_Text2DPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_Text2DPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_Text2DPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_Text2DPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_Text2DPropertyEventsVtbl;

    interface _DSC_Text2DPropertyEvents
    {
        CONST_VTBL struct _DSC_Text2DPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_Text2DPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_Text2DPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_Text2DPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_Text2DPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_Text2DPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_Text2DPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_Text2DPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_Text2DPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScText2DProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("00113F76-CC82-11D1-8C6C-008048EEDCB8")
ScText2DProperty;
#endif

#ifndef ___DSC_BarCodeProperty_DISPINTERFACE_DEFINED__
#define ___DSC_BarCodeProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BarCodeProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BarCodeProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C9601B61-EEF7-11d1-97C0-008048EEE00C")
    _DSC_BarCodeProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BarCodePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BarCodeProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BarCodeProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BarCodeProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BarCodeProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BarCodeProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BarCodeProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BarCodeProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BarCodePropertyVtbl;

    interface _DSC_BarCodeProperty
    {
        CONST_VTBL struct _DSC_BarCodePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BarCodeProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BarCodeProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BarCodeProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BarCodeProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BarCodeProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BarCodeProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BarCodeProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BarCodeProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_BarCodePropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_BarCodePropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BarCodePropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BarCodePropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C9601B62-EEF7-11d1-97C0-008048EEE00C")
    _DSC_BarCodePropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BarCodePropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BarCodePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BarCodePropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BarCodePropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BarCodePropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BarCodePropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BarCodePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BarCodePropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BarCodePropertyEventsVtbl;

    interface _DSC_BarCodePropertyEvents
    {
        CONST_VTBL struct _DSC_BarCodePropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BarCodePropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BarCodePropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BarCodePropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BarCodePropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BarCodePropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BarCodePropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BarCodePropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BarCodePropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScBarCodeProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("C9601B63-EEF7-11d1-97C0-008048EEE00C")
ScBarCodeProperty;
#endif

#ifndef ___DSC_BarCodePropertyEx_DISPINTERFACE_DEFINED__
#define ___DSC_BarCodePropertyEx_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BarCodePropertyEx */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BarCodePropertyEx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2B012F43-861D-11d2-9AA1-008048EEE00C")
    _DSC_BarCodePropertyEx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BarCodePropertyExVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BarCodePropertyEx * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BarCodePropertyEx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BarCodePropertyEx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BarCodePropertyEx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BarCodePropertyEx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BarCodePropertyEx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BarCodePropertyEx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BarCodePropertyExVtbl;

    interface _DSC_BarCodePropertyEx
    {
        CONST_VTBL struct _DSC_BarCodePropertyExVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BarCodePropertyEx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BarCodePropertyEx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BarCodePropertyEx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BarCodePropertyEx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BarCodePropertyEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BarCodePropertyEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BarCodePropertyEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BarCodePropertyEx_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_BarCodePropertyExEvents_DISPINTERFACE_DEFINED__
#define ___DSC_BarCodePropertyExEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BarCodePropertyExEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BarCodePropertyExEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2B012F45-861D-11d2-9AA1-008048EEE00C")
    _DSC_BarCodePropertyExEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BarCodePropertyExEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BarCodePropertyExEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BarCodePropertyExEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BarCodePropertyExEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BarCodePropertyExEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BarCodePropertyExEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BarCodePropertyExEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BarCodePropertyExEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BarCodePropertyExEventsVtbl;

    interface _DSC_BarCodePropertyExEvents
    {
        CONST_VTBL struct _DSC_BarCodePropertyExEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BarCodePropertyExEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BarCodePropertyExEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BarCodePropertyExEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BarCodePropertyExEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BarCodePropertyExEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BarCodePropertyExEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BarCodePropertyExEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BarCodePropertyExEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScBarCodePropertyEx;

#ifdef __cplusplus

class DECLSPEC_UUID("2B012F47-861D-11d2-9AA1-008048EEE00C")
ScBarCodePropertyEx;
#endif

#ifndef ___DSC_BitMapProperty_DISPINTERFACE_DEFINED__
#define ___DSC_BitMapProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BitMapProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BitMapProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C9601B6B-EEF7-11d1-97C0-008048EEE00C")
    _DSC_BitMapProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BitMapPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BitMapProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BitMapProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BitMapProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BitMapProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BitMapProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BitMapProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BitMapProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BitMapPropertyVtbl;

    interface _DSC_BitMapProperty
    {
        CONST_VTBL struct _DSC_BitMapPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BitMapProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BitMapProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BitMapProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BitMapProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BitMapProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BitMapProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BitMapProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BitMapProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_BitMapPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_BitMapPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_BitMapPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_BitMapPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C9601B69-EEF7-11d1-97C0-008048EEE00C")
    _DSC_BitMapPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_BitMapPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_BitMapPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_BitMapPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_BitMapPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_BitMapPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_BitMapPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_BitMapPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_BitMapPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_BitMapPropertyEventsVtbl;

    interface _DSC_BitMapPropertyEvents
    {
        CONST_VTBL struct _DSC_BitMapPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_BitMapPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_BitMapPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_BitMapPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_BitMapPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_BitMapPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_BitMapPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_BitMapPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_BitMapPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScBitMapProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("C9601B67-EEF7-11d1-97C0-008048EEE00C")
ScBitMapProperty;
#endif

#ifndef ___DSC_HatchProperty_DISPINTERFACE_DEFINED__
#define ___DSC_HatchProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_HatchProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_HatchProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("71AB7484-EFE8-11d1-8C7D-008048EEDCB8")
    _DSC_HatchProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_HatchPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_HatchProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_HatchProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_HatchProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_HatchProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_HatchProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_HatchProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_HatchProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_HatchPropertyVtbl;

    interface _DSC_HatchProperty
    {
        CONST_VTBL struct _DSC_HatchPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_HatchProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_HatchProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_HatchProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_HatchProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_HatchProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_HatchProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_HatchProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_HatchProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_HatchPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_HatchPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_HatchPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_HatchPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("71AB7483-EFE8-11d1-8C7D-008048EEDCB8")
    _DSC_HatchPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_HatchPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_HatchPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_HatchPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_HatchPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_HatchPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_HatchPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_HatchPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_HatchPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_HatchPropertyEventsVtbl;

    interface _DSC_HatchPropertyEvents
    {
        CONST_VTBL struct _DSC_HatchPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_HatchPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_HatchPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_HatchPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_HatchPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_HatchPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_HatchPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_HatchPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_HatchPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScHatchProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("71AB7482-EFE8-11d1-8C7D-008048EEDCB8")
ScHatchProperty;
#endif

#ifndef ___DSC_EntityInfoProperty_DISPINTERFACE_DEFINED__
#define ___DSC_EntityInfoProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_EntityInfoProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_EntityInfoProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7440F315-F321-11d1-8C7F-008048EEDCB8")
    _DSC_EntityInfoProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_EntityInfoPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_EntityInfoProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_EntityInfoProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_EntityInfoProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_EntityInfoProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_EntityInfoProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_EntityInfoProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_EntityInfoProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_EntityInfoPropertyVtbl;

    interface _DSC_EntityInfoProperty
    {
        CONST_VTBL struct _DSC_EntityInfoPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_EntityInfoProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_EntityInfoProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_EntityInfoProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_EntityInfoProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_EntityInfoProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_EntityInfoProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_EntityInfoProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_EntityInfoProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_EntityInfoPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_EntityInfoPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_EntityInfoPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_EntityInfoPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7440F313-F321-11d1-8C7F-008048EEDCB8")
    _DSC_EntityInfoPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_EntityInfoPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_EntityInfoPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_EntityInfoPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_EntityInfoPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_EntityInfoPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_EntityInfoPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_EntityInfoPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_EntityInfoPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_EntityInfoPropertyEventsVtbl;

    interface _DSC_EntityInfoPropertyEvents
    {
        CONST_VTBL struct _DSC_EntityInfoPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_EntityInfoPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_EntityInfoPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_EntityInfoPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_EntityInfoPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_EntityInfoPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_EntityInfoPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_EntityInfoPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_EntityInfoPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScEntityInfoProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("7440F312-F321-11d1-8C7F-008048EEDCB8")
ScEntityInfoProperty;
#endif

#ifndef ___DSC_StyleProperty_DISPINTERFACE_DEFINED__
#define ___DSC_StyleProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_StyleProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_StyleProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E455004C-FBF3-44bf-8F8D-A2AD9EF55331")
    _DSC_StyleProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_StylePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_StyleProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_StyleProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_StyleProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_StyleProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_StyleProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_StyleProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_StyleProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_StylePropertyVtbl;

    interface _DSC_StyleProperty
    {
        CONST_VTBL struct _DSC_StylePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_StyleProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_StyleProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_StyleProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_StyleProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_StyleProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_StyleProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_StyleProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_StyleProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_StylePropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_StylePropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_StylePropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_StylePropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E455004A-FBF3-44bf-8F8D-A2AD9EF55331")
    _DSC_StylePropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_StylePropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_StylePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_StylePropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_StylePropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_StylePropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_StylePropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_StylePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_StylePropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_StylePropertyEventsVtbl;

    interface _DSC_StylePropertyEvents
    {
        CONST_VTBL struct _DSC_StylePropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_StylePropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_StylePropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_StylePropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_StylePropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_StylePropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_StylePropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_StylePropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_StylePropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScStyleProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("E4550049-FBF3-44bf-8F8D-A2AD9EF55331")
ScStyleProperty;
#endif

#ifndef ___DSC_VarEntityProperty_DISPINTERFACE_DEFINED__
#define ___DSC_VarEntityProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_VarEntityProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_VarEntityProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("61F30A55-D30F-11d2-9ACD-008048EEE00C")
    _DSC_VarEntityProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_VarEntityPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_VarEntityProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_VarEntityProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_VarEntityProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_VarEntityProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_VarEntityProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_VarEntityProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_VarEntityProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_VarEntityPropertyVtbl;

    interface _DSC_VarEntityProperty
    {
        CONST_VTBL struct _DSC_VarEntityPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_VarEntityProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_VarEntityProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_VarEntityProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_VarEntityProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_VarEntityProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_VarEntityProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_VarEntityProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_VarEntityProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_VarEntityPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_VarEntityPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_VarEntityPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_VarEntityPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("61F30A57-D30F-11d2-9ACD-008048EEE00C")
    _DSC_VarEntityPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_VarEntityPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_VarEntityPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_VarEntityPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_VarEntityPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_VarEntityPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_VarEntityPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_VarEntityPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_VarEntityPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_VarEntityPropertyEventsVtbl;

    interface _DSC_VarEntityPropertyEvents
    {
        CONST_VTBL struct _DSC_VarEntityPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_VarEntityPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_VarEntityPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_VarEntityPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_VarEntityPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_VarEntityPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_VarEntityPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_VarEntityPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_VarEntityPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScVarEntityProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("61F30A59-D30F-11d2-9ACD-008048EEE00C")
ScVarEntityProperty;
#endif

#ifndef ___DSC_DateTimeProperty_DISPINTERFACE_DEFINED__
#define ___DSC_DateTimeProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DateTimeProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DateTimeProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B5F95CD3-057D-41a3-B13E-9BBE14FFE6E1")
    _DSC_DateTimeProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DateTimePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DateTimeProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DateTimeProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DateTimeProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DateTimeProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DateTimeProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DateTimeProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DateTimeProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DateTimePropertyVtbl;

    interface _DSC_DateTimeProperty
    {
        CONST_VTBL struct _DSC_DateTimePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DateTimeProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DateTimeProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DateTimeProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DateTimeProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DateTimeProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DateTimeProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DateTimeProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DateTimeProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DateTimePropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_DateTimePropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DateTimePropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DateTimePropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EE0D0D83-02F0-46ac-AE26-83712D7411AF")
    _DSC_DateTimePropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DateTimePropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DateTimePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DateTimePropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DateTimePropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DateTimePropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DateTimePropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DateTimePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DateTimePropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DateTimePropertyEventsVtbl;

    interface _DSC_DateTimePropertyEvents
    {
        CONST_VTBL struct _DSC_DateTimePropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DateTimePropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DateTimePropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DateTimePropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DateTimePropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DateTimePropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DateTimePropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DateTimePropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DateTimePropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDateTimeProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("03BEBF8A-5014-464c-AE38-C03C5A04A9F1")
ScDateTimeProperty;
#endif

#ifndef ___DSC_MacroProperty_DISPINTERFACE_DEFINED__
#define ___DSC_MacroProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_MacroProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_MacroProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B79C4835-9742-11d2-9AAE-008048EEE00C")
    _DSC_MacroProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_MacroPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_MacroProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_MacroProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_MacroProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_MacroProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_MacroProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_MacroProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_MacroProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_MacroPropertyVtbl;

    interface _DSC_MacroProperty
    {
        CONST_VTBL struct _DSC_MacroPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_MacroProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_MacroProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_MacroProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_MacroProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_MacroProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_MacroProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_MacroProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_MacroProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_MacroPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_MacroPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_MacroPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_MacroPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B79C4837-9742-11d2-9AAE-008048EEE00C")
    _DSC_MacroPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_MacroPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_MacroPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_MacroPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_MacroPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_MacroPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_MacroPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_MacroPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_MacroPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_MacroPropertyEventsVtbl;

    interface _DSC_MacroPropertyEvents
    {
        CONST_VTBL struct _DSC_MacroPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_MacroPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_MacroPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_MacroPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_MacroPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_MacroPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_MacroPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_MacroPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_MacroPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScMacroProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("B79C4839-9742-11d2-9AAE-008048EEE00C")
ScMacroProperty;
#endif

#ifndef ___DSC_UserProperty_DISPINTERFACE_DEFINED__
#define ___DSC_UserProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_UserProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_UserProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B79C483C-9742-11d2-9AAE-008048EEE00C")
    _DSC_UserProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_UserPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_UserProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_UserProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_UserProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_UserProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_UserProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_UserProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_UserProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_UserPropertyVtbl;

    interface _DSC_UserProperty
    {
        CONST_VTBL struct _DSC_UserPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_UserProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_UserProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_UserProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_UserProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_UserProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_UserProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_UserProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_UserProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_UserPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_UserPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_UserPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_UserPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B79C483E-9742-11d2-9AAE-008048EEE00C")
    _DSC_UserPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_UserPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_UserPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_UserPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_UserPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_UserPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_UserPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_UserPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_UserPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_UserPropertyEventsVtbl;

    interface _DSC_UserPropertyEvents
    {
        CONST_VTBL struct _DSC_UserPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_UserPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_UserPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_UserPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_UserPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_UserPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_UserPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_UserPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_UserPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScUserProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("B79C4840-9742-11d2-9AAE-008048EEE00C")
ScUserProperty;
#endif

#ifndef ___DSC_ExposureProperty_INTERFACE_DEFINED__
#define ___DSC_ExposureProperty_INTERFACE_DEFINED__

/* interface _DSC_ExposureProperty */
/* [dual][oleautomation][hidden][helpstring][uuid][object] */ 


EXTERN_C const IID IID__DSC_ExposureProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00113F78-CC82-11D1-8C6C-008048EEDCB8")
    _DSC_ExposureProperty : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPowerMap( 
            /* [in] */ long HeadId,
            /* [in] */ long Flags) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateResource( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetType( 
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPicture( 
            /* [retval][out] */ LPPICTUREDISP *Picture) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCursor( 
            /* [retval][out] */ LPPICTUREDISP *Cursor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrlInfo( 
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info) = 0;
        
        virtual /* [id] */ SCODE STDMETHODCALLTYPE ScSetSpeed( 
            long Pen,
            double Speed) = 0;
        
        virtual /* [id] */ double STDMETHODCALLTYPE ScGetSpeed( 
            long Pen) = 0;
        
        virtual /* [id] */ SCODE STDMETHODCALLTYPE ScSetName( 
            long Pen,
            BSTR Name) = 0;
        
        virtual /* [id] */ BSTR STDMETHODCALLTYPE ScGetName( 
            long Pen) = 0;
        
        virtual /* [id] */ SCODE STDMETHODCALLTYPE ScSetScannerStyle( 
            long Pen,
            long Style) = 0;
        
        virtual /* [id] */ long STDMETHODCALLTYPE ScGetScannerStyle( 
            long Pen) = 0;
        
        virtual /* [id] */ void STDMETHODCALLTYPE AboutBox( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct _DSC_ExposurePropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_ExposureProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_ExposureProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_ExposureProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_ExposureProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_ExposureProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_ExposureProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_ExposureProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutput2D )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnExposure )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitExposure )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndExposure )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureInfo )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            _DSC_ExposureProperty * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFunctionFlags )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPriority )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ long *Priority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyle )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPowerMap )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long HeadId,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckEntity )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperty )( 
            _DSC_ExposureProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyName )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScApplyProperty )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ long *Apply);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            _DSC_ExposureProperty * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            _DSC_ExposureProperty * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            _DSC_ExposureProperty * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long Param,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateEntity )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditResource )( 
            _DSC_ExposureProperty * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateResource )( 
            _DSC_ExposureProperty * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetType )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPicture )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ LPPICTUREDISP *Picture);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayFlags )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayFlags )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCursor )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ LPPICTUREDISP *Cursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrl )( 
            _DSC_ExposureProperty * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrlInfo )( 
            _DSC_ExposureProperty * This,
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info);
        
        /* [id] */ SCODE ( STDMETHODCALLTYPE *ScSetSpeed )( 
            _DSC_ExposureProperty * This,
            long Pen,
            double Speed);
        
        /* [id] */ double ( STDMETHODCALLTYPE *ScGetSpeed )( 
            _DSC_ExposureProperty * This,
            long Pen);
        
        /* [id] */ SCODE ( STDMETHODCALLTYPE *ScSetName )( 
            _DSC_ExposureProperty * This,
            long Pen,
            BSTR Name);
        
        /* [id] */ BSTR ( STDMETHODCALLTYPE *ScGetName )( 
            _DSC_ExposureProperty * This,
            long Pen);
        
        /* [id] */ SCODE ( STDMETHODCALLTYPE *ScSetScannerStyle )( 
            _DSC_ExposureProperty * This,
            long Pen,
            long Style);
        
        /* [id] */ long ( STDMETHODCALLTYPE *ScGetScannerStyle )( 
            _DSC_ExposureProperty * This,
            long Pen);
        
        /* [id] */ void ( STDMETHODCALLTYPE *AboutBox )( 
            _DSC_ExposureProperty * This);
        
        END_INTERFACE
    } _DSC_ExposurePropertyVtbl;

    interface _DSC_ExposureProperty
    {
        CONST_VTBL struct _DSC_ExposurePropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_ExposureProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_ExposureProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_ExposureProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_ExposureProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_ExposureProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_ExposureProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_ExposureProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _DSC_ExposureProperty_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define _DSC_ExposureProperty_ScSetOutput2D(This,Output)	\
    ( (This)->lpVtbl -> ScSetOutput2D(This,Output) ) 

#define _DSC_ExposureProperty_ScOnExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScOnExposure(This,Entity,Exposure) ) 

#define _DSC_ExposureProperty_ScInitExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScInitExposure(This,Entity,Exposure) ) 

#define _DSC_ExposureProperty_ScEndExposure(This,Entity)	\
    ( (This)->lpVtbl -> ScEndExposure(This,Entity) ) 

#define _DSC_ExposureProperty_ScSelectStyle(This,Style,Exposure)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,Style,Exposure) ) 

#define _DSC_ExposureProperty_ScExposureInfo(This,Info,Exposure)	\
    ( (This)->lpVtbl -> ScExposureInfo(This,Info,Exposure) ) 

#define _DSC_ExposureProperty_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define _DSC_ExposureProperty_ScGetFunctionFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetFunctionFlags(This,Flags) ) 

#define _DSC_ExposureProperty_ScGetPriority(This,Priority)	\
    ( (This)->lpVtbl -> ScGetPriority(This,Priority) ) 

#define _DSC_ExposureProperty_ScEditStyle(This,Style,NewStyle)	\
    ( (This)->lpVtbl -> ScEditStyle(This,Style,NewStyle) ) 

#define _DSC_ExposureProperty_ScEditPowerMap(This,HeadId,Flags)	\
    ( (This)->lpVtbl -> ScEditPowerMap(This,HeadId,Flags) ) 

#define _DSC_ExposureProperty_ScCheckEntity(This,Entity,Check)	\
    ( (This)->lpVtbl -> ScCheckEntity(This,Entity,Check) ) 

#define _DSC_ExposureProperty_ScEditProperty(This,Entity)	\
    ( (This)->lpVtbl -> ScEditProperty(This,Entity) ) 

#define _DSC_ExposureProperty_ScGetPropertyName(This,Name)	\
    ( (This)->lpVtbl -> ScGetPropertyName(This,Name) ) 

#define _DSC_ExposureProperty_ScApplyProperty(This,Apply)	\
    ( (This)->lpVtbl -> ScApplyProperty(This,Apply) ) 

#define _DSC_ExposureProperty_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define _DSC_ExposureProperty_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define _DSC_ExposureProperty_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define _DSC_ExposureProperty_ScTabInto(This,Param,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Param,Result) ) 

#define _DSC_ExposureProperty_ScCreateEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScCreateEntity(This,Entity) ) 

#define _DSC_ExposureProperty_ScEditResource(This)	\
    ( (This)->lpVtbl -> ScEditResource(This) ) 

#define _DSC_ExposureProperty_ScUpdateResource(This)	\
    ( (This)->lpVtbl -> ScUpdateResource(This) ) 

#define _DSC_ExposureProperty_ScGetType(This,Type)	\
    ( (This)->lpVtbl -> ScGetType(This,Type) ) 

#define _DSC_ExposureProperty_ScGetPicture(This,Picture)	\
    ( (This)->lpVtbl -> ScGetPicture(This,Picture) ) 

#define _DSC_ExposureProperty_get_ScDisplayFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDisplayFlags(This,Flags) ) 

#define _DSC_ExposureProperty_put_ScDisplayFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDisplayFlags(This,Flags) ) 

#define _DSC_ExposureProperty_ScGetCursor(This,Cursor)	\
    ( (This)->lpVtbl -> ScGetCursor(This,Cursor) ) 

#define _DSC_ExposureProperty_ScGetContainedUserCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrl(This,Control) ) 

#define _DSC_ExposureProperty_ScGetContainedUserCtrlInfo(This,InfoId,Info)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrlInfo(This,InfoId,Info) ) 

#define _DSC_ExposureProperty_ScSetSpeed(This,Pen,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,Pen,Speed) ) 

#define _DSC_ExposureProperty_ScGetSpeed(This,Pen)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,Pen) ) 

#define _DSC_ExposureProperty_ScSetName(This,Pen,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,Pen,Name) ) 

#define _DSC_ExposureProperty_ScGetName(This,Pen)	\
    ( (This)->lpVtbl -> ScGetName(This,Pen) ) 

#define _DSC_ExposureProperty_ScSetScannerStyle(This,Pen,Style)	\
    ( (This)->lpVtbl -> ScSetScannerStyle(This,Pen,Style) ) 

#define _DSC_ExposureProperty_ScGetScannerStyle(This,Pen)	\
    ( (This)->lpVtbl -> ScGetScannerStyle(This,Pen) ) 

#define _DSC_ExposureProperty_AboutBox(This)	\
    ( (This)->lpVtbl -> AboutBox(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___DSC_ExposureProperty_INTERFACE_DEFINED__ */


#ifndef ___DSC_ExposurePropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_ExposurePropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_ExposurePropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_ExposurePropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("00113F79-CC82-11D1-8C6C-008048EEDCB8")
    _DSC_ExposurePropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_ExposurePropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_ExposurePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_ExposurePropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_ExposurePropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_ExposurePropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_ExposurePropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_ExposurePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_ExposurePropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_ExposurePropertyEventsVtbl;

    interface _DSC_ExposurePropertyEvents
    {
        CONST_VTBL struct _DSC_ExposurePropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_ExposurePropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_ExposurePropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_ExposurePropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_ExposurePropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_ExposurePropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_ExposurePropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_ExposurePropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_ExposurePropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScExposureProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("00113F7A-CC82-11D1-8C6C-008048EEDCB8")
ScExposureProperty;
#endif

#ifndef ___DSC_LayerProperty_DISPINTERFACE_DEFINED__
#define ___DSC_LayerProperty_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LayerProperty */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LayerProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A741B874-CD4D-11D1-8C6C-008048EEDCB8")
    _DSC_LayerProperty : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LayerPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LayerProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LayerProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LayerProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LayerProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LayerProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LayerProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LayerProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LayerPropertyVtbl;

    interface _DSC_LayerProperty
    {
        CONST_VTBL struct _DSC_LayerPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LayerProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LayerProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LayerProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LayerProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LayerProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LayerProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LayerProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LayerProperty_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DimensionPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_DimensionPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DimensionPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DimensionPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3D13A6F5-D79E-11d1-8C71-008048EEDCB8")
    _DSC_DimensionPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DimensionPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DimensionPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DimensionPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DimensionPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DimensionPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DimensionPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DimensionPropertyCtrlVtbl;

    interface _DSC_DimensionPropertyCtrl
    {
        CONST_VTBL struct _DSC_DimensionPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DimensionPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DimensionPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DimensionPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DimensionPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DimensionPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DimensionPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DimensionPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DimensionPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_DimensionPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_DimensionPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_DimensionPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_DimensionPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("3D13A6F4-D79E-11d1-8C71-008048EEDCB8")
    _DSC_DimensionPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_DimensionPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_DimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_DimensionPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_DimensionPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_DimensionPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_DimensionPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_DimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_DimensionPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_DimensionPropertyEventsVtbl;

    interface _DSC_DimensionPropertyEvents
    {
        CONST_VTBL struct _DSC_DimensionPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_DimensionPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_DimensionPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_DimensionPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_DimensionPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_DimensionPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_DimensionPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_DimensionPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_DimensionPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDimensionProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("3D13A6F3-D79E-11d1-8C71-008048EEDCB8")
ScDimensionProperty;
#endif

#ifndef ___DSC_3DDimensionPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_3DDimensionPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_3DDimensionPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_3DDimensionPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1337F851-4770-4621-9BEC-A64854FB56BC")
    _DSC_3DDimensionPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_3DDimensionPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_3DDimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_3DDimensionPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_3DDimensionPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_3DDimensionPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_3DDimensionPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_3DDimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_3DDimensionPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_3DDimensionPropertyCtrlVtbl;

    interface _DSC_3DDimensionPropertyCtrl
    {
        CONST_VTBL struct _DSC_3DDimensionPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_3DDimensionPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_3DDimensionPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_3DDimensionPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_3DDimensionPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_3DDimensionPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_3DDimensionPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_3DDimensionPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_3DDimensionPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_3DDimensionPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_3DDimensionPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_3DDimensionPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_3DDimensionPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FF4EFAF1-DDE1-46ec-88EF-0512F1B581C8")
    _DSC_3DDimensionPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_3DDimensionPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_3DDimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_3DDimensionPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_3DDimensionPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_3DDimensionPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_3DDimensionPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_3DDimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_3DDimensionPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_3DDimensionPropertyEventsVtbl;

    interface _DSC_3DDimensionPropertyEvents
    {
        CONST_VTBL struct _DSC_3DDimensionPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_3DDimensionPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_3DDimensionPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_3DDimensionPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_3DDimensionPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_3DDimensionPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_3DDimensionPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_3DDimensionPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_3DDimensionPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Sc3DDimensionProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("BF6FC1DB-32C8-42d6-936D-E4109DF456CE")
Sc3DDimensionProperty;
#endif

#ifndef ___DSC_ZDimensionPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_ZDimensionPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_ZDimensionPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_ZDimensionPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B6891306-6CCA-4869-B047-F660B97B47E7")
    _DSC_ZDimensionPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_ZDimensionPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_ZDimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_ZDimensionPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_ZDimensionPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_ZDimensionPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_ZDimensionPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_ZDimensionPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_ZDimensionPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_ZDimensionPropertyCtrlVtbl;

    interface _DSC_ZDimensionPropertyCtrl
    {
        CONST_VTBL struct _DSC_ZDimensionPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_ZDimensionPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_ZDimensionPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_ZDimensionPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_ZDimensionPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_ZDimensionPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_ZDimensionPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_ZDimensionPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_ZDimensionPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_ZDimensionPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_ZDimensionPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_ZDimensionPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_ZDimensionPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0DADE2E4-F0CD-486e-9659-0FE995DE8BE1")
    _DSC_ZDimensionPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_ZDimensionPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_ZDimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_ZDimensionPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_ZDimensionPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_ZDimensionPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_ZDimensionPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_ZDimensionPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_ZDimensionPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_ZDimensionPropertyEventsVtbl;

    interface _DSC_ZDimensionPropertyEvents
    {
        CONST_VTBL struct _DSC_ZDimensionPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_ZDimensionPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_ZDimensionPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_ZDimensionPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_ZDimensionPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_ZDimensionPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_ZDimensionPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_ZDimensionPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_ZDimensionPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScZDimensionProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("DFA567D1-5F34-4a38-8052-576C422DA704")
ScZDimensionProperty;
#endif

#ifndef ___DSC_GeometryPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_GeometryPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_GeometryPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_GeometryPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7C381021-7309-11d2-8EC1-00C0DFEA4A3A")
    _DSC_GeometryPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_GeometryPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_GeometryPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_GeometryPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_GeometryPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_GeometryPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_GeometryPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_GeometryPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_GeometryPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_GeometryPropertyCtrlVtbl;

    interface _DSC_GeometryPropertyCtrl
    {
        CONST_VTBL struct _DSC_GeometryPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_GeometryPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_GeometryPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_GeometryPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_GeometryPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_GeometryPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_GeometryPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_GeometryPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_GeometryPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_GeometryPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_GeometryPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_GeometryPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_GeometryPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("7C381022-7309-11d2-8EC1-00C0DFEA4A3A")
    _DSC_GeometryPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_GeometryPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_GeometryPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_GeometryPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_GeometryPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_GeometryPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_GeometryPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_GeometryPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_GeometryPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_GeometryPropertyEventsVtbl;

    interface _DSC_GeometryPropertyEvents
    {
        CONST_VTBL struct _DSC_GeometryPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_GeometryPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_GeometryPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_GeometryPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_GeometryPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_GeometryPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_GeometryPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_GeometryPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_GeometryPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScGeometryProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("7C381023-7309-11d2-8EC1-00C0DFEA4A3A")
ScGeometryProperty;
#endif

#ifndef ___DSC_LineStylePropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_LineStylePropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LineStylePropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LineStylePropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("931505BD-4295-4349-A9B2-5DA8828D312C")
    _DSC_LineStylePropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LineStylePropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LineStylePropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LineStylePropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LineStylePropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LineStylePropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LineStylePropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LineStylePropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LineStylePropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LineStylePropertyCtrlVtbl;

    interface _DSC_LineStylePropertyCtrl
    {
        CONST_VTBL struct _DSC_LineStylePropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LineStylePropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LineStylePropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LineStylePropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LineStylePropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LineStylePropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LineStylePropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LineStylePropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LineStylePropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_LineStylePropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_LineStylePropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_LineStylePropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_LineStylePropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("46ABA33F-5A54-4abe-8699-987044B43975")
    _DSC_LineStylePropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_LineStylePropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_LineStylePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_LineStylePropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_LineStylePropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_LineStylePropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_LineStylePropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_LineStylePropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_LineStylePropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_LineStylePropertyEventsVtbl;

    interface _DSC_LineStylePropertyEvents
    {
        CONST_VTBL struct _DSC_LineStylePropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_LineStylePropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_LineStylePropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_LineStylePropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_LineStylePropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_LineStylePropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_LineStylePropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_LineStylePropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_LineStylePropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScLineStyleProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("A77BE2E5-8433-4cd5-AA97-268BE779C5C3")
ScLineStyleProperty;
#endif

#ifndef ___DSC_EventPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_EventPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_EventPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_EventPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("8C4EA3E3-981F-4a02-A678-59034C4ED3ED")
    _DSC_EventPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_EventPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_EventPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_EventPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_EventPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_EventPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_EventPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_EventPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_EventPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_EventPropertyCtrlVtbl;

    interface _DSC_EventPropertyCtrl
    {
        CONST_VTBL struct _DSC_EventPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_EventPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_EventPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_EventPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_EventPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_EventPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_EventPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_EventPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_EventPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_EventPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_EventPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_EventPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_EventPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("01C60E40-2647-48e0-9EAB-03239FB6210B")
    _DSC_EventPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_EventPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_EventPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_EventPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_EventPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_EventPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_EventPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_EventPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_EventPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_EventPropertyEventsVtbl;

    interface _DSC_EventPropertyEvents
    {
        CONST_VTBL struct _DSC_EventPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_EventPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_EventPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_EventPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_EventPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_EventPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_EventPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_EventPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_EventPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScEventProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("2EBF996E-4CBC-4fee-B9CB-255DB4773D65")
ScEventProperty;
#endif

#ifndef ___DSC_SpecialGeometryPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_SpecialGeometryPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_SpecialGeometryPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_SpecialGeometryPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("87B985E6-1F85-40a9-9E7D-465B9D51CE66")
    _DSC_SpecialGeometryPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_SpecialGeometryPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_SpecialGeometryPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_SpecialGeometryPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_SpecialGeometryPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_SpecialGeometryPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_SpecialGeometryPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_SpecialGeometryPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_SpecialGeometryPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_SpecialGeometryPropertyCtrlVtbl;

    interface _DSC_SpecialGeometryPropertyCtrl
    {
        CONST_VTBL struct _DSC_SpecialGeometryPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_SpecialGeometryPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_SpecialGeometryPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_SpecialGeometryPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_SpecialGeometryPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_SpecialGeometryPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_SpecialGeometryPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_SpecialGeometryPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_SpecialGeometryPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_SpecialGeometryPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_SpecialGeometryPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_SpecialGeometryPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_SpecialGeometryPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2249FE96-BAAA-4201-88B6-5C97D7D2FC9D")
    _DSC_SpecialGeometryPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_SpecialGeometryPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_SpecialGeometryPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_SpecialGeometryPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_SpecialGeometryPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_SpecialGeometryPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_SpecialGeometryPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_SpecialGeometryPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_SpecialGeometryPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_SpecialGeometryPropertyEventsVtbl;

    interface _DSC_SpecialGeometryPropertyEvents
    {
        CONST_VTBL struct _DSC_SpecialGeometryPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_SpecialGeometryPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_SpecialGeometryPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_SpecialGeometryPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_SpecialGeometryPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_SpecialGeometryPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_SpecialGeometryPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_SpecialGeometryPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_SpecialGeometryPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScSpecialGeometryProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("AACB708A-C2F7-4507-8B82-3A4250AE5899")
ScSpecialGeometryProperty;
#endif

#ifndef ___DSC_UIIPropertyCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_UIIPropertyCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_UIIPropertyCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_UIIPropertyCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CC61d444-B59B-40EB-AFDF-EB5D841BA35F")
    _DSC_UIIPropertyCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_UIIPropertyCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_UIIPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_UIIPropertyCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_UIIPropertyCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_UIIPropertyCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_UIIPropertyCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_UIIPropertyCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_UIIPropertyCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_UIIPropertyCtrlVtbl;

    interface _DSC_UIIPropertyCtrl
    {
        CONST_VTBL struct _DSC_UIIPropertyCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_UIIPropertyCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_UIIPropertyCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_UIIPropertyCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_UIIPropertyCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_UIIPropertyCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_UIIPropertyCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_UIIPropertyCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_UIIPropertyCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_UIIPropertyEvents_DISPINTERFACE_DEFINED__
#define ___DSC_UIIPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_UIIPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_UIIPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CC61D445-B59B-40EB-AFDF-EB5D841BA35F")
    _DSC_UIIPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_UIIPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_UIIPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_UIIPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_UIIPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_UIIPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_UIIPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_UIIPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_UIIPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_UIIPropertyEventsVtbl;

    interface _DSC_UIIPropertyEvents
    {
        CONST_VTBL struct _DSC_UIIPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_UIIPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_UIIPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_UIIPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_UIIPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_UIIPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_UIIPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_UIIPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_UIIPropertyEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScUIIProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("6CE92933-EE69-41B8-904E-2356FD9D6CDC")
ScUIIProperty;
#endif
#endif /* __ScapsSamStdProperty_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


