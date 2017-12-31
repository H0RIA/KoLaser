

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:21 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\message\sc_message_ctrl_type_lib.idl:
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


#ifndef __sc_message_ctrl_type_lib_h__
#define __sc_message_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IGetKernelMessageCtrl_FWD_DEFINED__
#define __SC_IGetKernelMessageCtrl_FWD_DEFINED__
typedef interface SC_IGetKernelMessageCtrl SC_IGetKernelMessageCtrl;
#endif 	/* __SC_IGetKernelMessageCtrl_FWD_DEFINED__ */


#ifndef __SC_IGetGuiMessageCtrl_FWD_DEFINED__
#define __SC_IGetGuiMessageCtrl_FWD_DEFINED__
typedef interface SC_IGetGuiMessageCtrl SC_IGetGuiMessageCtrl;
#endif 	/* __SC_IGetGuiMessageCtrl_FWD_DEFINED__ */


#ifndef __SC_DGetKernelMessageEvents_FWD_DEFINED__
#define __SC_DGetKernelMessageEvents_FWD_DEFINED__
typedef interface SC_DGetKernelMessageEvents SC_DGetKernelMessageEvents;
#endif 	/* __SC_DGetKernelMessageEvents_FWD_DEFINED__ */


#ifndef __SC_DGetGuiMessageEvents_FWD_DEFINED__
#define __SC_DGetGuiMessageEvents_FWD_DEFINED__
typedef interface SC_DGetGuiMessageEvents SC_DGetGuiMessageEvents;
#endif 	/* __SC_DGetGuiMessageEvents_FWD_DEFINED__ */


#ifndef __SC_IGetOpticMessageCtrl_FWD_DEFINED__
#define __SC_IGetOpticMessageCtrl_FWD_DEFINED__
typedef interface SC_IGetOpticMessageCtrl SC_IGetOpticMessageCtrl;
#endif 	/* __SC_IGetOpticMessageCtrl_FWD_DEFINED__ */


#ifndef __SC_DGetOpticMessageEvents_FWD_DEFINED__
#define __SC_DGetOpticMessageEvents_FWD_DEFINED__
typedef interface SC_DGetOpticMessageEvents SC_DGetOpticMessageEvents;
#endif 	/* __SC_DGetOpticMessageEvents_FWD_DEFINED__ */


#ifndef __ScGetKernelMessageCtrl_FWD_DEFINED__
#define __ScGetKernelMessageCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGetKernelMessageCtrl ScGetKernelMessageCtrl;
#else
typedef struct ScGetKernelMessageCtrl ScGetKernelMessageCtrl;
#endif /* __cplusplus */

#endif 	/* __ScGetKernelMessageCtrl_FWD_DEFINED__ */


#ifndef __ScGetGuiMessageCtrl_FWD_DEFINED__
#define __ScGetGuiMessageCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGetGuiMessageCtrl ScGetGuiMessageCtrl;
#else
typedef struct ScGetGuiMessageCtrl ScGetGuiMessageCtrl;
#endif /* __cplusplus */

#endif 	/* __ScGetGuiMessageCtrl_FWD_DEFINED__ */


#ifndef __ScGetOpticMessageCtrl_FWD_DEFINED__
#define __ScGetOpticMessageCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGetOpticMessageCtrl ScGetOpticMessageCtrl;
#else
typedef struct ScGetOpticMessageCtrl ScGetOpticMessageCtrl;
#endif /* __cplusplus */

#endif 	/* __ScGetOpticMessageCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_message_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5


extern RPC_IF_HANDLE __MIDL_itf_sc_message_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_message_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamMessageCtrl_LIBRARY_DEFINED__
#define __ScapsSamMessageCtrl_LIBRARY_DEFINED__

/* library ScapsSamMessageCtrl */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamMessageCtrl;

#ifndef __SC_IGetKernelMessageCtrl_INTERFACE_DEFINED__
#define __SC_IGetKernelMessageCtrl_INTERFACE_DEFINED__

