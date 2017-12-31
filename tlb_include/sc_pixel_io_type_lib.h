

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:34 2017
 */
/* Compiler settings for d:\scaps\dll_source\pixelio\com\include\sc_pixel_io_type_lib.idl:
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


#ifndef __sc_pixel_io_type_lib_h__
#define __sc_pixel_io_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ILayerFilePixel_FWD_DEFINED__
#define __SC_ILayerFilePixel_FWD_DEFINED__
typedef interface SC_ILayerFilePixel SC_ILayerFilePixel;
#endif 	/* __SC_ILayerFilePixel_FWD_DEFINED__ */


#ifndef __ScLayerFilePixel_FWD_DEFINED__
#define __ScLayerFilePixel_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayerFilePixel ScLayerFilePixel;
#else
typedef struct ScLayerFilePixel ScLayerFilePixel;
#endif /* __cplusplus */

#endif 	/* __ScLayerFilePixel_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_pixel_io_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_pixel_io_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_pixel_io_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamPixelIO_LIBRARY_DEFINED__
#define __ScapsSamPixelIO_LIBRARY_DEFINED__

/* library ScapsSamPixelIO */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamPixelIO;

#ifndef __SC_ILayerFilePixel_INTERFACE_DEFINED__
#define __SC_ILayerFilePixel_INTERFACE_DEFINED__

/* interface SC_ILayerFilePixel */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayerFilePixel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A7D53E12-EDAC-11d1-8C7D-008048EEDCB8")
    SC_ILayerFilePixel : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResolution( 
            /* [retval][out] */ double *Res) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResolution( 
            /* [in] */ double Res) = 0;
        
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

    typedef struct SC_ILayerFilePixelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayerFilePixel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayerFilePixel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayerFilePixel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayerFilePixel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayerFilePixel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayerFilePixel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayerFilePixel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResolution )( 
            SC_ILayerFilePixel * This,
            /* [retval][out] */ double *Res);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResolution )( 
            SC_ILayerFilePixel * This,
            /* [in] */ double Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileRead )( 
            SC_ILayerFilePixel * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWrite )( 
            SC_ILayerFilePixel * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_ILayerFilePixel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ILayerFilePixel * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ILayerFilePixel * This,
            /* [in] */ /* external definition not present */ SC_ILayer *Layer);
        
        END_INTERFACE
    } SC_ILayerFilePixelVtbl;

    interface SC_ILayerFilePixel
    {
        CONST_VTBL struct SC_ILayerFilePixelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayerFilePixel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayerFilePixel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayerFilePixel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayerFilePixel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayerFilePixel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayerFilePixel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayerFilePixel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayerFilePixel_get_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> get_ScResolution(This,Res) ) 

#define SC_ILayerFilePixel_put_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> put_ScResolution(This,Res) ) 

#define SC_ILayerFilePixel_ScOpenFileRead(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileRead(This,Name) ) 

#define SC_ILayerFilePixel_ScOpenFileWrite(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWrite(This,Name) ) 

#define SC_ILayerFilePixel_ScClose(This)	\
    ( (This)->lpVtbl -> ScClose(This) ) 

#define SC_ILayerFilePixel_ScExport(This,Entity)	\
    ( (This)->lpVtbl -> ScExport(This,Entity) ) 

#define SC_ILayerFilePixel_ScImport(This,Layer)	\
    ( (This)->lpVtbl -> ScImport(This,Layer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayerFilePixel_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLayerFilePixel_MODULE_DEFINED__
#define __ScConstantsLayerFilePixel_MODULE_DEFINED__


/* module ScConstantsLayerFilePixel */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectLayerFilePixel	=	( 0x2000 | ( ( 9 * 0x1000000 )  + 0x200000 )  ) ;

#endif /* __ScConstantsLayerFilePixel_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayerFilePixel;

#ifdef __cplusplus

class DECLSPEC_UUID("A7D53E16-EDAC-11d1-8C7D-008048EEDCB8")
ScLayerFilePixel;
#endif
#endif /* __ScapsSamPixelIO_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


