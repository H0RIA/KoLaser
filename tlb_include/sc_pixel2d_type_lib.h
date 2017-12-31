

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:25 2017
 */
/* Compiler settings for d:\scaps\dll_source\pixel2d\com\include\sc_pixel2d_type_lib.idl:
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


#ifndef __sc_pixel2d_type_lib_h__
#define __sc_pixel2d_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IPixelArray2D_FWD_DEFINED__
#define __SC_IPixelArray2D_FWD_DEFINED__
typedef interface SC_IPixelArray2D SC_IPixelArray2D;
#endif 	/* __SC_IPixelArray2D_FWD_DEFINED__ */


#ifndef __SC_IPixelArrays2D_FWD_DEFINED__
#define __SC_IPixelArrays2D_FWD_DEFINED__
typedef interface SC_IPixelArrays2D SC_IPixelArrays2D;
#endif 	/* __SC_IPixelArrays2D_FWD_DEFINED__ */


#ifndef __SC_IScannerPixelArray2D_FWD_DEFINED__
#define __SC_IScannerPixelArray2D_FWD_DEFINED__
typedef interface SC_IScannerPixelArray2D SC_IScannerPixelArray2D;
#endif 	/* __SC_IScannerPixelArray2D_FWD_DEFINED__ */


#ifndef __ScPixelArray2D_FWD_DEFINED__
#define __ScPixelArray2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPixelArray2D ScPixelArray2D;
#else
typedef struct ScPixelArray2D ScPixelArray2D;
#endif /* __cplusplus */

#endif 	/* __ScPixelArray2D_FWD_DEFINED__ */


#ifndef __ScPixelArrays2D_FWD_DEFINED__
#define __ScPixelArrays2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPixelArrays2D ScPixelArrays2D;
#else
typedef struct ScPixelArrays2D ScPixelArrays2D;
#endif /* __cplusplus */

#endif 	/* __ScPixelArrays2D_FWD_DEFINED__ */


#ifndef __ScScannerPixelArray2D_FWD_DEFINED__
#define __ScScannerPixelArray2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScScannerPixelArray2D ScScannerPixelArray2D;
#else
typedef struct ScScannerPixelArray2D ScScannerPixelArray2D;
#endif /* __cplusplus */

#endif 	/* __ScScannerPixelArray2D_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_pixel2d_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_pixel2d_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_pixel2d_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamPixel2D_LIBRARY_DEFINED__
#define __ScapsSamPixel2D_LIBRARY_DEFINED__

