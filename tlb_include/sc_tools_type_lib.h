

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:35 2017
 */
/* Compiler settings for d:\scaps\dll_source\tools\com\include\sc_tools_type_lib.idl:
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


#ifndef __sc_tools_type_lib_h__
#define __sc_tools_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IBasicTool_FWD_DEFINED__
#define __SC_IBasicTool_FWD_DEFINED__
typedef interface SC_IBasicTool SC_IBasicTool;
#endif 	/* __SC_IBasicTool_FWD_DEFINED__ */


#ifndef __SC_IVectorTool_FWD_DEFINED__
#define __SC_IVectorTool_FWD_DEFINED__
typedef interface SC_IVectorTool SC_IVectorTool;
#endif 	/* __SC_IVectorTool_FWD_DEFINED__ */


#ifndef __SC_IMultiHeadTool_FWD_DEFINED__
#define __SC_IMultiHeadTool_FWD_DEFINED__
typedef interface SC_IMultiHeadTool SC_IMultiHeadTool;
#endif 	/* __SC_IMultiHeadTool_FWD_DEFINED__ */


#ifndef __SC_IItemSelectTool_FWD_DEFINED__
#define __SC_IItemSelectTool_FWD_DEFINED__
typedef interface SC_IItemSelectTool SC_IItemSelectTool;
#endif 	/* __SC_IItemSelectTool_FWD_DEFINED__ */


#ifndef __SC_ISortTool_FWD_DEFINED__
#define __SC_ISortTool_FWD_DEFINED__
typedef interface SC_ISortTool SC_ISortTool;
#endif 	/* __SC_ISortTool_FWD_DEFINED__ */


#ifndef __SC_IFilterTool_FWD_DEFINED__
#define __SC_IFilterTool_FWD_DEFINED__
typedef interface SC_IFilterTool SC_IFilterTool;
#endif 	/* __SC_IFilterTool_FWD_DEFINED__ */


#ifndef __SC_IViewTool_FWD_DEFINED__
#define __SC_IViewTool_FWD_DEFINED__
typedef interface SC_IViewTool SC_IViewTool;
#endif 	/* __SC_IViewTool_FWD_DEFINED__ */


#ifndef __SC_ITransformationTool_FWD_DEFINED__
#define __SC_ITransformationTool_FWD_DEFINED__
typedef interface SC_ITransformationTool SC_ITransformationTool;
#endif 	/* __SC_ITransformationTool_FWD_DEFINED__ */


#ifndef __SC_IConvertTool_FWD_DEFINED__
#define __SC_IConvertTool_FWD_DEFINED__
typedef interface SC_IConvertTool SC_IConvertTool;
#endif 	/* __SC_IConvertTool_FWD_DEFINED__ */


#ifndef __SC_IDigitizerTool_FWD_DEFINED__
#define __SC_IDigitizerTool_FWD_DEFINED__
typedef interface SC_IDigitizerTool SC_IDigitizerTool;
#endif 	/* __SC_IDigitizerTool_FWD_DEFINED__ */


#ifndef __SC_IAlignTool_FWD_DEFINED__
#define __SC_IAlignTool_FWD_DEFINED__
typedef interface SC_IAlignTool SC_IAlignTool;
#endif 	/* __SC_IAlignTool_FWD_DEFINED__ */


#ifndef __ScBasicTool_FWD_DEFINED__
#define __ScBasicTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBasicTool ScBasicTool;
#else
typedef struct ScBasicTool ScBasicTool;
#endif /* __cplusplus */

#endif 	/* __ScBasicTool_FWD_DEFINED__ */


#ifndef __ScVectorTool_FWD_DEFINED__
#define __ScVectorTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScVectorTool ScVectorTool;
#else
typedef struct ScVectorTool ScVectorTool;
#endif /* __cplusplus */

#endif 	/* __ScVectorTool_FWD_DEFINED__ */


#ifndef __ScMultiHeadTool_FWD_DEFINED__
#define __ScMultiHeadTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScMultiHeadTool ScMultiHeadTool;
#else
typedef struct ScMultiHeadTool ScMultiHeadTool;
#endif /* __cplusplus */

#endif 	/* __ScMultiHeadTool_FWD_DEFINED__ */


#ifndef __ScSortTool_FWD_DEFINED__
#define __ScSortTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSortTool ScSortTool;
#else
typedef struct ScSortTool ScSortTool;
#endif /* __cplusplus */

#endif 	/* __ScSortTool_FWD_DEFINED__ */


#ifndef __ScFilterTool_FWD_DEFINED__
#define __ScFilterTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScFilterTool ScFilterTool;
#else
typedef struct ScFilterTool ScFilterTool;
#endif /* __cplusplus */

#endif 	/* __ScFilterTool_FWD_DEFINED__ */


#ifndef __ScViewTool_FWD_DEFINED__
#define __ScViewTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScViewTool ScViewTool;
#else
typedef struct ScViewTool ScViewTool;
#endif /* __cplusplus */

#endif 	/* __ScViewTool_FWD_DEFINED__ */


#ifndef __ScItemSelectTool_FWD_DEFINED__
#define __ScItemSelectTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScItemSelectTool ScItemSelectTool;
#else
typedef struct ScItemSelectTool ScItemSelectTool;
#endif /* __cplusplus */

#endif 	/* __ScItemSelectTool_FWD_DEFINED__ */


