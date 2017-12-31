

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:47 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\sc_comio\sc_com_io_ctrl_type_lib.idl:
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


#ifndef __sc_com_io_ctrl_type_lib_h__
#define __sc_com_io_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_DispComIOCtrl_FWD_DEFINED__
#define __SC_DispComIOCtrl_FWD_DEFINED__
typedef interface SC_DispComIOCtrl SC_DispComIOCtrl;
#endif 	/* __SC_DispComIOCtrl_FWD_DEFINED__ */


#ifndef __SC_IComIOCtrlEvents_FWD_DEFINED__
#define __SC_IComIOCtrlEvents_FWD_DEFINED__
typedef interface SC_IComIOCtrlEvents SC_IComIOCtrlEvents;
#endif 	/* __SC_IComIOCtrlEvents_FWD_DEFINED__ */


#ifndef __SC_IComIOCtrl_FWD_DEFINED__
#define __SC_IComIOCtrl_FWD_DEFINED__
typedef interface SC_IComIOCtrl SC_IComIOCtrl;
#endif 	/* __SC_IComIOCtrl_FWD_DEFINED__ */


#ifndef __ScComIOCtrl_FWD_DEFINED__
#define __ScComIOCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScComIOCtrl ScComIOCtrl;
#else
typedef struct ScComIOCtrl ScComIOCtrl;
#endif /* __cplusplus */

#endif 	/* __ScComIOCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_com_io_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_optic_type_lib.h"
#include "sc_entity_groups_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_com_io_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_com_io_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamComIOCtrl_LIBRARY_DEFINED__
#define __ScapsSamComIOCtrl_LIBRARY_DEFINED__

/* library ScapsSamComIOCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamComIOCtrl;

#ifndef __SC_DispComIOCtrl_DISPINTERFACE_DEFINED__
#define __SC_DispComIOCtrl_DISPINTERFACE_DEFINED__

/* dispinterface SC_DispComIOCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DispComIOCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("37882355-E80B-11D2-9AD8-008048EEE00C")
    SC_DispComIOCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DispComIOCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DispComIOCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DispComIOCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DispComIOCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DispComIOCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DispComIOCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DispComIOCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DispComIOCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DispComIOCtrlVtbl;

    interface SC_DispComIOCtrl
    {
        CONST_VTBL struct SC_DispComIOCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DispComIOCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DispComIOCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DispComIOCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DispComIOCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DispComIOCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DispComIOCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DispComIOCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DispComIOCtrl_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IComIOCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_IComIOCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IComIOCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IComIOCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("37882356-E80B-11D2-9AD8-008048EEE00C")
    SC_IComIOCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IComIOCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IComIOCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IComIOCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IComIOCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IComIOCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IComIOCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IComIOCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IComIOCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IComIOCtrlEventsVtbl;

    interface SC_IComIOCtrlEvents
    {
        CONST_VTBL struct SC_IComIOCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IComIOCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IComIOCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IComIOCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IComIOCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IComIOCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IComIOCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IComIOCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IComIOCtrlEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IComIOCtrl_INTERFACE_DEFINED__
#define __SC_IComIOCtrl_INTERFACE_DEFINED__

/* interface SC_IComIOCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IComIOCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1615DC72-6AE4-11d3-9B3B-008048EEE00C")
    SC_IComIOCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticModule( 
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **Module) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticModule( 
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *Module) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPortName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPortName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenPort( 
            /* [in] */ BSTR Port,
            /* [in] */ BSTR Connect,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFindPortName( 
            /* [in] */ long Type,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJob( 
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **Job) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJob( 
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IComIOCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IComIOCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IComIOCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IComIOCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IComIOCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IComIOCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IComIOCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IComIOCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticModule )( 
            SC_IComIOCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **Module);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticModule )( 
            SC_IComIOCtrl * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *Module);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPortName )( 
            SC_IComIOCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPortName )( 
            SC_IComIOCtrl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenPort )( 
            SC_IComIOCtrl * This,
            /* [in] */ BSTR Port,
            /* [in] */ BSTR Connect,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFindPortName )( 
            SC_IComIOCtrl * This,
            /* [in] */ long Type,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJob )( 
            SC_IComIOCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **Job);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJob )( 
            SC_IComIOCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job);
        
        END_INTERFACE
    } SC_IComIOCtrlVtbl;

    interface SC_IComIOCtrl
    {
        CONST_VTBL struct SC_IComIOCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IComIOCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IComIOCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IComIOCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IComIOCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IComIOCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IComIOCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IComIOCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IComIOCtrl_get_ScOpticModule(This,Module)	\
    ( (This)->lpVtbl -> get_ScOpticModule(This,Module) ) 

#define SC_IComIOCtrl_put_ScOpticModule(This,Module)	\
    ( (This)->lpVtbl -> put_ScOpticModule(This,Module) ) 

#define SC_IComIOCtrl_get_ScPortName(This,Name)	\
    ( (This)->lpVtbl -> get_ScPortName(This,Name) ) 

#define SC_IComIOCtrl_put_ScPortName(This,Name)	\
    ( (This)->lpVtbl -> put_ScPortName(This,Name) ) 

#define SC_IComIOCtrl_ScOpenPort(This,Port,Connect,Result)	\
    ( (This)->lpVtbl -> ScOpenPort(This,Port,Connect,Result) ) 

#define SC_IComIOCtrl_ScFindPortName(This,Type,Name)	\
    ( (This)->lpVtbl -> ScFindPortName(This,Type,Name) ) 

#define SC_IComIOCtrl_get_ScJob(This,Job)	\
    ( (This)->lpVtbl -> get_ScJob(This,Job) ) 

#define SC_IComIOCtrl_put_ScJob(This,Job)	\
    ( (This)->lpVtbl -> put_ScJob(This,Job) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IComIOCtrl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScComIOCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("37882357-E80B-11D2-9AD8-008048EEE00C")
ScComIOCtrl;
#endif
#endif /* __ScapsSamComIOCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