/* library ScapsSamPixel2D */
/* [version][helpstring][uuid] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("08421135-F0F0-406a-B442-7D3FEF615032") 
enum ScComPixelFormatConstants
    {	scComPixelFormatUchar	= 1,
	scComPixelFormatDouble	= 2,
	scComPixelFormatBit	= 3
    } 	ScComPixelFormatConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("A3FF119B-9811-4171-A5C0-0B86538F6C1E") 
enum ScComPixelConvertMethodConstants
    {	scComPixelConvertMethodErrorDiffusion	= 2,
	scComPixelConvertMethodGrayScale	= 3,
	scComPixelConvertMethodFloydSteinberg	= 4,
	scComPixelConvertMethodFloydSteinbergOrderedDithering	= 5
    } 	ScComPixelConvertMethodConstants;


EXTERN_C const IID LIBID_ScapsSamPixel2D;

#ifndef __SC_IPixelArray2D_INTERFACE_DEFINED__
#define __SC_IPixelArray2D_INTERFACE_DEFINED__

/* interface SC_IPixelArray2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IPixelArray2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B9218931-9346-11d1-9762-008048EEE00C")
    SC_IPixelArray2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetXSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetYSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArea( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStep( 
            /* [in] */ double X,
            /* [in] */ double Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScInvert( 
            /* [in] */ long Invert) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScInvert( 
            /* [retval][out] */ long *Invert) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScIntensity( 
            /* [in] */ double Intensity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScIntensity( 
            /* [retval][out] */ double *Intensity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMakeBinary( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAlloc( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XDim,
            /* [in] */ double YDim,
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPixelFormat( 
            /* [in] */ ScComPixelFormatConstants Format) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPixelFormat( 
            /* [retval][out] */ ScComPixelFormatConstants *Format) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetInternalAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInternalAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value) = 0;
        
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
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPointMode( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPointMode( 
            /* [retval][out] */ long *OnOff) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitStart( 
            /* [in] */ double Start) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitStart( 
            /* [retval][out] */ double *Start) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitStep( 
            /* [in] */ double Step) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitStep( 
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSplit( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPixelArrayFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPixelArrayFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLimit( 
            /* [in] */ long Index,
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLimit( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDoPixelArrayCommand( 
            /* [in] */ long Id,
            /* [in] */ SC_IPixelArray2D *Pix) = 0;
        
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
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBlankThreshold( 
            /* [in] */ long threshold) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBlankThreshold( 
            /* [retval][out] */ long *threshold) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitializeSingleBmpCut( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelArray2D( 
            /* [in] */ VARIANT hBitmap,
            /* [in] */ double resMmPerPixel) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IPixelArray2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPixelArray2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPixelArray2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPixelArray2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPixelArray2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPixelArray2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPixelArray2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPixelArray2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IPixelArray2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IPixelArray2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IPixelArray2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IPixelArray2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IPixelArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IPixelArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IPixelArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IPixelArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IPixelArray2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IPixelArray2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IPixelArray2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IPixelArray2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IPixelArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IPixelArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IPixelArray2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IPixelArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IPixelArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IPixelArray2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IPixelArray2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAt )( 
            SC_IPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAt )( 
            SC_IPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetXSize )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetYSize )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArea )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStep )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStep )( 
            SC_IPixelArray2D * This,
            /* [in] */ double X,
            /* [in] */ double Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScInvert )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Invert);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScInvert )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Invert);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScIntensity )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Intensity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScIntensity )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Intensity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOffset )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOffset )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IPixelArray2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IPixelArray2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IPixelArray2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IPixelArray2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMakeBinary )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAlloc )( 
            SC_IPixelArray2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XDim,
            /* [in] */ double YDim,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPixelFormat )( 
            SC_IPixelArray2D * This,
            /* [in] */ ScComPixelFormatConstants Format);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPixelFormat )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ ScComPixelFormatConstants *Format);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IPixelArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IPixelArray2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetInternalAt )( 
            SC_IPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInternalAt )( 
            SC_IPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IPixelArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IPixelArray2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IPixelArray2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IPixelArray2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IPixelArray2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IPixelArray2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IPixelArray2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IPixelArray2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IPixelArray2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPointMode )( 
            SC_IPixelArray2D * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPointMode )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *OnOff);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitMode )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitMode )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitStart )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Start);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitStart )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Start);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitStep )( 
            SC_IPixelArray2D * This,
            /* [in] */ double Step);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitStep )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSplit )( 
            SC_IPixelArray2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPixelArrayFlags )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPixelArrayFlags )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLimit )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Index,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLimit )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDoPixelArrayCommand )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Id,
            /* [in] */ SC_IPixelArray2D *Pix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBlankThreshold )( 
            SC_IPixelArray2D * This,
            /* [in] */ long threshold);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBlankThreshold )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ long *threshold);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitializeSingleBmpCut )( 
            SC_IPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IPixelArray2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IPixelArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IPixelArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IPixelArray2D * This,
            /* [retval][out] */ __int64 *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelArray2D )( 
            SC_IPixelArray2D * This,
            /* [in] */ VARIANT hBitmap,
            /* [in] */ double resMmPerPixel);
        
        END_INTERFACE
    } SC_IPixelArray2DVtbl;

    interface SC_IPixelArray2D
    {
        CONST_VTBL struct SC_IPixelArray2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPixelArray2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPixelArray2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPixelArray2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPixelArray2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPixelArray2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPixelArray2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPixelArray2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPixelArray2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IPixelArray2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IPixelArray2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IPixelArray2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IPixelArray2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IPixelArray2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IPixelArray2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IPixelArray2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IPixelArray2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IPixelArray2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IPixelArray2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IPixelArray2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IPixelArray2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IPixelArray2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPixelArray2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPixelArray2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IPixelArray2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IPixelArray2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IPixelArray2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IPixelArray2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IPixelArray2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IPixelArray2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IPixelArray2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IPixelArray2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IPixelArray2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IPixelArray2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IPixelArray2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IPixelArray2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IPixelArray2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IPixelArray2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IPixelArray2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IPixelArray2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IPixelArray2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IPixelArray2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArray2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArray2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IPixelArray2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IPixelArray2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IPixelArray2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IPixelArray2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IPixelArray2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IPixelArray2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IPixelArray2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IPixelArray2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IPixelArray2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IPixelArray2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IPixelArray2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IPixelArray2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IPixelArray2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IPixelArray2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IPixelArray2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IPixelArray2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IPixelArray2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IPixelArray2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IPixelArray2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IPixelArray2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IPixelArray2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IPixelArray2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IPixelArray2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IPixelArray2D_ScSetAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScSetAt(This,X,Y,Value) ) 

#define SC_IPixelArray2D_ScGetAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScGetAt(This,X,Y,Value) ) 

#define SC_IPixelArray2D_ScGetXSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetXSize(This,Size) ) 

#define SC_IPixelArray2D_ScGetYSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetYSize(This,Size) ) 

#define SC_IPixelArray2D_ScGetArea(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetArea(This,index,Value) ) 

#define SC_IPixelArray2D_ScGetStep(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetStep(This,index,Value) ) 

#define SC_IPixelArray2D_ScSetStep(This,X,Y)	\
    ( (This)->lpVtbl -> ScSetStep(This,X,Y) ) 

#define SC_IPixelArray2D_put_ScInvert(This,Invert)	\
    ( (This)->lpVtbl -> put_ScInvert(This,Invert) ) 

#define SC_IPixelArray2D_get_ScInvert(This,Invert)	\
    ( (This)->lpVtbl -> get_ScInvert(This,Invert) ) 

#define SC_IPixelArray2D_put_ScIntensity(This,Intensity)	\
    ( (This)->lpVtbl -> put_ScIntensity(This,Intensity) ) 

