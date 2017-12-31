

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:39 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\slice_scroll\sc_slice_scroll_ctrl_type_lib.idl:
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


#ifndef __sc_slice_scroll_ctrl_type_lib_h__
#define __sc_slice_scroll_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ISliceScrollCtrl_FWD_DEFINED__
#define __SC_ISliceScrollCtrl_FWD_DEFINED__
typedef interface SC_ISliceScrollCtrl SC_ISliceScrollCtrl;
#endif 	/* __SC_ISliceScrollCtrl_FWD_DEFINED__ */


#ifndef __SC_ISliceScrollCtrlEvents_FWD_DEFINED__
#define __SC_ISliceScrollCtrlEvents_FWD_DEFINED__
typedef interface SC_ISliceScrollCtrlEvents SC_ISliceScrollCtrlEvents;
#endif 	/* __SC_ISliceScrollCtrlEvents_FWD_DEFINED__ */


#ifndef __ScSliceScrollCtrl_FWD_DEFINED__
#define __ScSliceScrollCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSliceScrollCtrl ScSliceScrollCtrl;
#else
typedef struct ScSliceScrollCtrl ScSliceScrollCtrl;
#endif /* __cplusplus */

#endif 	/* __ScSliceScrollCtrl_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_slice_scroll_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_entity_groups_type_lib.h"
#include "sc_layer_solid_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_slice_scroll_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_slice_scroll_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamSliceScrollCtrl_LIBRARY_DEFINED__
#define __ScapsSamSliceScrollCtrl_LIBRARY_DEFINED__

/* library ScapsSamSliceScrollCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamSliceScrollCtrl;

#ifndef __SC_ISliceScrollCtrl_DISPINTERFACE_DEFINED__
#define __SC_ISliceScrollCtrl_DISPINTERFACE_DEFINED__

/* dispinterface SC_ISliceScrollCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_ISliceScrollCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85E6C1F3-9889-11D1-8DB7-008048E1AD3F")
    SC_ISliceScrollCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_ISliceScrollCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISliceScrollCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISliceScrollCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISliceScrollCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISliceScrollCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISliceScrollCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISliceScrollCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISliceScrollCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_ISliceScrollCtrlVtbl;

    interface SC_ISliceScrollCtrl
    {
        CONST_VTBL struct SC_ISliceScrollCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISliceScrollCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISliceScrollCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISliceScrollCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISliceScrollCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISliceScrollCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISliceScrollCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISliceScrollCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_ISliceScrollCtrl_DISPINTERFACE_DEFINED__ */


#ifndef __SC_ISliceScrollCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_ISliceScrollCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_ISliceScrollCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_ISliceScrollCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85E6C1F4-9889-11D1-8DB7-008048E1AD3F")
    SC_ISliceScrollCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_ISliceScrollCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISliceScrollCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISliceScrollCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISliceScrollCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISliceScrollCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISliceScrollCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISliceScrollCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISliceScrollCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_ISliceScrollCtrlEventsVtbl;

    interface SC_ISliceScrollCtrlEvents
    {
        CONST_VTBL struct SC_ISliceScrollCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISliceScrollCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISliceScrollCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISliceScrollCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISliceScrollCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISliceScrollCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISliceScrollCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISliceScrollCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_ISliceScrollCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScSliceScrollCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("85E6C1F5-9889-11D1-8DB7-008048E1AD3F")
ScSliceScrollCtrl;
#endif
#endif /* __ScapsSamSliceScrollCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