/* interface SC_IGetKernelMessageCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGetKernelMessageCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85FAB024-7961-11D1-8C1F-008048EEDCB8")
    SC_IGetKernelMessageCtrl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSendUpdate( 
            long Flags) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSendUpdateEx( 
            long Flags,
            LPDISPATCH Entity) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScDoActionStart( 
            long Id,
            long Range,
            BSTR Message) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScDoActionProgress( 
            long Id,
            long Progress,
            BSTR Message) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScDoActionEnd( 
            long Id) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetEventFlags( 
            long Flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGetKernelMessageCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGetKernelMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGetKernelMessageCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGetKernelMessageCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGetKernelMessageCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGetKernelMessageCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGetKernelMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGetKernelMessageCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSendUpdate )( 
            SC_IGetKernelMessageCtrl * This,
            long Flags);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSendUpdateEx )( 
            SC_IGetKernelMessageCtrl * This,
            long Flags,
            LPDISPATCH Entity);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScDoActionStart )( 
            SC_IGetKernelMessageCtrl * This,
            long Id,
            long Range,
            BSTR Message);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScDoActionProgress )( 
            SC_IGetKernelMessageCtrl * This,
            long Id,
            long Progress,
            BSTR Message);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScDoActionEnd )( 
            SC_IGetKernelMessageCtrl * This,
            long Id);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEventFlags )( 
            SC_IGetKernelMessageCtrl * This,
            long Flags);
        
        END_INTERFACE
    } SC_IGetKernelMessageCtrlVtbl;

    interface SC_IGetKernelMessageCtrl
    {
        CONST_VTBL struct SC_IGetKernelMessageCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGetKernelMessageCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGetKernelMessageCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGetKernelMessageCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGetKernelMessageCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGetKernelMessageCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGetKernelMessageCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGetKernelMessageCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGetKernelMessageCtrl_ScSendUpdate(This,Flags)	\
    ( (This)->lpVtbl -> ScSendUpdate(This,Flags) ) 

#define SC_IGetKernelMessageCtrl_ScSendUpdateEx(This,Flags,Entity)	\
    ( (This)->lpVtbl -> ScSendUpdateEx(This,Flags,Entity) ) 

#define SC_IGetKernelMessageCtrl_ScDoActionStart(This,Id,Range,Message)	\
    ( (This)->lpVtbl -> ScDoActionStart(This,Id,Range,Message) ) 

#define SC_IGetKernelMessageCtrl_ScDoActionProgress(This,Id,Progress,Message)	\
    ( (This)->lpVtbl -> ScDoActionProgress(This,Id,Progress,Message) ) 

#define SC_IGetKernelMessageCtrl_ScDoActionEnd(This,Id)	\
    ( (This)->lpVtbl -> ScDoActionEnd(This,Id) ) 

#define SC_IGetKernelMessageCtrl_ScSetEventFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScSetEventFlags(This,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGetKernelMessageCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_IGetGuiMessageCtrl_INTERFACE_DEFINED__
#define __SC_IGetGuiMessageCtrl_INTERFACE_DEFINED__

/* interface SC_IGetGuiMessageCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGetGuiMessageCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("85FAB028-7961-11D1-8C1F-008048EEDCB8")
    SC_IGetGuiMessageCtrl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetActiveView( 
            /* [retval][out] */ IDispatch **View) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetControlButton( 
            /* [in] */ long Id,
            /* [retval][out] */ IDispatch **Button) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScGetControlButtonUser( 
            /* [in] */ BSTR Name,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ IDispatch **Button) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScAddControlButton( 
            long Id,
            long Flags,
            IDispatch *Before,
            /* [retval][out] */ IDispatch **Button) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSetControlButtonUserData( 
            /* [in] */ IDispatch *Button,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGetGuiMessageCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGetGuiMessageCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGetGuiMessageCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGetGuiMessageCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetActiveView )( 
            SC_IGetGuiMessageCtrl * This,
            /* [retval][out] */ IDispatch **View);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlButton )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ long Id,
            /* [retval][out] */ IDispatch **Button);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlButtonUser )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ BSTR Name,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4,
            /* [retval][out] */ IDispatch **Button);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScAddControlButton )( 
            SC_IGetGuiMessageCtrl * This,
            long Id,
            long Flags,
            IDispatch *Before,
            /* [retval][out] */ IDispatch **Button);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSetControlButtonUserData )( 
            SC_IGetGuiMessageCtrl * This,
            /* [in] */ IDispatch *Button,
            /* [in] */ long Id1,
            /* [in] */ long Id2,
            /* [in] */ long Id3,
            /* [in] */ long Id4);
        
        END_INTERFACE
    } SC_IGetGuiMessageCtrlVtbl;

    interface SC_IGetGuiMessageCtrl
    {
        CONST_VTBL struct SC_IGetGuiMessageCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGetGuiMessageCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGetGuiMessageCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGetGuiMessageCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGetGuiMessageCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGetGuiMessageCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGetGuiMessageCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGetGuiMessageCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGetGuiMessageCtrl_ScGetActiveView(This,View)	\
    ( (This)->lpVtbl -> ScGetActiveView(This,View) ) 

#define SC_IGetGuiMessageCtrl_ScGetControlButton(This,Id,Button)	\
    ( (This)->lpVtbl -> ScGetControlButton(This,Id,Button) ) 

#define SC_IGetGuiMessageCtrl_ScGetControlButtonUser(This,Name,Id1,Id2,Id3,Id4,Button)	\
    ( (This)->lpVtbl -> ScGetControlButtonUser(This,Name,Id1,Id2,Id3,Id4,Button) ) 

#define SC_IGetGuiMessageCtrl_ScAddControlButton(This,Id,Flags,Before,Button)	\
    ( (This)->lpVtbl -> ScAddControlButton(This,Id,Flags,Before,Button) ) 

#define SC_IGetGuiMessageCtrl_ScSetControlButtonUserData(This,Button,Id1,Id2,Id3,Id4)	\
    ( (This)->lpVtbl -> ScSetControlButtonUserData(This,Button,Id1,Id2,Id3,Id4) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGetGuiMessageCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_DGetKernelMessageEvents_DISPINTERFACE_DEFINED__
#define __SC_DGetKernelMessageEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_DGetKernelMessageEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DGetKernelMessageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85FAB025-7961-11D1-8C1F-008048EEDCB8")
    SC_DGetKernelMessageEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DGetKernelMessageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DGetKernelMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DGetKernelMessageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DGetKernelMessageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DGetKernelMessageEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DGetKernelMessageEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DGetKernelMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DGetKernelMessageEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DGetKernelMessageEventsVtbl;

    interface SC_DGetKernelMessageEvents
    {
        CONST_VTBL struct SC_DGetKernelMessageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DGetKernelMessageEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DGetKernelMessageEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DGetKernelMessageEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DGetKernelMessageEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DGetKernelMessageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DGetKernelMessageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DGetKernelMessageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DGetKernelMessageEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_DGetGuiMessageEvents_DISPINTERFACE_DEFINED__
#define __SC_DGetGuiMessageEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_DGetGuiMessageEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DGetGuiMessageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("85FAB029-7961-11D1-8C1F-008048EEDCB8")
    SC_DGetGuiMessageEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DGetGuiMessageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DGetGuiMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DGetGuiMessageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DGetGuiMessageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DGetGuiMessageEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DGetGuiMessageEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DGetGuiMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DGetGuiMessageEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DGetGuiMessageEventsVtbl;

    interface SC_DGetGuiMessageEvents
    {
        CONST_VTBL struct SC_DGetGuiMessageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DGetGuiMessageEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DGetGuiMessageEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DGetGuiMessageEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DGetGuiMessageEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DGetGuiMessageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DGetGuiMessageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DGetGuiMessageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DGetGuiMessageEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IGetOpticMessageCtrl_INTERFACE_DEFINED__
#define __SC_IGetOpticMessageCtrl_INTERFACE_DEFINED__

/* interface SC_IGetOpticMessageCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGetOpticMessageCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF458822-7812-11d3-9B46-008048EEE00C")
    SC_IGetOpticMessageCtrl : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScSendUpdate( 
            long Flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGetOpticMessageCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGetOpticMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGetOpticMessageCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGetOpticMessageCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGetOpticMessageCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGetOpticMessageCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGetOpticMessageCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGetOpticMessageCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScSendUpdate )( 
            SC_IGetOpticMessageCtrl * This,
            long Flags);
        
        END_INTERFACE
    } SC_IGetOpticMessageCtrlVtbl;

    interface SC_IGetOpticMessageCtrl
    {
        CONST_VTBL struct SC_IGetOpticMessageCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGetOpticMessageCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGetOpticMessageCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGetOpticMessageCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGetOpticMessageCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGetOpticMessageCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGetOpticMessageCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGetOpticMessageCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGetOpticMessageCtrl_ScSendUpdate(This,Flags)	\
    ( (This)->lpVtbl -> ScSendUpdate(This,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGetOpticMessageCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_DGetOpticMessageEvents_DISPINTERFACE_DEFINED__
#define __SC_DGetOpticMessageEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_DGetOpticMessageEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DGetOpticMessageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CF458824-7812-11d3-9B46-008048EEE00C")
    SC_DGetOpticMessageEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DGetOpticMessageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DGetOpticMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DGetOpticMessageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DGetOpticMessageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DGetOpticMessageEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DGetOpticMessageEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DGetOpticMessageEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DGetOpticMessageEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DGetOpticMessageEventsVtbl;

    interface SC_DGetOpticMessageEvents
    {
        CONST_VTBL struct SC_DGetOpticMessageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DGetOpticMessageEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DGetOpticMessageEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DGetOpticMessageEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DGetOpticMessageEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DGetOpticMessageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DGetOpticMessageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DGetOpticMessageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DGetOpticMessageEvents_DISPINTERFACE_DEFINED__ */



#ifndef __ScConstantsMessageCtrl_MODULE_DEFINED__
#define __ScConstantsMessageCtrl_MODULE_DEFINED__


/* module ScConstantsMessageCtrl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scKernelMessageUpdateAll	=	0xffffffff;

/* [helpstring] */ const long scKernelMessageUpdateEntitySelectionChanged	=	0x1;

/* [helpstring] */ const long scKernelMessageUpdateEntityTransformed	=	0x2;

/* [helpstring] */ const long scKernelMessageUpdateActiveLayerChanged	=	0x4;

/* [helpstring] */ const long scKernelMessageActionImport	=	0x1;

/* [helpstring] */ const long scKernelMessageActionExport	=	0x2;

/* [helpstring] */ const long scKernelMessageActionSlice	=	0x3;

/* [helpstring] */ const long scKernelMessageUpdateExEntityTransformed	=	0x1;

/* [helpstring] */ const long scKernelMessageUpdateExScExposurePropertyChanged	=	0x2;

/* [helpstring] */ const long scKernelMessageUpdateExEntityWithinExposure	=	0x40;

/* [helpstring] */ const long scKernelMessageUpdateExReset	=	0x80;

/* [helpstring] */ const long scKernelMessageUpdateLightCtrlEditPenStart	=	( 2 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateLightCtrlEditPenEnd	=	( 3 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateRedpointerOn	=	( 10 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateRedpointerOff	=	( 11 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateMarkStarted	=	( 7 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateMarkStopped	=	( 8 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdatePenColorUpdated	=	( 13 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateDebugModeNoOutput	=	( 14 * 0x8 ) ;

/* [helpstring] */ const long scKernelMessageUpdateTrailRestored	=	( 1 * 0x8 ) ;

#endif /* __ScConstantsMessageCtrl_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScGetKernelMessageCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("85FAB026-7961-11D1-8C1F-008048EEDCB8")
ScGetKernelMessageCtrl;
#endif

EXTERN_C const CLSID CLSID_ScGetGuiMessageCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("85FAB02A-7961-11D1-8C1F-008048EEDCB8")
ScGetGuiMessageCtrl;
#endif

EXTERN_C const CLSID CLSID_ScGetOpticMessageCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("CF45882A-7812-11D3-9B46-008048EEE00C")
ScGetOpticMessageCtrl;
#endif
#endif /* __ScapsSamMessageCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