#define SC_IPixelArray2D_get_ScIntensity(This,Intensity)	\
    ( (This)->lpVtbl -> get_ScIntensity(This,Intensity) ) 

#define SC_IPixelArray2D_put_ScOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScOffset(This,Offset) ) 

#define SC_IPixelArray2D_get_ScOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScOffset(This,Offset) ) 

#define SC_IPixelArray2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IPixelArray2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IPixelArray2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IPixelArray2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IPixelArray2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IPixelArray2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IPixelArray2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IPixelArray2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IPixelArray2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IPixelArray2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IPixelArray2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IPixelArray2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IPixelArray2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IPixelArray2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IPixelArray2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IPixelArray2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IPixelArray2D_ScMakeBinary(This,Size)	\
    ( (This)->lpVtbl -> ScMakeBinary(This,Size) ) 

#define SC_IPixelArray2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IPixelArray2D_ScAlloc(This,XMin,YMin,XDim,YDim,XStep,YStep)	\
    ( (This)->lpVtbl -> ScAlloc(This,XMin,YMin,XDim,YDim,XStep,YStep) ) 

#define SC_IPixelArray2D_put_ScPixelFormat(This,Format)	\
    ( (This)->lpVtbl -> put_ScPixelFormat(This,Format) ) 

#define SC_IPixelArray2D_get_ScPixelFormat(This,Format)	\
    ( (This)->lpVtbl -> get_ScPixelFormat(This,Format) ) 

#define SC_IPixelArray2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IPixelArray2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IPixelArray2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IPixelArray2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IPixelArray2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IPixelArray2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IPixelArray2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IPixelArray2D_ScSetInternalAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScSetInternalAt(This,X,Y,Value) ) 

#define SC_IPixelArray2D_ScGetInternalAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScGetInternalAt(This,X,Y,Value) ) 

#define SC_IPixelArray2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IPixelArray2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IPixelArray2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IPixelArray2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IPixelArray2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IPixelArray2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IPixelArray2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IPixelArray2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IPixelArray2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IPixelArray2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IPixelArray2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IPixelArray2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IPixelArray2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IPixelArray2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IPixelArray2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IPixelArray2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPixelArray2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPixelArray2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPixelArray2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPixelArray2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IPixelArray2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IPixelArray2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IPixelArray2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IPixelArray2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IPixelArray2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IPixelArray2D_put_ScPointMode(This,OnOff)	\
    ( (This)->lpVtbl -> put_ScPointMode(This,OnOff) ) 

#define SC_IPixelArray2D_get_ScPointMode(This,OnOff)	\
    ( (This)->lpVtbl -> get_ScPointMode(This,OnOff) ) 

#define SC_IPixelArray2D_put_ScSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScSplitMode(This,Mode) ) 

#define SC_IPixelArray2D_get_ScSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScSplitMode(This,Mode) ) 

#define SC_IPixelArray2D_put_ScSplitStart(This,Start)	\
    ( (This)->lpVtbl -> put_ScSplitStart(This,Start) ) 

#define SC_IPixelArray2D_get_ScSplitStart(This,Start)	\
    ( (This)->lpVtbl -> get_ScSplitStart(This,Start) ) 

#define SC_IPixelArray2D_put_ScSplitStep(This,Step)	\
    ( (This)->lpVtbl -> put_ScSplitStep(This,Step) ) 

#define SC_IPixelArray2D_get_ScSplitStep(This,Step)	\
    ( (This)->lpVtbl -> get_ScSplitStep(This,Step) ) 

#define SC_IPixelArray2D_ScSplit(This,Entity)	\
    ( (This)->lpVtbl -> ScSplit(This,Entity) ) 

#define SC_IPixelArray2D_put_ScPixelArrayFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScPixelArrayFlags(This,Flags) ) 

#define SC_IPixelArray2D_get_ScPixelArrayFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScPixelArrayFlags(This,Flags) ) 

#define SC_IPixelArray2D_ScSetLimit(This,Index,Size)	\
    ( (This)->lpVtbl -> ScSetLimit(This,Index,Size) ) 

#define SC_IPixelArray2D_ScGetLimit(This,Index,Size)	\
    ( (This)->lpVtbl -> ScGetLimit(This,Index,Size) ) 

#define SC_IPixelArray2D_ScDoPixelArrayCommand(This,Id,Pix)	\
    ( (This)->lpVtbl -> ScDoPixelArrayCommand(This,Id,Pix) ) 

#define SC_IPixelArray2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IPixelArray2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IPixelArray2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArray2D_put_ScBlankThreshold(This,threshold)	\
    ( (This)->lpVtbl -> put_ScBlankThreshold(This,threshold) ) 

#define SC_IPixelArray2D_get_ScBlankThreshold(This,threshold)	\
    ( (This)->lpVtbl -> get_ScBlankThreshold(This,threshold) ) 

#define SC_IPixelArray2D_ScInitializeSingleBmpCut(This)	\
    ( (This)->lpVtbl -> ScInitializeSingleBmpCut(This) ) 

