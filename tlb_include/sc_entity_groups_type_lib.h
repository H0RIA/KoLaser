

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:24 2017
 */
/* Compiler settings for d:\scaps\dll_source\entity_groups\com\include\sc_entity_groups_type_lib.idl:
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


#ifndef __sc_entity_groups_type_lib_h__
#define __sc_entity_groups_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IEntities3D_FWD_DEFINED__
#define __SC_IEntities3D_FWD_DEFINED__
typedef interface SC_IEntities3D SC_IEntities3D;
#endif 	/* __SC_IEntities3D_FWD_DEFINED__ */


#ifndef __SC_IEntities2D_FWD_DEFINED__
#define __SC_IEntities2D_FWD_DEFINED__
typedef interface SC_IEntities2D SC_IEntities2D;
#endif 	/* __SC_IEntities2D_FWD_DEFINED__ */


#ifndef __SC_IJobRoot_FWD_DEFINED__
#define __SC_IJobRoot_FWD_DEFINED__
typedef interface SC_IJobRoot SC_IJobRoot;
#endif 	/* __SC_IJobRoot_FWD_DEFINED__ */


#ifndef __SC_IControl_FWD_DEFINED__
#define __SC_IControl_FWD_DEFINED__
typedef interface SC_IControl SC_IControl;
#endif 	/* __SC_IControl_FWD_DEFINED__ */


#ifndef __SC_IEvent_FWD_DEFINED__
#define __SC_IEvent_FWD_DEFINED__
typedef interface SC_IEvent SC_IEvent;
#endif 	/* __SC_IEvent_FWD_DEFINED__ */


#ifndef __ScEntities3D_FWD_DEFINED__
#define __ScEntities3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntities3D ScEntities3D;
#else
typedef struct ScEntities3D ScEntities3D;
#endif /* __cplusplus */

#endif 	/* __ScEntities3D_FWD_DEFINED__ */


#ifndef __ScEntities2D_FWD_DEFINED__
#define __ScEntities2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntities2D ScEntities2D;
#else
typedef struct ScEntities2D ScEntities2D;
#endif /* __cplusplus */

#endif 	/* __ScEntities2D_FWD_DEFINED__ */


#ifndef __ScJobRoot_FWD_DEFINED__
#define __ScJobRoot_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScJobRoot ScJobRoot;
#else
typedef struct ScJobRoot ScJobRoot;
#endif /* __cplusplus */

#endif 	/* __ScJobRoot_FWD_DEFINED__ */


#ifndef __ScControl_FWD_DEFINED__
#define __ScControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControl ScControl;
#else
typedef struct ScControl ScControl;
#endif /* __cplusplus */

#endif 	/* __ScControl_FWD_DEFINED__ */


#ifndef __ScEvent_FWD_DEFINED__
#define __ScEvent_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEvent ScEvent;
#else
typedef struct ScEvent ScEvent;
#endif /* __cplusplus */

#endif 	/* __ScEvent_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_entity_groups_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_entity_groups_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_entity_groups_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamEntityGroups_LIBRARY_DEFINED__
#define __ScapsSamEntityGroups_LIBRARY_DEFINED__

/* library ScapsSamEntityGroups */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamEntityGroups;

#ifndef __SC_IEntities3D_INTERFACE_DEFINED__
#define __SC_IEntities3D_INTERFACE_DEFINED__

