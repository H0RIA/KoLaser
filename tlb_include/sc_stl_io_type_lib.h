

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:37 2017
 */
/* Compiler settings for d:\scaps\dll_source\stlio\com\include\sc_stl_io_type_lib.idl:
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


#ifndef __sc_stl_io_type_lib_h__
#define __sc_stl_io_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ITriaFileStl_FWD_DEFINED__
#define __SC_ITriaFileStl_FWD_DEFINED__
typedef interface SC_ITriaFileStl SC_ITriaFileStl;
#endif 	/* __SC_ITriaFileStl_FWD_DEFINED__ */


#ifndef __ScTriaFileStl_FWD_DEFINED__
#define __ScTriaFileStl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScTriaFileStl ScTriaFileStl;
#else
typedef struct ScTriaFileStl ScTriaFileStl;
#endif /* __cplusplus */

#endif 	/* __ScTriaFileStl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_stl_io_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_tria_mesh_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_stl_io_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_stl_io_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamStlIO_LIBRARY_DEFINED__
#define __ScapsSamStlIO_LIBRARY_DEFINED__

/* library ScapsSamStlIO */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamStlIO;

#ifndef __SC_ITriaFileStl_INTERFACE_DEFINED__
#define __SC_ITriaFileStl_INTERFACE_DEFINED__

/* interface SC_ITriaFileStl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ITriaFileStl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8706AB2-7229-11d1-8D89-008048E1AD3F")
    SC_ITriaFileStl : public IDispatch
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
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *TriaMesh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *TriaMesh) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ITriaFileStlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ITriaFileStl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ITriaFileStl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ITriaFileStl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ITriaFileStl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ITriaFileStl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ITriaFileStl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ITriaFileStl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileRead )( 
            SC_ITriaFileStl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWriteASCII )( 
            SC_ITriaFileStl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWriteBinary )( 
            SC_ITriaFileStl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_ITriaFileStl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ITriaFileStl * This,
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *TriaMesh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ITriaFileStl * This,
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *TriaMesh);
        
        END_INTERFACE
    } SC_ITriaFileStlVtbl;

    interface SC_ITriaFileStl
    {
        CONST_VTBL struct SC_ITriaFileStlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ITriaFileStl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ITriaFileStl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ITriaFileStl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ITriaFileStl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ITriaFileStl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ITriaFileStl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ITriaFileStl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ITriaFileStl_ScOpenFileRead(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileRead(This,Name) ) 

#define SC_ITriaFileStl_ScOpenFileWriteASCII(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWriteASCII(This,Name) ) 

#define SC_ITriaFileStl_ScOpenFileWriteBinary(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWriteBinary(This,Name) ) 

#define SC_ITriaFileStl_ScClose(This)	\
    ( (This)->lpVtbl -> ScClose(This) ) 

#define SC_ITriaFileStl_ScExport(This,TriaMesh)	\
    ( (This)->lpVtbl -> ScExport(This,TriaMesh) ) 

#define SC_ITriaFileStl_ScImport(This,TriaMesh)	\
    ( (This)->lpVtbl -> ScImport(This,TriaMesh) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ITriaFileStl_INTERFACE_DEFINED__ */



#ifndef __ScConstantsStlIO_MODULE_DEFINED__
#define __ScConstantsStlIO_MODULE_DEFINED__


/* module ScConstantsStlIO */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectTriaFileStl	=	( 0x2000 | ( ( 6 * 0x1000000 )  + 0x200000 )  ) ;

#endif /* __ScConstantsStlIO_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScTriaFileStl;

#ifdef __cplusplus

class DECLSPEC_UUID("15bbd6a1-7227-11d1-8d89-008048E1AD3F")
ScTriaFileStl;
#endif
#endif /* __ScapsSamStlIO_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