#define SC_IPixelArray2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IPixelArray2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IPixelArray2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IPixelArray2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#define SC_IPixelArray2D_ScSetPixelArray2D(This,hBitmap,resMmPerPixel)	\
    ( (This)->lpVtbl -> ScSetPixelArray2D(This,hBitmap,resMmPerPixel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScZScaleAbs_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IPixelArray2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScZScaleAbs_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IPixelArray2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScTranslateZ_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IPixelArray2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScScaleZ_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IPixelArray2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScMirrorOnPlane_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IPixelArray2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScVarEntityData_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IPixelArray2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScPointMode_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long OnOff);


void __RPC_STUB SC_IPixelArray2D_put_ScPointMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScPointMode_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ long *OnOff);


void __RPC_STUB SC_IPixelArray2D_get_ScPointMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScSplitMode_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IPixelArray2D_put_ScSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScSplitMode_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IPixelArray2D_get_ScSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScSplitStart_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double Start);


void __RPC_STUB SC_IPixelArray2D_put_ScSplitStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScSplitStart_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ double *Start);


void __RPC_STUB SC_IPixelArray2D_get_ScSplitStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScSplitStep_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double Step);


void __RPC_STUB SC_IPixelArray2D_put_ScSplitStep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScSplitStep_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ double *Step);


void __RPC_STUB SC_IPixelArray2D_get_ScSplitStep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScSplit_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);


void __RPC_STUB SC_IPixelArray2D_ScSplit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScPixelArrayFlags_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IPixelArray2D_put_ScPixelArrayFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScPixelArrayFlags_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IPixelArray2D_get_ScPixelArrayFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScSetLimit_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Index,
    /* [in] */ double Size);


void __RPC_STUB SC_IPixelArray2D_ScSetLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScGetLimit_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Size);


void __RPC_STUB SC_IPixelArray2D_ScGetLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScDoPixelArrayCommand_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Id,
    /* [in] */ SC_IPixelArray2D *Pix);


void __RPC_STUB SC_IPixelArray2D_ScDoPixelArrayCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScSetMarkFlags_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IPixelArray2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScGetMarkFlags_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IPixelArray2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScSetPropertyVariant2_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IPixelArray2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_put_ScBlankThreshold_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ long threshold);


void __RPC_STUB SC_IPixelArray2D_put_ScBlankThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_get_ScBlankThreshold_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ long *threshold);


void __RPC_STUB SC_IPixelArray2D_get_ScBlankThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScInitializeSingleBmpCut_Proxy( 
    SC_IPixelArray2D * This);