#ifndef __ScTransformationTool_FWD_DEFINED__
#define __ScTransformationTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScTransformationTool ScTransformationTool;
#else
typedef struct ScTransformationTool ScTransformationTool;
#endif /* __cplusplus */

#endif 	/* __ScTransformationTool_FWD_DEFINED__ */


#ifndef __ScConvertTool_FWD_DEFINED__
#define __ScConvertTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScConvertTool ScConvertTool;
#else
typedef struct ScConvertTool ScConvertTool;
#endif /* __cplusplus */

#endif 	/* __ScConvertTool_FWD_DEFINED__ */


#ifndef __ScAlignTool_FWD_DEFINED__
#define __ScAlignTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScAlignTool ScAlignTool;
#else
typedef struct ScAlignTool ScAlignTool;
#endif /* __cplusplus */

#endif 	/* __ScAlignTool_FWD_DEFINED__ */


#ifndef __ScDigitizerTool_FWD_DEFINED__
#define __ScDigitizerTool_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDigitizerTool ScDigitizerTool;
#else
typedef struct ScDigitizerTool ScDigitizerTool;
#endif /* __cplusplus */

#endif 	/* __ScDigitizerTool_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_tools_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_lines3d_type_lib.h"
#include "sc_points2d_type_lib.h"
#include "sc_gui_type_lib.h"
#include "sc_entity_groups_type_lib.h"
#include "sc_pixel2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_tools_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_tools_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamTools_LIBRARY_DEFINED__
#define __ScapsSamTools_LIBRARY_DEFINED__

/* library ScapsSamTools */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamTools;

#ifndef __SC_IBasicTool_INTERFACE_DEFINED__
#define __SC_IBasicTool_INTERFACE_DEFINED__

