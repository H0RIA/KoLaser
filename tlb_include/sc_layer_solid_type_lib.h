

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:29 2017
 */
/* Compiler settings for d:\scaps\dll_source\layersolid\com\include\sc_layer_solid_type_lib.idl:
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


#ifndef __sc_layer_solid_type_lib_h__
#define __sc_layer_solid_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ILayerSolid_FWD_DEFINED__
#define __SC_ILayerSolid_FWD_DEFINED__
typedef interface SC_ILayerSolid SC_ILayerSolid;
#endif 	/* __SC_ILayerSolid_FWD_DEFINED__ */


#ifndef __ScLayerSolid_FWD_DEFINED__
#define __ScLayerSolid_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayerSolid ScLayerSolid;
#else
typedef struct ScLayerSolid ScLayerSolid;
#endif /* __cplusplus */

#endif 	/* __ScLayerSolid_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_layer_solid_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_layer_solid_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_layer_solid_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamLayerSolid_LIBRARY_DEFINED__
#define __ScapsSamLayerSolid_LIBRARY_DEFINED__

/* library ScapsSamLayerSolid */
/* [version][helpstring][uuid] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("BEB96CB7-6652-47ed-8A3F-7FFB74FE258D") 
enum ScComUpDownParam
    {	scComUpDownParamBeamComp	= 0,
	scComUpDownParamMinUpArea	= 1,
	scComUpDownParamMinDownArea	= 2,
	scComUpDownParamReduceUpDown	= 3,
	scComUpDownParamNumLoops	= 4,
	scComUpDownParamReduceUp	= 5,
	scComUpDownParamReduceDown	= 6
    } 	ScComUpDownParam;


EXTERN_C const IID LIBID_ScapsSamLayerSolid;

#ifndef __SC_ILayerSolid_INTERFACE_DEFINED__
#define __SC_ILayerSolid_INTERFACE_DEFINED__

/* interface SC_ILayerSolid */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayerSolid;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFDC90D2-4895-11d1-96F4-008048EEE00C")
    SC_ILayerSolid : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemSelectCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemUsedCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemUsed( 
            /* [in] */ long index,
            /* [retval][out] */ long *Used) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemUsed( 
            /* [in] */ long index,
            /* [in] */ long Used) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemSelected( 
            /* [in] */ long index,
            /* [retval][out] */ long *Selected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemSelected( 
            /* [in] */ long index,
            /* [in] */ long Selected) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLayer( 
            /* [in] */ double Height,
            /* external definition not present */ SC_ILayer *Layer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLayerAtIndex( 
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLayerActive( 
            /* [in] */ long Index,
            long SetActive,
            long SetRestToNotSetActive) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAllLayersActive( 
            /* [in] */ long SetActive) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNextActiveIndex( 
            /* [in] */ long StartIndex,
            /* [retval][out] */ long *ActiveIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLayerDistance( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Distance) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLayerAtIndex( 
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUseHatchProperty( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUseHatchProperty( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpDownSkinLayers( 
            /* [in] */ long i,
            /* [in] */ long k,
            /* [in] */ long mode,
            /* [in] */ /* external definition not present */ SC_ILayer *Layer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenHKSolid( 
            /* [in] */ double res,
            /* [in] */ long mode,
            /* [in] */ BSTR FileName,
            /* [in] */ SC_ILayerSolid *ResultLayerSolid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMinHatchLength( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMinHatchLength( 
            /* [in] */ long Index,
            /* [in] */ double Length) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLayerAtIndexAngle( 
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer,
            /* [in] */ double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVariHatchangle( 
            /* [in] */ double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSliceDirection( 
            /* [in] */ long reverse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSliceDirection( 
            /* [out] */ long *reverse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImportFolderDlg( 
            /* [out][in] */ BSTR *DirName,
            /* [out][in] */ BSTR *Type,
            /* [out][in] */ long *Style,
            /* [out][in] */ double *Resolution,
            /* [out][in] */ double *z_start,
            /* [out][in] */ double *z_step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImportStyles( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExportStyles( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLayerCount( 
            /* [out] */ long *count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUpDownExParam( 
            /* [in] */ ScComUpDownParam param,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUpDownExParam( 
            /* [in] */ ScComUpDownParam param,
            /* [in] */ double value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpDownSkinLayersEx( 
            /* [in] */ long i,
            /* [in] */ /* external definition not present */ SC_ILayer *up,
            /* [in] */ /* external definition not present */ SC_ILayer *down,
            /* [in] */ /* external definition not present */ SC_ILayer *core) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILayerSolidVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayerSolid * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayerSolid * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayerSolid * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayerSolid * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayerSolid * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayerSolid * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayerSolid * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ILayerSolid * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ILayerSolid * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ILayerSolid * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ILayerSolid * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ILayerSolid * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ILayerSolid * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ILayerSolid * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ILayerSolid * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ILayerSolid * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ILayerSolid * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ILayerSolid * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ILayerSolid * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILayerSolid * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILayerSolid * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ILayerSolid * This,
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
            SC_ILayerSolid * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ILayerSolid * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLayer )( 
            SC_ILayerSolid * This,
            /* [in] */ double Height,
            /* external definition not present */ SC_ILayer *Layer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLayerAtIndex )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLayerActive )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            long SetActive,
            long SetRestToNotSetActive);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAllLayersActive )( 
            SC_ILayerSolid * This,
            /* [in] */ long SetActive);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextActiveIndex )( 
            SC_ILayerSolid * This,
            /* [in] */ long StartIndex,
            /* [retval][out] */ long *ActiveIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLayerDistance )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Distance);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ILayerSolid * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ILayerSolid * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ILayerSolid * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ILayerSolid * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ILayerSolid * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ILayerSolid * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ILayerSolid * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ILayerSolid * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ILayerSolid * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ILayerSolid * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLayerAtIndex )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUseHatchProperty )( 
            SC_ILayerSolid * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUseHatchProperty )( 
            SC_ILayerSolid * This,
            /* [in] */ long Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpDownSkinLayers )( 
            SC_ILayerSolid * This,
            /* [in] */ long i,
            /* [in] */ long k,
            /* [in] */ long mode,
            /* [in] */ /* external definition not present */ SC_ILayer *Layer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenHKSolid )( 
            SC_ILayerSolid * This,
            /* [in] */ double res,
            /* [in] */ long mode,
            /* [in] */ BSTR FileName,
            /* [in] */ SC_ILayerSolid *ResultLayerSolid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMinHatchLength )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMinHatchLength )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* [in] */ double Length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLayerAtIndexAngle )( 
            SC_ILayerSolid * This,
            /* [in] */ long Index,
            /* external definition not present */ SC_ILayer *Layer,
            /* [in] */ double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVariHatchangle )( 
            SC_ILayerSolid * This,
            /* [in] */ double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSliceDirection )( 
            SC_ILayerSolid * This,
            /* [in] */ long reverse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSliceDirection )( 
            SC_ILayerSolid * This,
            /* [out] */ long *reverse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImportFolderDlg )( 
            SC_ILayerSolid * This,
            /* [out][in] */ BSTR *DirName,
            /* [out][in] */ BSTR *Type,
            /* [out][in] */ long *Style,
            /* [out][in] */ double *Resolution,
            /* [out][in] */ double *z_start,
            /* [out][in] */ double *z_step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImportStyles )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExportStyles )( 
            SC_ILayerSolid * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLayerCount )( 
            SC_ILayerSolid * This,
            /* [out] */ long *count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUpDownExParam )( 
            SC_ILayerSolid * This,
            /* [in] */ ScComUpDownParam param,
            /* [retval][out] */ double *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUpDownExParam )( 
            SC_ILayerSolid * This,
            /* [in] */ ScComUpDownParam param,
            /* [in] */ double value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpDownSkinLayersEx )( 
            SC_ILayerSolid * This,
            /* [in] */ long i,
            /* [in] */ /* external definition not present */ SC_ILayer *up,
            /* [in] */ /* external definition not present */ SC_ILayer *down,
            /* [in] */ /* external definition not present */ SC_ILayer *core);
        
        END_INTERFACE
    } SC_ILayerSolidVtbl;

    interface SC_ILayerSolid
    {
        CONST_VTBL struct SC_ILayerSolidVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayerSolid_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayerSolid_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayerSolid_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayerSolid_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayerSolid_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayerSolid_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayerSolid_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayerSolid_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ILayerSolid_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ILayerSolid_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ILayerSolid_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ILayerSolid_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ILayerSolid_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ILayerSolid_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ILayerSolid_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ILayerSolid_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ILayerSolid_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ILayerSolid_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ILayerSolid_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ILayerSolid_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ILayerSolid_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILayerSolid_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILayerSolid_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ILayerSolid_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ILayerSolid_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ILayerSolid_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ILayerSolid_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ILayerSolid_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_ILayerSolid_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_ILayerSolid_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_ILayerSolid_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ILayerSolid_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ILayerSolid_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ILayerSolid_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ILayerSolid_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ILayerSolid_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ILayerSolid_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ILayerSolid_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILayerSolid_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILayerSolid_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ILayerSolid_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ILayerSolid_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ILayerSolid_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ILayerSolid_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ILayerSolid_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ILayerSolid_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ILayerSolid_ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23) ) 

#define SC_ILayerSolid_ScGetInverseMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,index,Value) ) 

#define SC_ILayerSolid_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ILayerSolid_ScAddLayer(This,Height,Layer)	\
    ( (This)->lpVtbl -> ScAddLayer(This,Height,Layer) ) 

#define SC_ILayerSolid_ScGetLayerAtIndex(This,Index,Layer)	\
    ( (This)->lpVtbl -> ScGetLayerAtIndex(This,Index,Layer) ) 

#define SC_ILayerSolid_ScSetLayerActive(This,Index,SetActive,SetRestToNotSetActive)	\
    ( (This)->lpVtbl -> ScSetLayerActive(This,Index,SetActive,SetRestToNotSetActive) ) 

#define SC_ILayerSolid_ScSetAllLayersActive(This,SetActive)	\
    ( (This)->lpVtbl -> ScSetAllLayersActive(This,SetActive) ) 

#define SC_ILayerSolid_ScGetNextActiveIndex(This,StartIndex,ActiveIndex)	\
    ( (This)->lpVtbl -> ScGetNextActiveIndex(This,StartIndex,ActiveIndex) ) 

#define SC_ILayerSolid_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ILayerSolid_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ILayerSolid_ScGetLayerDistance(This,Index,Distance)	\
    ( (This)->lpVtbl -> ScGetLayerDistance(This,Index,Distance) ) 

#define SC_ILayerSolid_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ILayerSolid_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ILayerSolid_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ILayerSolid_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ILayerSolid_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ILayerSolid_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ILayerSolid_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ILayerSolid_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ILayerSolid_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ILayerSolid_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ILayerSolid_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ILayerSolid_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ILayerSolid_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ILayerSolid_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ILayerSolid_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ILayerSolid_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ILayerSolid_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ILayerSolid_ScSetLayerAtIndex(This,Index,Layer)	\
    ( (This)->lpVtbl -> ScSetLayerAtIndex(This,Index,Layer) ) 

#define SC_ILayerSolid_get_ScUseHatchProperty(This,Use)	\
    ( (This)->lpVtbl -> get_ScUseHatchProperty(This,Use) ) 

#define SC_ILayerSolid_put_ScUseHatchProperty(This,Use)	\
    ( (This)->lpVtbl -> put_ScUseHatchProperty(This,Use) ) 

#define SC_ILayerSolid_ScUpDownSkinLayers(This,i,k,mode,Layer)	\
    ( (This)->lpVtbl -> ScUpDownSkinLayers(This,i,k,mode,Layer) ) 

#define SC_ILayerSolid_ScGenHKSolid(This,res,mode,FileName,ResultLayerSolid)	\
    ( (This)->lpVtbl -> ScGenHKSolid(This,res,mode,FileName,ResultLayerSolid) ) 

#define SC_ILayerSolid_ScGetMinHatchLength(This,Index,Length)	\
    ( (This)->lpVtbl -> ScGetMinHatchLength(This,Index,Length) ) 

#define SC_ILayerSolid_ScSetMinHatchLength(This,Index,Length)	\
    ( (This)->lpVtbl -> ScSetMinHatchLength(This,Index,Length) ) 

#define SC_ILayerSolid_ScGetLayerAtIndexAngle(This,Index,Layer,Angle)	\
    ( (This)->lpVtbl -> ScGetLayerAtIndexAngle(This,Index,Layer,Angle) ) 

#define SC_ILayerSolid_ScSetVariHatchangle(This,Angle)	\
    ( (This)->lpVtbl -> ScSetVariHatchangle(This,Angle) ) 

#define SC_ILayerSolid_ScSetSliceDirection(This,reverse)	\
    ( (This)->lpVtbl -> ScSetSliceDirection(This,reverse) ) 

#define SC_ILayerSolid_ScGetSliceDirection(This,reverse)	\
    ( (This)->lpVtbl -> ScGetSliceDirection(This,reverse) ) 

#define SC_ILayerSolid_ScImportFolderDlg(This,DirName,Type,Style,Resolution,z_start,z_step)	\
    ( (This)->lpVtbl -> ScImportFolderDlg(This,DirName,Type,Style,Resolution,z_start,z_step) ) 

#define SC_ILayerSolid_ScImportStyles(This,FileName)	\
    ( (This)->lpVtbl -> ScImportStyles(This,FileName) ) 

#define SC_ILayerSolid_ScExportStyles(This,FileName)	\
    ( (This)->lpVtbl -> ScExportStyles(This,FileName) ) 

#define SC_ILayerSolid_ScGetLayerCount(This,count)	\
    ( (This)->lpVtbl -> ScGetLayerCount(This,count) ) 

#define SC_ILayerSolid_ScGetUpDownExParam(This,param,value)	\
    ( (This)->lpVtbl -> ScGetUpDownExParam(This,param,value) ) 

#define SC_ILayerSolid_ScSetUpDownExParam(This,param,value)	\
    ( (This)->lpVtbl -> ScSetUpDownExParam(This,param,value) ) 

#define SC_ILayerSolid_ScUpDownSkinLayersEx(This,i,up,down,core)	\
    ( (This)->lpVtbl -> ScUpDownSkinLayersEx(This,i,up,down,core) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayerSolid_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLayerSolid_MODULE_DEFINED__
#define __ScConstantsLayerSolid_MODULE_DEFINED__


/* module ScConstantsLayerSolid */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectLayerSolid	=	( 0x2000 | ( ( 2 * 0x1000000 )  + (( ( 0x100000 + 0x20000 )  + 0x8000 ) ) )  ) ;

#endif /* __ScConstantsLayerSolid_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayerSolid;

#ifdef __cplusplus

class DECLSPEC_UUID("DFDC90D4-4895-11d1-96F4-008048EEE00C")
ScLayerSolid;
#endif
#endif /* __ScapsSamLayerSolid_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