void __RPC_STUB SC_IPixelArray2D_ScInitializeSingleBmpCut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScRotate3D_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IPixelArray2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScOutline2D_Proxy( 
    SC_IPixelArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IPixelArray2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScOutline3D_Proxy( 
    SC_IPixelArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IPixelArray2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScGetUniqueObjectId_Proxy( 
    SC_IPixelArray2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IPixelArray2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IPixelArray2D_ScSetPixelArray2D_Proxy( 
    SC_IPixelArray2D * This,
    /* [in] */ VARIANT hBitmap,
    /* [in] */ double resMmPerPixel);


void __RPC_STUB SC_IPixelArray2D_ScSetPixelArray2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IPixelArray2D_INTERFACE_DEFINED__ */


#ifndef __SC_IPixelArrays2D_INTERFACE_DEFINED__
#define __SC_IPixelArrays2D_INTERFACE_DEFINED__

/* interface SC_IPixelArrays2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IPixelArrays2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E515C3B2-1596-11d2-8CA7-008048EEDCB8")
    SC_IPixelArrays2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ SC_IPixelArray2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ SC_IPixelArray2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IPixelArray2D *entity) = 0;
        
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

    typedef struct SC_IPixelArrays2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPixelArrays2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPixelArrays2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPixelArrays2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPixelArrays2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPixelArrays2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPixelArrays2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPixelArrays2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IPixelArrays2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IPixelArrays2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IPixelArrays2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IPixelArrays2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IPixelArrays2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IPixelArrays2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IPixelArrays2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IPixelArrays2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IPixelArrays2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ SC_IPixelArray2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IPixelArrays2D * This,
            /* [in] */ SC_IPixelArray2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IPixelArrays2D * This,
            /* [in] */ SC_IPixelArray2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IPixelArrays2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IPixelArrays2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IPixelArrays2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IPixelArrays2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IPixelArrays2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IPixelArrays2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IPixelArrays2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IPixelArrays2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IPixelArrays2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IPixelArrays2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IPixelArrays2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IPixelArrays2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IPixelArrays2DVtbl;

    interface SC_IPixelArrays2D
    {
        CONST_VTBL struct SC_IPixelArrays2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPixelArrays2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPixelArrays2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPixelArrays2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPixelArrays2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPixelArrays2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPixelArrays2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPixelArrays2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPixelArrays2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IPixelArrays2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IPixelArrays2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IPixelArrays2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IPixelArrays2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IPixelArrays2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IPixelArrays2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IPixelArrays2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IPixelArrays2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IPixelArrays2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IPixelArrays2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IPixelArrays2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IPixelArrays2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IPixelArrays2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPixelArrays2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IPixelArrays2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IPixelArrays2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IPixelArrays2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IPixelArrays2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IPixelArrays2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IPixelArrays2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IPixelArrays2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IPixelArrays2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IPixelArrays2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IPixelArrays2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IPixelArrays2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IPixelArrays2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IPixelArrays2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArrays2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArrays2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IPixelArrays2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IPixelArrays2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IPixelArrays2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IPixelArrays2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IPixelArrays2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IPixelArrays2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IPixelArrays2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IPixelArrays2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IPixelArrays2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IPixelArrays2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IPixelArrays2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IPixelArrays2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IPixelArrays2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IPixelArrays2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IPixelArrays2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IPixelArrays2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IPixelArrays2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IPixelArrays2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IPixelArrays2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IPixelArrays2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IPixelArrays2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IPixelArrays2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IPixelArrays2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IPixelArrays2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IPixelArrays2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IPixelArrays2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IPixelArrays2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IPixelArrays2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IPixelArrays2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IPixelArrays2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IPixelArrays2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IPixelArrays2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IPixelArrays2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IPixelArrays2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IPixelArrays2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IPixelArrays2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IPixelArrays2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IPixelArrays2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IPixelArrays2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IPixelArrays2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IPixelArrays2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IPixelArrays2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IPixelArrays2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IPixelArrays2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IPixelArrays2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IPixelArrays2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IPixelArrays2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IPixelArrays2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IPixelArrays2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IPixelArrays2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IPixelArrays2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IPixelArrays2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IPixelArrays2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IPixelArrays2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IPixelArrays2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IPixelArrays2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IPixelArrays2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IPixelArrays2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IPixelArrays2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IPixelArrays2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IPixelArrays2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IPixelArrays2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IPixelArrays2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IPixelArrays2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IPixelArrays2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IPixelArrays2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IPixelArrays2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IPixelArrays2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IPixelArrays2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IPixelArrays2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IPixelArrays2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPixelArrays2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IPixelArrays2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPixelArrays2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IPixelArrays2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IPixelArrays2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IPixelArrays2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IPixelArrays2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IPixelArrays2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IPixelArrays2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IPixelArrays2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IPixelArrays2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IPixelArrays2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IPixelArrays2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IPixelArrays2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IPixelArrays2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IPixelArrays2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IPixelArrays2D_INTERFACE_DEFINED__ */


#ifndef __SC_IScannerPixelArray2D_INTERFACE_DEFINED__
#define __SC_IScannerPixelArray2D_INTERFACE_DEFINED__

/* interface SC_IScannerPixelArray2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IScannerPixelArray2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9C8FBBC3-F3EF-11d1-8E17-008048E1AD3F")
    SC_IScannerPixelArray2D : public IDispatch
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetXSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetYSize( 
            /* [retval][out] */ long *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArea( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStep( 
            /* [in] */ long index,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStep( 
            /* [in] */ double X,
            /* [in] */ double Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScInvert( 
            /* [in] */ long Invert) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScInvert( 
            /* [retval][out] */ long *Invert) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScIntensity( 
            /* [in] */ double Intensity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScIntensity( 
            /* [retval][out] */ double *Intensity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( 
            /* [in] */ SC_IPixelArray2D *Array,
            /* [in] */ ScComPixelConvertMethodConstants Method) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMakeBinary( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAlloc( 
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XDim,
            /* [in] */ double YDim,
            /* [in] */ double XStep,
            /* [in] */ double YStep) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPixelFormat( 
            /* [in] */ ScComPixelFormatConstants Format) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPixelFormat( 
            /* [retval][out] */ ScComPixelFormatConstants *Format) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetInternalAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetInternalAt( 
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value) = 0;
        
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
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPointMode( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPointMode( 
            /* [retval][out] */ long *OnOff) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitStart( 
            /* [in] */ double Start) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitStart( 
            /* [retval][out] */ double *Start) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSplitStep( 
            /* [in] */ double Step) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSplitStep( 
            /* [retval][out] */ double *Step) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSplit( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPixelArrayFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPixelArrayFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLimit( 
            /* [in] */ long Index,
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLimit( 
            /* [in] */ long Index,
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDoPixelArrayCommand( 
            /* [in] */ long Id,
            /* [in] */ SC_IPixelArray2D *Pix) = 0;
        
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
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBlankThreshold( 
            /* [in] */ long threshold) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBlankThreshold( 
            /* [retval][out] */ long *threshold) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitializeSingleBmpCut( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelArray2D( 
            /* [in] */ VARIANT hBitmap,
            /* [in] */ double resMmPerPixel) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IScannerPixelArray2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IScannerPixelArray2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IScannerPixelArray2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IScannerPixelArray2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IScannerPixelArray2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IScannerPixelArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IScannerPixelArray2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IScannerPixelArray2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IScannerPixelArray2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IScannerPixelArray2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IScannerPixelArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IScannerPixelArray2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IScannerPixelArray2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAt )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAt )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetXSize )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetYSize )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArea )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStep )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStep )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double X,
            /* [in] */ double Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScInvert )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Invert);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScInvert )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Invert);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScIntensity )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Intensity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScIntensity )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Intensity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOffset )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOffset )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ SC_IPixelArray2D *Array,
            /* [in] */ ScComPixelConvertMethodConstants Method);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMakeBinary )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAlloc )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double XMin,
            /* [in] */ double YMin,
            /* [in] */ double XDim,
            /* [in] */ double YDim,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPixelFormat )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ ScComPixelFormatConstants Format);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPixelFormat )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ ScComPixelFormatConstants *Format);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetInternalAt )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInternalAt )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long X,
            /* [in] */ long Y,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IScannerPixelArray2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPointMode )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPointMode )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *OnOff);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitMode )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitMode )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitStart )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Start);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitStart )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Start);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSplitStep )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double Step);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSplitStep )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSplit )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPixelArrayFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPixelArrayFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLimit )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Index,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLimit )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDoPixelArrayCommand )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Id,
            /* [in] */ SC_IPixelArray2D *Pix);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBlankThreshold )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ long threshold);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBlankThreshold )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ long *threshold);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitializeSingleBmpCut )( 
            SC_IScannerPixelArray2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IScannerPixelArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IScannerPixelArray2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IScannerPixelArray2D * This,
            /* [retval][out] */ __int64 *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelArray2D )( 
            SC_IScannerPixelArray2D * This,
            /* [in] */ VARIANT hBitmap,
            /* [in] */ double resMmPerPixel);
        
        END_INTERFACE
    } SC_IScannerPixelArray2DVtbl;

    interface SC_IScannerPixelArray2D
    {
        CONST_VTBL struct SC_IScannerPixelArray2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IScannerPixelArray2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IScannerPixelArray2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IScannerPixelArray2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IScannerPixelArray2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IScannerPixelArray2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IScannerPixelArray2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IScannerPixelArray2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IScannerPixelArray2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IScannerPixelArray2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IScannerPixelArray2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IScannerPixelArray2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IScannerPixelArray2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IScannerPixelArray2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IScannerPixelArray2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IScannerPixelArray2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IScannerPixelArray2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IScannerPixelArray2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IScannerPixelArray2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IScannerPixelArray2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IScannerPixelArray2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IScannerPixelArray2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IScannerPixelArray2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IScannerPixelArray2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IScannerPixelArray2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IScannerPixelArray2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IScannerPixelArray2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IScannerPixelArray2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IScannerPixelArray2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IScannerPixelArray2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IScannerPixelArray2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IScannerPixelArray2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IScannerPixelArray2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IScannerPixelArray2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IScannerPixelArray2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IScannerPixelArray2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IScannerPixelArray2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IScannerPixelArray2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IScannerPixelArray2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IScannerPixelArray2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IScannerPixelArray2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IScannerPixelArray2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IScannerPixelArray2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IScannerPixelArray2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IScannerPixelArray2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IScannerPixelArray2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IScannerPixelArray2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IScannerPixelArray2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IScannerPixelArray2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IScannerPixelArray2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IScannerPixelArray2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IScannerPixelArray2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IScannerPixelArray2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IScannerPixelArray2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IScannerPixelArray2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IScannerPixelArray2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IScannerPixelArray2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IScannerPixelArray2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IScannerPixelArray2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IScannerPixelArray2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IScannerPixelArray2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IScannerPixelArray2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IScannerPixelArray2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IScannerPixelArray2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IScannerPixelArray2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IScannerPixelArray2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IScannerPixelArray2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IScannerPixelArray2D_ScSetAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScSetAt(This,X,Y,Value) ) 