/* interface SC_IBasicTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBasicTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6CB4C674-5FC4-11d3-9B2D-008048EEE00C")
    SC_IBasicTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterate( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long CallBack,
            /* [defaultvalue][optional][in] */ long Level = -1,
            /* [defaultvalue][optional][in] */ long Flags = 0x1,
            /* [defaultvalue][optional][in] */ long Class = -1,
            /* [defaultvalue][optional][in] */ BSTR Name = L"") = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUniqueName( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ BSTR RootName,
            /* [defaultvalue][optional][in] */ long Case,
            /* [defaultvalue][optional][in] */ long Level,
            /* [defaultvalue][optional][in] */ BSTR Extension,
            /* [defaultvalue][optional][in] */ BSTR Format,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetClusterID( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *ClusterID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **TopLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSerialNumberASCIIFileName( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetClusterID( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long ClusterID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveAllEntityMatrices( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRestoreAllEntityMatrices( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransformAllEntityMatrices( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ double m00,
            /* [in] */ double m01,
            /* [in] */ double m02,
            /* [in] */ double m10,
            /* [in] */ double m11,
            /* [in] */ double m12,
            /* [in] */ double add_z_offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCalcLineStylePoints( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEntityToLineArray( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity_in,
            /* [in] */ /* external definition not present */ SC_IEntity *entity_out) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IBasicToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBasicTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBasicTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBasicTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBasicTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBasicTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBasicTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBasicTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterate )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long CallBack,
            /* [defaultvalue][optional][in] */ long Level,
            /* [defaultvalue][optional][in] */ long Flags,
            /* [defaultvalue][optional][in] */ long Class,
            /* [defaultvalue][optional][in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUniqueName )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ BSTR RootName,
            /* [defaultvalue][optional][in] */ long Case,
            /* [defaultvalue][optional][in] */ long Level,
            /* [defaultvalue][optional][in] */ BSTR Extension,
            /* [defaultvalue][optional][in] */ BSTR Format,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetClusterID )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *ClusterID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **TopLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSerialNumberASCIIFileName )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetClusterID )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long ClusterID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveAllEntityMatrices )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRestoreAllEntityMatrices )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransformAllEntityMatrices )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ double m00,
            /* [in] */ double m01,
            /* [in] */ double m02,
            /* [in] */ double m10,
            /* [in] */ double m11,
            /* [in] */ double m12,
            /* [in] */ double add_z_offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCalcLineStylePoints )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEntityToLineArray )( 
            SC_IBasicTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity_in,
            /* [in] */ /* external definition not present */ SC_IEntity *entity_out);
        
        END_INTERFACE
    } SC_IBasicToolVtbl;

    interface SC_IBasicTool
    {
        CONST_VTBL struct SC_IBasicToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBasicTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBasicTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBasicTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBasicTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBasicTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBasicTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBasicTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBasicTool_ScIterate(This,entity,CallBack,Level,Flags,Class,Name)	\
    ( (This)->lpVtbl -> ScIterate(This,entity,CallBack,Level,Flags,Class,Name) ) 

#define SC_IBasicTool_ScUniqueName(This,entity,RootName,Case,Level,Extension,Format,Name)	\
    ( (This)->lpVtbl -> ScUniqueName(This,entity,RootName,Case,Level,Extension,Format,Name) ) 

#define SC_IBasicTool_ScGetClusterID(This,entity,ClusterID)	\
    ( (This)->lpVtbl -> ScGetClusterID(This,entity,ClusterID) ) 

#define SC_IBasicTool_ScGetTopLevelCluster(This,entity,TopLevel)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,entity,TopLevel) ) 

#define SC_IBasicTool_ScSetSerialNumberASCIIFileName(This,entity,FileName)	\
    ( (This)->lpVtbl -> ScSetSerialNumberASCIIFileName(This,entity,FileName) ) 

#define SC_IBasicTool_ScSetClusterID(This,entity,ClusterID)	\
    ( (This)->lpVtbl -> ScSetClusterID(This,entity,ClusterID) ) 

#define SC_IBasicTool_ScSaveAllEntityMatrices(This,entity)	\
    ( (This)->lpVtbl -> ScSaveAllEntityMatrices(This,entity) ) 

#define SC_IBasicTool_ScRestoreAllEntityMatrices(This,entity)	\
    ( (This)->lpVtbl -> ScRestoreAllEntityMatrices(This,entity) ) 

#define SC_IBasicTool_ScTransformAllEntityMatrices(This,entity,m00,m01,m02,m10,m11,m12,add_z_offset)	\
    ( (This)->lpVtbl -> ScTransformAllEntityMatrices(This,entity,m00,m01,m02,m10,m11,m12,add_z_offset) ) 

#define SC_IBasicTool_ScCalcLineStylePoints(This,entity)	\
    ( (This)->lpVtbl -> ScCalcLineStylePoints(This,entity) ) 

#define SC_IBasicTool_ScEntityToLineArray(This,entity_in,entity_out)	\
    ( (This)->lpVtbl -> ScEntityToLineArray(This,entity_in,entity_out) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IBasicTool_INTERFACE_DEFINED__ */


#ifndef __SC_IVectorTool_INTERFACE_DEFINED__
#define __SC_IVectorTool_INTERFACE_DEFINED__

/* interface SC_IVectorTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IVectorTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF397002-8DF3-11d3-884F-00105A9254F2")
    SC_IVectorTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCut( 
            /* [in] */ /* external definition not present */ SC_ILayer *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_ILayer *Output,
            /* [in] */ /* external definition not present */ SC_ILayer *Reminder,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCutPointClouds2D( 
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Output,
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Reminder,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCutPixelArrays2D( 
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Output,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCutPixelArray2D( 
            /* [in] */ LPDISPATCH Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Output,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IVectorToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IVectorTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IVectorTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IVectorTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IVectorTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IVectorTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IVectorTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IVectorTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCut )( 
            SC_IVectorTool * This,
            /* [in] */ /* external definition not present */ SC_ILayer *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_ILayer *Output,
            /* [in] */ /* external definition not present */ SC_ILayer *Reminder,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCutPointClouds2D )( 
            SC_IVectorTool * This,
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Output,
            /* [in] */ /* external definition not present */ SC_IPointClouds2D *Reminder,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCutPixelArrays2D )( 
            SC_IVectorTool * This,
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Output,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCutPixelArray2D )( 
            SC_IVectorTool * This,
            /* [in] */ LPDISPATCH Input,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [in] */ double XOverlap,
            /* [in] */ double YOverlap,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArrays2D *Output,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IVectorToolVtbl;

    interface SC_IVectorTool
    {
        CONST_VTBL struct SC_IVectorToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IVectorTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IVectorTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IVectorTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IVectorTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IVectorTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IVectorTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IVectorTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IVectorTool_ScCut(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Reminder,Result)	\
    ( (This)->lpVtbl -> ScCut(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Reminder,Result) ) 

#define SC_IVectorTool_ScCutPointClouds2D(This,Input,XMin,YMin,XMax,YMax,Mode,Output,Reminder,Result)	\
    ( (This)->lpVtbl -> ScCutPointClouds2D(This,Input,XMin,YMin,XMax,YMax,Mode,Output,Reminder,Result) ) 

#define SC_IVectorTool_ScCutPixelArrays2D(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Result)	\
    ( (This)->lpVtbl -> ScCutPixelArrays2D(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Result) ) 

#define SC_IVectorTool_ScCutPixelArray2D(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Result)	\
    ( (This)->lpVtbl -> ScCutPixelArray2D(This,Input,XMin,YMin,XMax,YMax,XOverlap,YOverlap,Mode,Output,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IVectorTool_INTERFACE_DEFINED__ */


#ifndef __SC_IMultiHeadTool_INTERFACE_DEFINED__
#define __SC_IMultiHeadTool_INTERFACE_DEFINED__

/* interface SC_IMultiHeadTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IMultiHeadTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A17FA634-4A6B-11d4-861A-00C0DFEA4A3A")
    SC_IMultiHeadTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSplit( 
            /* [in] */ /* external definition not present */ SC_IJobRoot *Input,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHeadCount( 
            /* [in] */ long HeadCount,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetWorkingArea( 
            /* [in] */ long Index,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCuttingArea( 
            /* [in] */ long Index,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerateCuttingAreas( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCuttingArea( 
            /* [in] */ long Index,
            /* [in] */ double *XMin,
            /* [in] */ double *YMin,
            /* [in] */ double *XMax,
            /* [in] */ double *YMax,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IMultiHeadToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IMultiHeadTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IMultiHeadTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IMultiHeadTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IMultiHeadTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IMultiHeadTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IMultiHeadTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IMultiHeadTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSplit )( 
            SC_IMultiHeadTool * This,
            /* [in] */ /* external definition not present */ SC_IJobRoot *Input,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHeadCount )( 
            SC_IMultiHeadTool * This,
            /* [in] */ long HeadCount,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetWorkingArea )( 
            SC_IMultiHeadTool * This,
            /* [in] */ long Index,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCuttingArea )( 
            SC_IMultiHeadTool * This,
            /* [in] */ long Index,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerateCuttingAreas )( 
            SC_IMultiHeadTool * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCuttingArea )( 
            SC_IMultiHeadTool * This,
            /* [in] */ long Index,
            /* [in] */ double *XMin,
            /* [in] */ double *YMin,
            /* [in] */ double *XMax,
            /* [in] */ double *YMax,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IMultiHeadToolVtbl;

    interface SC_IMultiHeadTool
    {
        CONST_VTBL struct SC_IMultiHeadToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IMultiHeadTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IMultiHeadTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IMultiHeadTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IMultiHeadTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IMultiHeadTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IMultiHeadTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IMultiHeadTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IMultiHeadTool_ScSplit(This,Input,Result)	\
    ( (This)->lpVtbl -> ScSplit(This,Input,Result) ) 

#define SC_IMultiHeadTool_ScSetHeadCount(This,HeadCount,Result)	\
    ( (This)->lpVtbl -> ScSetHeadCount(This,HeadCount,Result) ) 

#define SC_IMultiHeadTool_ScSetWorkingArea(This,Index,XMin,YMin,XMax,YMax,Result)	\
    ( (This)->lpVtbl -> ScSetWorkingArea(This,Index,XMin,YMin,XMax,YMax,Result) ) 

#define SC_IMultiHeadTool_ScSetCuttingArea(This,Index,XMin,YMin,XMax,YMax,Result)	\
    ( (This)->lpVtbl -> ScSetCuttingArea(This,Index,XMin,YMin,XMax,YMax,Result) ) 

#define SC_IMultiHeadTool_ScGenerateCuttingAreas(This)	\
    ( (This)->lpVtbl -> ScGenerateCuttingAreas(This) ) 

#define SC_IMultiHeadTool_ScGetCuttingArea(This,Index,XMin,YMin,XMax,YMax,Result)	\
    ( (This)->lpVtbl -> ScGetCuttingArea(This,Index,XMin,YMin,XMax,YMax,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IMultiHeadTool_INTERFACE_DEFINED__ */


#ifndef __SC_IItemSelectTool_INTERFACE_DEFINED__
#define __SC_IItemSelectTool_INTERFACE_DEFINED__

/* interface SC_IItemSelectTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IItemSelectTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0BEC11-6D08-11d4-863B-00C0DFEA4A3A")
    SC_IItemSelectTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutline( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectItems( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long OnlySelectedElements,
            /* [in] */ long Select,
            /* [in] */ long InOutline,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IItemSelectToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IItemSelectTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IItemSelectTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IItemSelectTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IItemSelectTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IItemSelectTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IItemSelectTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IItemSelectTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IItemSelectTool * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XMax,
            /* [in] */ double YMax,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectItems )( 
            SC_IItemSelectTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long OnlySelectedElements,
            /* [in] */ long Select,
            /* [in] */ long InOutline,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IItemSelectToolVtbl;

    interface SC_IItemSelectTool
    {
        CONST_VTBL struct SC_IItemSelectToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IItemSelectTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IItemSelectTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IItemSelectTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IItemSelectTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IItemSelectTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IItemSelectTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IItemSelectTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IItemSelectTool_ScSetOutline(This,XMin,YMin,XMax,YMax,Result)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax,Result) ) 

#define SC_IItemSelectTool_ScSelectItems(This,Entity,OnlySelectedElements,Select,InOutline,Result)	\
    ( (This)->lpVtbl -> ScSelectItems(This,Entity,OnlySelectedElements,Select,InOutline,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IItemSelectTool_INTERFACE_DEFINED__ */


#ifndef __SC_ISortTool_INTERFACE_DEFINED__
#define __SC_ISortTool_INTERFACE_DEFINED__

/* interface SC_ISortTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISortTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B8483B2-9053-11d3-9B55-008048EEE00C")
    SC_ISortTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSortByName( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSortByCoordinate( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSortFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSortFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSortLevel( 
            /* [retval][out] */ long *Level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSortLevel( 
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSortAngle( 
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSortAngle( 
            /* [in] */ double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSort( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSortByType( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ /* external definition not present */ SC_IEntities2D *ResultGroup,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCloseDist( 
            /* [retval][out] */ double *Dist) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCloseDist( 
            /* [in] */ double Dist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSortByMarkingDir( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ISortToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISortTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISortTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISortTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISortTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISortTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISortTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISortTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSortByName )( 
            SC_ISortTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSortByCoordinate )( 
            SC_ISortTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSortFlags )( 
            SC_ISortTool * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSortFlags )( 
            SC_ISortTool * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSortLevel )( 
            SC_ISortTool * This,
            /* [retval][out] */ long *Level);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSortLevel )( 
            SC_ISortTool * This,
            /* [in] */ long Level);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSortAngle )( 
            SC_ISortTool * This,
            /* [retval][out] */ double *Angle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSortAngle )( 
            SC_ISortTool * This,
            /* [in] */ double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSort )( 
            SC_ISortTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSortByType )( 
            SC_ISortTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ /* external definition not present */ SC_IEntities2D *ResultGroup,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCloseDist )( 
            SC_ISortTool * This,
            /* [retval][out] */ double *Dist);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCloseDist )( 
            SC_ISortTool * This,
            /* [in] */ double Dist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSortByMarkingDir )( 
            SC_ISortTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_ISortToolVtbl;

    interface SC_ISortTool
    {
        CONST_VTBL struct SC_ISortToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISortTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISortTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISortTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISortTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISortTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISortTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISortTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISortTool_ScSortByName(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSortByName(This,Entity,Result) ) 

#define SC_ISortTool_ScSortByCoordinate(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSortByCoordinate(This,Entity,Result) ) 

#define SC_ISortTool_get_ScSortFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScSortFlags(This,Flags) ) 

#define SC_ISortTool_put_ScSortFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScSortFlags(This,Flags) ) 

#define SC_ISortTool_get_ScSortLevel(This,Level)	\
    ( (This)->lpVtbl -> get_ScSortLevel(This,Level) ) 

#define SC_ISortTool_put_ScSortLevel(This,Level)	\
    ( (This)->lpVtbl -> put_ScSortLevel(This,Level) ) 

#define SC_ISortTool_get_ScSortAngle(This,Angle)	\
    ( (This)->lpVtbl -> get_ScSortAngle(This,Angle) ) 

#define SC_ISortTool_put_ScSortAngle(This,Angle)	\
    ( (This)->lpVtbl -> put_ScSortAngle(This,Angle) ) 

#define SC_ISortTool_ScSort(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSort(This,Entity,Result) ) 

#define SC_ISortTool_ScSortByType(This,Entity,ResultGroup,Result)	\
    ( (This)->lpVtbl -> ScSortByType(This,Entity,ResultGroup,Result) ) 

#define SC_ISortTool_get_ScCloseDist(This,Dist)	\
    ( (This)->lpVtbl -> get_ScCloseDist(This,Dist) ) 

#define SC_ISortTool_put_ScCloseDist(This,Dist)	\
    ( (This)->lpVtbl -> put_ScCloseDist(This,Dist) ) 

#define SC_ISortTool_ScSortByMarkingDir(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSortByMarkingDir(This,Entity,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ISortTool_INTERFACE_DEFINED__ */


#ifndef __SC_IFilterTool_INTERFACE_DEFINED__
#define __SC_IFilterTool_INTERFACE_DEFINED__

/* interface SC_IFilterTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IFilterTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E730B061-856E-11d4-8651-00C0DFEA4A3A")
    SC_IFilterTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFilter( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFilterFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFilterFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFilterLevel( 
            /* [retval][out] */ long *Level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFilterLevel( 
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFilterDist( 
            /* [retval][out] */ double *Dist) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFilterDist( 
            /* [in] */ double Dist) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IFilterToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IFilterTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IFilterTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IFilterTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IFilterTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IFilterTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IFilterTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IFilterTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFilter )( 
            SC_IFilterTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFilterFlags )( 
            SC_IFilterTool * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFilterFlags )( 
            SC_IFilterTool * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFilterLevel )( 
            SC_IFilterTool * This,
            /* [retval][out] */ long *Level);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFilterLevel )( 
            SC_IFilterTool * This,
            /* [in] */ long Level);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFilterDist )( 
            SC_IFilterTool * This,
            /* [retval][out] */ double *Dist);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFilterDist )( 
            SC_IFilterTool * This,
            /* [in] */ double Dist);
        
        END_INTERFACE
    } SC_IFilterToolVtbl;

    interface SC_IFilterTool
    {
        CONST_VTBL struct SC_IFilterToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IFilterTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IFilterTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IFilterTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IFilterTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IFilterTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IFilterTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IFilterTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IFilterTool_ScFilter(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScFilter(This,Entity,Result) ) 

#define SC_IFilterTool_get_ScFilterFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScFilterFlags(This,Flags) ) 

#define SC_IFilterTool_put_ScFilterFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScFilterFlags(This,Flags) ) 

#define SC_IFilterTool_get_ScFilterLevel(This,Level)	\
    ( (This)->lpVtbl -> get_ScFilterLevel(This,Level) ) 

#define SC_IFilterTool_put_ScFilterLevel(This,Level)	\
    ( (This)->lpVtbl -> put_ScFilterLevel(This,Level) ) 

#define SC_IFilterTool_get_ScFilterDist(This,Dist)	\
    ( (This)->lpVtbl -> get_ScFilterDist(This,Dist) ) 

#define SC_IFilterTool_put_ScFilterDist(This,Dist)	\
    ( (This)->lpVtbl -> put_ScFilterDist(This,Dist) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IFilterTool_INTERFACE_DEFINED__ */


#ifndef __SC_IViewTool_INTERFACE_DEFINED__
#define __SC_IViewTool_INTERFACE_DEFINED__

/* interface SC_IViewTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IViewTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1CF51CC4-B53B-11d3-884F-00105A9254F2")
    SC_IViewTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColor( 
            /* [in] */ /* external definition not present */ SC_IView *View,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Color,
            /* [in] */ long ColorId,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IViewToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IViewTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IViewTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IViewTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IViewTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IViewTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IViewTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IViewTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColor )( 
            SC_IViewTool * This,
            /* [in] */ /* external definition not present */ SC_IView *View,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Color,
            /* [in] */ long ColorId,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IViewToolVtbl;

    interface SC_IViewTool
    {
        CONST_VTBL struct SC_IViewToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IViewTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IViewTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IViewTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IViewTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IViewTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IViewTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IViewTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IViewTool_ScSetColor(This,View,Entity,Color,ColorId,Result)	\
    ( (This)->lpVtbl -> ScSetColor(This,View,Entity,Color,ColorId,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IViewTool_INTERFACE_DEFINED__ */


#ifndef __SC_ITransformationTool_INTERFACE_DEFINED__
#define __SC_ITransformationTool_INTERFACE_DEFINED__

/* interface SC_ITransformationTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ITransformationTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("305AB54B-38FB-4714-854B-D222400CD94B")
    SC_ITransformationTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMatrix( 
            /* [in] */ long Index,
            /* [in] */ double Value,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateMatrix( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotateMatrixZ( 
            /* [in] */ double CenterX,
            /* [in] */ double CenterY,
            /* [in] */ double RotAngle,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVector( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransformVector( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetVector( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransformVectorInverse( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRotAngle( 
            /* [retval][out] */ double *Angle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ITransformationToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ITransformationTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ITransformationTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ITransformationTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ITransformationTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ITransformationTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ITransformationTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ITransformationTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMatrix )( 
            SC_ITransformationTool * This,
            /* [in] */ long Index,
            /* [in] */ double Value,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMatrix )( 
            SC_ITransformationTool * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ITransformationTool * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateMatrix )( 
            SC_ITransformationTool * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotateMatrixZ )( 
            SC_ITransformationTool * This,
            /* [in] */ double CenterX,
            /* [in] */ double CenterY,
            /* [in] */ double RotAngle,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVector )( 
            SC_ITransformationTool * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransformVector )( 
            SC_ITransformationTool * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetVector )( 
            SC_ITransformationTool * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransformVectorInverse )( 
            SC_ITransformationTool * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRotAngle )( 
            SC_ITransformationTool * This,
            /* [retval][out] */ double *Angle);
        
        END_INTERFACE
    } SC_ITransformationToolVtbl;

    interface SC_ITransformationTool
    {
        CONST_VTBL struct SC_ITransformationToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ITransformationTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ITransformationTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ITransformationTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ITransformationTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ITransformationTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ITransformationTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ITransformationTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ITransformationTool_ScSetMatrix(This,Index,Value,Result)	\
    ( (This)->lpVtbl -> ScSetMatrix(This,Index,Value,Result) ) 

#define SC_ITransformationTool_ScGetMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetMatrix(This,Index,Value) ) 

#define SC_ITransformationTool_ScUnifyMatrix(This,Result)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This,Result) ) 

#define SC_ITransformationTool_ScTranslateMatrix(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScTranslateMatrix(This,X,Y,Z,Result) ) 

#define SC_ITransformationTool_ScRotateMatrixZ(This,CenterX,CenterY,RotAngle,Result)	\
    ( (This)->lpVtbl -> ScRotateMatrixZ(This,CenterX,CenterY,RotAngle,Result) ) 

#define SC_ITransformationTool_ScSetVector(This,X,Y,Z,Result)	\
    ( (This)->lpVtbl -> ScSetVector(This,X,Y,Z,Result) ) 

#define SC_ITransformationTool_ScTransformVector(This,Result)	\
    ( (This)->lpVtbl -> ScTransformVector(This,Result) ) 

#define SC_ITransformationTool_ScGetVector(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetVector(This,Index,Value) ) 

#define SC_ITransformationTool_ScTransformVectorInverse(This,Result)	\
    ( (This)->lpVtbl -> ScTransformVectorInverse(This,Result) ) 

#define SC_ITransformationTool_ScGetRotAngle(This,Angle)	\
    ( (This)->lpVtbl -> ScGetRotAngle(This,Angle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ITransformationTool_INTERFACE_DEFINED__ */


#ifndef __SC_IConvertTool_INTERFACE_DEFINED__
#define __SC_IConvertTool_INTERFACE_DEFINED__

/* interface SC_IConvertTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IConvertTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62FAE002-CF1E-49b1-963D-326C98AD8C78")
    SC_IConvertTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConvertJob2DtoLineArray3D( 
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job2D,
            /* [in] */ long mask,
            /* [in] */ /* external definition not present */ SC_ILineArray3D *LineArray,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConvertJob2DtoTriaMeshes3D( 
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job2D,
            /* [in] */ long mask,
            /* [in] */ /* external definition not present */ SC_IEntities3D *TriaMeshGroup,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConvertEntityToBitmap( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity2D,
            /* [in] */ double Resolution,
            /* [in] */ double XDimension,
            /* [in] */ double YDimension,
            /* [in] */ double XCenter,
            /* [in] */ double YCenter,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArray2D *Bitmap,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IConvertToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IConvertTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IConvertTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IConvertTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IConvertTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IConvertTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IConvertTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IConvertTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConvertJob2DtoLineArray3D )( 
            SC_IConvertTool * This,
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job2D,
            /* [in] */ long mask,
            /* [in] */ /* external definition not present */ SC_ILineArray3D *LineArray,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConvertJob2DtoTriaMeshes3D )( 
            SC_IConvertTool * This,
            /* [in] */ /* external definition not present */ SC_IEntities2D *Job2D,
            /* [in] */ long mask,
            /* [in] */ /* external definition not present */ SC_IEntities3D *TriaMeshGroup,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConvertEntityToBitmap )( 
            SC_IConvertTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity2D,
            /* [in] */ double Resolution,
            /* [in] */ double XDimension,
            /* [in] */ double YDimension,
            /* [in] */ double XCenter,
            /* [in] */ double YCenter,
            /* [in] */ long Mode,
            /* [in] */ /* external definition not present */ SC_IPixelArray2D *Bitmap,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IConvertToolVtbl;

    interface SC_IConvertTool
    {
        CONST_VTBL struct SC_IConvertToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IConvertTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IConvertTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IConvertTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IConvertTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IConvertTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IConvertTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IConvertTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IConvertTool_ScConvertJob2DtoLineArray3D(This,Job2D,mask,LineArray,Result)	\
    ( (This)->lpVtbl -> ScConvertJob2DtoLineArray3D(This,Job2D,mask,LineArray,Result) ) 

#define SC_IConvertTool_ScConvertJob2DtoTriaMeshes3D(This,Job2D,mask,TriaMeshGroup,Result)	\
    ( (This)->lpVtbl -> ScConvertJob2DtoTriaMeshes3D(This,Job2D,mask,TriaMeshGroup,Result) ) 

#define SC_IConvertTool_ScConvertEntityToBitmap(This,Entity2D,Resolution,XDimension,YDimension,XCenter,YCenter,Mode,Bitmap,Result)	\
    ( (This)->lpVtbl -> ScConvertEntityToBitmap(This,Entity2D,Resolution,XDimension,YDimension,XCenter,YCenter,Mode,Bitmap,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IConvertTool_INTERFACE_DEFINED__ */


#ifndef __SC_IDigitizerTool_INTERFACE_DEFINED__
#define __SC_IDigitizerTool_INTERFACE_DEFINED__

/* interface SC_IDigitizerTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IDigitizerTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9170518B-14DD-4b1b-A4D4-D4EF2DAD5015")
    SC_IDigitizerTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDigitize( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long generate) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IDigitizerToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IDigitizerTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IDigitizerTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IDigitizerTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IDigitizerTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IDigitizerTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IDigitizerTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IDigitizerTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDigitize )( 
            SC_IDigitizerTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long generate);
        
        END_INTERFACE
    } SC_IDigitizerToolVtbl;

    interface SC_IDigitizerTool
    {
        CONST_VTBL struct SC_IDigitizerToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IDigitizerTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IDigitizerTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IDigitizerTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IDigitizerTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IDigitizerTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IDigitizerTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IDigitizerTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IDigitizerTool_ScDigitize(This,Entity,generate)	\
    ( (This)->lpVtbl -> ScDigitize(This,Entity,generate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IDigitizerTool_INTERFACE_DEFINED__ */


#ifndef __SC_IAlignTool_INTERFACE_DEFINED__
#define __SC_IAlignTool_INTERFACE_DEFINED__

/* interface SC_IAlignTool */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IAlignTool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3304B358-CB79-4502-AA5B-28FB2DD5B28F")
    SC_IAlignTool : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAlign( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long alignFlag,
            /* [in] */ long selectedFlag,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDistribute( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long alignFlag,
            /* [in] */ long distrFlag,
            /* [in] */ double dist,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IAlignToolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IAlignTool * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IAlignTool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IAlignTool * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IAlignTool * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IAlignTool * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IAlignTool * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IAlignTool * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAlign )( 
            SC_IAlignTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long alignFlag,
            /* [in] */ long selectedFlag,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDistribute )( 
            SC_IAlignTool * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [in] */ long alignFlag,
            /* [in] */ long distrFlag,
            /* [in] */ double dist,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IAlignToolVtbl;

    interface SC_IAlignTool
    {
        CONST_VTBL struct SC_IAlignToolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IAlignTool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IAlignTool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IAlignTool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IAlignTool_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IAlignTool_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IAlignTool_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IAlignTool_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IAlignTool_ScAlign(This,Entity,alignFlag,selectedFlag,Result)	\
    ( (This)->lpVtbl -> ScAlign(This,Entity,alignFlag,selectedFlag,Result) ) 

#define SC_IAlignTool_ScDistribute(This,Entity,alignFlag,distrFlag,dist,Result)	\
    ( (This)->lpVtbl -> ScDistribute(This,Entity,alignFlag,distrFlag,dist,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IAlignTool_INTERFACE_DEFINED__ */



#ifndef __ScConstantsTools_MODULE_DEFINED__
#define __ScConstantsTools_MODULE_DEFINED__


/* module ScConstantsTools */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComSortToolFlagDirHorz	=	0x1;

/* [helpstring] */ const long scComSortToolFlagDirFlip	=	0x2;

/* [helpstring] */ const long scComSortToolFlagShortDist	=	0x4;

/* [helpstring] */ const long scComSortToolFlagItems	=	0x10000;

/* [helpstring] */ const long scComSortToolFlagEntity	=	0x20000;

/* [helpstring] */ const long scComSortToolFlagOnlySelected	=	0x40000;

/* [helpstring] */ const long scComSortToolFlagFlipOpenPolyLines	=	0x80000;

/* [helpstring] */ const long scComSortToolFlagPolyLines2DCorrOrientation	=	0x100000;

/* [helpstring] */ const long scComSortToolFlagEntity2DCorrOrientation	=	0x400000;

/* [helpstring] */ const long scComFilterToolFlagRemoveDouble	=	0x1;

/* [helpstring] */ const long scComFilterToolFlagRemoveShortLines	=	0x2;

/* [helpstring] */ const long scComFilterToolFlagMarkIdenticalPolyLine2D	=	0x4;

/* [helpstring] */ const long scComFilterToolFlagOnlySelected	=	0x10000;

/* [helpstring] */ const long scComFilterToolFlagPolyLine2D	=	0x20000;

/* [helpstring] */ const long scComAlignToolFlagLeft	=	0x1;

/* [helpstring] */ const long scComAlignToolFlagRight	=	0x2;

/* [helpstring] */ const long scComAlignToolFlagCenter	=	0x4;

/* [helpstring] */ const long scComAlignToolFlagBottom	=	0x8;

/* [helpstring] */ const long scComAlignToolFlagTop	=	0x10;

/* [helpstring] */ const long scComAlignToolFlagXDirection	=	0x20;

/* [helpstring] */ const long scComAlignToolFlagYDirection	=	0x40;

/* [helpstring] */ const long scComAlignToolFlagXYDirection	=	0x80;

/* [helpstring] */ const long scComAlignToolFlagAllSelected	=	0x1;

/* [helpstring] */ const long scComAlignToolFlagDistEqual	=	0x2;

/* [helpstring] */ const long scComAlignToolFlagDistFix	=	0x4;

/* [helpstring] */ const long scComAlignToolFlagDistAlign	=	0x8;

/* [helpstring] */ const long scComAlignToolFlagDistBetween	=	0x10;

/* [helpstring] */ const long scComVectorToolFlagCutPointCloudsModeNoReminder	=	0x1;

/* [helpstring] */ const long scComVectorToolFlagCutPointCloudsModeInit	=	0x2;

/* [helpstring] */ const long scComVectorToolFlagCutPointCloudsModeExit	=	0x4;

/* [helpstring] */ const long scComVectorToolFlagCutPointCloudsModeOverlap	=	0x8;

/* [helpstring] */ const long scComConvertEntityToBitmapModeDotsPerInch	=	0x1;

/* [helpstring] */ const long scComConvertEntityToBitmapUseBitmapSettings	=	0x2;

/* [helpstring] */ const long scComConvertEntityToBitmapForceDimension	=	0x4;

/* [helpstring] */ const long scComConvertEntityToBitmapForceCenter	=	0x8;

/* [helpstring] */ const long scComConvertEntityToBitmapRegenerate	=	0x10;

/* [helpstring] */ const long scComConvertEntityToBitmapUseLargePixels	=	0x20;

/* [helpstring] */ const long scComConvertEntityToBitmapOutputAsBitmap	=	0x40;

#endif /* __ScConstantsTools_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScBasicTool;

#ifdef __cplusplus

class DECLSPEC_UUID("6CB4C678-5FC4-11d3-9B2D-008048EEE00C")
ScBasicTool;
#endif

EXTERN_C const CLSID CLSID_ScVectorTool;

#ifdef __cplusplus

class DECLSPEC_UUID("FF397004-8DF3-11d3-884F-00105A9254F2")
ScVectorTool;
#endif

EXTERN_C const CLSID CLSID_ScMultiHeadTool;

#ifdef __cplusplus

class DECLSPEC_UUID("A17FA633-4A6B-11d4-861A-00C0DFEA4A3A")
ScMultiHeadTool;
#endif

EXTERN_C const CLSID CLSID_ScSortTool;

#ifdef __cplusplus

class DECLSPEC_UUID("0B8483B4-9053-11d3-9B55-008048EEE00C")
ScSortTool;
#endif

EXTERN_C const CLSID CLSID_ScFilterTool;

#ifdef __cplusplus

class DECLSPEC_UUID("E730B063-856E-11d4-8651-00C0DFEA4A3A")
ScFilterTool;
#endif

EXTERN_C const CLSID CLSID_ScViewTool;

#ifdef __cplusplus

class DECLSPEC_UUID("1CF51CC6-B53B-11d3-884F-00105A9254F2")
ScViewTool;
#endif

EXTERN_C const CLSID CLSID_ScItemSelectTool;

#ifdef __cplusplus

class DECLSPEC_UUID("2A0BEC12-6D08-11d4-863B-00C0DFEA4A3A")
ScItemSelectTool;
#endif

EXTERN_C const CLSID CLSID_ScTransformationTool;

#ifdef __cplusplus

class DECLSPEC_UUID("3AF9799B-13D9-4bd2-8305-7C20DD240E4B")
ScTransformationTool;
#endif

EXTERN_C const CLSID CLSID_ScConvertTool;

#ifdef __cplusplus

class DECLSPEC_UUID("C11EDB8D-6E1D-46d7-953A-ECDF33693A5A")
ScConvertTool;
#endif

EXTERN_C const CLSID CLSID_ScAlignTool;

#ifdef __cplusplus

class DECLSPEC_UUID("E3A821CF-7678-4952-92C2-929B14F3C5A2")
ScAlignTool;
#endif

EXTERN_C const CLSID CLSID_ScDigitizerTool;

#ifdef __cplusplus

class DECLSPEC_UUID("6E86C96A-E06D-4393-923C-4C2A74401B40")
ScDigitizerTool;
#endif
#endif /* __ScapsSamTools_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


