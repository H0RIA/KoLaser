

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:38 2017
 */
/* Compiler settings for d:\scaps\dll_source\triaslicer\com\include\sc_tria_slicer_type_lib.idl:
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


#ifndef __sc_tria_slicer_type_lib_h__
#define __sc_tria_slicer_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ITriaSlicer_FWD_DEFINED__
#define __SC_ITriaSlicer_FWD_DEFINED__
typedef interface SC_ITriaSlicer SC_ITriaSlicer;
#endif 	/* __SC_ITriaSlicer_FWD_DEFINED__ */


#ifndef __ScTriaSlicer_FWD_DEFINED__
#define __ScTriaSlicer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScTriaSlicer ScTriaSlicer;
#else
typedef struct ScTriaSlicer ScTriaSlicer;
#endif /* __cplusplus */

#endif 	/* __ScTriaSlicer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_tria_slicer_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_layer_solid_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_tria_mesh_type_lib.h"
#include "sc_entity_groups_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_tria_slicer_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_tria_slicer_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamTriaSlicer_LIBRARY_DEFINED__
#define __ScapsSamTriaSlicer_LIBRARY_DEFINED__

/* library ScapsSamTriaSlicer */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamTriaSlicer;

#ifndef __SC_ITriaSlicer_INTERFACE_DEFINED__
#define __SC_ITriaSlicer_INTERFACE_DEFINED__

/* interface SC_ITriaSlicer */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ITriaSlicer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFDC90D6-4895-11d1-96F4-008048EEE00C")
    SC_ITriaSlicer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInit( 
            /* [in] */ /* external definition not present */ SC_ILayerSolid *Layersolid,
            /* [in] */ double CloseDist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSliceAll( 
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh,
            /* [in] */ double Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSinglePlaneModeInit( 
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSinglePlaneModeSlice( 
            /* [in] */ /* external definition not present */ SC_ILayer *Layer,
            /* [in] */ double Dist,
            /* [in] */ double CloseDist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSinglePlaneModeEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSliceFromFile( 
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh,
            /* [in] */ /* external definition not present */ SC_IEntities3D *Group,
            /* [in] */ double CloseDist,
            /* [in] */ BSTR FileName) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ITriaSlicerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ITriaSlicer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ITriaSlicer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ITriaSlicer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ITriaSlicer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ITriaSlicer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ITriaSlicer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ITriaSlicer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInit )( 
            SC_ITriaSlicer * This,
            /* [in] */ /* external definition not present */ SC_ILayerSolid *Layersolid,
            /* [in] */ double CloseDist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSliceAll )( 
            SC_ITriaSlicer * This,
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh,
            /* [in] */ double Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSinglePlaneModeInit )( 
            SC_ITriaSlicer * This,
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSinglePlaneModeSlice )( 
            SC_ITriaSlicer * This,
            /* [in] */ /* external definition not present */ SC_ILayer *Layer,
            /* [in] */ double Dist,
            /* [in] */ double CloseDist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSinglePlaneModeEnd )( 
            SC_ITriaSlicer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSliceFromFile )( 
            SC_ITriaSlicer * This,
            /* [in] */ /* external definition not present */ SC_ITriaMesh3D *Mesh,
            /* [in] */ /* external definition not present */ SC_IEntities3D *Group,
            /* [in] */ double CloseDist,
            /* [in] */ BSTR FileName);
        
        END_INTERFACE
    } SC_ITriaSlicerVtbl;

    interface SC_ITriaSlicer
    {
        CONST_VTBL struct SC_ITriaSlicerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ITriaSlicer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ITriaSlicer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ITriaSlicer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ITriaSlicer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ITriaSlicer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ITriaSlicer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ITriaSlicer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ITriaSlicer_ScInit(This,Layersolid,CloseDist)	\
    ( (This)->lpVtbl -> ScInit(This,Layersolid,CloseDist) ) 

#define SC_ITriaSlicer_ScSliceAll(This,Mesh,Step)	\
    ( (This)->lpVtbl -> ScSliceAll(This,Mesh,Step) ) 

#define SC_ITriaSlicer_ScSinglePlaneModeInit(This,Mesh)	\
    ( (This)->lpVtbl -> ScSinglePlaneModeInit(This,Mesh) ) 

#define SC_ITriaSlicer_ScSinglePlaneModeSlice(This,Layer,Dist,CloseDist)	\
    ( (This)->lpVtbl -> ScSinglePlaneModeSlice(This,Layer,Dist,CloseDist) ) 

#define SC_ITriaSlicer_ScSinglePlaneModeEnd(This)	\
    ( (This)->lpVtbl -> ScSinglePlaneModeEnd(This) ) 

#define SC_ITriaSlicer_ScSliceFromFile(This,Mesh,Group,CloseDist,FileName)	\
    ( (This)->lpVtbl -> ScSliceFromFile(This,Mesh,Group,CloseDist,FileName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ITriaSlicer_INTERFACE_DEFINED__ */



#ifndef __ScConstantsTriaSlicer_MODULE_DEFINED__
#define __ScConstantsTriaSlicer_MODULE_DEFINED__


/* module ScConstantsTriaSlicer */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectTriaSlicer	=	( 0x2000 | ( ( 1 * 0x1000000 )  + 0x4000 )  ) ;

#endif /* __ScConstantsTriaSlicer_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScTriaSlicer;

#ifdef __cplusplus

class DECLSPEC_UUID("DFDC90DA-4895-11d1-96F4-008048EEE00C")
ScTriaSlicer;
#endif
#endif /* __ScapsSamTriaSlicer_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