#define SC_IScannerPixelArray2D_ScGetAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScGetAt(This,X,Y,Value) ) 

#define SC_IScannerPixelArray2D_ScGetXSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetXSize(This,Size) ) 

#define SC_IScannerPixelArray2D_ScGetYSize(This,Size)	\
    ( (This)->lpVtbl -> ScGetYSize(This,Size) ) 

#define SC_IScannerPixelArray2D_ScGetArea(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetArea(This,index,Value) ) 

#define SC_IScannerPixelArray2D_ScGetStep(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetStep(This,index,Value) ) 

#define SC_IScannerPixelArray2D_ScSetStep(This,X,Y)	\
    ( (This)->lpVtbl -> ScSetStep(This,X,Y) ) 

#define SC_IScannerPixelArray2D_put_ScInvert(This,Invert)	\
    ( (This)->lpVtbl -> put_ScInvert(This,Invert) ) 

#define SC_IScannerPixelArray2D_get_ScInvert(This,Invert)	\
    ( (This)->lpVtbl -> get_ScInvert(This,Invert) ) 

#define SC_IScannerPixelArray2D_put_ScIntensity(This,Intensity)	\
    ( (This)->lpVtbl -> put_ScIntensity(This,Intensity) ) 

#define SC_IScannerPixelArray2D_get_ScIntensity(This,Intensity)	\
    ( (This)->lpVtbl -> get_ScIntensity(This,Intensity) ) 

#define SC_IScannerPixelArray2D_put_ScOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScOffset(This,Offset) ) 

#define SC_IScannerPixelArray2D_get_ScOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScOffset(This,Offset) ) 

#define SC_IScannerPixelArray2D_ScGenerate(This,Array,Method)	\
    ( (This)->lpVtbl -> ScGenerate(This,Array,Method) ) 

