

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:30 2017
 */
/* Compiler settings for d:\scaps\dll_source\beam_komp\com\include\sc_beam_komp_type_lib.idl:
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


#ifndef __sc_beam_komp_type_lib_h__
#define __sc_beam_komp_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IBeamCompensator_FWD_DEFINED__
#define __SC_IBeamCompensator_FWD_DEFINED__
typedef interface SC_IBeamCompensator SC_IBeamCompensator;
#endif 	/* __SC_IBeamCompensator_FWD_DEFINED__ */


#ifndef __ScBeamCompensator_FWD_DEFINED__
#define __ScBeamCompensator_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBeamCompensator ScBeamCompensator;
#else
typedef struct ScBeamCompensator ScBeamCompensator;
#endif /* __cplusplus */

#endif 	/* __ScBeamCompensator_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_beam_komp_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_beam_komp_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_beam_komp_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamBeamCompensator_LIBRARY_DEFINED__
#define __ScapsSamBeamCompensator_LIBRARY_DEFINED__

/* library ScapsSamBeamCompensator */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamBeamCompensator;

#ifndef __SC_IBeamCompensator_INTERFACE_DEFINED__
#define __SC_IBeamCompensator_INTERFACE_DEFINED__

/* interface SC_IBeamCompensator */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBeamCompensator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("591FB862-B2CA-11d1-8C4B-008048EEDCB8")
    SC_IBeamCompensator : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWidth( 
            /* [retval][out] */ double *Width) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWidth( 
            /* [in] */ double Width) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCompensateG( 
            /* [in] */ /* external definition not present */ SC_IPolyLines2D *PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCompensateE( 
            /* [in] */ /* external definition not present */ SC_IPolyLine2D *PolyLine) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IBeamCompensatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBeamCompensator * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBeamCompensator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBeamCompensator * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBeamCompensator * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBeamCompensator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBeamCompensator * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBeamCompensator * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWidth )( 
            SC_IBeamCompensator * This,
            /* [retval][out] */ double *Width);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWidth )( 
            SC_IBeamCompensator * This,
            /* [in] */ double Width);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCompensateG )( 
            SC_IBeamCompensator * This,
            /* [in] */ /* external definition not present */ SC_IPolyLines2D *PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCompensateE )( 
            SC_IBeamCompensator * This,
            /* [in] */ /* external definition not present */ SC_IPolyLine2D *PolyLine);
        
        END_INTERFACE
    } SC_IBeamCompensatorVtbl;

    interface SC_IBeamCompensator
    {
        CONST_VTBL struct SC_IBeamCompensatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBeamCompensator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBeamCompensator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBeamCompensator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBeamCompensator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBeamCompensator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBeamCompensator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBeamCompensator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBeamCompensator_get_ScWidth(This,Width)	\
    ( (This)->lpVtbl -> get_ScWidth(This,Width) ) 

#define SC_IBeamCompensator_put_ScWidth(This,Width)	\
    ( (This)->lpVtbl -> put_ScWidth(This,Width) ) 

#define SC_IBeamCompensator_ScCompensateG(This,PolyLines)	\
    ( (This)->lpVtbl -> ScCompensateG(This,PolyLines) ) 

#define SC_IBeamCompensator_ScCompensateE(This,PolyLine)	\
    ( (This)->lpVtbl -> ScCompensateE(This,PolyLine) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IBeamCompensator_INTERFACE_DEFINED__ */



#ifndef __ScConstantsBeamCompensator_MODULE_DEFINED__
#define __ScConstantsBeamCompensator_MODULE_DEFINED__


/* module ScConstantsBeamCompensator */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectBeamCompensator	=	( 0x2000 | ( ( 12 * 0x1000000 )  + 0x4000 )  ) ;

#endif /* __ScConstantsBeamCompensator_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScBeamCompensator;

#ifdef __cplusplus

class DECLSPEC_UUID("7D7FD101-B2CA-11d1-8C4B-008048EEDCB8")
ScBeamCompensator;
#endif
#endif /* __ScapsSamBeamCompensator_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


