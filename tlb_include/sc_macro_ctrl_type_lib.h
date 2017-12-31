

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:20 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\vbscript\sc_macro_ctrl_type_lib.idl:
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


#ifndef __sc_macro_ctrl_type_lib_h__
#define __sc_macro_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IMacroCtrl_FWD_DEFINED__
#define __SC_IMacroCtrl_FWD_DEFINED__
typedef interface SC_IMacroCtrl SC_IMacroCtrl;
#endif 	/* __SC_IMacroCtrl_FWD_DEFINED__ */


#ifndef __SC_IMacroCtrlDisp_FWD_DEFINED__
#define __SC_IMacroCtrlDisp_FWD_DEFINED__
typedef interface SC_IMacroCtrlDisp SC_IMacroCtrlDisp;
#endif 	/* __SC_IMacroCtrlDisp_FWD_DEFINED__ */


#ifndef __SC_IMacroCtrlEvents_FWD_DEFINED__
#define __SC_IMacroCtrlEvents_FWD_DEFINED__
typedef interface SC_IMacroCtrlEvents SC_IMacroCtrlEvents;
#endif 	/* __SC_IMacroCtrlEvents_FWD_DEFINED__ */


#ifndef __ScMacroCtrl_FWD_DEFINED__
#define __ScMacroCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScMacroCtrl ScMacroCtrl;
#else
typedef struct ScMacroCtrl ScMacroCtrl;
#endif /* __cplusplus */

#endif 	/* __ScMacroCtrl_FWD_DEFINED__ */


#ifndef __ScMacroCtrlInt_FWD_DEFINED__
#define __ScMacroCtrlInt_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScMacroCtrlInt ScMacroCtrlInt;
#else
typedef struct ScMacroCtrlInt ScMacroCtrlInt;
#endif /* __cplusplus */

#endif 	/* __ScMacroCtrlInt_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_macro_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5


extern RPC_IF_HANDLE __MIDL_itf_sc_macro_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_macro_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamMacroCtrl_LIBRARY_DEFINED__
#define __ScapsSamMacroCtrl_LIBRARY_DEFINED__