#define SC_IScannerPixelArray2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IScannerPixelArray2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IScannerPixelArray2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IScannerPixelArray2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IScannerPixelArray2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IScannerPixelArray2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IScannerPixelArray2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IScannerPixelArray2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IScannerPixelArray2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IScannerPixelArray2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IScannerPixelArray2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IScannerPixelArray2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IScannerPixelArray2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IScannerPixelArray2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IScannerPixelArray2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IScannerPixelArray2D_ScMakeBinary(This,Size)	\
    ( (This)->lpVtbl -> ScMakeBinary(This,Size) ) 

#define SC_IScannerPixelArray2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IScannerPixelArray2D_ScAlloc(This,XMin,YMin,XDim,YDim,XStep,YStep)	\
    ( (This)->lpVtbl -> ScAlloc(This,XMin,YMin,XDim,YDim,XStep,YStep) ) 

#define SC_IScannerPixelArray2D_put_ScPixelFormat(This,Format)	\
    ( (This)->lpVtbl -> put_ScPixelFormat(This,Format) ) 

#define SC_IScannerPixelArray2D_get_ScPixelFormat(This,Format)	\
    ( (This)->lpVtbl -> get_ScPixelFormat(This,Format) ) 

#define SC_IScannerPixelArray2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IScannerPixelArray2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IScannerPixelArray2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IScannerPixelArray2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IScannerPixelArray2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IScannerPixelArray2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IScannerPixelArray2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IScannerPixelArray2D_ScSetInternalAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScSetInternalAt(This,X,Y,Value) ) 

#define SC_IScannerPixelArray2D_ScGetInternalAt(This,X,Y,Value)	\
    ( (This)->lpVtbl -> ScGetInternalAt(This,X,Y,Value) ) 

#define SC_IScannerPixelArray2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IScannerPixelArray2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IScannerPixelArray2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IScannerPixelArray2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IScannerPixelArray2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IScannerPixelArray2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IScannerPixelArray2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IScannerPixelArray2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IScannerPixelArray2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IScannerPixelArray2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IScannerPixelArray2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IScannerPixelArray2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IScannerPixelArray2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IScannerPixelArray2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IScannerPixelArray2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IScannerPixelArray2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IScannerPixelArray2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IScannerPixelArray2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IScannerPixelArray2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IScannerPixelArray2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IScannerPixelArray2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IScannerPixelArray2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IScannerPixelArray2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IScannerPixelArray2D_put_ScPointMode(This,OnOff)	\
    ( (This)->lpVtbl -> put_ScPointMode(This,OnOff) ) 

#define SC_IScannerPixelArray2D_get_ScPointMode(This,OnOff)	\
    ( (This)->lpVtbl -> get_ScPointMode(This,OnOff) ) 

#define SC_IScannerPixelArray2D_put_ScSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScSplitMode(This,Mode) ) 

#define SC_IScannerPixelArray2D_get_ScSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScSplitMode(This,Mode) ) 

#define SC_IScannerPixelArray2D_put_ScSplitStart(This,Start)	\
    ( (This)->lpVtbl -> put_ScSplitStart(This,Start) ) 

#define SC_IScannerPixelArray2D_get_ScSplitStart(This,Start)	\
    ( (This)->lpVtbl -> get_ScSplitStart(This,Start) ) 

#define SC_IScannerPixelArray2D_put_ScSplitStep(This,Step)	\
    ( (This)->lpVtbl -> put_ScSplitStep(This,Step) ) 

#define SC_IScannerPixelArray2D_get_ScSplitStep(This,Step)	\
    ( (This)->lpVtbl -> get_ScSplitStep(This,Step) ) 

#define SC_IScannerPixelArray2D_ScSplit(This,Entity)	\
    ( (This)->lpVtbl -> ScSplit(This,Entity) ) 

#define SC_IScannerPixelArray2D_put_ScPixelArrayFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScPixelArrayFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_get_ScPixelArrayFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScPixelArrayFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_ScSetLimit(This,Index,Size)	\
    ( (This)->lpVtbl -> ScSetLimit(This,Index,Size) ) 

#define SC_IScannerPixelArray2D_ScGetLimit(This,Index,Size)	\
    ( (This)->lpVtbl -> ScGetLimit(This,Index,Size) ) 

#define SC_IScannerPixelArray2D_ScDoPixelArrayCommand(This,Id,Pix)	\
    ( (This)->lpVtbl -> ScDoPixelArrayCommand(This,Id,Pix) ) 

#define SC_IScannerPixelArray2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IScannerPixelArray2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IScannerPixelArray2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IScannerPixelArray2D_put_ScBlankThreshold(This,threshold)	\
    ( (This)->lpVtbl -> put_ScBlankThreshold(This,threshold) ) 

#define SC_IScannerPixelArray2D_get_ScBlankThreshold(This,threshold)	\
    ( (This)->lpVtbl -> get_ScBlankThreshold(This,threshold) ) 

#define SC_IScannerPixelArray2D_ScInitializeSingleBmpCut(This)	\
    ( (This)->lpVtbl -> ScInitializeSingleBmpCut(This) ) 