/* interface SC_IEntities3D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntities3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04C676A2-2F38-11d1-96C4-E567E0AC2149")
    SC_IEntities3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSelected( 
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSelected( 
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsed( 
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsed( 
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOnWork( 
            /* [retval][out] */ long *OnWork) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOnWork( 
            /* [in] */ long OnWork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopy( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyInfo( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDelProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslate( 
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScale( 
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate( 
            double X,
            double Y,
            double Z,
            double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGroup( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnGroup( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateProperties( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkAble( 
            /* [retval][out] */ long *MarkAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkAble( 
            /* [in] */ long MarkAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransform( 
            double m00,
            double m01,
            double m02,
            double m03,
            double m10,
            double m11,
            double m12,
            double m13,
            double m20,
            double m21,
            double m22,
            double m23) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInverseMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChangeAble( 
            /* [retval][out] */ long *ChangeAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChangeAble( 
            /* [in] */ long ChangeAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOrderFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOrderFlags( 
            /* [out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVectorsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVectorsDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParent( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadId( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadId( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScClusterID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScClusterID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserData( 
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserData( 
            /* [in] */ long ID,
            /* [retval][out] */ long *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate3D( 
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline3D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEntities3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntities3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntities3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntities3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntities3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntities3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntities3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntities3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntities3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntities3D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntities3D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntities3D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntities3D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntities3D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntities3D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntities3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntities3D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntities3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntities3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntities3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntities3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntities3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntities3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntities3D * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IEntities3D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IEntities3D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IEntities3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IEntities3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IEntities3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IEntities3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGroup )( 
            SC_IEntities3D * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnGroup )( 
            SC_IEntities3D * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IEntities3D * This,
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntities3D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntities3D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntities3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntities3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntities3D * This,
            double m00,
            double m01,
            double m02,
            double m03,
            double m10,
            double m11,
            double m12,
            double m13,
            double m20,
            double m21,
            double m22,
            double m23);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEntities3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntities3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntities3D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntities3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntities3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntities3D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntities3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntities3D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntities3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntities3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntities3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntities3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntities3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntities3D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntities3D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntities3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntities3D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntities3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntities3D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntities3D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntities3D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntities3DVtbl;

    interface SC_IEntities3D
    {
        CONST_VTBL struct SC_IEntities3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntities3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntities3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntities3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntities3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntities3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntities3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntities3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntities3D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntities3D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntities3D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntities3D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntities3D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntities3D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntities3D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntities3D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntities3D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntities3D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntities3D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntities3D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntities3D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntities3D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntities3D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntities3D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntities3D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntities3D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntities3D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntities3D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntities3D_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_IEntities3D_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_IEntities3D_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_IEntities3D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IEntities3D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IEntities3D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IEntities3D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IEntities3D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IEntities3D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IEntities3D_ScGroup(This,mask)	\
    ( (This)->lpVtbl -> ScGroup(This,mask) ) 

#define SC_IEntities3D_ScUnGroup(This,mask)	\
    ( (This)->lpVtbl -> ScUnGroup(This,mask) ) 

#define SC_IEntities3D_ScGetCount(This,type,mask,num)	\
    ( (This)->lpVtbl -> ScGetCount(This,type,mask,num) ) 

#define SC_IEntities3D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities3D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities3D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntities3D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntities3D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntities3D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntities3D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntities3D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntities3D_ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23) ) 

#define SC_IEntities3D_ScGetInverseMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,index,Value) ) 

#define SC_IEntities3D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntities3D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntities3D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntities3D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntities3D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntities3D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntities3D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntities3D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntities3D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntities3D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntities3D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntities3D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntities3D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntities3D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntities3D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntities3D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntities3D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntities3D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntities3D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntities3D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntities3D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntities3D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntities3D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities3D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntities3D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntities3D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntities3D_INTERFACE_DEFINED__ */


#ifndef __SC_IEntities2D_INTERFACE_DEFINED__
#define __SC_IEntities2D_INTERFACE_DEFINED__

/* interface SC_IEntities2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntities2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("604E5802-3D93-11d1-96E0-008048EEE00C")
    SC_IEntities2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSelected( 
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSelected( 
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsed( 
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsed( 
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOnWork( 
            /* [retval][out] */ long *OnWork) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOnWork( 
            /* [in] */ long OnWork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopy( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyInfo( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDelProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslate( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScale( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate( 
            double X,
            double Y,
            double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnXAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnYAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnAxis( 
            double X1,
            double Y1,
            double X2,
            double Y2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGroup( 
            /* [in] */ long mask,
            /* [retval][out] */ SC_IEntities2D **NewGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnGroup( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateProperties( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkAble( 
            /* [retval][out] */ long *MarkAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkAble( 
            /* [in] */ long MarkAble) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutline( 
            double XMin,
            double YMin,
            double XMax,
            double YMax) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOutlineValid( 
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantX( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantY( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransform( 
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInverseMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChangeAble( 
            /* [retval][out] */ long *ChangeAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChangeAble( 
            /* [in] */ long ChangeAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOrderFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOrderFlags( 
            /* [out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVectorsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVectorsDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParent( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayStep( 
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayCount( 
            /* [in] */ long index,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayCount( 
            /* [in] */ long XCount,
            /* [in] */ long YCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAlign( 
            /* [retval][out] */ long *Align) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAlign( 
            /* [in] */ long Align) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNextSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveEntity( 
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIndex( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByName( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNameCount( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadId( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadId( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstPoint( 
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScClusterID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScClusterID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserData( 
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserData( 
            /* [in] */ long ID,
            /* [retval][out] */ long *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPreviousSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkLoopCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkLoopCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkBeatCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkBeatCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkStartCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkStartCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChangeMarkSequence( 
            long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDimensionLimitFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDimensionLimitFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZScaleAbs( 
            /* [retval][out] */ double *Scale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZScaleAbs( 
            /* [in] */ double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateZ( 
            /* [in] */ double Add) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleZ( 
            /* [in] */ double fac) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnPlane( 
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVarEntityData( 
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate3D( 
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline2D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline3D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEntities2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntities2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntities2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntities2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntities2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntities2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntities2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntities2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntities2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntities2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntities2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntities2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntities2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntities2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntities2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntities2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntities2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntities2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntities2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntities2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntities2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IEntities2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IEntities2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IEntities2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IEntities2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IEntities2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IEntities2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IEntities2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IEntities2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IEntities2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGroup )( 
            SC_IEntities2D * This,
            /* [in] */ long mask,
            /* [retval][out] */ SC_IEntities2D **NewGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnGroup )( 
            SC_IEntities2D * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IEntities2D * This,
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntities2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntities2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IEntities2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IEntities2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IEntities2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IEntities2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IEntities2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IEntities2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IEntities2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntities2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntities2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntities2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEntities2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntities2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntities2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntities2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntities2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntities2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntities2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntities2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntities2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IEntities2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IEntities2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IEntities2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IEntities2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IEntities2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IEntities2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IEntities2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IEntities2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IEntities2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntities2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IEntities2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IEntities2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntities2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntities2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntities2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntities2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IEntities2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IEntities2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IEntities2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IEntities2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IEntities2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IEntities2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IEntities2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IEntities2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IEntities2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IEntities2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IEntities2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IEntities2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IEntities2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntities2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntities2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntities2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntities2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IEntities2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntities2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntities2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntities2DVtbl;

    interface SC_IEntities2D
    {
        CONST_VTBL struct SC_IEntities2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntities2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntities2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntities2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntities2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntities2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntities2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntities2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntities2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntities2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntities2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntities2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntities2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntities2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntities2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntities2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntities2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntities2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntities2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntities2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntities2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntities2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntities2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntities2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntities2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntities2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntities2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntities2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntities2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IEntities2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IEntities2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IEntities2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IEntities2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IEntities2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IEntities2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IEntities2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IEntities2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IEntities2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IEntities2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IEntities2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IEntities2D_ScGroup(This,mask,NewGroup)	\
    ( (This)->lpVtbl -> ScGroup(This,mask,NewGroup) ) 

#define SC_IEntities2D_ScUnGroup(This,mask)	\
    ( (This)->lpVtbl -> ScUnGroup(This,mask) ) 

#define SC_IEntities2D_ScGetCount(This,type,mask,num)	\
    ( (This)->lpVtbl -> ScGetCount(This,type,mask,num) ) 

#define SC_IEntities2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntities2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntities2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntities2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IEntities2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IEntities2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IEntities2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IEntities2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IEntities2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IEntities2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IEntities2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IEntities2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IEntities2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IEntities2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IEntities2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IEntities2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntities2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntities2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntities2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IEntities2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IEntities2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntities2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntities2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntities2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntities2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntities2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntities2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntities2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntities2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntities2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntities2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntities2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntities2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IEntities2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IEntities2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IEntities2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IEntities2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IEntities2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IEntities2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IEntities2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntities2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IEntities2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IEntities2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IEntities2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IEntities2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IEntities2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntities2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntities2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IEntities2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IEntities2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IEntities2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntities2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntities2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntities2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntities2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntities2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IEntities2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IEntities2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IEntities2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IEntities2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IEntities2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IEntities2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IEntities2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IEntities2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IEntities2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IEntities2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntities2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntities2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntities2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntities2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IEntities2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IEntities2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IEntities2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IEntities2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IEntities2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IEntities2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntities2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntities2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntities2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntities2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEntities2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntities2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntities2D_INTERFACE_DEFINED__ */


#ifndef __SC_IJobRoot_INTERFACE_DEFINED__
#define __SC_IJobRoot_INTERFACE_DEFINED__

/* interface SC_IJobRoot */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IJobRoot;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0BDB2F6-FE61-11d3-9BBD-008048EEE00C")
    SC_IJobRoot : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSelected( 
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSelected( 
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsed( 
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsed( 
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOnWork( 
            /* [retval][out] */ long *OnWork) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOnWork( 
            /* [in] */ long OnWork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopy( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyInfo( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDelProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslate( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScale( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate( 
            double X,
            double Y,
            double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnXAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnYAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnAxis( 
            double X1,
            double Y1,
            double X2,
            double Y2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGroup( 
            /* [in] */ long mask,
            /* [retval][out] */ SC_IEntities2D **NewGroup) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnGroup( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateProperties( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkAble( 
            /* [retval][out] */ long *MarkAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkAble( 
            /* [in] */ long MarkAble) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutline( 
            double XMin,
            double YMin,
            double XMax,
            double YMax) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOutlineValid( 
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantX( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantY( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransform( 
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInverseMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChangeAble( 
            /* [retval][out] */ long *ChangeAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChangeAble( 
            /* [in] */ long ChangeAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOrderFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOrderFlags( 
            /* [out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVectorsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVectorsDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParent( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayStep( 
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayCount( 
            /* [in] */ long index,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayCount( 
            /* [in] */ long XCount,
            /* [in] */ long YCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAlign( 
            /* [retval][out] */ long *Align) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAlign( 
            /* [in] */ long Align) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNextSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByIndex( 
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveEntity( 
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIndex( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByName( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNameCount( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadId( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadId( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstPoint( 
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMultiHeadTool( 
            /* [in] */ LPDISPATCH Tool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMultiHeadTool( 
            /* [retval][out] */ LPDISPATCH *Tool) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUseMultiHeadTool( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUseMultiHeadTool( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSecondaryHeadOffset( 
            /* [in] */ long DeviceID,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSecondaryHeadOffset( 
            /* [in] */ long DeviceID,
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScClusterID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScClusterID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserData( 
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserData( 
            /* [in] */ long ID,
            /* [retval][out] */ long *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPreviousSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkLoopCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkLoopCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkBeatCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkBeatCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkStartCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkStartCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChangeMarkSequence( 
            long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDimensionLimitFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDimensionLimitFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZScaleAbs( 
            /* [retval][out] */ double *Scale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZScaleAbs( 
            /* [in] */ double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateZ( 
            /* [in] */ double Add) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleZ( 
            /* [in] */ double fac) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnPlane( 
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVarEntityData( 
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTeachReferenceActive( 
            /* [in] */ long flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTeachReferenceActive( 
            /* [retval][out] */ long *flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTeachReferencePoint( 
            /* [in] */ long flags,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTeachReferencePoint( 
            /* [in] */ long flags,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate3D( 
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline2D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline3D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IJobRootVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IJobRoot * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IJobRoot * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IJobRoot * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IJobRoot * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IJobRoot * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IJobRoot * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IJobRoot * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IJobRoot * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IJobRoot * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IJobRoot * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IJobRoot * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IJobRoot * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IJobRoot * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IJobRoot * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IJobRoot * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IJobRoot * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IJobRoot * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IJobRoot * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IJobRoot * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IJobRoot * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IJobRoot * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IJobRoot * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IJobRoot * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IJobRoot * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IJobRoot * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IJobRoot * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IJobRoot * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IJobRoot * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IJobRoot * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGroup )( 
            SC_IJobRoot * This,
            /* [in] */ long mask,
            /* [retval][out] */ SC_IEntities2D **NewGroup);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnGroup )( 
            SC_IJobRoot * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IJobRoot * This,
            /* [in] */ long type,
            /* [in] */ long mask,
            /* [retval][out] */ long *num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IJobRoot * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IJobRoot * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IJobRoot * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IJobRoot * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IJobRoot * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IJobRoot * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IJobRoot * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IJobRoot * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IJobRoot * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IJobRoot * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IJobRoot * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IJobRoot * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IJobRoot * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IJobRoot * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IJobRoot * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IJobRoot * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IJobRoot * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IJobRoot * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IJobRoot * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IJobRoot * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IJobRoot * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IJobRoot * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IJobRoot * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IJobRoot * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IJobRoot * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IJobRoot * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IJobRoot * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IJobRoot * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IJobRoot * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IJobRoot * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IJobRoot * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IJobRoot * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IJobRoot * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMultiHeadTool )( 
            SC_IJobRoot * This,
            /* [in] */ LPDISPATCH Tool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMultiHeadTool )( 
            SC_IJobRoot * This,
            /* [retval][out] */ LPDISPATCH *Tool);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUseMultiHeadTool )( 
            SC_IJobRoot * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUseMultiHeadTool )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSecondaryHeadOffset )( 
            SC_IJobRoot * This,
            /* [in] */ long DeviceID,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSecondaryHeadOffset )( 
            SC_IJobRoot * This,
            /* [in] */ long DeviceID,
            /* [in] */ long Index,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IJobRoot * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IJobRoot * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IJobRoot * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IJobRoot * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IJobRoot * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IJobRoot * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IJobRoot * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IJobRoot * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IJobRoot * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IJobRoot * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IJobRoot * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IJobRoot * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IJobRoot * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IJobRoot * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IJobRoot * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IJobRoot * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IJobRoot * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTeachReferenceActive )( 
            SC_IJobRoot * This,
            /* [in] */ long flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTeachReferenceActive )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTeachReferencePoint )( 
            SC_IJobRoot * This,
            /* [in] */ long flags,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTeachReferencePoint )( 
            SC_IJobRoot * This,
            /* [in] */ long flags,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IJobRoot * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IJobRoot * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IJobRoot * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IJobRoot * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IJobRoot * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IJobRoot * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IJobRoot * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IJobRootVtbl;

    interface SC_IJobRoot
    {
        CONST_VTBL struct SC_IJobRootVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IJobRoot_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IJobRoot_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IJobRoot_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IJobRoot_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IJobRoot_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IJobRoot_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IJobRoot_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IJobRoot_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IJobRoot_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IJobRoot_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IJobRoot_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IJobRoot_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IJobRoot_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IJobRoot_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IJobRoot_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IJobRoot_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IJobRoot_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IJobRoot_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IJobRoot_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IJobRoot_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IJobRoot_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IJobRoot_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IJobRoot_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IJobRoot_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IJobRoot_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IJobRoot_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IJobRoot_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IJobRoot_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IJobRoot_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IJobRoot_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IJobRoot_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IJobRoot_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IJobRoot_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IJobRoot_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IJobRoot_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IJobRoot_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IJobRoot_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IJobRoot_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IJobRoot_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IJobRoot_ScGroup(This,mask,NewGroup)	\
    ( (This)->lpVtbl -> ScGroup(This,mask,NewGroup) ) 

#define SC_IJobRoot_ScUnGroup(This,mask)	\
    ( (This)->lpVtbl -> ScUnGroup(This,mask) ) 

#define SC_IJobRoot_ScGetCount(This,type,mask,num)	\
    ( (This)->lpVtbl -> ScGetCount(This,type,mask,num) ) 

#define SC_IJobRoot_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IJobRoot_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IJobRoot_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IJobRoot_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IJobRoot_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IJobRoot_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IJobRoot_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IJobRoot_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IJobRoot_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IJobRoot_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IJobRoot_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IJobRoot_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IJobRoot_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IJobRoot_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IJobRoot_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IJobRoot_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IJobRoot_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IJobRoot_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IJobRoot_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IJobRoot_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IJobRoot_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IJobRoot_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IJobRoot_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IJobRoot_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IJobRoot_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IJobRoot_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IJobRoot_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IJobRoot_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IJobRoot_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IJobRoot_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IJobRoot_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IJobRoot_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IJobRoot_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IJobRoot_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IJobRoot_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IJobRoot_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IJobRoot_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IJobRoot_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IJobRoot_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IJobRoot_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IJobRoot_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IJobRoot_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IJobRoot_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IJobRoot_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IJobRoot_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IJobRoot_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IJobRoot_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IJobRoot_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IJobRoot_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IJobRoot_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IJobRoot_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IJobRoot_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IJobRoot_ScSetMultiHeadTool(This,Tool)	\
    ( (This)->lpVtbl -> ScSetMultiHeadTool(This,Tool) ) 

#define SC_IJobRoot_ScGetMultiHeadTool(This,Tool)	\
    ( (This)->lpVtbl -> ScGetMultiHeadTool(This,Tool) ) 

#define SC_IJobRoot_put_ScUseMultiHeadTool(This,Use)	\
    ( (This)->lpVtbl -> put_ScUseMultiHeadTool(This,Use) ) 

#define SC_IJobRoot_get_ScUseMultiHeadTool(This,Use)	\
    ( (This)->lpVtbl -> get_ScUseMultiHeadTool(This,Use) ) 

#define SC_IJobRoot_ScSetSecondaryHeadOffset(This,DeviceID,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetSecondaryHeadOffset(This,DeviceID,X,Y,Z) ) 

#define SC_IJobRoot_ScGetSecondaryHeadOffset(This,DeviceID,Index,Offset)	\
    ( (This)->lpVtbl -> ScGetSecondaryHeadOffset(This,DeviceID,Index,Offset) ) 

#define SC_IJobRoot_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IJobRoot_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IJobRoot_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IJobRoot_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IJobRoot_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IJobRoot_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IJobRoot_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IJobRoot_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IJobRoot_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IJobRoot_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IJobRoot_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IJobRoot_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IJobRoot_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IJobRoot_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IJobRoot_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IJobRoot_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IJobRoot_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IJobRoot_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IJobRoot_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IJobRoot_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IJobRoot_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IJobRoot_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IJobRoot_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IJobRoot_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IJobRoot_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IJobRoot_ScSetTeachReferenceActive(This,flags)	\
    ( (This)->lpVtbl -> ScSetTeachReferenceActive(This,flags) ) 

#define SC_IJobRoot_ScGetTeachReferenceActive(This,flags)	\
    ( (This)->lpVtbl -> ScGetTeachReferenceActive(This,flags) ) 

#define SC_IJobRoot_ScSetTeachReferencePoint(This,flags,x,y,z)	\
    ( (This)->lpVtbl -> ScSetTeachReferencePoint(This,flags,x,y,z) ) 

#define SC_IJobRoot_ScGetTeachReferencePoint(This,flags,x,y,z)	\
    ( (This)->lpVtbl -> ScGetTeachReferencePoint(This,flags,x,y,z) ) 

#define SC_IJobRoot_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IJobRoot_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IJobRoot_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IJobRoot_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IJobRoot_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IJobRoot_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IJobRoot_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScGetTeachReferencePoint_Proxy( 
    SC_IJobRoot * This,
    /* [in] */ long flags,
    /* [out] */ double *x,
    /* [out] */ double *y,
    /* [out] */ double *z);


void __RPC_STUB SC_IJobRoot_ScGetTeachReferencePoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScSetMarkFlags_Proxy( 
    SC_IJobRoot * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IJobRoot_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScGetMarkFlags_Proxy( 
    SC_IJobRoot * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IJobRoot_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScSetPropertyVariant2_Proxy( 
    SC_IJobRoot * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IJobRoot_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScRotate3D_Proxy( 
    SC_IJobRoot * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IJobRoot_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScOutline2D_Proxy( 
    SC_IJobRoot * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IJobRoot_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScOutline3D_Proxy( 
    SC_IJobRoot * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IJobRoot_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IJobRoot_ScGetUniqueObjectId_Proxy( 
    SC_IJobRoot * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IJobRoot_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IJobRoot_INTERFACE_DEFINED__ */


#ifndef __SC_IControl_INTERFACE_DEFINED__
#define __SC_IControl_INTERFACE_DEFINED__

/* interface SC_IControl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ADBD5373-AB83-4c79-9499-7C636A39E323")
    SC_IControl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSelected( 
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSelected( 
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsed( 
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsed( 
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOnWork( 
            /* [retval][out] */ long *OnWork) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOnWork( 
            /* [in] */ long OnWork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopy( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyInfo( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDelProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslate( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScale( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate( 
            double X,
            double Y,
            double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnXAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnYAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnAxis( 
            double X1,
            double Y1,
            double X2,
            double Y2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateProperties( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkAble( 
            /* [retval][out] */ long *MarkAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkAble( 
            /* [in] */ long MarkAble) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutline( 
            double XMin,
            double YMin,
            double XMax,
            double YMax) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOutlineValid( 
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantX( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantY( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransform( 
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInverseMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChangeAble( 
            /* [retval][out] */ long *ChangeAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChangeAble( 
            /* [in] */ long ChangeAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOrderFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOrderFlags( 
            /* [out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVectorsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVectorsDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParent( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayStep( 
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayCount( 
            /* [in] */ long index,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayCount( 
            /* [in] */ long XCount,
            /* [in] */ long YCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAlign( 
            /* [retval][out] */ long *Align) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAlign( 
            /* [in] */ long Align) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNextSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadId( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadId( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstPoint( 
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScClusterID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScClusterID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserData( 
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserData( 
            /* [in] */ long ID,
            /* [retval][out] */ long *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPreviousSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkLoopCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkLoopCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkBeatCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkBeatCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkStartCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkStartCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChangeMarkSequence( 
            long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetControlFlags( 
            /* [in] */ long value,
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlFlags( 
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDimensionLimitFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDimensionLimitFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZScaleAbs( 
            /* [retval][out] */ double *Scale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZScaleAbs( 
            /* [in] */ double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateZ( 
            /* [in] */ double Add) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleZ( 
            /* [in] */ double fac) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnPlane( 
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVarEntityData( 
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate3D( 
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline2D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline3D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IControl * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IControl * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IControl * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IControl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IControl * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IControl * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IControl * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IControl * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IControl * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IControl * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IControl * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IControl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IControl * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IControl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IControl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IControl * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IControl * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IControl * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IControl * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IControl * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IControl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IControl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IControl * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IControl * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IControl * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IControl * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IControl * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IControl * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IControl * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IControl * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IControl * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IControl * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IControl * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IControl * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IControl * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IControl * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IControl * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IControl * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IControl * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IControl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IControl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IControl * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IControl * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IControl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IControl * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IControl * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IControl * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IControl * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IControl * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IControl * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IControl * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IControl * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IControl * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IControl * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IControl * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IControl * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IControl * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IControl * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IControl * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IControl * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IControl * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IControl * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IControl * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IControl * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IControl * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IControl * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IControl * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IControl * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IControl * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IControl * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IControl * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IControl * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IControl * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IControl * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IControl * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IControl * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IControl * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IControl * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IControl * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IControl * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IControl * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IControl * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetControlFlags )( 
            SC_IControl * This,
            /* [in] */ long value,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlFlags )( 
            SC_IControl * This,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IControl * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IControl * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IControl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IControl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IControl * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IControl * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IControl * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IControl * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IControl * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IControl * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IControl * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IControl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IControl * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IControl * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IControl * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IControl * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IControl * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IControlVtbl;

    interface SC_IControl
    {
        CONST_VTBL struct SC_IControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControl_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IControl_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IControl_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IControl_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IControl_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IControl_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IControl_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IControl_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IControl_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IControl_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IControl_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IControl_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IControl_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IControl_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IControl_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IControl_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IControl_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IControl_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IControl_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IControl_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IControl_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IControl_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IControl_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IControl_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IControl_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IControl_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IControl_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IControl_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IControl_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IControl_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IControl_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IControl_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IControl_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IControl_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IControl_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IControl_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IControl_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IControl_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IControl_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IControl_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IControl_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IControl_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IControl_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IControl_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IControl_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IControl_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IControl_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IControl_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IControl_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IControl_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IControl_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IControl_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IControl_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IControl_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IControl_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IControl_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IControl_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IControl_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IControl_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IControl_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IControl_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IControl_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IControl_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IControl_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IControl_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IControl_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IControl_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IControl_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IControl_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IControl_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IControl_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IControl_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IControl_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IControl_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IControl_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IControl_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IControl_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IControl_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IControl_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IControl_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IControl_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IControl_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IControl_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IControl_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IControl_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IControl_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IControl_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IControl_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IControl_ScSetControlFlags(This,value,mask)	\
    ( (This)->lpVtbl -> ScSetControlFlags(This,value,mask) ) 

#define SC_IControl_ScGetControlFlags(This,value)	\
    ( (This)->lpVtbl -> ScGetControlFlags(This,value) ) 

#define SC_IControl_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IControl_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IControl_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IControl_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IControl_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IControl_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IControl_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IControl_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IControl_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IControl_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IControl_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IControl_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IControl_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IControl_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IControl_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IControl_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IControl_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControl_INTERFACE_DEFINED__ */


#ifndef __SC_IEvent_INTERFACE_DEFINED__
#define __SC_IEvent_INTERFACE_DEFINED__

/* interface SC_IEvent */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E51EBD8-5288-44aa-AE1A-9EF97BF5FB21")
    SC_IEvent : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSelected( 
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSelected( 
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUsed( 
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUsed( 
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOnWork( 
            /* [retval][out] */ long *OnWork) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOnWork( 
            /* [in] */ long OnWork) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopy( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyInfo( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDelProperty( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveEntity( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMatrix( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslate( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScale( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate( 
            double X,
            double Y,
            double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnXAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnYAxis( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnAxis( 
            double X1,
            double Y1,
            double X2,
            double Y2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateProperties( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkAble( 
            /* [retval][out] */ long *MarkAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkAble( 
            /* [in] */ long MarkAble) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertPos( 
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertPos( 
            /* [in] */ double Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHorzSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHorzSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVertSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVertSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutline( 
            double XMin,
            double YMin,
            double XMax,
            double YMax) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOutlineValid( 
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantX( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSlantY( 
            double Slant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTransform( 
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInverseMatrix( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUnifyMatrix( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChangeAble( 
            /* [retval][out] */ long *ChangeAble) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChangeAble( 
            /* [in] */ long ChangeAble) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOrderFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOrderFlags( 
            /* [out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScVectorsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScVectorsDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParent( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayStep( 
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArrayCount( 
            /* [in] */ long index,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetArrayCount( 
            /* [in] */ long XCount,
            /* [in] */ long YCount) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAlign( 
            /* [retval][out] */ long *Align) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAlign( 
            /* [in] */ long Align) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNextSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadId( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadId( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstPoint( 
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScClusterID( 
            /* [in] */ long ID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScClusterID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTopLevelCluster( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUserData( 
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUserData( 
            /* [in] */ long ID,
            /* [retval][out] */ long *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPreviousSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScResetSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateSequence( 
            /* [retval][out] */ long *Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkLoopCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkLoopCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkBeatCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkBeatCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkStartCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkStartCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChangeMarkSequence( 
            long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetControlFlags( 
            /* [in] */ long value,
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlFlags( 
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEventType( 
            /* [in] */ long type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEventType( 
            /* [retval][out] */ long *type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMS( 
            /* [in] */ long ms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMS( 
            /* [retval][out] */ long *ms) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetIOMask( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIOMask( 
            /* [retval][out] */ long *mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetIOValue( 
            /* [in] */ long value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIOValue( 
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCustomLongValue( 
            /* [in] */ long index,
            /* [in] */ long value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCustomLongValue( 
            /* [in] */ long index,
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCustomDoubleValue( 
            /* [in] */ long index,
            /* [in] */ double value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCustomDoubleValue( 
            /* [in] */ long index,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetIOMask2( 
            /* [in] */ long mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIOMask2( 
            /* [retval][out] */ long *mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetIOValue2( 
            /* [in] */ long value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIOValue2( 
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLongValue( 
            /* [in] */ long index,
            /* [in] */ long value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLongValue( 
            /* [in] */ long index,
            /* [retval][out] */ long *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDoubleValue( 
            /* [in] */ long index,
            /* [in] */ double value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDoubleValue( 
            /* [in] */ long index,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMessage( 
            /* [in] */ long index,
            /* [in] */ BSTR message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMessage( 
            /* [in] */ long index,
            /* [retval][out] */ BSTR *message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDimensionLimit( 
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDimensionLimitFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDimensionLimitFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScZScaleAbs( 
            /* [retval][out] */ double *Scale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScZScaleAbs( 
            /* [in] */ double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateZ( 
            /* [in] */ double Add) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleZ( 
            /* [in] */ double fac) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMirrorOnPlane( 
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVarEntityData( 
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotate3D( 
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline2D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOutline3D( 
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEvent * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEvent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEvent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEvent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEvent * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEvent * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEvent * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEvent * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEvent * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEvent * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEvent * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEvent * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEvent * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEvent * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEvent * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEvent * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEvent * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEvent * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEvent * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEvent * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEvent * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IEvent * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IEvent * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IEvent * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEvent * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEvent * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEvent * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IEvent * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IEvent * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IEvent * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IEvent * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IEvent * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IEvent * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IEvent * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEvent * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEvent * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEvent * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEvent * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEvent * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEvent * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEvent * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEvent * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEvent * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEvent * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEvent * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEvent * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEvent * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEvent * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEvent * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IEvent * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IEvent * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IEvent * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEvent * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEvent * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IEvent * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IEvent * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEvent * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEvent * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEvent * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEvent * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEvent * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IEvent * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IEvent * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IEvent * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IEvent * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetControlFlags )( 
            SC_IEvent * This,
            /* [in] */ long value,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlFlags )( 
            SC_IEvent * This,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEventType )( 
            SC_IEvent * This,
            /* [in] */ long type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEventType )( 
            SC_IEvent * This,
            /* [retval][out] */ long *type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMS )( 
            SC_IEvent * This,
            /* [in] */ long ms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMS )( 
            SC_IEvent * This,
            /* [retval][out] */ long *ms);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetIOMask )( 
            SC_IEvent * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIOMask )( 
            SC_IEvent * This,
            /* [retval][out] */ long *mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetIOValue )( 
            SC_IEvent * This,
            /* [in] */ long value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIOValue )( 
            SC_IEvent * This,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCustomLongValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [in] */ long value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCustomLongValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCustomDoubleValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [in] */ double value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCustomDoubleValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ double *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetIOMask2 )( 
            SC_IEvent * This,
            /* [in] */ long mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIOMask2 )( 
            SC_IEvent * This,
            /* [retval][out] */ long *mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetIOValue2 )( 
            SC_IEvent * This,
            /* [in] */ long value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIOValue2 )( 
            SC_IEvent * This,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [in] */ long value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ long *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDoubleValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [in] */ double value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDoubleValue )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ double *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMessage )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [in] */ BSTR message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMessage )( 
            SC_IEvent * This,
            /* [in] */ long index,
            /* [retval][out] */ BSTR *message);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IEvent * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IEvent * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IEvent * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IEvent * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IEvent * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IEvent * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IEvent * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IEvent * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IEvent * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEvent * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEvent * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEvent * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEvent * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IEvent * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEvent * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEvent * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEventVtbl;

    interface SC_IEvent
    {
        CONST_VTBL struct SC_IEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEvent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEvent_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEvent_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEvent_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEvent_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEvent_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEvent_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEvent_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEvent_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEvent_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEvent_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEvent_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEvent_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEvent_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEvent_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEvent_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEvent_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEvent_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEvent_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEvent_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEvent_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEvent_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IEvent_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IEvent_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IEvent_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IEvent_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IEvent_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IEvent_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEvent_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEvent_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEvent_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEvent_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEvent_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IEvent_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IEvent_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IEvent_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IEvent_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IEvent_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IEvent_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IEvent_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IEvent_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IEvent_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IEvent_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IEvent_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IEvent_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEvent_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEvent_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEvent_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IEvent_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IEvent_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEvent_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEvent_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEvent_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEvent_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEvent_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEvent_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEvent_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEvent_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEvent_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEvent_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEvent_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEvent_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IEvent_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IEvent_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IEvent_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IEvent_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IEvent_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IEvent_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IEvent_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEvent_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEvent_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEvent_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IEvent_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IEvent_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IEvent_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEvent_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEvent_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEvent_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEvent_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEvent_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IEvent_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IEvent_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IEvent_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IEvent_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IEvent_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IEvent_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IEvent_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IEvent_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IEvent_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IEvent_ScSetControlFlags(This,value,mask)	\
    ( (This)->lpVtbl -> ScSetControlFlags(This,value,mask) ) 

#define SC_IEvent_ScGetControlFlags(This,value)	\
    ( (This)->lpVtbl -> ScGetControlFlags(This,value) ) 

#define SC_IEvent_ScSetEventType(This,type)	\
    ( (This)->lpVtbl -> ScSetEventType(This,type) ) 

#define SC_IEvent_ScGetEventType(This,type)	\
    ( (This)->lpVtbl -> ScGetEventType(This,type) ) 

#define SC_IEvent_ScSetMS(This,ms)	\
    ( (This)->lpVtbl -> ScSetMS(This,ms) ) 

#define SC_IEvent_ScGetMS(This,ms)	\
    ( (This)->lpVtbl -> ScGetMS(This,ms) ) 

#define SC_IEvent_ScSetIOMask(This,mask)	\
    ( (This)->lpVtbl -> ScSetIOMask(This,mask) ) 

#define SC_IEvent_ScGetIOMask(This,mask)	\
    ( (This)->lpVtbl -> ScGetIOMask(This,mask) ) 

#define SC_IEvent_ScSetIOValue(This,value)	\
    ( (This)->lpVtbl -> ScSetIOValue(This,value) ) 

#define SC_IEvent_ScGetIOValue(This,value)	\
    ( (This)->lpVtbl -> ScGetIOValue(This,value) ) 

#define SC_IEvent_ScSetCustomLongValue(This,index,value)	\
    ( (This)->lpVtbl -> ScSetCustomLongValue(This,index,value) ) 

#define SC_IEvent_ScGetCustomLongValue(This,index,value)	\
    ( (This)->lpVtbl -> ScGetCustomLongValue(This,index,value) ) 

#define SC_IEvent_ScSetCustomDoubleValue(This,index,value)	\
    ( (This)->lpVtbl -> ScSetCustomDoubleValue(This,index,value) ) 

#define SC_IEvent_ScGetCustomDoubleValue(This,index,value)	\
    ( (This)->lpVtbl -> ScGetCustomDoubleValue(This,index,value) ) 

#define SC_IEvent_ScSetIOMask2(This,mask)	\
    ( (This)->lpVtbl -> ScSetIOMask2(This,mask) ) 

#define SC_IEvent_ScGetIOMask2(This,mask)	\
    ( (This)->lpVtbl -> ScGetIOMask2(This,mask) ) 

#define SC_IEvent_ScSetIOValue2(This,value)	\
    ( (This)->lpVtbl -> ScSetIOValue2(This,value) ) 

#define SC_IEvent_ScGetIOValue2(This,value)	\
    ( (This)->lpVtbl -> ScGetIOValue2(This,value) ) 

#define SC_IEvent_ScSetLongValue(This,index,value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,index,value) ) 

#define SC_IEvent_ScGetLongValue(This,index,value)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,index,value) ) 

#define SC_IEvent_ScSetDoubleValue(This,index,value)	\
    ( (This)->lpVtbl -> ScSetDoubleValue(This,index,value) ) 

#define SC_IEvent_ScGetDoubleValue(This,index,value)	\
    ( (This)->lpVtbl -> ScGetDoubleValue(This,index,value) ) 

#define SC_IEvent_ScSetMessage(This,index,message)	\
    ( (This)->lpVtbl -> ScSetMessage(This,index,message) ) 

#define SC_IEvent_ScGetMessage(This,index,message)	\
    ( (This)->lpVtbl -> ScGetMessage(This,index,message) ) 

#define SC_IEvent_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEvent_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEvent_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEvent_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEvent_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IEvent_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IEvent_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IEvent_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IEvent_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IEvent_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IEvent_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEvent_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEvent_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEvent_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEvent_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEvent_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEvent_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScVarEntityData_Proxy( 
    SC_IEvent * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IEvent_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScSetMarkFlags_Proxy( 
    SC_IEvent * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IEvent_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScGetMarkFlags_Proxy( 
    SC_IEvent * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IEvent_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScSetPropertyVariant2_Proxy( 
    SC_IEvent * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IEvent_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScRotate3D_Proxy( 
    SC_IEvent * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IEvent_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScOutline2D_Proxy( 
    SC_IEvent * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IEvent_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScOutline3D_Proxy( 
    SC_IEvent * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IEvent_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEvent_ScGetUniqueObjectId_Proxy( 
    SC_IEvent * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IEvent_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IEvent_INTERFACE_DEFINED__ */



#ifndef __ScConstantsEntityGroups_MODULE_DEFINED__
#define __ScConstantsEntityGroups_MODULE_DEFINED__


/* module ScConstantsEntityGroups */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectEntities2D	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectEntities3D	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( ( 0x80000 + 0x20000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectJobRoot	=	( 0x2000 | ( ( 12 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectControl	=	( 0x2000 | ( ( 0x8000 + 0x40000 )  + 0x800000 )  ) ;

/* [helpstring] */ const long scComObjectEvent	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( ( 0x8000 + 0x40000 )  + 0x800000 ) ) )  ) ;

/* [helpstring] */ const long scComControlFlagIOSingleBitMode	=	0x2;

/* [helpstring] */ const long scComControlFlagMessageBox	=	0x4;

/* [helpstring] */ const long scComControlFlagMessageBoxInfo	=	0x10;

/* [helpstring] */ const long scComControlFlagMessageBoxWarning	=	0x20;

/* [helpstring] */ const long scComControlFlagPulseMode	=	0x8;

/* [helpstring] */ const long scComControlFlagNoAutoName	=	0x80;

/* [helpstring] */ const long scComControlFlagMessageBoxOnly	=	0x100;

/* [helpstring] */ const long scComControlFlagDisabled	=	0x200;

/* [helpstring] */ const long scComEventTypeTimer	=	0x1;

/* [helpstring] */ const long scComEventTypeIOOutput	=	0x2;

/* [helpstring] */ const long scComEventTypeIOWaitForInput	=	0x3;

/* [helpstring] */ const long scComEventTypeMessage	=	0x4;

/* [helpstring] */ const long scComEventTypeMotion	=	0x5;

/* [helpstring] */ const long scComEventTypeGeneral	=	0x6;

/* [helpstring] */ const long scComEventTypeMofOffset	=	0x7;

/* [helpstring] */ const long scComEventTypeWaitForTrigger	=	0x8;

/* [helpstring] */ const long scComEventTypeMotionInitiate	=	0x9;

/* [helpstring] */ const long scComEventTypeAnalogOutput	=	0xa;

/* [helpstring] */ const long scComEventTypeSecondaryHeadOffset	=	0xb;

/* [helpstring] */ const long scComEventTypeAutoCalib	=	0xc;

/* [helpstring] */ const long scComEventTypeOverride	=	0xd;

/* [helpstring] */ const long scComEventTypeExecutable	=	0xe;

/* [helpstring] */ const long scComEventTypeRecorder	=	0xf;

/* [helpstring] */ const long scComEventTypeJump	=	0x20;

/* [helpstring] */ const long scComEventDoubleValueIDPulseLength	=	0;

#endif /* __ScConstantsEntityGroups_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScEntities3D;

#ifdef __cplusplus

class DECLSPEC_UUID("DB875671-42E8-11d1-96E9-008048EEE00C")
ScEntities3D;
#endif

EXTERN_C const CLSID CLSID_ScEntities2D;

#ifdef __cplusplus

class DECLSPEC_UUID("0B7442E2-42E9-11d1-96E9-008048EEE00C")
ScEntities2D;
#endif

EXTERN_C const CLSID CLSID_ScJobRoot;

#ifdef __cplusplus

class DECLSPEC_UUID("C0BDB2FC-FE61-11d3-9BBD-008048EEE00C")
ScJobRoot;
#endif

EXTERN_C const CLSID CLSID_ScControl;

#ifdef __cplusplus

class DECLSPEC_UUID("B36EFE9A-EF01-43b1-8E30-44AAB5182CDE")
ScControl;
#endif

EXTERN_C const CLSID CLSID_ScEvent;

#ifdef __cplusplus

class DECLSPEC_UUID("8CAB9ABA-520F-4844-AA44-AAAE3F928827")
ScEvent;
#endif
#endif /* __ScapsSamEntityGroups_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


