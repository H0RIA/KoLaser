

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:26 2017
 */
/* Compiler settings for d:\scaps\dll_source\lines2d\com\include\sc_lines2d_type_lib.idl:
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


#ifndef __sc_lines2d_type_lib_h__
#define __sc_lines2d_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IPolyLine2D_FWD_DEFINED__
#define __SC_IPolyLine2D_FWD_DEFINED__
typedef interface SC_IPolyLine2D SC_IPolyLine2D;
#endif 	/* __SC_IPolyLine2D_FWD_DEFINED__ */


#ifndef __SC_IPolyLines2D_FWD_DEFINED__
#define __SC_IPolyLines2D_FWD_DEFINED__
typedef interface SC_IPolyLines2D SC_IPolyLines2D;
#endif 	/* __SC_IPolyLines2D_FWD_DEFINED__ */


#ifndef __SC_ILineArray2D_FWD_DEFINED__
#define __SC_ILineArray2D_FWD_DEFINED__
typedef interface SC_ILineArray2D SC_ILineArray2D;
#endif 	/* __SC_ILineArray2D_FWD_DEFINED__ */


#ifndef __SC_IHatch_FWD_DEFINED__
#define __SC_IHatch_FWD_DEFINED__
typedef interface SC_IHatch SC_IHatch;
#endif 	/* __SC_IHatch_FWD_DEFINED__ */


#ifndef __SC_ILineArrays2D_FWD_DEFINED__
#define __SC_ILineArrays2D_FWD_DEFINED__
typedef interface SC_ILineArrays2D SC_ILineArrays2D;
#endif 	/* __SC_ILineArrays2D_FWD_DEFINED__ */


#ifndef __SC_ILayer_FWD_DEFINED__
#define __SC_ILayer_FWD_DEFINED__
typedef interface SC_ILayer SC_ILayer;
#endif 	/* __SC_ILayer_FWD_DEFINED__ */


#ifndef __SC_IVarEntity2D_FWD_DEFINED__
#define __SC_IVarEntity2D_FWD_DEFINED__
typedef interface SC_IVarEntity2D SC_IVarEntity2D;
#endif 	/* __SC_IVarEntity2D_FWD_DEFINED__ */


#ifndef __SC_ISequence2D_FWD_DEFINED__
#define __SC_ISequence2D_FWD_DEFINED__
typedef interface SC_ISequence2D SC_ISequence2D;
#endif 	/* __SC_ISequence2D_FWD_DEFINED__ */


#ifndef __SC_IRectangle2D_FWD_DEFINED__
#define __SC_IRectangle2D_FWD_DEFINED__
typedef interface SC_IRectangle2D SC_IRectangle2D;
#endif 	/* __SC_IRectangle2D_FWD_DEFINED__ */


#ifndef __SC_ITriangle2D_FWD_DEFINED__
#define __SC_ITriangle2D_FWD_DEFINED__
typedef interface SC_ITriangle2D SC_ITriangle2D;
#endif 	/* __SC_ITriangle2D_FWD_DEFINED__ */


#ifndef __SC_IEllipse2D_FWD_DEFINED__
#define __SC_IEllipse2D_FWD_DEFINED__
typedef interface SC_IEllipse2D SC_IEllipse2D;
#endif 	/* __SC_IEllipse2D_FWD_DEFINED__ */


#ifndef __SC_ISpline2D_FWD_DEFINED__
#define __SC_ISpline2D_FWD_DEFINED__
typedef interface SC_ISpline2D SC_ISpline2D;
#endif 	/* __SC_ISpline2D_FWD_DEFINED__ */


#ifndef __SC_ISingleLine2D_FWD_DEFINED__
#define __SC_ISingleLine2D_FWD_DEFINED__
typedef interface SC_ISingleLine2D SC_ISingleLine2D;
#endif 	/* __SC_ISingleLine2D_FWD_DEFINED__ */


#ifndef __SC_IChain2D_FWD_DEFINED__
#define __SC_IChain2D_FWD_DEFINED__
typedef interface SC_IChain2D SC_IChain2D;
#endif 	/* __SC_IChain2D_FWD_DEFINED__ */


#ifndef __SC_ISpiral2D_FWD_DEFINED__
#define __SC_ISpiral2D_FWD_DEFINED__
typedef interface SC_ISpiral2D SC_ISpiral2D;
#endif 	/* __SC_ISpiral2D_FWD_DEFINED__ */


#ifndef __ScLayer_FWD_DEFINED__
#define __ScLayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayer ScLayer;
#else
typedef struct ScLayer ScLayer;
#endif /* __cplusplus */

#endif 	/* __ScLayer_FWD_DEFINED__ */


#ifndef __ScPolyLines2D_FWD_DEFINED__
#define __ScPolyLines2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPolyLines2D ScPolyLines2D;
#else
typedef struct ScPolyLines2D ScPolyLines2D;
#endif /* __cplusplus */

#endif 	/* __ScPolyLines2D_FWD_DEFINED__ */


#ifndef __ScPolyLine2D_FWD_DEFINED__
#define __ScPolyLine2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPolyLine2D ScPolyLine2D;
#else
typedef struct ScPolyLine2D ScPolyLine2D;
#endif /* __cplusplus */

#endif 	/* __ScPolyLine2D_FWD_DEFINED__ */


#ifndef __ScEllipse2D_FWD_DEFINED__
#define __ScEllipse2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEllipse2D ScEllipse2D;
#else
typedef struct ScEllipse2D ScEllipse2D;
#endif /* __cplusplus */

#endif 	/* __ScEllipse2D_FWD_DEFINED__ */


#ifndef __ScSpline2D_FWD_DEFINED__
#define __ScSpline2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSpline2D ScSpline2D;
#else
typedef struct ScSpline2D ScSpline2D;
#endif /* __cplusplus */

#endif 	/* __ScSpline2D_FWD_DEFINED__ */


#ifndef __ScLineArray2D_FWD_DEFINED__
#define __ScLineArray2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLineArray2D ScLineArray2D;
#else
typedef struct ScLineArray2D ScLineArray2D;
#endif /* __cplusplus */

#endif 	/* __ScLineArray2D_FWD_DEFINED__ */


#ifndef __ScHatch_FWD_DEFINED__
#define __ScHatch_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScHatch ScHatch;
#else
typedef struct ScHatch ScHatch;
#endif /* __cplusplus */

#endif 	/* __ScHatch_FWD_DEFINED__ */


#ifndef __ScLineArrays2D_FWD_DEFINED__
#define __ScLineArrays2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLineArrays2D ScLineArrays2D;
#else
typedef struct ScLineArrays2D ScLineArrays2D;
#endif /* __cplusplus */

#endif 	/* __ScLineArrays2D_FWD_DEFINED__ */


#ifndef __ScRectangle2D_FWD_DEFINED__
#define __ScRectangle2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScRectangle2D ScRectangle2D;
#else
typedef struct ScRectangle2D ScRectangle2D;
#endif /* __cplusplus */

#endif 	/* __ScRectangle2D_FWD_DEFINED__ */


#ifndef __ScSingleLine2D_FWD_DEFINED__
#define __ScSingleLine2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSingleLine2D ScSingleLine2D;
#else
typedef struct ScSingleLine2D ScSingleLine2D;
#endif /* __cplusplus */

#endif 	/* __ScSingleLine2D_FWD_DEFINED__ */


#ifndef __ScTriangle2D_FWD_DEFINED__
#define __ScTriangle2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScTriangle2D ScTriangle2D;
#else
typedef struct ScTriangle2D ScTriangle2D;
#endif /* __cplusplus */

#endif 	/* __ScTriangle2D_FWD_DEFINED__ */


#ifndef __ScChain2D_FWD_DEFINED__
#define __ScChain2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScChain2D ScChain2D;
#else
typedef struct ScChain2D ScChain2D;
#endif /* __cplusplus */

#endif 	/* __ScChain2D_FWD_DEFINED__ */


#ifndef __ScSpiral2D_FWD_DEFINED__
#define __ScSpiral2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSpiral2D ScSpiral2D;
#else
typedef struct ScSpiral2D ScSpiral2D;
#endif /* __cplusplus */

#endif 	/* __ScSpiral2D_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_lines2d_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_lines2d_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_lines2d_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamLines2D_LIBRARY_DEFINED__
#define __ScapsSamLines2D_LIBRARY_DEFINED__

/* library ScapsSamLines2D */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 1)
typedef struct sc_com_point_tag
    {
    double x;
    double y;
    long status;
    } 	sc_com_point;

typedef struct sc_com_point_3d_tag
    {
    double x;
    double y;
    double z;
    long status;
    } 	sc_com_point_3d;

typedef struct sc_com_line_tag
    {
    double x0;
    double y0;
    double x1;
    double y1;
    long status;
    } 	sc_com_line;

typedef struct sc_com_line_3d_tag
    {
    double x0;
    double y0;
    double z0;
    double x1;
    double y1;
    double z1;
    long status;
    } 	sc_com_line_3d;


#pragma pack(pop)

EXTERN_C const IID LIBID_ScapsSamLines2D;

#ifndef __SC_IPolyLine2D_INTERFACE_DEFINED__
#define __SC_IPolyLine2D_INTERFACE_DEFINED__

/* interface SC_IPolyLine2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IPolyLine2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD53D754-4F00-11d1-9705-008048EEE00C")
    SC_IPolyLine2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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

    typedef struct SC_IPolyLine2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPolyLine2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPolyLine2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPolyLine2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPolyLine2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPolyLine2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPolyLine2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPolyLine2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IPolyLine2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IPolyLine2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IPolyLine2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IPolyLine2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IPolyLine2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IPolyLine2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IPolyLine2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IPolyLine2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IPolyLine2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IPolyLine2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IPolyLine2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IPolyLine2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IPolyLine2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IPolyLine2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IPolyLine2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_IPolyLine2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_IPolyLine2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_IPolyLine2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IPolyLine2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IPolyLine2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IPolyLine2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IPolyLine2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_IPolyLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IPolyLine2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IPolyLine2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IPolyLine2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IPolyLine2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IPolyLine2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IPolyLine2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IPolyLine2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_IPolyLine2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_IPolyLine2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_IPolyLine2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IPolyLine2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IPolyLine2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IPolyLine2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IPolyLine2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IPolyLine2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IPolyLine2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IPolyLine2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IPolyLine2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IPolyLine2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IPolyLine2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IPolyLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IPolyLine2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IPolyLine2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IPolyLine2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IPolyLine2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IPolyLine2DVtbl;

    interface SC_IPolyLine2D
    {
        CONST_VTBL struct SC_IPolyLine2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPolyLine2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPolyLine2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPolyLine2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPolyLine2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPolyLine2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPolyLine2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPolyLine2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPolyLine2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IPolyLine2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IPolyLine2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IPolyLine2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IPolyLine2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IPolyLine2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IPolyLine2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IPolyLine2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IPolyLine2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IPolyLine2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IPolyLine2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IPolyLine2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IPolyLine2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IPolyLine2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPolyLine2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPolyLine2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IPolyLine2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IPolyLine2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IPolyLine2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IPolyLine2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IPolyLine2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IPolyLine2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IPolyLine2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IPolyLine2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IPolyLine2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IPolyLine2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IPolyLine2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IPolyLine2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IPolyLine2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IPolyLine2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IPolyLine2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IPolyLine2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IPolyLine2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IPolyLine2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLine2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLine2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IPolyLine2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IPolyLine2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IPolyLine2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IPolyLine2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IPolyLine2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IPolyLine2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IPolyLine2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IPolyLine2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IPolyLine2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IPolyLine2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IPolyLine2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IPolyLine2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IPolyLine2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IPolyLine2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IPolyLine2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IPolyLine2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_IPolyLine2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_IPolyLine2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_IPolyLine2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IPolyLine2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IPolyLine2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IPolyLine2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IPolyLine2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IPolyLine2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IPolyLine2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IPolyLine2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IPolyLine2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_IPolyLine2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IPolyLine2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IPolyLine2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IPolyLine2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IPolyLine2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IPolyLine2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IPolyLine2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IPolyLine2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IPolyLine2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IPolyLine2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IPolyLine2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IPolyLine2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IPolyLine2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IPolyLine2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IPolyLine2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IPolyLine2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IPolyLine2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IPolyLine2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IPolyLine2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IPolyLine2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IPolyLine2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IPolyLine2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IPolyLine2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IPolyLine2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IPolyLine2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_IPolyLine2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_IPolyLine2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_IPolyLine2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IPolyLine2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IPolyLine2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IPolyLine2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IPolyLine2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IPolyLine2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IPolyLine2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IPolyLine2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IPolyLine2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IPolyLine2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IPolyLine2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IPolyLine2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IPolyLine2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IPolyLine2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IPolyLine2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IPolyLine2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPolyLine2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPolyLine2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPolyLine2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPolyLine2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IPolyLine2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IPolyLine2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IPolyLine2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IPolyLine2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IPolyLine2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IPolyLine2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IPolyLine2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IPolyLine2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLine2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IPolyLine2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IPolyLine2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IPolyLine2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPolyLine2D_ScGetUniqueObjectId_Proxy( 
    SC_IPolyLine2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IPolyLine2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IPolyLine2D_INTERFACE_DEFINED__ */


