

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:33 2017
 */
/* Compiler settings for d:\scaps\dll_source\hpglio\com\include\sc_hpgl_io_type_lib.idl:
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


#ifndef __sc_hpgl_io_type_lib_h__
#define __sc_hpgl_io_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ILayerFileHpgl_FWD_DEFINED__
#define __SC_ILayerFileHpgl_FWD_DEFINED__
typedef interface SC_ILayerFileHpgl SC_ILayerFileHpgl;
#endif 	/* __SC_ILayerFileHpgl_FWD_DEFINED__ */


#ifndef __ScLayerFileHpgl_FWD_DEFINED__
#define __ScLayerFileHpgl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayerFileHpgl ScLayerFileHpgl;
#else
typedef struct ScLayerFileHpgl ScLayerFileHpgl;
#endif /* __cplusplus */

#endif 	/* __ScLayerFileHpgl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_hpgl_io_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_hpgl_io_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_hpgl_io_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamHpglIO_LIBRARY_DEFINED__
#define __ScapsSamHpglIO_LIBRARY_DEFINED__

/* library ScapsSamHpglIO */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamHpglIO;

#ifndef __SC_ILayerFileHpgl_INTERFACE_DEFINED__
#define __SC_ILayerFileHpgl_INTERFACE_DEFINED__

/* interface SC_ILayerFileHpgl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayerFileHpgl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D413982-68AB-11d1-972A-008048EEE00C")
    SC_ILayerFileHpgl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResolution( 
            /* [retval][out] */ double *Res) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResolution( 
            /* [in] */ double Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyle( 
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyle( 
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileRead( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileWrite( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExport( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            /* [in] */ /* external definition not present */ SC_ILayer *Layer) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILayerFileHpglVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayerFileHpgl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayerFileHpgl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayerFileHpgl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResolution )( 
            SC_ILayerFileHpgl * This,
            /* [retval][out] */ double *Res);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResolution )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ double Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyle )( 
            SC_ILayerFileHpgl * This,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyle )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ long Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileRead )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWrite )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_ILayerFileHpgl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ILayerFileHpgl * This,
            /* [in] */ /* external definition not present */ SC_ILayer *Layer);
        
        END_INTERFACE
    } SC_ILayerFileHpglVtbl;

    interface SC_ILayerFileHpgl
    {
        CONST_VTBL struct SC_ILayerFileHpglVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayerFileHpgl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayerFileHpgl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayerFileHpgl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayerFileHpgl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayerFileHpgl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayerFileHpgl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayerFileHpgl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayerFileHpgl_get_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> get_ScResolution(This,Res) ) 

#define SC_ILayerFileHpgl_put_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> put_ScResolution(This,Res) ) 

#define SC_ILayerFileHpgl_get_ScStyle(This,Style)	\
    ( (This)->lpVtbl -> get_ScStyle(This,Style) ) 

#define SC_ILayerFileHpgl_put_ScStyle(This,Style)	\
    ( (This)->lpVtbl -> put_ScStyle(This,Style) ) 

#define SC_ILayerFileHpgl_ScOpenFileRead(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileRead(This,Name) ) 

#define SC_ILayerFileHpgl_ScOpenFileWrite(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWrite(This,Name) ) 

#define SC_ILayerFileHpgl_ScClose(This)	\
    ( (This)->lpVtbl -> ScClose(This) ) 

#define SC_ILayerFileHpgl_ScExport(This,Entity)	\
    ( (This)->lpVtbl -> ScExport(This,Entity) ) 

#define SC_ILayerFileHpgl_ScImport(This,Layer)	\
    ( (This)->lpVtbl -> ScImport(This,Layer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayerFileHpgl_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLayerFileHpgl_MODULE_DEFINED__
#define __ScConstantsLayerFileHpgl_MODULE_DEFINED__


/* module ScConstantsLayerFileHpgl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectLayerFileHpgl	=	( 0x2000 | ( ( 8 * 0x1000000 )  + 0x200000 )  ) ;

/* [helpstring] */ const long scComLayerFileHpglStyleImportPolyLines	=	0x1;

/* [helpstring] */ const long scComLayerFileHpglStyleImportLineArrays	=	0x2;

/* [helpstring] */ const long scComLayerFileHpglStyleImportAllToLineArrays	=	0x8;

/* [helpstring] */ const long scComLayerFileHpglStyleExportPolyLines	=	0x10;

/* [helpstring] */ const long scComLayerFileHpglStyleExportLineArrays	=	0x20;

/* [helpstring] */ const long scComLayerFileHpglStyleCheckOrientation	=	0x40;

/* [helpstring] */ const long scComLayerFileHpglStyleReadPens	=	0x80;

/* [helpstring] */ const long scComLayerFileHpglStyleWritePens	=	0x100;

/* [helpstring] */ const long scComLayerFileHpglStyleImportOpenPolyLines	=	0x200;

#endif /* __ScConstantsLayerFileHpgl_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayerFileHpgl;

#ifdef __cplusplus

class DECLSPEC_UUID("2D413986-68AB-11d1-972A-008048EEE00C")
ScLayerFileHpgl;
#endif
#endif /* __ScapsSamHpglIO_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