#define SC_IScannerPixelArray2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IScannerPixelArray2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IScannerPixelArray2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IScannerPixelArray2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#define SC_IScannerPixelArray2D_ScSetPixelArray2D(This,hBitmap,resMmPerPixel)	\
    ( (This)->lpVtbl -> ScSetPixelArray2D(This,hBitmap,resMmPerPixel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScDimensionLimitFlags_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScZScaleAbs_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScZScaleAbs_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScTranslateZ_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IScannerPixelArray2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScScaleZ_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IScannerPixelArray2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScMirrorOnPlane_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IScannerPixelArray2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScVarEntityData_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IScannerPixelArray2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScPointMode_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long OnOff);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScPointMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScPointMode_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ long *OnOff);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScPointMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScSplitMode_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScSplitMode_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScSplitStart_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double Start);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScSplitStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScSplitStart_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ double *Start);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScSplitStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScSplitStep_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double Step);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScSplitStep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScSplitStep_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ double *Step);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScSplitStep_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScSplit_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);


void __RPC_STUB SC_IScannerPixelArray2D_ScSplit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScPixelArrayFlags_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScPixelArrayFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScPixelArrayFlags_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScPixelArrayFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScSetLimit_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Index,
    /* [in] */ double Size);


void __RPC_STUB SC_IScannerPixelArray2D_ScSetLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScGetLimit_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Index,
    /* [retval][out] */ double *Size);


void __RPC_STUB SC_IScannerPixelArray2D_ScGetLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScDoPixelArrayCommand_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Id,
    /* [in] */ SC_IPixelArray2D *Pix);


void __RPC_STUB SC_IScannerPixelArray2D_ScDoPixelArrayCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScSetMarkFlags_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IScannerPixelArray2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScGetMarkFlags_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IScannerPixelArray2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScSetPropertyVariant2_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IScannerPixelArray2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_put_ScBlankThreshold_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ long threshold);


void __RPC_STUB SC_IScannerPixelArray2D_put_ScBlankThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_get_ScBlankThreshold_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ long *threshold);


void __RPC_STUB SC_IScannerPixelArray2D_get_ScBlankThreshold_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScInitializeSingleBmpCut_Proxy( 
    SC_IScannerPixelArray2D * This);


void __RPC_STUB SC_IScannerPixelArray2D_ScInitializeSingleBmpCut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScRotate3D_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IScannerPixelArray2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScOutline2D_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IScannerPixelArray2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScOutline3D_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IScannerPixelArray2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScGetUniqueObjectId_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IScannerPixelArray2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IScannerPixelArray2D_ScSetPixelArray2D_Proxy( 
    SC_IScannerPixelArray2D * This,
    /* [in] */ VARIANT hBitmap,
    /* [in] */ double resMmPerPixel);


void __RPC_STUB SC_IScannerPixelArray2D_ScSetPixelArray2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IScannerPixelArray2D_INTERFACE_DEFINED__ */



#ifndef __ScConstantsPixel2D_MODULE_DEFINED__
#define __ScConstantsPixel2D_MODULE_DEFINED__


/* module ScConstantsPixel2D */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectPixelArray2D	=	( 0x2000 | ( ( 5 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectPixelArrays2D	=	( 0x2000 | ( ( 7 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectScannerPixelArray2D	=	( 0x2000 | ( ( 10 * 0x1000000 )  + (( ( 0x100000 + 0x40000 )  + 0x8000 ) ) )  ) ;

#endif /* __ScConstantsPixel2D_MODULE_DEFINED__ */


#ifndef __ScConstantsPixelArraySpitMode_MODULE_DEFINED__
#define __ScConstantsPixelArraySpitMode_MODULE_DEFINED__


/* module ScConstantsPixelArraySpitMode */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComPixelArraySplitModeToLayers	=	0x1;

/* [helpstring] */ const long scComPixelArraySplitModeAlongX	=	0x2;

/* [helpstring] */ const long scComPixelArraySplitModeAlongY	=	0x4;

/* [helpstring] */ const long scComPixelArraySplitModeStartBorder	=	0x8;

/* [helpstring] */ const long scComPixelArraySplitModeStoreToMain	=	0x10;

/* [helpstring] */ const long scComPixelArraySplitModeStoreToEntity	=	0x20;

/* [helpstring] */ const long scComPixelArraySplitModeSetCounters	=	0x40;

#endif /* __ScConstantsPixelArraySpitMode_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScPixelArray2D;

#ifdef __cplusplus

class DECLSPEC_UUID("B9218934-9346-11d1-9762-008048EEE00C")
ScPixelArray2D;
#endif

EXTERN_C const CLSID CLSID_ScPixelArrays2D;

#ifdef __cplusplus

class DECLSPEC_UUID("E515C3B3-1596-11d2-8CA7-008048EEDCB8")
ScPixelArrays2D;
#endif

EXTERN_C const CLSID CLSID_ScScannerPixelArray2D;

#ifdef __cplusplus

class DECLSPEC_UUID("9C8FBBC2-F3EF-11d1-8E17-008048E1AD3F")
ScScannerPixelArray2D;
#endif
#endif /* __ScapsSamPixel2D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


