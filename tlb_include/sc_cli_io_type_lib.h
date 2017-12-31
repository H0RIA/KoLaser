

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:36 2017
 */
/* Compiler settings for d:\scaps\dll_source\cliio\com\include\sc_cli_io_type_lib.idl:
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


#ifndef __sc_cli_io_type_lib_h__
#define __sc_cli_io_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ILayerFileCli_FWD_DEFINED__
#define __SC_ILayerFileCli_FWD_DEFINED__
typedef interface SC_ILayerFileCli SC_ILayerFileCli;
#endif 	/* __SC_ILayerFileCli_FWD_DEFINED__ */


#ifndef __ScLayerFileCli_FWD_DEFINED__
#define __ScLayerFileCli_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayerFileCli ScLayerFileCli;
#else
typedef struct ScLayerFileCli ScLayerFileCli;
#endif /* __cplusplus */

#endif 	/* __ScLayerFileCli_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_cli_io_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_layer_solid_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_cli_io_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_cli_io_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamCliIO_LIBRARY_DEFINED__
#define __ScapsSamCliIO_LIBRARY_DEFINED__

/* library ScapsSamCliIO */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamCliIO;

#ifndef __SC_ILayerFileCli_INTERFACE_DEFINED__
#define __SC_ILayerFileCli_INTERFACE_DEFINED__

/* interface SC_ILayerFileCli */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayerFileCli;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03A49ED4-812C-11d1-974F-008048EEE00C")
    SC_ILayerFileCli : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileRead( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileWriteASCII( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileWriteBinary( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExport( 
            /* [in] */ /* external definition not present */ SC_ILayerSolid *LayerSolid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            /* [in] */ /* external definition not present */ SC_ILayerSolid *LayerSolid) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILayerFileCliVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayerFileCli * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayerFileCli * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayerFileCli * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayerFileCli * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayerFileCli * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayerFileCli * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayerFileCli * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileRead )( 
            SC_ILayerFileCli * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWriteASCII )( 
            SC_ILayerFileCli * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWriteBinary )( 
            SC_ILayerFileCli * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_ILayerFileCli * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ILayerFileCli * This,
            /* [in] */ /* external definition not present */ SC_ILayerSolid *LayerSolid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ILayerFileCli * This,
            /* [in] */ /* external definition not present */ SC_ILayerSolid *LayerSolid);
        
        END_INTERFACE
    } SC_ILayerFileCliVtbl;

    interface SC_ILayerFileCli
    {
        CONST_VTBL struct SC_ILayerFileCliVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayerFileCli_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayerFileCli_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayerFileCli_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayerFileCli_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayerFileCli_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayerFileCli_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayerFileCli_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayerFileCli_ScOpenFileRead(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileRead(This,Name) ) 

#define SC_ILayerFileCli_ScOpenFileWriteASCII(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWriteASCII(This,Name) ) 

#define SC_ILayerFileCli_ScOpenFileWriteBinary(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWriteBinary(This,Name) ) 

#define SC_ILayerFileCli_ScClose(This)	\
    ( (This)->lpVtbl -> ScClose(This) ) 

#define SC_ILayerFileCli_ScExport(This,LayerSolid)	\
    ( (This)->lpVtbl -> ScExport(This,LayerSolid) ) 

#define SC_ILayerFileCli_ScImport(This,LayerSolid)	\
    ( (This)->lpVtbl -> ScImport(This,LayerSolid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayerFileCli_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLayerFileCli_MODULE_DEFINED__
#define __ScConstantsLayerFileCli_MODULE_DEFINED__


/* module ScConstantsLayerFileCli */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectLayerFileCli	=	( 0x2000 | ( ( 7 * 0x1000000 )  + 0x200000 )  ) ;

#endif /* __ScConstantsLayerFileCli_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayerFileCli;

#ifdef __cplusplus

class DECLSPEC_UUID("03A49EDD-812C-11d1-974F-008048EEE00C")
ScLayerFileCli;
#endif
#endif /* __ScapsSamCliIO_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


