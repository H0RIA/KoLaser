

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:51 2017
 */
/* Compiler settings for d:\scaps\dll_source\sc_render\cpp\sc_render_archive_type_lib.idl:
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


#ifndef __sc_render_archive_type_lib_h__
#define __sc_render_archive_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IRenderArchive_FWD_DEFINED__
#define __SC_IRenderArchive_FWD_DEFINED__
typedef interface SC_IRenderArchive SC_IRenderArchive;
#endif 	/* __SC_IRenderArchive_FWD_DEFINED__ */


#ifndef __ScRenderArchive_FWD_DEFINED__
#define __ScRenderArchive_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRenderArchive ScRenderArchive;
#else
typedef struct ScRenderArchive ScRenderArchive;
#endif /* __cplusplus */

#endif 	/* __ScRenderArchive_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_render_archive_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_render_archive_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_render_archive_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamRenderArchive_LIBRARY_DEFINED__
#define __ScapsSamRenderArchive_LIBRARY_DEFINED__

/* library ScapsSamRenderArchive */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamRenderArchive;

#ifndef __SC_IRenderArchive_INTERFACE_DEFINED__
#define __SC_IRenderArchive_INTERFACE_DEFINED__

/* interface SC_IRenderArchive */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRenderArchive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B1BC647-1A5A-4E8C-B17F-ED33E60F6FE8")
    SC_IRenderArchive : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArchive( 
            /* [in] */ LPDISPATCH archive) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColor( 
            /* [in] */ int index,
            /* [in] */ DWORD color) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IRenderArchiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRenderArchive * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRenderArchive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRenderArchive * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRenderArchive * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRenderArchive * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRenderArchive * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRenderArchive * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArchive )( 
            SC_IRenderArchive * This,
            /* [in] */ LPDISPATCH archive);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColor )( 
            SC_IRenderArchive * This,
            /* [in] */ int index,
            /* [in] */ DWORD color);
        
        END_INTERFACE
    } SC_IRenderArchiveVtbl;

    interface SC_IRenderArchive
    {
        CONST_VTBL struct SC_IRenderArchiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRenderArchive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRenderArchive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRenderArchive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRenderArchive_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRenderArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRenderArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRenderArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRenderArchive_ScSetArchive(This,archive)	\
    ( (This)->lpVtbl -> ScSetArchive(This,archive) ) 

#define SC_IRenderArchive_ScSetColor(This,index,color)	\
    ( (This)->lpVtbl -> ScSetColor(This,index,color) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IRenderArchive_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScRenderArchive;

#ifdef __cplusplus

class DECLSPEC_UUID("B2333F12-24BF-4E8F-BDB4-19C895A7A246")
ScRenderArchive;
#endif
#endif /* __ScapsSamRenderArchive_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