/* library ScapsSamMacroCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamMacroCtrl;

#ifndef __SC_IMacroCtrl_INTERFACE_DEFINED__
#define __SC_IMacroCtrl_INTERFACE_DEFINED__

/* interface SC_IMacroCtrl */
/* [dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IMacroCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84997E62-F800-11d1-8C80-008048EEDCB8")
    SC_IMacroCtrl : public IDispatch
    {
    public:
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticModule( 
            /* [in] */ LPDISPATCH OpticModule) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticModule( 
            /* [retval][out] */ LPDISPATCH *OpticModule) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_ScView2D( 
            /* [in] */ LPDISPATCH View2D) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ScView2D( 
            /* [retval][out] */ LPDISPATCH *View2D) = 0;
        
        virtual /* [propput][helpstring][id] */ HRESULT STDMETHODCALLTYPE put_ScEntities2D( 
            /* [in] */ LPDISPATCH Entities2D) = 0;
        
        virtual /* [propget][helpstring][id] */ HRESULT STDMETHODCALLTYPE get_ScEntities2D( 
            /* [retval][out] */ LPDISPATCH *Entities2D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExecute( 
            /* [in] */ BSTR Statement,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectModule( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetModule( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE ScRun( 
            /* [in] */ LPDISPATCH Object,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadMacros( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveMacros( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetErrorNumber( 
            /* [retval][out] */ long *Number) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetErrorInfo( 
            /* [retval][out] */ VARIANT *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstFunctionName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNextFunctionName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpToFunction( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddObject( 
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemoveObject( 
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadScriptText( 
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveScriptText( 
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE ScCall( 
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNewModule( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFindMethod( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *MethodIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMethodHelpString( 
            /* [in] */ long MethodIndex,
            /* [retval][out] */ BSTR *Help) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMethodParaCount( 
            /* [in] */ long MethodIndex,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParaType( 
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParaHelpString( 
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ BSTR *Help) = 0;
        
        virtual /* [helpstring][vararg][id] */ HRESULT STDMETHODCALLTYPE ScCallIndex( 
            /* [in] */ long Index,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IMacroCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IMacroCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IMacroCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IMacroCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IMacroCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IMacroCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IMacroCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IMacroCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticModule )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH OpticModule);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticModule )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ LPDISPATCH *OpticModule);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScView2D )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH View2D);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScView2D )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ LPDISPATCH *View2D);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntities2D )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH Entities2D);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntities2D )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ LPDISPATCH *Entities2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReset )( 
            SC_IMacroCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecute )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Statement,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectModule )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetModule )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScRun )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH Object,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadMacros )( 
            SC_IMacroCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveMacros )( 
            SC_IMacroCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IMacroCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetErrorNumber )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ long *Number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetErrorInfo )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ VARIANT *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IMacroCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstFunctionName )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextFunctionName )( 
            SC_IMacroCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpToFunction )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddObject )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemoveObject )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadScriptText )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveScriptText )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScCall )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNewModule )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFindMethod )( 
            SC_IMacroCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *MethodIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMethodHelpString )( 
            SC_IMacroCtrl * This,
            /* [in] */ long MethodIndex,
            /* [retval][out] */ BSTR *Help);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMethodParaCount )( 
            SC_IMacroCtrl * This,
            /* [in] */ long MethodIndex,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParaType )( 
            SC_IMacroCtrl * This,
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParaHelpString )( 
            SC_IMacroCtrl * This,
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ BSTR *Help);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScCallIndex )( 
            SC_IMacroCtrl * This,
            /* [in] */ long Index,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *Result);
        
        END_INTERFACE
    } SC_IMacroCtrlVtbl;

    interface SC_IMacroCtrl
    {
        CONST_VTBL struct SC_IMacroCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IMacroCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IMacroCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IMacroCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IMacroCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IMacroCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IMacroCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IMacroCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IMacroCtrl_put_ScOpticModule(This,OpticModule)	\
    ( (This)->lpVtbl -> put_ScOpticModule(This,OpticModule) ) 

#define SC_IMacroCtrl_get_ScOpticModule(This,OpticModule)	\
    ( (This)->lpVtbl -> get_ScOpticModule(This,OpticModule) ) 

#define SC_IMacroCtrl_put_ScView2D(This,View2D)	\
    ( (This)->lpVtbl -> put_ScView2D(This,View2D) ) 

#define SC_IMacroCtrl_get_ScView2D(This,View2D)	\
    ( (This)->lpVtbl -> get_ScView2D(This,View2D) ) 

#define SC_IMacroCtrl_put_ScEntities2D(This,Entities2D)	\
    ( (This)->lpVtbl -> put_ScEntities2D(This,Entities2D) ) 

#define SC_IMacroCtrl_get_ScEntities2D(This,Entities2D)	\
    ( (This)->lpVtbl -> get_ScEntities2D(This,Entities2D) ) 

#define SC_IMacroCtrl_ScReset(This)	\
    ( (This)->lpVtbl -> ScReset(This) ) 

#define SC_IMacroCtrl_ScExecute(This,Statement,Name)	\
    ( (This)->lpVtbl -> ScExecute(This,Statement,Name) ) 

#define SC_IMacroCtrl_ScSelectModule(This,Name)	\
    ( (This)->lpVtbl -> ScSelectModule(This,Name) ) 

#define SC_IMacroCtrl_ScGetModule(This,Name)	\
    ( (This)->lpVtbl -> ScGetModule(This,Name) ) 

#define SC_IMacroCtrl_ScRun(This,Object,ProcedureName,Parameters,Result)	\
    ( (This)->lpVtbl -> ScRun(This,Object,ProcedureName,Parameters,Result) ) 

#define SC_IMacroCtrl_ScLoadMacros(This)	\
    ( (This)->lpVtbl -> ScLoadMacros(This) ) 

#define SC_IMacroCtrl_ScSaveMacros(This)	\
    ( (This)->lpVtbl -> ScSaveMacros(This) ) 

#define SC_IMacroCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IMacroCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IMacroCtrl_ScGetErrorNumber(This,Number)	\
    ( (This)->lpVtbl -> ScGetErrorNumber(This,Number) ) 

#define SC_IMacroCtrl_ScGetErrorInfo(This,Info)	\
    ( (This)->lpVtbl -> ScGetErrorInfo(This,Info) ) 

#define SC_IMacroCtrl_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IMacroCtrl_ScGetFirstFunctionName(This,Name)	\
    ( (This)->lpVtbl -> ScGetFirstFunctionName(This,Name) ) 

#define SC_IMacroCtrl_ScGetNextFunctionName(This,Name)	\
    ( (This)->lpVtbl -> ScGetNextFunctionName(This,Name) ) 

#define SC_IMacroCtrl_ScJumpToFunction(This,Name)	\
    ( (This)->lpVtbl -> ScJumpToFunction(This,Name) ) 

#define SC_IMacroCtrl_ScAddObject(This,Name,Object)	\
    ( (This)->lpVtbl -> ScAddObject(This,Name,Object) ) 

#define SC_IMacroCtrl_ScRemoveObject(This,Name,Object)	\
    ( (This)->lpVtbl -> ScRemoveObject(This,Name,Object) ) 

#define SC_IMacroCtrl_ScLoadScriptText(This,FileName,Mode,Error)	\
    ( (This)->lpVtbl -> ScLoadScriptText(This,FileName,Mode,Error) ) 

#define SC_IMacroCtrl_ScSaveScriptText(This,FileName,Mode,Error)	\
    ( (This)->lpVtbl -> ScSaveScriptText(This,FileName,Mode,Error) ) 

#define SC_IMacroCtrl_ScCall(This,ProcedureName,Parameters,Result)	\
    ( (This)->lpVtbl -> ScCall(This,ProcedureName,Parameters,Result) ) 

#define SC_IMacroCtrl_ScNewModule(This,Name)	\
    ( (This)->lpVtbl -> ScNewModule(This,Name) ) 

#define SC_IMacroCtrl_ScFindMethod(This,Name,MethodIndex)	\
    ( (This)->lpVtbl -> ScFindMethod(This,Name,MethodIndex) ) 

#define SC_IMacroCtrl_ScGetMethodHelpString(This,MethodIndex,Help)	\
    ( (This)->lpVtbl -> ScGetMethodHelpString(This,MethodIndex,Help) ) 

#define SC_IMacroCtrl_ScGetMethodParaCount(This,MethodIndex,Count)	\
    ( (This)->lpVtbl -> ScGetMethodParaCount(This,MethodIndex,Count) ) 

#define SC_IMacroCtrl_ScGetParaType(This,MethodIndex,ParaIndex,Type)	\
    ( (This)->lpVtbl -> ScGetParaType(This,MethodIndex,ParaIndex,Type) ) 

#define SC_IMacroCtrl_ScGetParaHelpString(This,MethodIndex,ParaIndex,Help)	\
    ( (This)->lpVtbl -> ScGetParaHelpString(This,MethodIndex,ParaIndex,Help) ) 

#define SC_IMacroCtrl_ScCallIndex(This,Index,Parameters,Result)	\
    ( (This)->lpVtbl -> ScCallIndex(This,Index,Parameters,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IMacroCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_IMacroCtrlDisp_INTERFACE_DEFINED__
#define __SC_IMacroCtrlDisp_INTERFACE_DEFINED__

/* interface SC_IMacroCtrlDisp */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IMacroCtrlDisp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A95EE3D1-314C-11d2-9A51-008048EEE00C")
    SC_IMacroCtrlDisp : public SC_IMacroCtrl
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct SC_IMacroCtrlDispVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IMacroCtrlDisp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IMacroCtrlDisp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IMacroCtrlDisp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticModule )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH OpticModule);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticModule )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ LPDISPATCH *OpticModule);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScView2D )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH View2D);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScView2D )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ LPDISPATCH *View2D);
        
        /* [propput][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntities2D )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH Entities2D);
        
        /* [propget][helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntities2D )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ LPDISPATCH *Entities2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReset )( 
            SC_IMacroCtrlDisp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecute )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Statement,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectModule )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetModule )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScRun )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH Object,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadMacros )( 
            SC_IMacroCtrlDisp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveMacros )( 
            SC_IMacroCtrlDisp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetErrorNumber )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ long *Number);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetErrorInfo )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ VARIANT *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IMacroCtrlDisp * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstFunctionName )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextFunctionName )( 
            SC_IMacroCtrlDisp * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpToFunction )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddObject )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemoveObject )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name,
            /* [in] */ LPDISPATCH Object);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadScriptText )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveScriptText )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScCall )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR ProcedureName,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNewModule )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFindMethod )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *MethodIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMethodHelpString )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ long MethodIndex,
            /* [retval][out] */ BSTR *Help);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMethodParaCount )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ long MethodIndex,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParaType )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParaHelpString )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ long MethodIndex,
            /* [in] */ long ParaIndex,
            /* [retval][out] */ BSTR *Help);
        
        /* [helpstring][vararg][id] */ HRESULT ( STDMETHODCALLTYPE *ScCallIndex )( 
            SC_IMacroCtrlDisp * This,
            /* [in] */ long Index,
            /* [in] */ SAFEARRAY * *Parameters,
            /* [retval][out] */ VARIANT *Result);
        
        END_INTERFACE
    } SC_IMacroCtrlDispVtbl;

    interface SC_IMacroCtrlDisp
    {
        CONST_VTBL struct SC_IMacroCtrlDispVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IMacroCtrlDisp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IMacroCtrlDisp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IMacroCtrlDisp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IMacroCtrlDisp_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IMacroCtrlDisp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IMacroCtrlDisp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IMacroCtrlDisp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IMacroCtrlDisp_put_ScOpticModule(This,OpticModule)	\
    ( (This)->lpVtbl -> put_ScOpticModule(This,OpticModule) ) 

#define SC_IMacroCtrlDisp_get_ScOpticModule(This,OpticModule)	\
    ( (This)->lpVtbl -> get_ScOpticModule(This,OpticModule) ) 

#define SC_IMacroCtrlDisp_put_ScView2D(This,View2D)	\
    ( (This)->lpVtbl -> put_ScView2D(This,View2D) ) 

#define SC_IMacroCtrlDisp_get_ScView2D(This,View2D)	\
    ( (This)->lpVtbl -> get_ScView2D(This,View2D) ) 

#define SC_IMacroCtrlDisp_put_ScEntities2D(This,Entities2D)	\
    ( (This)->lpVtbl -> put_ScEntities2D(This,Entities2D) ) 

#define SC_IMacroCtrlDisp_get_ScEntities2D(This,Entities2D)	\
    ( (This)->lpVtbl -> get_ScEntities2D(This,Entities2D) ) 

#define SC_IMacroCtrlDisp_ScReset(This)	\
    ( (This)->lpVtbl -> ScReset(This) ) 

#define SC_IMacroCtrlDisp_ScExecute(This,Statement,Name)	\
    ( (This)->lpVtbl -> ScExecute(This,Statement,Name) ) 

#define SC_IMacroCtrlDisp_ScSelectModule(This,Name)	\
    ( (This)->lpVtbl -> ScSelectModule(This,Name) ) 

#define SC_IMacroCtrlDisp_ScGetModule(This,Name)	\
    ( (This)->lpVtbl -> ScGetModule(This,Name) ) 

#define SC_IMacroCtrlDisp_ScRun(This,Object,ProcedureName,Parameters,Result)	\
    ( (This)->lpVtbl -> ScRun(This,Object,ProcedureName,Parameters,Result) ) 

#define SC_IMacroCtrlDisp_ScLoadMacros(This)	\
    ( (This)->lpVtbl -> ScLoadMacros(This) ) 

#define SC_IMacroCtrlDisp_ScSaveMacros(This)	\
    ( (This)->lpVtbl -> ScSaveMacros(This) ) 

#define SC_IMacroCtrlDisp_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IMacroCtrlDisp_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IMacroCtrlDisp_ScGetErrorNumber(This,Number)	\
    ( (This)->lpVtbl -> ScGetErrorNumber(This,Number) ) 

#define SC_IMacroCtrlDisp_ScGetErrorInfo(This,Info)	\
    ( (This)->lpVtbl -> ScGetErrorInfo(This,Info) ) 

#define SC_IMacroCtrlDisp_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IMacroCtrlDisp_ScGetFirstFunctionName(This,Name)	\
    ( (This)->lpVtbl -> ScGetFirstFunctionName(This,Name) ) 

#define SC_IMacroCtrlDisp_ScGetNextFunctionName(This,Name)	\
    ( (This)->lpVtbl -> ScGetNextFunctionName(This,Name) ) 

#define SC_IMacroCtrlDisp_ScJumpToFunction(This,Name)	\
    ( (This)->lpVtbl -> ScJumpToFunction(This,Name) ) 

#define SC_IMacroCtrlDisp_ScAddObject(This,Name,Object)	\
    ( (This)->lpVtbl -> ScAddObject(This,Name,Object) ) 

#define SC_IMacroCtrlDisp_ScRemoveObject(This,Name,Object)	\
    ( (This)->lpVtbl -> ScRemoveObject(This,Name,Object) ) 

#define SC_IMacroCtrlDisp_ScLoadScriptText(This,FileName,Mode,Error)	\
    ( (This)->lpVtbl -> ScLoadScriptText(This,FileName,Mode,Error) ) 

#define SC_IMacroCtrlDisp_ScSaveScriptText(This,FileName,Mode,Error)	\
    ( (This)->lpVtbl -> ScSaveScriptText(This,FileName,Mode,Error) ) 

#define SC_IMacroCtrlDisp_ScCall(This,ProcedureName,Parameters,Result)	\
    ( (This)->lpVtbl -> ScCall(This,ProcedureName,Parameters,Result) ) 

#define SC_IMacroCtrlDisp_ScNewModule(This,Name)	\
    ( (This)->lpVtbl -> ScNewModule(This,Name) ) 

#define SC_IMacroCtrlDisp_ScFindMethod(This,Name,MethodIndex)	\
    ( (This)->lpVtbl -> ScFindMethod(This,Name,MethodIndex) ) 

#define SC_IMacroCtrlDisp_ScGetMethodHelpString(This,MethodIndex,Help)	\
    ( (This)->lpVtbl -> ScGetMethodHelpString(This,MethodIndex,Help) ) 

#define SC_IMacroCtrlDisp_ScGetMethodParaCount(This,MethodIndex,Count)	\
    ( (This)->lpVtbl -> ScGetMethodParaCount(This,MethodIndex,Count) ) 

#define SC_IMacroCtrlDisp_ScGetParaType(This,MethodIndex,ParaIndex,Type)	\
    ( (This)->lpVtbl -> ScGetParaType(This,MethodIndex,ParaIndex,Type) ) 

#define SC_IMacroCtrlDisp_ScGetParaHelpString(This,MethodIndex,ParaIndex,Help)	\
    ( (This)->lpVtbl -> ScGetParaHelpString(This,MethodIndex,ParaIndex,Help) ) 

#define SC_IMacroCtrlDisp_ScCallIndex(This,Index,Parameters,Result)	\
    ( (This)->lpVtbl -> ScCallIndex(This,Index,Parameters,Result) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IMacroCtrlDisp_INTERFACE_DEFINED__ */


#ifndef __SC_IMacroCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_IMacroCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IMacroCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IMacroCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("84997E63-F800-11d1-8C80-008048EEDCB8")
    SC_IMacroCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IMacroCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IMacroCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IMacroCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IMacroCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IMacroCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IMacroCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IMacroCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IMacroCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IMacroCtrlEventsVtbl;

    interface SC_IMacroCtrlEvents
    {
        CONST_VTBL struct SC_IMacroCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IMacroCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IMacroCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IMacroCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IMacroCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IMacroCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IMacroCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IMacroCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IMacroCtrlEvents_DISPINTERFACE_DEFINED__ */



#ifndef __ScConstantsMacro_MODULE_DEFINED__
#define __ScConstantsMacro_MODULE_DEFINED__


/* module ScConstantsMacro */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComMacroCtrlModeRTF	=	0x1;

/* [helpstring] */ const long scComMacroCtrlModeTXT	=	0x2;

/* [helpstring] */ const long scComMacroCtrlModeAuto	=	0x4;

/* [helpstring] */ const long scComMacroCtrlModeAdd	=	0x8;

#endif /* __ScConstantsMacro_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScMacroCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("84997E64-F800-11d1-8C80-008048EEDCB8")
ScMacroCtrl;
#endif

EXTERN_C const CLSID CLSID_ScMacroCtrlInt;

#ifdef __cplusplus

class DECLSPEC_UUID("1E1F8B02-A9AD-11d3-9B6C-008048EEE00C")
ScMacroCtrlInt;
#endif
#endif /* __ScapsSamMacroCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