#ifndef __SC_IPolyLines2D_INTERFACE_DEFINED__
#define __SC_IPolyLines2D_INTERFACE_DEFINED__

/* interface SC_IPolyLines2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IPolyLines2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("048341C2-4D4F-11d1-9702-008048EEE00C")
    SC_IPolyLines2D : public IDispatch
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
            /* [retval][out] */ SC_IPolyLine2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ SC_IPolyLine2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IPolyLine2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlipLines( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSort( 
            /* [in] */ long Mode,
            /* [in] */ double Dist) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCorrectOrientation( 
            /* [in] */ long CW) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckOrientation( 
            /* [in] */ long CW,
            /* [retval][out] */ long *Ok) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpenPolyLinesCount( 
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlipLinesRev( void) = 0;
        
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

    typedef struct SC_IPolyLines2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPolyLines2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPolyLines2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPolyLines2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPolyLines2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPolyLines2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPolyLines2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPolyLines2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IPolyLines2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IPolyLines2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IPolyLines2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IPolyLines2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IPolyLines2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IPolyLines2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IPolyLines2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IPolyLines2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IPolyLines2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IPolyLines2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IPolyLines2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ SC_IPolyLine2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IPolyLines2D * This,
            /* [in] */ SC_IPolyLine2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IPolyLines2D * This,
            /* [in] */ SC_IPolyLine2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlipLines )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IPolyLines2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IPolyLines2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IPolyLines2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IPolyLines2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IPolyLines2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IPolyLines2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IPolyLines2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IPolyLines2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IPolyLines2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IPolyLines2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IPolyLines2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IPolyLines2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IPolyLines2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSort )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Mode,
            /* [in] */ double Dist);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCorrectOrientation )( 
            SC_IPolyLines2D * This,
            /* [in] */ long CW);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckOrientation )( 
            SC_IPolyLines2D * This,
            /* [in] */ long CW,
            /* [retval][out] */ long *Ok);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpenPolyLinesCount )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IPolyLines2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IPolyLines2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IPolyLines2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IPolyLines2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IPolyLines2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IPolyLines2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IPolyLines2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IPolyLines2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IPolyLines2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IPolyLines2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IPolyLines2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IPolyLines2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlipLinesRev )( 
            SC_IPolyLines2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IPolyLines2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IPolyLines2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IPolyLines2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IPolyLines2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IPolyLines2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IPolyLines2DVtbl;

    interface SC_IPolyLines2D
    {
        CONST_VTBL struct SC_IPolyLines2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPolyLines2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPolyLines2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPolyLines2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPolyLines2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPolyLines2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPolyLines2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPolyLines2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPolyLines2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IPolyLines2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IPolyLines2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IPolyLines2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IPolyLines2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IPolyLines2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IPolyLines2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IPolyLines2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IPolyLines2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IPolyLines2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IPolyLines2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IPolyLines2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IPolyLines2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IPolyLines2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPolyLines2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPolyLines2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IPolyLines2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IPolyLines2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IPolyLines2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IPolyLines2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IPolyLines2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IPolyLines2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IPolyLines2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IPolyLines2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IPolyLines2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IPolyLines2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IPolyLines2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IPolyLines2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IPolyLines2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IPolyLines2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IPolyLines2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IPolyLines2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IPolyLines2D_ScFlipLines(This)	\
    ( (This)->lpVtbl -> ScFlipLines(This) ) 

#define SC_IPolyLines2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLines2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLines2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IPolyLines2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IPolyLines2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IPolyLines2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IPolyLines2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IPolyLines2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IPolyLines2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IPolyLines2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IPolyLines2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IPolyLines2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IPolyLines2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IPolyLines2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IPolyLines2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IPolyLines2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IPolyLines2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IPolyLines2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IPolyLines2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IPolyLines2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IPolyLines2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IPolyLines2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IPolyLines2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IPolyLines2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IPolyLines2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IPolyLines2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IPolyLines2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IPolyLines2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IPolyLines2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IPolyLines2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IPolyLines2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IPolyLines2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IPolyLines2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IPolyLines2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IPolyLines2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IPolyLines2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IPolyLines2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IPolyLines2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IPolyLines2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IPolyLines2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IPolyLines2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IPolyLines2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IPolyLines2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IPolyLines2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IPolyLines2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IPolyLines2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IPolyLines2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IPolyLines2D_ScSort(This,Mode,Dist)	\
    ( (This)->lpVtbl -> ScSort(This,Mode,Dist) ) 

#define SC_IPolyLines2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IPolyLines2D_ScCorrectOrientation(This,CW)	\
    ( (This)->lpVtbl -> ScCorrectOrientation(This,CW) ) 

#define SC_IPolyLines2D_ScCheckOrientation(This,CW,Ok)	\
    ( (This)->lpVtbl -> ScCheckOrientation(This,CW,Ok) ) 

#define SC_IPolyLines2D_ScGetOpenPolyLinesCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetOpenPolyLinesCount(This,Count) ) 

#define SC_IPolyLines2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IPolyLines2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IPolyLines2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IPolyLines2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IPolyLines2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IPolyLines2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IPolyLines2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IPolyLines2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IPolyLines2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IPolyLines2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IPolyLines2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IPolyLines2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IPolyLines2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IPolyLines2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IPolyLines2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IPolyLines2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IPolyLines2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IPolyLines2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IPolyLines2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IPolyLines2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IPolyLines2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPolyLines2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPolyLines2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPolyLines2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPolyLines2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IPolyLines2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IPolyLines2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IPolyLines2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IPolyLines2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IPolyLines2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IPolyLines2D_ScFlipLinesRev(This)	\
    ( (This)->lpVtbl -> ScFlipLinesRev(This) ) 

#define SC_IPolyLines2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IPolyLines2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IPolyLines2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPolyLines2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IPolyLines2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IPolyLines2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IPolyLines2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPolyLines2D_ScOutline3D_Proxy( 
    SC_IPolyLines2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IPolyLines2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPolyLines2D_ScGetUniqueObjectId_Proxy( 
    SC_IPolyLines2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IPolyLines2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IPolyLines2D_INTERFACE_DEFINED__ */


#ifndef __SC_ILineArray2D_INTERFACE_DEFINED__
#define __SC_ILineArray2D_INTERFACE_DEFINED__

/* interface SC_ILineArray2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILineArray2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D41398E-68AB-11d1-972A-008048EEE00C")
    SC_ILineArray2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLinesInProc( 
            /* [out][in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLinesInProc( 
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLinesInProc( 
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddRow( 
            /* [in] */ IDispatch *PixelArray,
            /* [in] */ long Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLineArray( 
            /* [in] */ SC_ILineArray2D *LineArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPolyLine( 
            /* [in] */ SC_IPolyLine2D *PolyLine) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLinesInProc3D( 
            /* [out][in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLinesInProc3D( 
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLinesInProc3D( 
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddSkyWriting( 
            /* [in] */ double Start,
            /* [in] */ double End,
            /* [in] */ double BreakAngle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILineArray2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILineArray2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILineArray2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILineArray2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILineArray2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILineArray2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILineArray2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILineArray2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ILineArray2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ILineArray2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ILineArray2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ILineArray2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ILineArray2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ILineArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ILineArray2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ILineArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ILineArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ILineArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ILineArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ILineArray2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ILineArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ILineArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ILineArray2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ILineArray2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ILineArray2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ILineArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ILineArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ILineArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ILineArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ILineArray2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ILineArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ILineArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ILineArray2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLinesInProc )( 
            SC_ILineArray2D * This,
            /* [out][in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLinesInProc )( 
            SC_ILineArray2D * This,
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLinesInProc )( 
            SC_ILineArray2D * This,
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILineArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILineArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ILineArray2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ILineArray2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ILineArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ILineArray2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddRow )( 
            SC_ILineArray2D * This,
            /* [in] */ IDispatch *PixelArray,
            /* [in] */ long Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ILineArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ILineArray2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ILineArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ILineArray2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ILineArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ILineArray2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ILineArray2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ILineArray2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLineArray )( 
            SC_ILineArray2D * This,
            /* [in] */ SC_ILineArray2D *LineArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPolyLine )( 
            SC_ILineArray2D * This,
            /* [in] */ SC_IPolyLine2D *PolyLine);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ILineArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ILineArray2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ILineArray2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_ILineArray2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLinesInProc3D )( 
            SC_ILineArray2D * This,
            /* [out][in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLinesInProc3D )( 
            SC_ILineArray2D * This,
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLinesInProc3D )( 
            SC_ILineArray2D * This,
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ILineArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ILineArray2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ILineArray2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ILineArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ILineArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ILineArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ILineArray2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ILineArray2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ILineArray2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ILineArray2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ILineArray2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ILineArray2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ILineArray2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ILineArray2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ILineArray2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ILineArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ILineArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ILineArray2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ILineArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ILineArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ILineArray2D * This,
            /* [retval][out] */ __int64 *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddSkyWriting )( 
            SC_ILineArray2D * This,
            /* [in] */ double Start,
            /* [in] */ double End,
            /* [in] */ double BreakAngle);
        
        END_INTERFACE
    } SC_ILineArray2DVtbl;

    interface SC_ILineArray2D
    {
        CONST_VTBL struct SC_ILineArray2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILineArray2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILineArray2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILineArray2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILineArray2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILineArray2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILineArray2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILineArray2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILineArray2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ILineArray2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ILineArray2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ILineArray2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ILineArray2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ILineArray2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ILineArray2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ILineArray2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ILineArray2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ILineArray2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ILineArray2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ILineArray2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ILineArray2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ILineArray2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILineArray2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILineArray2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ILineArray2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ILineArray2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ILineArray2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ILineArray2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ILineArray2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ILineArray2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ILineArray2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ILineArray2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ILineArray2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ILineArray2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ILineArray2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ILineArray2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ILineArray2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ILineArray2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ILineArray2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ILineArray2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ILineArray2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ILineArray2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArray2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArray2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ILineArray2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ILineArray2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ILineArray2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ILineArray2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ILineArray2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ILineArray2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ILineArray2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ILineArray2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ILineArray2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ILineArray2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ILineArray2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ILineArray2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ILineArray2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ILineArray2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ILineArray2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ILineArray2D_ScGetLinesInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetLinesInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_ILineArray2D_ScSetLinesInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetLinesInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_ILineArray2D_ScAddLinesInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddLinesInProc(This,Array,Size,Count,Index) ) 

#define SC_ILineArray2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ILineArray2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ILineArray2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ILineArray2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ILineArray2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ILineArray2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ILineArray2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ILineArray2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ILineArray2D_ScAddRow(This,PixelArray,Index)	\
    ( (This)->lpVtbl -> ScAddRow(This,PixelArray,Index) ) 

#define SC_ILineArray2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ILineArray2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ILineArray2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ILineArray2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ILineArray2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ILineArray2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ILineArray2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ILineArray2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ILineArray2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ILineArray2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ILineArray2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ILineArray2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ILineArray2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ILineArray2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ILineArray2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ILineArray2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ILineArray2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ILineArray2D_ScAddLineArray(This,LineArray)	\
    ( (This)->lpVtbl -> ScAddLineArray(This,LineArray) ) 

#define SC_ILineArray2D_ScAddPolyLine(This,PolyLine)	\
    ( (This)->lpVtbl -> ScAddPolyLine(This,PolyLine) ) 

#define SC_ILineArray2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ILineArray2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ILineArray2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ILineArray2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ILineArray2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ILineArray2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_ILineArray2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_ILineArray2D_ScGetLinesInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetLinesInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_ILineArray2D_ScSetLinesInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetLinesInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_ILineArray2D_ScAddLinesInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddLinesInProc3D(This,Array,Size,Count,Index) ) 

#define SC_ILineArray2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ILineArray2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ILineArray2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ILineArray2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ILineArray2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ILineArray2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ILineArray2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ILineArray2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ILineArray2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ILineArray2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ILineArray2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ILineArray2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ILineArray2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ILineArray2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ILineArray2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ILineArray2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILineArray2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILineArray2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILineArray2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILineArray2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ILineArray2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ILineArray2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ILineArray2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ILineArray2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ILineArray2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ILineArray2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ILineArray2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ILineArray2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArray2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ILineArray2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ILineArray2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ILineArray2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#define SC_ILineArray2D_ScAddSkyWriting(This,Start,End,BreakAngle)	\
    ( (This)->lpVtbl -> ScAddSkyWriting(This,Start,End,BreakAngle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ILineArray2D_ScOutline2D_Proxy( 
    SC_ILineArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_ILineArray2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ILineArray2D_ScOutline3D_Proxy( 
    SC_ILineArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_ILineArray2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ILineArray2D_ScGetUniqueObjectId_Proxy( 
    SC_ILineArray2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_ILineArray2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ILineArray2D_ScAddSkyWriting_Proxy( 
    SC_ILineArray2D * This,
    /* [in] */ double Start,
    /* [in] */ double End,
    /* [in] */ double BreakAngle);


void __RPC_STUB SC_ILineArray2D_ScAddSkyWriting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_ILineArray2D_INTERFACE_DEFINED__ */


#ifndef __SC_IHatch_INTERFACE_DEFINED__
#define __SC_IHatch_INTERFACE_DEFINED__

/* interface SC_IHatch */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IHatch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F6E8C51-EEF3-11d1-97C0-008048EEE00C")
    SC_IHatch : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLinesInProc( 
            /* [out][in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLinesInProc( 
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLinesInProc( 
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddRow( 
            /* [in] */ IDispatch *PixelArray,
            /* [in] */ long Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLineArray( 
            /* [in] */ SC_ILineArray2D *LineArray) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPolyLine( 
            /* [in] */ SC_IPolyLine2D *PolyLine) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLinesInProc3D( 
            /* [out][in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLinesInProc3D( 
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddLinesInProc3D( 
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHatchID( 
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHatchID( 
            /* [in] */ long ID) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddSkyWriting( 
            /* [in] */ double Start,
            /* [in] */ double End,
            /* [in] */ double BreakAngle) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IHatchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IHatch * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IHatch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IHatch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IHatch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IHatch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IHatch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IHatch * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IHatch * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IHatch * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IHatch * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IHatch * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IHatch * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IHatch * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IHatch * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IHatch * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IHatch * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IHatch * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IHatch * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IHatch * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IHatch * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IHatch * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IHatch * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IHatch * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IHatch * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IHatch * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IHatch * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IHatch * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IHatch * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IHatch * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IHatch * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IHatch * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IHatch * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IHatch * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IHatch * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IHatch * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IHatch * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IHatch * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLinesInProc )( 
            SC_IHatch * This,
            /* [out][in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLinesInProc )( 
            SC_IHatch * This,
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLinesInProc )( 
            SC_IHatch * This,
            /* [in] */ sc_com_line *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IHatch * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IHatch * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IHatch * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IHatch * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IHatch * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IHatch * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IHatch * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IHatch * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddRow )( 
            SC_IHatch * This,
            /* [in] */ IDispatch *PixelArray,
            /* [in] */ long Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IHatch * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IHatch * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IHatch * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IHatch * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IHatch * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IHatch * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IHatch * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IHatch * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IHatch * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IHatch * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLineArray )( 
            SC_IHatch * This,
            /* [in] */ SC_ILineArray2D *LineArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPolyLine )( 
            SC_IHatch * This,
            /* [in] */ SC_IPolyLine2D *PolyLine);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IHatch * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IHatch * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IHatch * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IHatch * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IHatch * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLinesInProc3D )( 
            SC_IHatch * This,
            /* [out][in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLinesInProc3D )( 
            SC_IHatch * This,
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddLinesInProc3D )( 
            SC_IHatch * This,
            /* [in] */ sc_com_line_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchID )( 
            SC_IHatch * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchID )( 
            SC_IHatch * This,
            /* [in] */ long ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IHatch * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IHatch * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IHatch * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IHatch * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IHatch * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IHatch * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IHatch * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IHatch * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IHatch * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IHatch * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IHatch * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IHatch * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IHatch * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IHatch * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IHatch * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IHatch * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IHatch * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IHatch * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IHatch * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IHatch * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IHatch * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IHatch * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IHatch * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IHatch * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IHatch * This,
            /* [retval][out] */ __int64 *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddSkyWriting )( 
            SC_IHatch * This,
            /* [in] */ double Start,
            /* [in] */ double End,
            /* [in] */ double BreakAngle);
        
        END_INTERFACE
    } SC_IHatchVtbl;

    interface SC_IHatch
    {
        CONST_VTBL struct SC_IHatchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IHatch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IHatch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IHatch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IHatch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IHatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IHatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IHatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IHatch_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IHatch_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IHatch_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IHatch_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IHatch_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IHatch_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IHatch_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IHatch_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IHatch_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IHatch_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IHatch_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IHatch_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IHatch_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IHatch_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IHatch_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IHatch_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IHatch_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IHatch_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IHatch_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IHatch_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IHatch_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IHatch_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IHatch_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IHatch_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IHatch_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IHatch_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IHatch_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IHatch_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IHatch_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IHatch_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IHatch_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IHatch_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IHatch_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IHatch_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IHatch_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IHatch_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IHatch_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IHatch_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IHatch_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IHatch_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IHatch_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IHatch_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IHatch_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IHatch_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IHatch_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IHatch_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IHatch_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IHatch_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IHatch_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IHatch_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IHatch_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IHatch_ScGetLinesInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetLinesInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_IHatch_ScSetLinesInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetLinesInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_IHatch_ScAddLinesInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddLinesInProc(This,Array,Size,Count,Index) ) 

#define SC_IHatch_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IHatch_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IHatch_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IHatch_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IHatch_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IHatch_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IHatch_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IHatch_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IHatch_ScAddRow(This,PixelArray,Index)	\
    ( (This)->lpVtbl -> ScAddRow(This,PixelArray,Index) ) 

#define SC_IHatch_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IHatch_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IHatch_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IHatch_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IHatch_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IHatch_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IHatch_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IHatch_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IHatch_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IHatch_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IHatch_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IHatch_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IHatch_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IHatch_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IHatch_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IHatch_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IHatch_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IHatch_ScAddLineArray(This,LineArray)	\
    ( (This)->lpVtbl -> ScAddLineArray(This,LineArray) ) 

#define SC_IHatch_ScAddPolyLine(This,PolyLine)	\
    ( (This)->lpVtbl -> ScAddPolyLine(This,PolyLine) ) 

#define SC_IHatch_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IHatch_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IHatch_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IHatch_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IHatch_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IHatch_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IHatch_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IHatch_ScGetLinesInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetLinesInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_IHatch_ScSetLinesInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetLinesInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_IHatch_ScAddLinesInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddLinesInProc3D(This,Array,Size,Count,Index) ) 

#define SC_IHatch_get_ScHatchID(This,ID)	\
    ( (This)->lpVtbl -> get_ScHatchID(This,ID) ) 

#define SC_IHatch_put_ScHatchID(This,ID)	\
    ( (This)->lpVtbl -> put_ScHatchID(This,ID) ) 

#define SC_IHatch_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IHatch_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IHatch_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IHatch_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IHatch_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IHatch_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IHatch_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IHatch_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IHatch_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IHatch_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IHatch_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IHatch_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IHatch_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IHatch_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IHatch_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IHatch_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IHatch_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IHatch_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IHatch_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IHatch_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IHatch_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IHatch_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IHatch_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IHatch_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IHatch_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IHatch_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IHatch_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IHatch_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IHatch_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IHatch_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IHatch_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IHatch_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#define SC_IHatch_ScAddSkyWriting(This,Start,End,BreakAngle)	\
    ( (This)->lpVtbl -> ScAddSkyWriting(This,Start,End,BreakAngle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScSetPropertyVariant2_Proxy( 
    SC_IHatch * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IHatch_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScRotate3D_Proxy( 
    SC_IHatch * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IHatch_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScOutline2D_Proxy( 
    SC_IHatch * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IHatch_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScOutline3D_Proxy( 
    SC_IHatch * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IHatch_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScGetUniqueObjectId_Proxy( 
    SC_IHatch * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IHatch_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IHatch_ScAddSkyWriting_Proxy( 
    SC_IHatch * This,
    /* [in] */ double Start,
    /* [in] */ double End,
    /* [in] */ double BreakAngle);


void __RPC_STUB SC_IHatch_ScAddSkyWriting_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IHatch_INTERFACE_DEFINED__ */


#ifndef __SC_ILineArrays2D_INTERFACE_DEFINED__
#define __SC_ILineArrays2D_INTERFACE_DEFINED__

/* interface SC_ILineArrays2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILineArrays2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("166BCEA3-A0AC-11d1-8C3C-008048EEDCB8")
    SC_ILineArrays2D : public IDispatch
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
            /* [retval][out] */ SC_ILineArray2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ SC_ILineArray2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_ILineArray2D *entity) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConvertToPolyLines( 
            /* [in] */ SC_IPolyLines2D *PolyLines,
            /* [in] */ double CloseDistance,
            /* [retval][out] */ long *LinesRemaining) = 0;
        
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

    typedef struct SC_ILineArrays2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILineArrays2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILineArrays2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILineArrays2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILineArrays2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILineArrays2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILineArrays2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILineArrays2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ILineArrays2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ILineArrays2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ILineArrays2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ILineArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ILineArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ILineArrays2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ILineArrays2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ILineArrays2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ILineArrays2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ILineArrays2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_ILineArrays2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ SC_ILineArray2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_ILineArrays2D * This,
            /* [in] */ SC_ILineArray2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_ILineArrays2D * This,
            /* [in] */ SC_ILineArray2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ILineArrays2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ILineArrays2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ILineArrays2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ILineArrays2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILineArrays2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILineArrays2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ILineArrays2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ILineArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ILineArrays2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ILineArrays2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ILineArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ILineArrays2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_ILineArrays2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_ILineArrays2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConvertToPolyLines )( 
            SC_ILineArrays2D * This,
            /* [in] */ SC_IPolyLines2D *PolyLines,
            /* [in] */ double CloseDistance,
            /* [retval][out] */ long *LinesRemaining);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ILineArrays2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ILineArrays2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ILineArrays2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ILineArrays2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ILineArrays2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ILineArrays2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ILineArrays2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ILineArrays2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ILineArrays2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ILineArrays2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ILineArrays2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ILineArrays2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ILineArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ILineArrays2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ILineArrays2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ILineArrays2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ILineArrays2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ILineArrays2DVtbl;

    interface SC_ILineArrays2D
    {
        CONST_VTBL struct SC_ILineArrays2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILineArrays2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILineArrays2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILineArrays2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILineArrays2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILineArrays2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILineArrays2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILineArrays2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILineArrays2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ILineArrays2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ILineArrays2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ILineArrays2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ILineArrays2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ILineArrays2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ILineArrays2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ILineArrays2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ILineArrays2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ILineArrays2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ILineArrays2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ILineArrays2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ILineArrays2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ILineArrays2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILineArrays2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILineArrays2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ILineArrays2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ILineArrays2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ILineArrays2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ILineArrays2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ILineArrays2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ILineArrays2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ILineArrays2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ILineArrays2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ILineArrays2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ILineArrays2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ILineArrays2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ILineArrays2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_ILineArrays2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_ILineArrays2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_ILineArrays2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_ILineArrays2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_ILineArrays2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArrays2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArrays2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ILineArrays2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ILineArrays2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ILineArrays2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ILineArrays2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ILineArrays2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ILineArrays2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ILineArrays2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ILineArrays2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ILineArrays2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ILineArrays2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ILineArrays2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ILineArrays2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ILineArrays2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ILineArrays2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ILineArrays2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ILineArrays2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ILineArrays2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ILineArrays2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ILineArrays2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ILineArrays2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ILineArrays2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_ILineArrays2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ILineArrays2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ILineArrays2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ILineArrays2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ILineArrays2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ILineArrays2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ILineArrays2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ILineArrays2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ILineArrays2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ILineArrays2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ILineArrays2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ILineArrays2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ILineArrays2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ILineArrays2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ILineArrays2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ILineArrays2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ILineArrays2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ILineArrays2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ILineArrays2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_ILineArrays2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_ILineArrays2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_ILineArrays2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_ILineArrays2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_ILineArrays2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ILineArrays2D_ScConvertToPolyLines(This,PolyLines,CloseDistance,LinesRemaining)	\
    ( (This)->lpVtbl -> ScConvertToPolyLines(This,PolyLines,CloseDistance,LinesRemaining) ) 

#define SC_ILineArrays2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ILineArrays2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ILineArrays2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ILineArrays2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ILineArrays2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ILineArrays2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ILineArrays2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ILineArrays2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ILineArrays2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ILineArrays2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ILineArrays2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ILineArrays2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ILineArrays2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ILineArrays2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ILineArrays2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ILineArrays2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ILineArrays2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ILineArrays2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ILineArrays2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ILineArrays2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ILineArrays2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILineArrays2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILineArrays2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILineArrays2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILineArrays2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ILineArrays2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ILineArrays2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ILineArrays2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ILineArrays2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ILineArrays2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ILineArrays2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ILineArrays2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ILineArrays2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILineArrays2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ILineArrays2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ILineArrays2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ILineArrays2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILineArrays2D_INTERFACE_DEFINED__ */


#ifndef __SC_ILayer_INTERFACE_DEFINED__
#define __SC_ILayer_INTERFACE_DEFINED__

/* interface SC_ILayer */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C13C9272-4D50-11d1-9702-008048EEE00C")
    SC_ILayer : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScActive( 
            /* [retval][out] */ long *Active) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScActive( 
            /* [in] */ long Active) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPolyLines( 
            /* [retval][out] */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ SC_ILineArrays2D **LineArrays) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumEntities( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntity( 
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPixelArrays( 
            /* [retval][out] */ IDispatch **PixelArrays) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPenNum( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPenNum( 
            /* [in] */ long Num) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHatchNum( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHatchNum( 
            /* [in] */ long Num) = 0;
        
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

    typedef struct SC_ILayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ILayer * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ILayer * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ILayer * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ILayer * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ILayer * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ILayer * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ILayer * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ILayer * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ILayer * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ILayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ILayer * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ILayer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ILayer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ILayer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ILayer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ILayer * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ILayer * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ILayer * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ILayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ILayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ILayer * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_ILayer * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_ILayer * This,
            /* [retval][out] */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_ILayer * This,
            /* [retval][out] */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ILayer * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ILayer * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ILayer * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ILayer * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ILayer * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ILayer * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ILayer * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ILayer * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ILayer * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ILayer * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ILayer * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ILayer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ILayer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ILayer * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ILayer * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ILayer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ILayer * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ILayer * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_ILayer * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_ILayer * This,
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ILayer * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ILayer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ILayer * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ILayer * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ILayer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ILayer * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ILayer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ILayer * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ILayer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ILayer * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ILayer * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ILayer * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ILayer * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_ILayer * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ILayer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ILayer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ILayer * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ILayer * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_ILayer * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_ILayer * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ILayer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ILayer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ILayer * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ILayer * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ILayer * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ILayer * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ILayer * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ILayer * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ILayer * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ILayer * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ILayer * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ILayer * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ILayer * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ILayer * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ILayer * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ILayer * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ILayer * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ILayer * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ILayer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ILayer * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ILayer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ILayer * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ILayer * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ILayer * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ILayer * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ILayerVtbl;

    interface SC_ILayer
    {
        CONST_VTBL struct SC_ILayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayer_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ILayer_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ILayer_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ILayer_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ILayer_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ILayer_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ILayer_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ILayer_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ILayer_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ILayer_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ILayer_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ILayer_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ILayer_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ILayer_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILayer_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ILayer_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ILayer_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ILayer_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ILayer_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ILayer_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ILayer_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ILayer_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ILayer_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ILayer_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ILayer_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ILayer_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ILayer_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_ILayer_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_ILayer_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_ILayer_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_ILayer_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILayer_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILayer_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ILayer_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ILayer_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ILayer_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ILayer_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ILayer_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ILayer_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ILayer_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ILayer_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ILayer_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ILayer_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ILayer_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ILayer_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ILayer_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ILayer_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ILayer_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ILayer_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ILayer_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ILayer_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ILayer_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ILayer_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ILayer_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ILayer_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ILayer_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_ILayer_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_ILayer_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_ILayer_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ILayer_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ILayer_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ILayer_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ILayer_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ILayer_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ILayer_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ILayer_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ILayer_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ILayer_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ILayer_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ILayer_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ILayer_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ILayer_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ILayer_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ILayer_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ILayer_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ILayer_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_ILayer_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ILayer_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ILayer_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ILayer_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ILayer_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ILayer_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ILayer_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_ILayer_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_ILayer_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_ILayer_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_ILayer_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ILayer_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ILayer_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ILayer_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ILayer_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ILayer_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ILayer_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ILayer_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ILayer_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ILayer_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ILayer_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ILayer_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ILayer_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ILayer_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ILayer_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ILayer_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILayer_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ILayer_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILayer_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ILayer_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ILayer_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ILayer_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ILayer_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ILayer_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ILayer_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ILayer_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ILayer_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ILayer_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ILayer_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ILayer_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ILayer_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ILayer_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayer_INTERFACE_DEFINED__ */


#ifndef __SC_IVarEntity2D_INTERFACE_DEFINED__
#define __SC_IVarEntity2D_INTERFACE_DEFINED__

/* interface SC_IVarEntity2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IVarEntity2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("606F6F83-DBAF-11d1-8C74-008048EEDCB8")
    SC_IVarEntity2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumEntities( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntity( 
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
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

    typedef struct SC_IVarEntity2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IVarEntity2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IVarEntity2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IVarEntity2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IVarEntity2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IVarEntity2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IVarEntity2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IVarEntity2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IVarEntity2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IVarEntity2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IVarEntity2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IVarEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IVarEntity2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IVarEntity2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IVarEntity2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IVarEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IVarEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IVarEntity2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IVarEntity2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IVarEntity2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IVarEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IVarEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IVarEntity2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IVarEntity2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IVarEntity2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IVarEntity2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IVarEntity2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IVarEntity2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IVarEntity2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IVarEntity2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IVarEntity2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IVarEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IVarEntity2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IVarEntity2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IVarEntity2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IVarEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IVarEntity2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IVarEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IVarEntity2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IVarEntity2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IVarEntity2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IVarEntity2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IVarEntity2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IVarEntity2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IVarEntity2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IVarEntity2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IVarEntity2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IVarEntity2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IVarEntity2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IVarEntity2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IVarEntity2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IVarEntity2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IVarEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IVarEntity2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IVarEntity2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IVarEntity2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IVarEntity2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IVarEntity2DVtbl;

    interface SC_IVarEntity2D
    {
        CONST_VTBL struct SC_IVarEntity2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IVarEntity2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IVarEntity2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IVarEntity2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IVarEntity2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IVarEntity2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IVarEntity2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IVarEntity2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IVarEntity2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IVarEntity2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IVarEntity2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IVarEntity2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IVarEntity2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IVarEntity2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IVarEntity2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IVarEntity2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IVarEntity2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IVarEntity2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IVarEntity2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IVarEntity2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IVarEntity2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IVarEntity2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IVarEntity2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IVarEntity2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IVarEntity2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IVarEntity2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IVarEntity2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IVarEntity2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IVarEntity2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IVarEntity2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IVarEntity2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IVarEntity2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IVarEntity2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IVarEntity2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IVarEntity2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IVarEntity2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IVarEntity2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IVarEntity2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IVarEntity2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IVarEntity2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IVarEntity2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IVarEntity2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IVarEntity2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IVarEntity2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IVarEntity2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IVarEntity2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IVarEntity2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IVarEntity2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IVarEntity2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IVarEntity2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IVarEntity2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IVarEntity2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IVarEntity2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IVarEntity2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IVarEntity2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IVarEntity2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IVarEntity2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IVarEntity2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IVarEntity2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IVarEntity2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IVarEntity2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IVarEntity2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IVarEntity2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IVarEntity2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IVarEntity2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IVarEntity2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IVarEntity2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IVarEntity2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IVarEntity2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IVarEntity2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IVarEntity2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IVarEntity2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IVarEntity2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IVarEntity2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IVarEntity2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IVarEntity2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IVarEntity2D_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_IVarEntity2D_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_IVarEntity2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IVarEntity2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IVarEntity2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IVarEntity2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IVarEntity2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IVarEntity2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IVarEntity2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IVarEntity2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IVarEntity2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IVarEntity2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IVarEntity2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IVarEntity2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IVarEntity2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IVarEntity2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IVarEntity2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IVarEntity2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IVarEntity2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IVarEntity2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IVarEntity2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IVarEntity2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IVarEntity2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IVarEntity2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IVarEntity2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IVarEntity2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IVarEntity2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IVarEntity2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IVarEntity2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IVarEntity2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IVarEntity2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IVarEntity2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IVarEntity2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IVarEntity2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IVarEntity2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IVarEntity2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IVarEntity2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IVarEntity2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IVarEntity2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IVarEntity2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IVarEntity2D_INTERFACE_DEFINED__ */


#ifndef __SC_ISequence2D_INTERFACE_DEFINED__
#define __SC_ISequence2D_INTERFACE_DEFINED__

/* interface SC_ISequence2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISequence2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8549731-CD97-11d2-9AC8-008048EEE00C")
    SC_ISequence2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReset( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBeat( 
            /* [retval][out] */ long *Beat) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBeat( 
            /* [in] */ long Beat) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSequenceCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResetCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResetCount( 
            /* [in] */ long Count) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumEntities( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntity( 
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
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
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSequenceCount( 
            /* [in] */ long Count) = 0;
        
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

    typedef struct SC_ISequence2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISequence2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISequence2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISequence2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISequence2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISequence2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISequence2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISequence2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ISequence2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ISequence2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ISequence2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ISequence2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ISequence2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ISequence2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ISequence2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ISequence2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ISequence2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ISequence2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ISequence2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ISequence2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ISequence2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ISequence2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ISequence2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ISequence2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ISequence2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ISequence2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ISequence2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ISequence2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ISequence2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ISequence2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ISequence2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ISequence2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ISequence2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ISequence2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ISequence2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ISequence2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISequence2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISequence2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ISequence2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ISequence2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ISequence2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ISequence2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ISequence2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReset )( 
            SC_ISequence2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBeat )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Beat);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBeat )( 
            SC_ISequence2D * This,
            /* [in] */ long Beat);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSequenceCount )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResetCount )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResetCount )( 
            SC_ISequence2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ISequence2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ISequence2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ISequence2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ISequence2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ISequence2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ISequence2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ISequence2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ISequence2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ISequence2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ISequence2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ISequence2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_ISequence2D * This,
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ISequence2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ISequence2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ISequence2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ISequence2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ISequence2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ISequence2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ISequence2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ISequence2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ISequence2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ISequence2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ISequence2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ISequence2D * This,
            long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSequenceCount )( 
            SC_ISequence2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ISequence2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ISequence2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ISequence2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ISequence2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ISequence2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ISequence2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ISequence2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ISequence2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ISequence2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ISequence2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ISequence2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ISequence2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ISequence2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ISequence2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ISequence2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ISequence2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ISequence2DVtbl;

    interface SC_ISequence2D
    {
        CONST_VTBL struct SC_ISequence2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISequence2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISequence2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISequence2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISequence2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISequence2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISequence2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISequence2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISequence2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ISequence2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ISequence2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ISequence2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ISequence2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ISequence2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ISequence2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ISequence2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ISequence2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ISequence2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ISequence2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ISequence2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ISequence2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ISequence2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISequence2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISequence2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ISequence2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ISequence2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ISequence2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ISequence2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ISequence2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ISequence2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ISequence2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ISequence2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ISequence2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ISequence2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ISequence2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISequence2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISequence2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ISequence2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ISequence2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ISequence2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ISequence2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ISequence2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ISequence2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ISequence2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ISequence2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ISequence2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ISequence2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ISequence2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ISequence2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ISequence2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ISequence2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ISequence2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ISequence2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ISequence2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ISequence2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ISequence2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ISequence2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ISequence2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ISequence2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ISequence2D_ScReset(This)	\
    ( (This)->lpVtbl -> ScReset(This) ) 

#define SC_ISequence2D_get_ScBeat(This,Beat)	\
    ( (This)->lpVtbl -> get_ScBeat(This,Beat) ) 

#define SC_ISequence2D_put_ScBeat(This,Beat)	\
    ( (This)->lpVtbl -> put_ScBeat(This,Beat) ) 

#define SC_ISequence2D_get_ScSequenceCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScSequenceCount(This,Count) ) 

#define SC_ISequence2D_get_ScResetCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScResetCount(This,Count) ) 

#define SC_ISequence2D_put_ScResetCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScResetCount(This,Count) ) 

#define SC_ISequence2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ISequence2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ISequence2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ISequence2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ISequence2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ISequence2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ISequence2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ISequence2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ISequence2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ISequence2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ISequence2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ISequence2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ISequence2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ISequence2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ISequence2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ISequence2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ISequence2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ISequence2D_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_ISequence2D_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_ISequence2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ISequence2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ISequence2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ISequence2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ISequence2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ISequence2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ISequence2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ISequence2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ISequence2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ISequence2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ISequence2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ISequence2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ISequence2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ISequence2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ISequence2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ISequence2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ISequence2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ISequence2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ISequence2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ISequence2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ISequence2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ISequence2D_put_ScSequenceCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScSequenceCount(This,Count) ) 

#define SC_ISequence2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISequence2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISequence2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISequence2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISequence2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ISequence2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ISequence2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ISequence2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ISequence2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ISequence2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ISequence2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ISequence2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ISequence2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISequence2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ISequence2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ISequence2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ISequence2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ISequence2D_INTERFACE_DEFINED__ */


#ifndef __SC_IRectangle2D_INTERFACE_DEFINED__
#define __SC_IRectangle2D_INTERFACE_DEFINED__

/* interface SC_IRectangle2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IRectangle2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5AACF131-AA19-11d1-8C46-008048EEDCB8")
    SC_IRectangle2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( 
            double MinX,
            double MinY,
            double MaxX,
            double MaxY) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEdgeSegmentCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEdgeSegmentCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEdgeRadius( 
            /* [retval][out] */ double *Radius) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEdgeRadius( 
            /* [in] */ double Radius) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRegenerate( void) = 0;
        
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

    typedef struct SC_IRectangle2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IRectangle2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IRectangle2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IRectangle2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IRectangle2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IRectangle2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IRectangle2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IRectangle2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IRectangle2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IRectangle2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IRectangle2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IRectangle2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IRectangle2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IRectangle2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IRectangle2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IRectangle2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IRectangle2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IRectangle2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IRectangle2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IRectangle2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IRectangle2D * This,
            double MinX,
            double MinY,
            double MaxX,
            double MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IRectangle2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IRectangle2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IRectangle2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IRectangle2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IRectangle2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IRectangle2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IRectangle2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IRectangle2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IRectangle2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_IRectangle2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_IRectangle2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_IRectangle2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IRectangle2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IRectangle2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IRectangle2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IRectangle2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEdgeSegmentCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEdgeSegmentCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEdgeRadius )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Radius);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEdgeRadius )( 
            SC_IRectangle2D * This,
            /* [in] */ double Radius);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IRectangle2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IRectangle2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IRectangle2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IRectangle2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IRectangle2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IRectangle2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IRectangle2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IRectangle2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IRectangle2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IRectangle2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IRectangle2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IRectangle2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_IRectangle2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_IRectangle2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_IRectangle2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IRectangle2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IRectangle2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IRectangle2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IRectangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IRectangle2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRegenerate )( 
            SC_IRectangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IRectangle2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IRectangle2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IRectangle2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IRectangle2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IRectangle2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IRectangle2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IRectangle2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IRectangle2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IRectangle2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IRectangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IRectangle2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IRectangle2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IRectangle2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IRectangle2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IRectangle2DVtbl;

    interface SC_IRectangle2D
    {
        CONST_VTBL struct SC_IRectangle2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IRectangle2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IRectangle2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IRectangle2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IRectangle2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IRectangle2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IRectangle2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IRectangle2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IRectangle2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IRectangle2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IRectangle2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IRectangle2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IRectangle2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IRectangle2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IRectangle2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IRectangle2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IRectangle2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IRectangle2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IRectangle2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IRectangle2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IRectangle2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IRectangle2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IRectangle2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IRectangle2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IRectangle2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IRectangle2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IRectangle2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IRectangle2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IRectangle2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IRectangle2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IRectangle2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IRectangle2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IRectangle2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IRectangle2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IRectangle2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IRectangle2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IRectangle2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IRectangle2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IRectangle2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IRectangle2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IRectangle2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IRectangle2D_ScGenerate(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScGenerate(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IRectangle2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IRectangle2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IRectangle2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IRectangle2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IRectangle2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IRectangle2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IRectangle2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IRectangle2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IRectangle2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IRectangle2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IRectangle2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IRectangle2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IRectangle2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IRectangle2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IRectangle2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IRectangle2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IRectangle2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IRectangle2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IRectangle2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_IRectangle2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_IRectangle2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_IRectangle2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IRectangle2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IRectangle2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IRectangle2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IRectangle2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IRectangle2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IRectangle2D_get_ScEdgeSegmentCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScEdgeSegmentCount(This,Count) ) 

#define SC_IRectangle2D_put_ScEdgeSegmentCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScEdgeSegmentCount(This,Count) ) 

#define SC_IRectangle2D_get_ScEdgeRadius(This,Radius)	\
    ( (This)->lpVtbl -> get_ScEdgeRadius(This,Radius) ) 

#define SC_IRectangle2D_put_ScEdgeRadius(This,Radius)	\
    ( (This)->lpVtbl -> put_ScEdgeRadius(This,Radius) ) 

#define SC_IRectangle2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IRectangle2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IRectangle2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_IRectangle2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IRectangle2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IRectangle2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IRectangle2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IRectangle2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IRectangle2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IRectangle2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IRectangle2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IRectangle2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IRectangle2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IRectangle2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IRectangle2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IRectangle2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IRectangle2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IRectangle2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IRectangle2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IRectangle2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IRectangle2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IRectangle2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IRectangle2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IRectangle2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IRectangle2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IRectangle2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IRectangle2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IRectangle2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_IRectangle2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_IRectangle2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_IRectangle2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IRectangle2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IRectangle2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IRectangle2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IRectangle2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IRectangle2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IRectangle2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IRectangle2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IRectangle2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IRectangle2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IRectangle2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IRectangle2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IRectangle2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IRectangle2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IRectangle2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IRectangle2D_ScRegenerate(This)	\
    ( (This)->lpVtbl -> ScRegenerate(This) ) 

#define SC_IRectangle2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IRectangle2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IRectangle2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IRectangle2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IRectangle2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IRectangle2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IRectangle2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IRectangle2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IRectangle2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IRectangle2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IRectangle2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IRectangle2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IRectangle2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IRectangle2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IRectangle2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IRectangle2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IRectangle2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScSetMarkFlags_Proxy( 
    SC_IRectangle2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IRectangle2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScGetMarkFlags_Proxy( 
    SC_IRectangle2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IRectangle2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScSetPropertyVariant2_Proxy( 
    SC_IRectangle2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IRectangle2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScRotate3D_Proxy( 
    SC_IRectangle2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IRectangle2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScOutline2D_Proxy( 
    SC_IRectangle2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IRectangle2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScOutline3D_Proxy( 
    SC_IRectangle2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IRectangle2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IRectangle2D_ScGetUniqueObjectId_Proxy( 
    SC_IRectangle2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IRectangle2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IRectangle2D_INTERFACE_DEFINED__ */


#ifndef __SC_ITriangle2D_INTERFACE_DEFINED__
#define __SC_ITriangle2D_INTERFACE_DEFINED__

/* interface SC_ITriangle2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ITriangle2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF300AB2-9E89-11d2-8EE8-00C0DFEA4A3A")
    SC_ITriangle2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPoint( 
            short i,
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPoint( 
            short i,
            double *p_X,
            double *p_Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( 
            /* [in] */ double P0x,
            /* [in] */ double P0y,
            /* [in] */ double P1x,
            /* [in] */ double P1y,
            /* [in] */ double P2x,
            /* [in] */ double P2y) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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

    typedef struct SC_ITriangle2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ITriangle2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ITriangle2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ITriangle2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ITriangle2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ITriangle2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ITriangle2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ITriangle2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ITriangle2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ITriangle2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ITriangle2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ITriangle2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ITriangle2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ITriangle2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ITriangle2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ITriangle2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ITriangle2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ITriangle2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ITriangle2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ITriangle2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ITriangle2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ITriangle2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ITriangle2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ITriangle2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ITriangle2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ITriangle2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ITriangle2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ITriangle2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ITriangle2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_ITriangle2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_ITriangle2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_ITriangle2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ITriangle2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ITriangle2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ITriangle2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ITriangle2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ITriangle2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_ITriangle2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPoint )( 
            SC_ITriangle2D * This,
            short i,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPoint )( 
            SC_ITriangle2D * This,
            short i,
            double *p_X,
            double *p_Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_ITriangle2D * This,
            /* [in] */ double P0x,
            /* [in] */ double P0y,
            /* [in] */ double P1x,
            /* [in] */ double P1y,
            /* [in] */ double P2x,
            /* [in] */ double P2y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ITriangle2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ITriangle2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ITriangle2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ITriangle2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ITriangle2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ITriangle2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ITriangle2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ITriangle2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ITriangle2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ITriangle2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ITriangle2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_ITriangle2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_ITriangle2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_ITriangle2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_ITriangle2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ITriangle2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ITriangle2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ITriangle2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ITriangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ITriangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ITriangle2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ITriangle2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ITriangle2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ITriangle2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ITriangle2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ITriangle2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ITriangle2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ITriangle2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ITriangle2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ITriangle2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ITriangle2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ITriangle2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ITriangle2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ITriangle2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ITriangle2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ITriangle2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ITriangle2DVtbl;

    interface SC_ITriangle2D
    {
        CONST_VTBL struct SC_ITriangle2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ITriangle2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ITriangle2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ITriangle2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ITriangle2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ITriangle2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ITriangle2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ITriangle2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ITriangle2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ITriangle2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ITriangle2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ITriangle2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ITriangle2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ITriangle2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ITriangle2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ITriangle2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ITriangle2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ITriangle2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ITriangle2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ITriangle2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ITriangle2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ITriangle2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ITriangle2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ITriangle2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ITriangle2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ITriangle2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ITriangle2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ITriangle2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ITriangle2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ITriangle2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ITriangle2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ITriangle2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ITriangle2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ITriangle2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ITriangle2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ITriangle2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ITriangle2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ITriangle2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ITriangle2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ITriangle2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ITriangle2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ITriangle2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ITriangle2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ITriangle2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ITriangle2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ITriangle2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ITriangle2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ITriangle2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ITriangle2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ITriangle2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ITriangle2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ITriangle2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ITriangle2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ITriangle2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ITriangle2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ITriangle2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ITriangle2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ITriangle2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ITriangle2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ITriangle2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_ITriangle2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_ITriangle2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_ITriangle2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ITriangle2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ITriangle2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ITriangle2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ITriangle2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ITriangle2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ITriangle2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ITriangle2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ITriangle2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_ITriangle2D_ScSetPoint(This,i,X,Y)	\
    ( (This)->lpVtbl -> ScSetPoint(This,i,X,Y) ) 

#define SC_ITriangle2D_ScGetPoint(This,i,p_X,p_Y)	\
    ( (This)->lpVtbl -> ScGetPoint(This,i,p_X,p_Y) ) 

#define SC_ITriangle2D_ScGenerate(This,P0x,P0y,P1x,P1y,P2x,P2y)	\
    ( (This)->lpVtbl -> ScGenerate(This,P0x,P0y,P1x,P1y,P2x,P2y) ) 

#define SC_ITriangle2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ITriangle2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ITriangle2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ITriangle2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ITriangle2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ITriangle2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ITriangle2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ITriangle2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ITriangle2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ITriangle2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ITriangle2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ITriangle2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ITriangle2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ITriangle2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ITriangle2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ITriangle2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ITriangle2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ITriangle2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ITriangle2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ITriangle2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ITriangle2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ITriangle2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ITriangle2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_ITriangle2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_ITriangle2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_ITriangle2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_ITriangle2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_ITriangle2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ITriangle2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ITriangle2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ITriangle2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ITriangle2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ITriangle2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ITriangle2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ITriangle2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ITriangle2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ITriangle2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ITriangle2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ITriangle2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ITriangle2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ITriangle2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ITriangle2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ITriangle2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ITriangle2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ITriangle2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ITriangle2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ITriangle2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ITriangle2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ITriangle2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ITriangle2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ITriangle2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ITriangle2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ITriangle2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ITriangle2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ITriangle2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ITriangle2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ITriangle2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ITriangle2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ITriangle2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ITriangle2D_ScRotate3D_Proxy( 
    SC_ITriangle2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_ITriangle2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ITriangle2D_ScOutline2D_Proxy( 
    SC_ITriangle2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_ITriangle2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ITriangle2D_ScOutline3D_Proxy( 
    SC_ITriangle2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_ITriangle2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ITriangle2D_ScGetUniqueObjectId_Proxy( 
    SC_ITriangle2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_ITriangle2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_ITriangle2D_INTERFACE_DEFINED__ */


#ifndef __SC_IEllipse2D_INTERFACE_DEFINED__
#define __SC_IEllipse2D_INTERFACE_DEFINED__

/* interface SC_IEllipse2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEllipse2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BB653042-7A5A-11d2-8CED-008048EEDCB8")
    SC_IEllipse2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( 
            double MinX,
            double MinY,
            double MaxX,
            double MaxY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSegmentCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSegmentCount( 
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGenerationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGenerationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGenerationPoint( 
            /* [in] */ long Index,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGenerationPoint( 
            /* [in] */ long Index,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGenerationPointValid( 
            /* [in] */ long Index,
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate2( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStartAngle( 
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStartAngle( 
            /* [in] */ double Angle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDeltaAngle( 
            /* [retval][out] */ double *Delta) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDeltaAngle( 
            /* [in] */ double Delta) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRadius( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMiddlePoint( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate3( 
            /* [in] */ double MiddleX,
            /* [in] */ double MiddleY,
            /* [in] */ double RadiusX,
            /* [in] */ double RadiusY) = 0;
        
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

    typedef struct SC_IEllipse2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEllipse2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEllipse2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEllipse2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEllipse2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEllipse2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEllipse2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEllipse2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEllipse2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEllipse2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEllipse2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEllipse2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEllipse2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEllipse2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEllipse2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEllipse2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEllipse2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEllipse2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEllipse2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IEllipse2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEllipse2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IEllipse2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IEllipse2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IEllipse2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IEllipse2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IEllipse2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IEllipse2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IEllipse2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IEllipse2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_IEllipse2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_IEllipse2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_IEllipse2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEllipse2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEllipse2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEllipse2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IEllipse2D * This,
            double MinX,
            double MinY,
            double MaxX,
            double MaxY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSegmentCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSegmentCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEllipse2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEllipse2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEllipse2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEllipse2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEllipse2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEllipse2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IEllipse2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IEllipse2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEllipse2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IEllipse2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IEllipse2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IEllipse2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_IEllipse2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_IEllipse2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_IEllipse2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGenerationMode )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGenerationMode )( 
            SC_IEllipse2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGenerationPoint )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGenerationPoint )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGenerationPointValid )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate2 )( 
            SC_IEllipse2D * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEllipse2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEllipse2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEllipse2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IEllipse2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IEllipse2D * This,
            long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStartAngle )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Angle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStartAngle )( 
            SC_IEllipse2D * This,
            /* [in] */ double Angle);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDeltaAngle )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Delta);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDeltaAngle )( 
            SC_IEllipse2D * This,
            /* [in] */ double Delta);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRadius )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMiddlePoint )( 
            SC_IEllipse2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate3 )( 
            SC_IEllipse2D * This,
            /* [in] */ double MiddleX,
            /* [in] */ double MiddleY,
            /* [in] */ double RadiusX,
            /* [in] */ double RadiusY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IEllipse2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IEllipse2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IEllipse2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IEllipse2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IEllipse2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IEllipse2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IEllipse2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IEllipse2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEllipse2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEllipse2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEllipse2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IEllipse2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEllipse2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEllipse2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEllipse2DVtbl;

    interface SC_IEllipse2D
    {
        CONST_VTBL struct SC_IEllipse2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEllipse2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEllipse2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEllipse2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEllipse2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEllipse2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEllipse2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEllipse2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEllipse2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEllipse2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEllipse2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEllipse2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEllipse2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEllipse2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEllipse2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEllipse2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEllipse2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEllipse2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEllipse2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEllipse2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEllipse2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEllipse2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEllipse2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEllipse2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEllipse2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEllipse2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEllipse2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEllipse2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEllipse2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IEllipse2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IEllipse2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IEllipse2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IEllipse2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IEllipse2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IEllipse2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IEllipse2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IEllipse2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IEllipse2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IEllipse2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IEllipse2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IEllipse2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IEllipse2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEllipse2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEllipse2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEllipse2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEllipse2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEllipse2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IEllipse2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IEllipse2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IEllipse2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IEllipse2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IEllipse2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IEllipse2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IEllipse2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IEllipse2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IEllipse2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IEllipse2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IEllipse2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IEllipse2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IEllipse2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_IEllipse2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_IEllipse2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_IEllipse2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEllipse2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEllipse2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEllipse2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IEllipse2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IEllipse2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEllipse2D_ScGenerate(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScGenerate(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEllipse2D_get_ScSegmentCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScSegmentCount(This,Count) ) 

#define SC_IEllipse2D_put_ScSegmentCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScSegmentCount(This,Count) ) 

#define SC_IEllipse2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEllipse2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEllipse2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_IEllipse2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEllipse2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEllipse2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEllipse2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEllipse2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEllipse2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEllipse2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEllipse2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEllipse2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEllipse2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IEllipse2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IEllipse2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IEllipse2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IEllipse2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IEllipse2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IEllipse2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IEllipse2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEllipse2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEllipse2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEllipse2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IEllipse2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IEllipse2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IEllipse2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IEllipse2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IEllipse2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_IEllipse2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_IEllipse2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_IEllipse2D_get_ScGenerationMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScGenerationMode(This,Mode) ) 

#define SC_IEllipse2D_put_ScGenerationMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScGenerationMode(This,Mode) ) 

#define SC_IEllipse2D_ScGetGenerationPoint(This,Index,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetGenerationPoint(This,Index,X,Y,Z) ) 

#define SC_IEllipse2D_ScSetGenerationPoint(This,Index,X,Y,Z)	\
    ( (This)->lpVtbl -> ScSetGenerationPoint(This,Index,X,Y,Z) ) 

#define SC_IEllipse2D_ScGetGenerationPointValid(This,Index,Valid)	\
    ( (This)->lpVtbl -> ScGetGenerationPointValid(This,Index,Valid) ) 

#define SC_IEllipse2D_ScGenerate2(This)	\
    ( (This)->lpVtbl -> ScGenerate2(This) ) 

#define SC_IEllipse2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEllipse2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEllipse2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEllipse2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEllipse2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEllipse2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IEllipse2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IEllipse2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IEllipse2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IEllipse2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IEllipse2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IEllipse2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IEllipse2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IEllipse2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IEllipse2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IEllipse2D_get_ScStartAngle(This,Angle)	\
    ( (This)->lpVtbl -> get_ScStartAngle(This,Angle) ) 

#define SC_IEllipse2D_put_ScStartAngle(This,Angle)	\
    ( (This)->lpVtbl -> put_ScStartAngle(This,Angle) ) 

#define SC_IEllipse2D_get_ScDeltaAngle(This,Delta)	\
    ( (This)->lpVtbl -> get_ScDeltaAngle(This,Delta) ) 

#define SC_IEllipse2D_put_ScDeltaAngle(This,Delta)	\
    ( (This)->lpVtbl -> put_ScDeltaAngle(This,Delta) ) 

#define SC_IEllipse2D_ScGetRadius(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetRadius(This,Index,Value) ) 

#define SC_IEllipse2D_ScGetMiddlePoint(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetMiddlePoint(This,Index,Value) ) 

#define SC_IEllipse2D_ScGenerate3(This,MiddleX,MiddleY,RadiusX,RadiusY)	\
    ( (This)->lpVtbl -> ScGenerate3(This,MiddleX,MiddleY,RadiusX,RadiusY) ) 

#define SC_IEllipse2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEllipse2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEllipse2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEllipse2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEllipse2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IEllipse2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IEllipse2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IEllipse2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IEllipse2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IEllipse2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IEllipse2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEllipse2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEllipse2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEllipse2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEllipse2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEllipse2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEllipse2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScSetDimensionLimit_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long LimitIndex,
    /* [in] */ double Limit);


void __RPC_STUB SC_IEllipse2D_ScSetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScGetDimensionLimit_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long LimitIndex,
    /* [retval][out] */ double *Limit);


void __RPC_STUB SC_IEllipse2D_ScGetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_get_ScDimensionLimitFlags_Proxy( 
    SC_IEllipse2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IEllipse2D_get_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_put_ScDimensionLimitFlags_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IEllipse2D_put_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_get_ScZScaleAbs_Proxy( 
    SC_IEllipse2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IEllipse2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_put_ScZScaleAbs_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IEllipse2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScTranslateZ_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IEllipse2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScScaleZ_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IEllipse2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScMirrorOnPlane_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IEllipse2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScVarEntityData_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IEllipse2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScSetMarkFlags_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IEllipse2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScGetMarkFlags_Proxy( 
    SC_IEllipse2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IEllipse2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScSetPropertyVariant2_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IEllipse2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScRotate3D_Proxy( 
    SC_IEllipse2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IEllipse2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScOutline2D_Proxy( 
    SC_IEllipse2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IEllipse2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScOutline3D_Proxy( 
    SC_IEllipse2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IEllipse2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IEllipse2D_ScGetUniqueObjectId_Proxy( 
    SC_IEllipse2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IEllipse2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IEllipse2D_INTERFACE_DEFINED__ */


#ifndef __SC_ISpline2D_INTERFACE_DEFINED__
#define __SC_ISpline2D_INTERFACE_DEFINED__

/* interface SC_ISpline2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISpline2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D18DF287-5056-4a63-B819-5B102677938F")
    SC_ISpline2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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

    typedef struct SC_ISpline2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISpline2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISpline2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISpline2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISpline2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISpline2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISpline2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISpline2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ISpline2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ISpline2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ISpline2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ISpline2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ISpline2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ISpline2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ISpline2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ISpline2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ISpline2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ISpline2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ISpline2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ISpline2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ISpline2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ISpline2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ISpline2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ISpline2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ISpline2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ISpline2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ISpline2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ISpline2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ISpline2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ISpline2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ISpline2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ISpline2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ISpline2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ISpline2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ISpline2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_ISpline2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_ISpline2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_ISpline2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISpline2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISpline2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ISpline2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ISpline2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ISpline2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ISpline2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ISpline2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_ISpline2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ISpline2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ISpline2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ISpline2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ISpline2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ISpline2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ISpline2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ISpline2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ISpline2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ISpline2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ISpline2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ISpline2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ISpline2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_ISpline2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_ISpline2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_ISpline2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_ISpline2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ISpline2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ISpline2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ISpline2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ISpline2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ISpline2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ISpline2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ISpline2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ISpline2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ISpline2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ISpline2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ISpline2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ISpline2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ISpline2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ISpline2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ISpline2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ISpline2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ISpline2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ISpline2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ISpline2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ISpline2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ISpline2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ISpline2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ISpline2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ISpline2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ISpline2DVtbl;

    interface SC_ISpline2D
    {
        CONST_VTBL struct SC_ISpline2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISpline2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISpline2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISpline2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISpline2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISpline2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISpline2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISpline2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISpline2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ISpline2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ISpline2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ISpline2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ISpline2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ISpline2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ISpline2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ISpline2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ISpline2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ISpline2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ISpline2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ISpline2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ISpline2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ISpline2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISpline2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISpline2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ISpline2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ISpline2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ISpline2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ISpline2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ISpline2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ISpline2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ISpline2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ISpline2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ISpline2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ISpline2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ISpline2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ISpline2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ISpline2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ISpline2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ISpline2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ISpline2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ISpline2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ISpline2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpline2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpline2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ISpline2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ISpline2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ISpline2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ISpline2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ISpline2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ISpline2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ISpline2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ISpline2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ISpline2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ISpline2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ISpline2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ISpline2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ISpline2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ISpline2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ISpline2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ISpline2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_ISpline2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_ISpline2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_ISpline2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ISpline2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ISpline2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ISpline2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ISpline2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ISpline2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ISpline2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ISpline2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ISpline2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_ISpline2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ISpline2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ISpline2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ISpline2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ISpline2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ISpline2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ISpline2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ISpline2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ISpline2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ISpline2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ISpline2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ISpline2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ISpline2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ISpline2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ISpline2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ISpline2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ISpline2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ISpline2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ISpline2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ISpline2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ISpline2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ISpline2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ISpline2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_ISpline2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_ISpline2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_ISpline2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_ISpline2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_ISpline2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ISpline2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ISpline2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ISpline2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ISpline2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ISpline2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ISpline2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ISpline2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ISpline2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ISpline2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ISpline2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ISpline2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ISpline2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ISpline2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ISpline2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ISpline2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISpline2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISpline2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISpline2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISpline2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ISpline2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ISpline2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ISpline2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ISpline2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ISpline2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ISpline2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ISpline2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ISpline2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpline2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ISpline2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ISpline2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ISpline2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpline2D_ScGetUniqueObjectId_Proxy( 
    SC_ISpline2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_ISpline2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_ISpline2D_INTERFACE_DEFINED__ */


#ifndef __SC_ISingleLine2D_INTERFACE_DEFINED__
#define __SC_ISingleLine2D_INTERFACE_DEFINED__

/* interface SC_ISingleLine2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISingleLine2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5C5A5C51-0B7C-11d2-8E46-008048E1AD3F")
    SC_ISingleLine2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineCoor( 
            /* [in] */ long Index,
            /* [in] */ double *Coor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLineCoor( 
            /* [in] */ long Index,
            /* [in] */ double Coor) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
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

    typedef struct SC_ISingleLine2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISingleLine2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISingleLine2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISingleLine2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISingleLine2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISingleLine2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISingleLine2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISingleLine2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ISingleLine2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ISingleLine2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ISingleLine2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ISingleLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ISingleLine2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ISingleLine2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ISingleLine2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ISingleLine2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ISingleLine2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ISingleLine2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ISingleLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ISingleLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ISingleLine2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineCoor )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Index,
            /* [in] */ double *Coor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLineCoor )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Index,
            /* [in] */ double Coor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ISingleLine2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ISingleLine2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ISingleLine2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ISingleLine2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ISingleLine2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ISingleLine2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISingleLine2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISingleLine2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ISingleLine2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ISingleLine2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ISingleLine2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ISingleLine2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ISingleLine2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ISingleLine2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ISingleLine2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ISingleLine2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ISingleLine2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_ISingleLine2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ISingleLine2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ISingleLine2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ISingleLine2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ISingleLine2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ISingleLine2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ISingleLine2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ISingleLine2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ISingleLine2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ISingleLine2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ISingleLine2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ISingleLine2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ISingleLine2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ISingleLine2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ISingleLine2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ISingleLine2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ISingleLine2DVtbl;

    interface SC_ISingleLine2D
    {
        CONST_VTBL struct SC_ISingleLine2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISingleLine2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISingleLine2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISingleLine2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISingleLine2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISingleLine2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISingleLine2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISingleLine2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISingleLine2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ISingleLine2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ISingleLine2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ISingleLine2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ISingleLine2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ISingleLine2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ISingleLine2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ISingleLine2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ISingleLine2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ISingleLine2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ISingleLine2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ISingleLine2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ISingleLine2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ISingleLine2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISingleLine2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISingleLine2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ISingleLine2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ISingleLine2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ISingleLine2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ISingleLine2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ISingleLine2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ISingleLine2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ISingleLine2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ISingleLine2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ISingleLine2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ISingleLine2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ISingleLine2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ISingleLine2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ISingleLine2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ISingleLine2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ISingleLine2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ISingleLine2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ISingleLine2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ISingleLine2D_ScGetLineCoor(This,Index,Coor)	\
    ( (This)->lpVtbl -> ScGetLineCoor(This,Index,Coor) ) 

#define SC_ISingleLine2D_ScSetLineCoor(This,Index,Coor)	\
    ( (This)->lpVtbl -> ScSetLineCoor(This,Index,Coor) ) 

#define SC_ISingleLine2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISingleLine2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISingleLine2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ISingleLine2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ISingleLine2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ISingleLine2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ISingleLine2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ISingleLine2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ISingleLine2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ISingleLine2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ISingleLine2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ISingleLine2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ISingleLine2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ISingleLine2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ISingleLine2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ISingleLine2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ISingleLine2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ISingleLine2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ISingleLine2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ISingleLine2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ISingleLine2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ISingleLine2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ISingleLine2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ISingleLine2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ISingleLine2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ISingleLine2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ISingleLine2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ISingleLine2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ISingleLine2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ISingleLine2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ISingleLine2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ISingleLine2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ISingleLine2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ISingleLine2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ISingleLine2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ISingleLine2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ISingleLine2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ISingleLine2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ISingleLine2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ISingleLine2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ISingleLine2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ISingleLine2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ISingleLine2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ISingleLine2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ISingleLine2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ISingleLine2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ISingleLine2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ISingleLine2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ISingleLine2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_ISingleLine2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_ISingleLine2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ISingleLine2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ISingleLine2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ISingleLine2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ISingleLine2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ISingleLine2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ISingleLine2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ISingleLine2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ISingleLine2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ISingleLine2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ISingleLine2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ISingleLine2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ISingleLine2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ISingleLine2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ISingleLine2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ISingleLine2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISingleLine2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISingleLine2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISingleLine2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISingleLine2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ISingleLine2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ISingleLine2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ISingleLine2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ISingleLine2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ISingleLine2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ISingleLine2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ISingleLine2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ISingleLine2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISingleLine2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ISingleLine2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ISingleLine2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ISingleLine2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ISingleLine2D_INTERFACE_DEFINED__ */


#ifndef __SC_IChain2D_INTERFACE_DEFINED__
#define __SC_IChain2D_INTERFACE_DEFINED__

/* interface SC_IChain2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IChain2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("026E8E1A-7019-4b35-B229-1AC2E1C8E31C")
    SC_IChain2D : public IDispatch
    {
    public:
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChainFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChainFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChainType( 
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChainType( 
            /* [in] */ long Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChainGetSpecialValue( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScChainSetSpecialValue( 
            /* [in] */ long Type,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChainSpecialFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChainSpecialFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlipLinesRev( void) = 0;
        
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
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IChain2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IChain2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IChain2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IChain2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IChain2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IChain2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IChain2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IChain2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IChain2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IChain2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IChain2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IChain2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IChain2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IChain2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IChain2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IChain2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IChain2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IChain2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChainFlags )( 
            SC_IChain2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChainFlags )( 
            SC_IChain2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChainType )( 
            SC_IChain2D * This,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChainType )( 
            SC_IChain2D * This,
            /* [in] */ long Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChainGetSpecialValue )( 
            SC_IChain2D * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChainSetSpecialValue )( 
            SC_IChain2D * This,
            /* [in] */ long Type,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IChain2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChainSpecialFlags )( 
            SC_IChain2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChainSpecialFlags )( 
            SC_IChain2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlipLinesRev )( 
            SC_IChain2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IChain2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IChain2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IChain2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IChain2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IChain2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IChain2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        END_INTERFACE
    } SC_IChain2DVtbl;

    interface SC_IChain2D
    {
        CONST_VTBL struct SC_IChain2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IChain2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IChain2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IChain2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IChain2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IChain2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IChain2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IChain2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IChain2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChain2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChain2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChain2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChain2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IChain2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IChain2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IChain2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IChain2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IChain2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IChain2D_get_ScChainFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScChainFlags(This,Flags) ) 

#define SC_IChain2D_put_ScChainFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScChainFlags(This,Flags) ) 

#define SC_IChain2D_get_ScChainType(This,Type)	\
    ( (This)->lpVtbl -> get_ScChainType(This,Type) ) 

#define SC_IChain2D_put_ScChainType(This,Type)	\
    ( (This)->lpVtbl -> put_ScChainType(This,Type) ) 

#define SC_IChain2D_ScChainGetSpecialValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScChainGetSpecialValue(This,Type,Value) ) 

#define SC_IChain2D_ScChainSetSpecialValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScChainSetSpecialValue(This,Type,Value) ) 

#define SC_IChain2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IChain2D_get_ScChainSpecialFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScChainSpecialFlags(This,Flags) ) 

#define SC_IChain2D_put_ScChainSpecialFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScChainSpecialFlags(This,Flags) ) 

#define SC_IChain2D_ScFlipLinesRev(This)	\
    ( (This)->lpVtbl -> ScFlipLinesRev(This) ) 

#define SC_IChain2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IChain2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IChain2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChain2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IChain2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IChain2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IChain2D_INTERFACE_DEFINED__ */


#ifndef __SC_ISpiral2D_INTERFACE_DEFINED__
#define __SC_ISpiral2D_INTERFACE_DEFINED__

/* interface SC_ISpiral2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISpiral2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10490958-EA9E-43c6-97E9-9E51C597247A")
    SC_ISpiral2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPack( 
            /* [in] */ long DeleteAll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc( 
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc( 
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlip( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetItemHeadId( 
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetItemHeadId( 
            /* [in] */ long index,
            /* [in] */ long HeadId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPointsInProc3D( 
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPointsInProc3D( 
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSpiralFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSpiralFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSpiralDoubleValue( 
            /* [in] */ long Type,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSpiralDoubleValue( 
            /* [in] */ long Type,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSpiralLongValue( 
            /* [in] */ long Type,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSpiralLongValue( 
            /* [in] */ long Type,
            /* [retval][out] */ long *Value) = 0;
        
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

    typedef struct SC_ISpiral2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISpiral2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISpiral2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISpiral2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISpiral2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISpiral2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISpiral2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISpiral2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ISpiral2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ISpiral2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ISpiral2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ISpiral2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ISpiral2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ISpiral2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ISpiral2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ISpiral2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ISpiral2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ISpiral2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ISpiral2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ISpiral2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ISpiral2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ISpiral2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ISpiral2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ISpiral2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ISpiral2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ISpiral2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ISpiral2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ISpiral2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ISpiral2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc )( 
            SC_ISpiral2D * This,
            /* [out][in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc )( 
            SC_ISpiral2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc )( 
            SC_ISpiral2D * This,
            /* [in] */ sc_com_point *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISpiral2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISpiral2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ISpiral2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ISpiral2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ISpiral2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlip )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ISpiral2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ISpiral2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ISpiral2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ISpiral2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ISpiral2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ISpiral2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ISpiral2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ISpiral2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ISpiral2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ISpiral2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ISpiral2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_ISpiral2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPointsInProc3D )( 
            SC_ISpiral2D * This,
            /* [out][in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Read);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPointsInProc3D )( 
            SC_ISpiral2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            /* [in] */ long Start,
            long Count,
            /* [retval][out] */ long *Write);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPointsInProc3D )( 
            SC_ISpiral2D * This,
            /* [in] */ sc_com_point_3d *Array,
            /* [in] */ long Size,
            long Count,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ISpiral2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ISpiral2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ISpiral2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ISpiral2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ISpiral2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ISpiral2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ISpiral2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ISpiral2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ISpiral2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ISpiral2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ISpiral2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ISpiral2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ISpiral2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ISpiral2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ISpiral2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_ISpiral2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpiralFlags )( 
            SC_ISpiral2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpiralFlags )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpiralDoubleValue )( 
            SC_ISpiral2D * This,
            /* [in] */ long Type,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpiralDoubleValue )( 
            SC_ISpiral2D * This,
            /* [in] */ long Type,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpiralLongValue )( 
            SC_ISpiral2D * This,
            /* [in] */ long Type,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpiralLongValue )( 
            SC_ISpiral2D * This,
            /* [in] */ long Type,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ISpiral2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ISpiral2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ISpiral2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ISpiral2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ISpiral2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ISpiral2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ISpiral2DVtbl;

    interface SC_ISpiral2D
    {
        CONST_VTBL struct SC_ISpiral2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISpiral2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISpiral2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISpiral2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISpiral2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISpiral2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISpiral2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISpiral2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISpiral2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ISpiral2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ISpiral2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ISpiral2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ISpiral2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ISpiral2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ISpiral2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ISpiral2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ISpiral2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ISpiral2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ISpiral2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ISpiral2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ISpiral2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ISpiral2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISpiral2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISpiral2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ISpiral2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ISpiral2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ISpiral2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ISpiral2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ISpiral2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ISpiral2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ISpiral2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ISpiral2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ISpiral2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ISpiral2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ISpiral2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_ISpiral2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_ISpiral2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_ISpiral2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_ISpiral2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_ISpiral2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_ISpiral2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_ISpiral2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpiral2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpiral2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ISpiral2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ISpiral2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ISpiral2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ISpiral2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ISpiral2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ISpiral2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ISpiral2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ISpiral2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ISpiral2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ISpiral2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ISpiral2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ISpiral2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ISpiral2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ISpiral2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ISpiral2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ISpiral2D_ScGetPointsInProc(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc(This,Array,Size,Start,Count,Read) ) 

#define SC_ISpiral2D_ScSetPointsInProc(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc(This,Array,Size,Start,Count,Write) ) 

#define SC_ISpiral2D_ScAddPointsInProc(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc(This,Array,Size,Count,Index) ) 

#define SC_ISpiral2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ISpiral2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ISpiral2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ISpiral2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ISpiral2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ISpiral2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ISpiral2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ISpiral2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ISpiral2D_ScFlip(This)	\
    ( (This)->lpVtbl -> ScFlip(This) ) 

#define SC_ISpiral2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ISpiral2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ISpiral2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ISpiral2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ISpiral2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ISpiral2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ISpiral2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ISpiral2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ISpiral2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ISpiral2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ISpiral2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ISpiral2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ISpiral2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ISpiral2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ISpiral2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ISpiral2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ISpiral2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ISpiral2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ISpiral2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ISpiral2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ISpiral2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ISpiral2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ISpiral2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_ISpiral2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_ISpiral2D_ScGetPointsInProc3D(This,Array,Size,Start,Count,Read)	\
    ( (This)->lpVtbl -> ScGetPointsInProc3D(This,Array,Size,Start,Count,Read) ) 

#define SC_ISpiral2D_ScSetPointsInProc3D(This,Array,Size,Start,Count,Write)	\
    ( (This)->lpVtbl -> ScSetPointsInProc3D(This,Array,Size,Start,Count,Write) ) 

#define SC_ISpiral2D_ScAddPointsInProc3D(This,Array,Size,Count,Index)	\
    ( (This)->lpVtbl -> ScAddPointsInProc3D(This,Array,Size,Count,Index) ) 

#define SC_ISpiral2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ISpiral2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ISpiral2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ISpiral2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ISpiral2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ISpiral2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ISpiral2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ISpiral2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ISpiral2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ISpiral2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ISpiral2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ISpiral2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ISpiral2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ISpiral2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ISpiral2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ISpiral2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISpiral2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISpiral2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISpiral2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISpiral2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ISpiral2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ISpiral2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ISpiral2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ISpiral2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ISpiral2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ISpiral2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_ISpiral2D_ScSetSpiralFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScSetSpiralFlags(This,Flags) ) 

#define SC_ISpiral2D_ScGetSpiralFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetSpiralFlags(This,Flags) ) 

#define SC_ISpiral2D_ScSetSpiralDoubleValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetSpiralDoubleValue(This,Type,Value) ) 

#define SC_ISpiral2D_ScGetSpiralDoubleValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetSpiralDoubleValue(This,Type,Value) ) 

#define SC_ISpiral2D_ScSetSpiralLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScSetSpiralLongValue(This,Type,Value) ) 

#define SC_ISpiral2D_ScGetSpiralLongValue(This,Type,Value)	\
    ( (This)->lpVtbl -> ScGetSpiralLongValue(This,Type,Value) ) 

#define SC_ISpiral2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ISpiral2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ISpiral2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISpiral2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ISpiral2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ISpiral2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ISpiral2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScGetSpiralLongValue_Proxy( 
    SC_ISpiral2D * This,
    /* [in] */ long Type,
    /* [retval][out] */ long *Value);


void __RPC_STUB SC_ISpiral2D_ScGetSpiralLongValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScSetMarkFlags_Proxy( 
    SC_ISpiral2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_ISpiral2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScGetMarkFlags_Proxy( 
    SC_ISpiral2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_ISpiral2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScSetPropertyVariant2_Proxy( 
    SC_ISpiral2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_ISpiral2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScRotate3D_Proxy( 
    SC_ISpiral2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_ISpiral2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScOutline2D_Proxy( 
    SC_ISpiral2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_ISpiral2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScOutline3D_Proxy( 
    SC_ISpiral2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_ISpiral2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISpiral2D_ScGetUniqueObjectId_Proxy( 
    SC_ISpiral2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_ISpiral2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_ISpiral2D_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLines2D_MODULE_DEFINED__
#define __ScConstantsLines2D_MODULE_DEFINED__


/* module ScConstantsLines2D */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectPolyLines2D	=	( 0x2000 | ( ( 2 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectLayer	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( 0x1000 + (( 0x8000 + 0x40000 ) ) ) ) )  ) ;

/* [helpstring] */ const long scComObjectPolyLine2D	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectLineArray2D	=	( 0x2000 | ( ( 2 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectLineArrays2D	=	( 0x2000 | ( ( 3 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectRectangle2D	=	( 0x2000 | ( ( 6 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectSingleLine2D	=	( 0x2000 | ( ( 7 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectHatch	=	( 0x2000 | ( ( 4 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectTriangle2D	=	( 0x2000 | ( ( 12 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectEllipse2D	=	( 0x2000 | ( ( 8 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectChain2D	=	( 0x2000 | ( ( 13 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectSpiral2D	=	( 0x2000 | ( ( 14 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComPolyLines2DSortModeClosest	=	0x1;

/* [helpstring] */ const long scComPolyLines2DSortModeClosestMergeIfConnected	=	0x2;

/* [helpstring] */ const long scComChain2DFlagForceClosed	=	0x1;

/* [helpstring] */ const long scComEllipseGenerationModeDefault	=	0;

/* [helpstring] */ const long scComEllipseGenerationModeCircle3Point	=	1;

/* [helpstring] */ const long scComEllipseGenerationModeCircleCenterRadius	=	2;

/* [helpstring] */ const long scComEllipseGenerationModeArc3Point	=	4;

/* [helpstring] */ const long scComEllipseGenerationModeArcCenterRadiusAngle	=	3;

/* [helpstring] */ const long scComSpiral2DFlagClockwise	=	0x1;

/* [helpstring] */ const long scComSpiral2DFlagOuterToInner	=	0x2;

/* [helpstring] */ const long scComSpiral2DFlagAddReturnPath	=	0x4;

/* [helpstring] */ const long scComSpiral2DDoubleValueTypeInnerRadius	=	1;

/* [helpstring] */ const long scComSpiral2DDoubleValueTypeOuterRadius	=	2;

/* [helpstring] */ const long scComSpiral2DDoubleValueTypeRise	=	3;

/* [helpstring] */ const long scComSpiral2DLongValueTypeNumInnerRotations	=	1;

/* [helpstring] */ const long scComSpiral2DLongValueTypeNumOuterRotations	=	2;

/* [helpstring] */ const long scComSpiral2DLongValueTypeNumOuterSegments	=	3;

#endif /* __ScConstantsLines2D_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayer;

#ifdef __cplusplus

class DECLSPEC_UUID("3A77B242-4EFF-11d1-9705-008048EEE00C")
ScLayer;
#endif

EXTERN_C const CLSID CLSID_ScPolyLines2D;

#ifdef __cplusplus

class DECLSPEC_UUID("BD53D752-4F00-11d1-9705-008048EEE00C")
ScPolyLines2D;
#endif

EXTERN_C const CLSID CLSID_ScPolyLine2D;

#ifdef __cplusplus

class DECLSPEC_UUID("B476C762-4F01-11d1-9705-008048EEE00C")
ScPolyLine2D;
#endif

EXTERN_C const CLSID CLSID_ScEllipse2D;

#ifdef __cplusplus

class DECLSPEC_UUID("BB653044-7A5A-11d2-8CED-008048EEDCB8")
ScEllipse2D;
#endif

EXTERN_C const CLSID CLSID_ScSpline2D;

#ifdef __cplusplus

class DECLSPEC_UUID("CC2FFFFE-805A-479b-AD7F-173C024CE14E")
ScSpline2D;
#endif

EXTERN_C const CLSID CLSID_ScLineArray2D;

#ifdef __cplusplus

class DECLSPEC_UUID("2D413990-68AB-11d1-972A-008048EEE00C")
ScLineArray2D;
#endif

EXTERN_C const CLSID CLSID_ScHatch;

#ifdef __cplusplus

class DECLSPEC_UUID("8F6E8C52-EEF3-11d1-97C0-008048EEE00C")
ScHatch;
#endif

EXTERN_C const CLSID CLSID_ScLineArrays2D;

#ifdef __cplusplus

class DECLSPEC_UUID("166BCEA2-A0AC-11D1-8C3C-008048EEDCB8")
ScLineArrays2D;
#endif

EXTERN_C const CLSID CLSID_ScRectangle2D;

#ifdef __cplusplus

class DECLSPEC_UUID("5AACF132-AA19-11d1-8C46-008048EEDCB8")
ScRectangle2D;
#endif

EXTERN_C const CLSID CLSID_ScSingleLine2D;

#ifdef __cplusplus

class DECLSPEC_UUID("BB40F852-C96F-11d1-8C69-008048EEDCB8")
ScSingleLine2D;
#endif

EXTERN_C const CLSID CLSID_ScTriangle2D;

#ifdef __cplusplus

class DECLSPEC_UUID("BF300AB1-9E89-11d2-8EE8-00C0DFEA4A3A")
ScTriangle2D;
#endif

EXTERN_C const CLSID CLSID_ScChain2D;

#ifdef __cplusplus

class DECLSPEC_UUID("EDFDACA5-EE76-43b8-A284-28F164418D1F")
ScChain2D;
#endif

EXTERN_C const CLSID CLSID_ScSpiral2D;

#ifdef __cplusplus

class DECLSPEC_UUID("01D6A37D-1C2E-4955-84FA-9904848A2AC6")
ScSpiral2D;
#endif
#endif /* __ScapsSamLines2D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


