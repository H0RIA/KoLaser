

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:31 2017
 */
/* Compiler settings for d:\scaps\dll_source\text2d\com\include\sc_text2d_type_lib.idl:
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


#ifndef __sc_text2d_type_lib_h__
#define __sc_text2d_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IChar2D_FWD_DEFINED__
#define __SC_IChar2D_FWD_DEFINED__
typedef interface SC_IChar2D SC_IChar2D;
#endif 	/* __SC_IChar2D_FWD_DEFINED__ */


#ifndef __SC_IWinText2D_FWD_DEFINED__
#define __SC_IWinText2D_FWD_DEFINED__
typedef interface SC_IWinText2D SC_IWinText2D;
#endif 	/* __SC_IWinText2D_FWD_DEFINED__ */


#ifndef __SC_IBarCode_FWD_DEFINED__
#define __SC_IBarCode_FWD_DEFINED__
typedef interface SC_IBarCode SC_IBarCode;
#endif 	/* __SC_IBarCode_FWD_DEFINED__ */


#ifndef __SC_IBarCode39_FWD_DEFINED__
#define __SC_IBarCode39_FWD_DEFINED__
typedef interface SC_IBarCode39 SC_IBarCode39;
#endif 	/* __SC_IBarCode39_FWD_DEFINED__ */


#ifndef __SC_IBarCode12_FWD_DEFINED__
#define __SC_IBarCode12_FWD_DEFINED__
typedef interface SC_IBarCode12 SC_IBarCode12;
#endif 	/* __SC_IBarCode12_FWD_DEFINED__ */


#ifndef __SC_IChars2D_FWD_DEFINED__
#define __SC_IChars2D_FWD_DEFINED__
typedef interface SC_IChars2D SC_IChars2D;
#endif 	/* __SC_IChars2D_FWD_DEFINED__ */


#ifndef __SC_IWinTextChars2D_FWD_DEFINED__
#define __SC_IWinTextChars2D_FWD_DEFINED__
typedef interface SC_IWinTextChars2D SC_IWinTextChars2D;
#endif 	/* __SC_IWinTextChars2D_FWD_DEFINED__ */


#ifndef __SC_IBarCodeChars2D_FWD_DEFINED__
#define __SC_IBarCodeChars2D_FWD_DEFINED__
typedef interface SC_IBarCodeChars2D SC_IBarCodeChars2D;
#endif 	/* __SC_IBarCodeChars2D_FWD_DEFINED__ */


#ifndef __SC_IBarCode39Chars2D_FWD_DEFINED__
#define __SC_IBarCode39Chars2D_FWD_DEFINED__
typedef interface SC_IBarCode39Chars2D SC_IBarCode39Chars2D;
#endif 	/* __SC_IBarCode39Chars2D_FWD_DEFINED__ */


#ifndef __SC_IBarCode12Chars2D_FWD_DEFINED__
#define __SC_IBarCode12Chars2D_FWD_DEFINED__
typedef interface SC_IBarCode12Chars2D SC_IBarCode12Chars2D;
#endif 	/* __SC_IBarCode12Chars2D_FWD_DEFINED__ */


#ifndef __SC_ISerialNumber2D_FWD_DEFINED__
#define __SC_ISerialNumber2D_FWD_DEFINED__
typedef interface SC_ISerialNumber2D SC_ISerialNumber2D;
#endif 	/* __SC_ISerialNumber2D_FWD_DEFINED__ */


#ifndef __ScWinText2D_FWD_DEFINED__
#define __ScWinText2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScWinText2D ScWinText2D;
#else
typedef struct ScWinText2D ScWinText2D;
#endif /* __cplusplus */

#endif 	/* __ScWinText2D_FWD_DEFINED__ */


#ifndef __ScWinTextChars2D_FWD_DEFINED__
#define __ScWinTextChars2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScWinTextChars2D ScWinTextChars2D;
#else
typedef struct ScWinTextChars2D ScWinTextChars2D;
#endif /* __cplusplus */

#endif 	/* __ScWinTextChars2D_FWD_DEFINED__ */


#ifndef __ScBarCode39Chars2D_FWD_DEFINED__
#define __ScBarCode39Chars2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCode39Chars2D ScBarCode39Chars2D;
#else
typedef struct ScBarCode39Chars2D ScBarCode39Chars2D;
#endif /* __cplusplus */

#endif 	/* __ScBarCode39Chars2D_FWD_DEFINED__ */


#ifndef __ScBarCode39_FWD_DEFINED__
#define __ScBarCode39_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCode39 ScBarCode39;
#else
typedef struct ScBarCode39 ScBarCode39;
#endif /* __cplusplus */

#endif 	/* __ScBarCode39_FWD_DEFINED__ */


#ifndef __ScBarCode12_FWD_DEFINED__
#define __ScBarCode12_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCode12 ScBarCode12;
#else
typedef struct ScBarCode12 ScBarCode12;
#endif /* __cplusplus */

#endif 	/* __ScBarCode12_FWD_DEFINED__ */


#ifndef __ScBarCode12Chars2D_FWD_DEFINED__
#define __ScBarCode12Chars2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScBarCode12Chars2D ScBarCode12Chars2D;
#else
typedef struct ScBarCode12Chars2D ScBarCode12Chars2D;
#endif /* __cplusplus */

#endif 	/* __ScBarCode12Chars2D_FWD_DEFINED__ */


#ifndef __ScSerialNumber2D_FWD_DEFINED__
#define __ScSerialNumber2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScSerialNumber2D ScSerialNumber2D;
#else
typedef struct ScSerialNumber2D ScSerialNumber2D;
#endif /* __cplusplus */

#endif 	/* __ScSerialNumber2D_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_text2d_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_text2d_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_text2d_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamText2D_LIBRARY_DEFINED__
#define __ScapsSamText2D_LIBRARY_DEFINED__

/* library ScapsSamText2D */
/* [version][helpstring][uuid] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("716D6781-28C7-4258-B84F-80957B431838") 
enum ScComSerialNumberModes
    {	scComSerialNumber2DModeText	= 1,
	scComSerialNumber2DModeBarCode	= 2,
	scComSerialNumber2DModeASCIIFile	= 4,
	scComSerialNumber2DModeDateTime	= 8,
	scComSerialNumber2DModeCustomFormat	= 16,
	scComSerialNumber2DModeCallBack	= 32,
	scComSerialNumber2DModeTextAndDateTime	= 64,
	scComSerialNumber2DModeOrderFirstDateTime	= 128,
	scComSerialNumber2DModeUII	= 256,
	scComSerialNumber2DModeIncMixedCharType	= 512,
	scComSerialNumber2DModePopupEditBoxBarcodeReaderMode	= 1024,
	scComSerialNumber2DModeResetSerialAtTimeShiftChange	= 2048,
	scComSerialNumber2DModeUseGlobalSN	= 4096
    } 	ScComSerialNumberModes;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("0439984F-F943-4837-B07E-C3334BE998BC") 
enum ScComBarFlagConstants
    {	scComBarFlagVariableLenght	= 0x1,
	scComBarFlagInvert	= 0x2,
	scComBarFlagDisableAutoQuietZone	= 0x4,
	scComBarFlagQuietZoneAbsolute	= 0x8,
	scComBarFlagGenerateCheckCode	= 0x10,
	scComBarFlagInvertExceptText	= 0x20,
	scComBarFlagInvertCellmode	= 0x40,
	scComBarFlagCompactMode	= 0x80,
	scComBarFlagRightToLeft	= 0x100,
	scComBarFlagCellmode	= 0x200
    } 	ScComBarFlagConstants;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("5FB1790F-95E8-4866-97BF-960B74E78234") 
enum ScComDataMatrixExEncodations
    {	scComDataMatrixExEncodationASCII	= 1,
	scComDataMatrixExEncodationBase256	= 2,
	scComDataMatrixExEncodationC40	= 3,
	scComDataMatrixExEncodationText	= 4,
	scComDataMatrixExEncodationANSI_X12	= 5,
	scComDataMatrixExEncodationEDIFACT	= 6
    } 	ScComDataMatrixExEncodations;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("C6B6001C-4B43-4cb6-AA42-659294FF3CC8") 
enum ScComDataMatrixExSymbolModes
    {	scComDataMatrixExSymbolModeSquare	= 0,
	scComDataMatrixExSymbolModeRectangle	= 1,
	scComDataMatrixExSymbolModeAutoSize	= 0x10000,
	scComDataMatrixExSymbolModeAutoEncodation	= 0x20000,
	scComDataMatrixExSymbolModeDots	= 0x40000,
	scComDataMatrixExSymbolModeTilde	= 0x80000,
	scComDataMatrixExSymbolModeCells	= 0x100000,
	scComDataMatrixExSymbolModeNoFinderCells	= 0x200000,
	scComDataMatrixExSymbolModeEllipse	= 0x400000,
	scComDataMatrixExSymbolModeTextFreelyEditable	= 0x800000
    } 	ScComDataMatrixExSymbolModes;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("36FEA977-FB68-4db3-9671-9A39D3106C1F") 
enum ScComDotcodeModes
    {	scComDotcodeModeGenerateDots	= 1,
	scComDotcodeModeTextFreelyEditable	= 0x800000
    } 	ScComDotcodeModes;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("C48F9046-100A-4776-A028-049A6B3E642C") 
enum ScComQrcodeModes
    {	scComQrcodeModeGenerateDots	= 1,
	scComQrcodeModeCells	= 0x100000,
	scComQrcodeModeTextFreelyEditable	= 0x800000
    } 	ScComQrcodeModes;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("8AD5ED17-39CA-4ca5-9A15-3A5A24936B7C") 
enum ScCom2of5Modes
    {	scCom2of5ModeInterleaved	= 1,
	scCom2of5ModeGenerateChecksum	= 2
    } 	ScCom2of5Modes;

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("222171CE-0874-4b4a-AD8B-53E1A194C5BF") 
enum ScComCode39Modes
    {	scComCode39ModeFullAscii	= 1,
	scComCode39ModeGenerateChecksum	= 2
    } 	ScComCode39Modes;


EXTERN_C const IID LIBID_ScapsSamText2D;

#ifndef __SC_IChar2D_INTERFACE_DEFINED__
#define __SC_IChar2D_INTERFACE_DEFINED__

/* interface SC_IChar2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IChar2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A2-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IChar2D : public IDispatch
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
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IChar2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IChar2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IChar2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IChar2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IChar2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IChar2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IChar2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IChar2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IChar2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IChar2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IChar2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IChar2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IChar2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IChar2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IChar2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IChar2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IChar2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IChar2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IChar2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IChar2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IChar2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IChar2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IChar2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IChar2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IChar2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IChar2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_IChar2D * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IChar2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IChar2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IChar2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IChar2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IChar2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IChar2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IChar2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IChar2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IChar2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IChar2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IChar2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IChar2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IChar2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IChar2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IChar2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IChar2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IChar2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IChar2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IChar2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IChar2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IChar2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_IChar2D * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IChar2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IChar2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IChar2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IChar2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IChar2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IChar2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IChar2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IChar2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IChar2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IChar2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_IChar2D * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IChar2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IChar2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IChar2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IChar2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_IChar2D * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_IChar2D * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IChar2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IChar2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IChar2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IChar2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IChar2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IChar2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IChar2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IChar2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IChar2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IChar2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IChar2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IChar2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IChar2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IChar2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IChar2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IChar2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IChar2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IChar2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IChar2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IChar2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IChar2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IChar2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IChar2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IChar2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IChar2DVtbl;

    interface SC_IChar2D
    {
        CONST_VTBL struct SC_IChar2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IChar2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IChar2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IChar2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IChar2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IChar2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IChar2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IChar2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IChar2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IChar2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IChar2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IChar2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IChar2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IChar2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IChar2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IChar2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IChar2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IChar2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IChar2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IChar2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IChar2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IChar2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IChar2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IChar2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IChar2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IChar2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IChar2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IChar2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IChar2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IChar2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IChar2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IChar2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IChar2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IChar2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IChar2D_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_IChar2D_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_IChar2D_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_IChar2D_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_IChar2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IChar2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IChar2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IChar2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IChar2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IChar2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IChar2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IChar2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChar2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChar2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IChar2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IChar2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IChar2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IChar2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IChar2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IChar2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IChar2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IChar2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IChar2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IChar2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IChar2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IChar2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IChar2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IChar2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IChar2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IChar2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IChar2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IChar2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IChar2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IChar2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IChar2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IChar2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IChar2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IChar2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IChar2D_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_IChar2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IChar2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IChar2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IChar2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IChar2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IChar2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IChar2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IChar2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IChar2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IChar2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IChar2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IChar2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IChar2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IChar2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IChar2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IChar2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IChar2D_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_IChar2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IChar2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IChar2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IChar2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IChar2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IChar2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IChar2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IChar2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IChar2D_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_IChar2D_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_IChar2D_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_IChar2D_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_IChar2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IChar2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IChar2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IChar2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IChar2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IChar2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IChar2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IChar2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IChar2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IChar2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IChar2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IChar2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IChar2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IChar2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IChar2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IChar2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChar2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChar2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChar2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChar2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IChar2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IChar2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IChar2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IChar2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IChar2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IChar2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IChar2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IChar2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChar2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IChar2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IChar2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IChar2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChar2D_ScSetPropertyVariant2_Proxy( 
    SC_IChar2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IChar2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChar2D_ScRotate3D_Proxy( 
    SC_IChar2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IChar2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChar2D_ScOutline2D_Proxy( 
    SC_IChar2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IChar2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChar2D_ScOutline3D_Proxy( 
    SC_IChar2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IChar2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChar2D_ScGetUniqueObjectId_Proxy( 
    SC_IChar2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IChar2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IChar2D_INTERFACE_DEFINED__ */


#ifndef __SC_IWinText2D_INTERFACE_DEFINED__
#define __SC_IWinText2D_INTERFACE_DEFINED__

/* interface SC_IWinText2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IWinText2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C13C9274-4D50-11d1-9702-008048EEE00C")
    SC_IWinText2D : public IDispatch
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
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFont( 
            /* [retval][out] */ BSTR *Font) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFont( 
            /* [in] */ BSTR Font) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOrientation( 
            /* [retval][out] */ double *Orientation) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOrientation( 
            /* [in] */ double Orientation) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPointResolution( 
            /* [retval][out] */ double *PointResolution) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPointResolution( 
            /* [in] */ double PointResolution) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWeight( 
            /* [retval][out] */ long *Weight) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWeight( 
            /* [in] */ long Weight) = 0;
        
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

    typedef struct SC_IWinText2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IWinText2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IWinText2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IWinText2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IWinText2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IWinText2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IWinText2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IWinText2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IWinText2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IWinText2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IWinText2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IWinText2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IWinText2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IWinText2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IWinText2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IWinText2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IWinText2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IWinText2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IWinText2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IWinText2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IWinText2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IWinText2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IWinText2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_IWinText2D * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IWinText2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IWinText2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IWinText2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IWinText2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFont )( 
            SC_IWinText2D * This,
            /* [retval][out] */ BSTR *Font);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFont )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR Font);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOrientation )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Orientation);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOrientation )( 
            SC_IWinText2D * This,
            /* [in] */ double Orientation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IWinText2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IWinText2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IWinText2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IWinText2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IWinText2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IWinText2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IWinText2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IWinText2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IWinText2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IWinText2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IWinText2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IWinText2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IWinText2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IWinText2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IWinText2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPointResolution )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *PointResolution);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPointResolution )( 
            SC_IWinText2D * This,
            /* [in] */ double PointResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IWinText2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_IWinText2D * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IWinText2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IWinText2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IWinText2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IWinText2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IWinText2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IWinText2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IWinText2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IWinText2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IWinText2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IWinText2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_IWinText2D * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IWinText2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWeight )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Weight);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWeight )( 
            SC_IWinText2D * This,
            /* [in] */ long Weight);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IWinText2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IWinText2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IWinText2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_IWinText2D * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_IWinText2D * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IWinText2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IWinText2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IWinText2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IWinText2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IWinText2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IWinText2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IWinText2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IWinText2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IWinText2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IWinText2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IWinText2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IWinText2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IWinText2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IWinText2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IWinText2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IWinText2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IWinText2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IWinText2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IWinText2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IWinText2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IWinText2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IWinText2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IWinText2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IWinText2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IWinText2DVtbl;

    interface SC_IWinText2D
    {
        CONST_VTBL struct SC_IWinText2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IWinText2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IWinText2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IWinText2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IWinText2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IWinText2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IWinText2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IWinText2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IWinText2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IWinText2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IWinText2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IWinText2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IWinText2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IWinText2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IWinText2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IWinText2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IWinText2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IWinText2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IWinText2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IWinText2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IWinText2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IWinText2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IWinText2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IWinText2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IWinText2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IWinText2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IWinText2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IWinText2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IWinText2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IWinText2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IWinText2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IWinText2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IWinText2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IWinText2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IWinText2D_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_IWinText2D_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_IWinText2D_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_IWinText2D_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_IWinText2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IWinText2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IWinText2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IWinText2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IWinText2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IWinText2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IWinText2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IWinText2D_get_ScFont(This,Font)	\
    ( (This)->lpVtbl -> get_ScFont(This,Font) ) 

#define SC_IWinText2D_put_ScFont(This,Font)	\
    ( (This)->lpVtbl -> put_ScFont(This,Font) ) 

#define SC_IWinText2D_get_ScOrientation(This,Orientation)	\
    ( (This)->lpVtbl -> get_ScOrientation(This,Orientation) ) 

#define SC_IWinText2D_put_ScOrientation(This,Orientation)	\
    ( (This)->lpVtbl -> put_ScOrientation(This,Orientation) ) 

#define SC_IWinText2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinText2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinText2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IWinText2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IWinText2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IWinText2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IWinText2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IWinText2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IWinText2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IWinText2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IWinText2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IWinText2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IWinText2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IWinText2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IWinText2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IWinText2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IWinText2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IWinText2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IWinText2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IWinText2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IWinText2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IWinText2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IWinText2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IWinText2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IWinText2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IWinText2D_get_ScPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> get_ScPointResolution(This,PointResolution) ) 

#define SC_IWinText2D_put_ScPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> put_ScPointResolution(This,PointResolution) ) 

#define SC_IWinText2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IWinText2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IWinText2D_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_IWinText2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IWinText2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IWinText2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IWinText2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IWinText2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IWinText2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IWinText2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IWinText2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IWinText2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IWinText2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IWinText2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IWinText2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IWinText2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IWinText2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IWinText2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IWinText2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IWinText2D_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_IWinText2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IWinText2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IWinText2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IWinText2D_get_ScWeight(This,Weight)	\
    ( (This)->lpVtbl -> get_ScWeight(This,Weight) ) 

#define SC_IWinText2D_put_ScWeight(This,Weight)	\
    ( (This)->lpVtbl -> put_ScWeight(This,Weight) ) 

#define SC_IWinText2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IWinText2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IWinText2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IWinText2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IWinText2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IWinText2D_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_IWinText2D_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_IWinText2D_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_IWinText2D_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_IWinText2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IWinText2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IWinText2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IWinText2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IWinText2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IWinText2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IWinText2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IWinText2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IWinText2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IWinText2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IWinText2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IWinText2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IWinText2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IWinText2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IWinText2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IWinText2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IWinText2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IWinText2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IWinText2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IWinText2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IWinText2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IWinText2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IWinText2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IWinText2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IWinText2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IWinText2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IWinText2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IWinText2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinText2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IWinText2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IWinText2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IWinText2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_get_ScZScaleAbs_Proxy( 
    SC_IWinText2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IWinText2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_put_ScZScaleAbs_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IWinText2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScTranslateZ_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IWinText2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScScaleZ_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IWinText2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScMirrorOnPlane_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IWinText2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScVarEntityData_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IWinText2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScSetMarkFlags_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IWinText2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScGetMarkFlags_Proxy( 
    SC_IWinText2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IWinText2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScSetPropertyVariant2_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IWinText2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScRotate3D_Proxy( 
    SC_IWinText2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IWinText2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScOutline2D_Proxy( 
    SC_IWinText2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IWinText2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScOutline3D_Proxy( 
    SC_IWinText2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IWinText2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinText2D_ScGetUniqueObjectId_Proxy( 
    SC_IWinText2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IWinText2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IWinText2D_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCode_INTERFACE_DEFINED__
#define __SC_IBarCode_INTERFACE_DEFINED__

/* interface SC_IBarCode */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A4-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IBarCode : public IDispatch
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
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IBarCodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCode * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCode * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCode * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCode * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCode * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCode * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCode * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCode * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCode * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCode * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCode * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCode * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCode * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCode * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCode * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCode * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCode * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCode * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCode * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCode * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_IBarCode * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCode * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCode * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IBarCode * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IBarCode * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCode * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCode * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCode * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCode * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCode * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCode * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCode * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCode * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCode * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCode * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCode * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCode * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCode * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCode * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCode * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IBarCode * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCode * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_IBarCode * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCode * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCode * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCode * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCode * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCode * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCode * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCode * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCode * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCode * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCode * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_IBarCode * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IBarCode * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCode * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCode * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCode * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_IBarCode * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_IBarCode * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCode * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCode * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCode * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCode * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCode * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCode * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCode * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCode * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCode * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCode * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCode * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCode * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCode * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCode * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCode * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCode * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCode * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCode * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCode * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCode * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCode * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCode * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCode * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCode * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IBarCodeVtbl;

    interface SC_IBarCode
    {
        CONST_VTBL struct SC_IBarCodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCode_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCode_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCode_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCode_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCode_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCode_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCode_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCode_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCode_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCode_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCode_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCode_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCode_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCode_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCode_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCode_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCode_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCode_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCode_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCode_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCode_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCode_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCode_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCode_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCode_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_IBarCode_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_IBarCode_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_IBarCode_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_IBarCode_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCode_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCode_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IBarCode_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IBarCode_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IBarCode_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IBarCode_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCode_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCode_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCode_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCode_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCode_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCode_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCode_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCode_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCode_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCode_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCode_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCode_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCode_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCode_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCode_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCode_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCode_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCode_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCode_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCode_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_IBarCode_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCode_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCode_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCode_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCode_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCode_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCode_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCode_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCode_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCode_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCode_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCode_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCode_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_IBarCode_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCode_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IBarCode_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IBarCode_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCode_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCode_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCode_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCode_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCode_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_IBarCode_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_IBarCode_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_IBarCode_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_IBarCode_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCode_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCode_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCode_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCode_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCode_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCode_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCode_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCode_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCode_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCode_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCode_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCode_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCode_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCode_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCode_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCode_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCode_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCode_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode_ScSetPropertyVariant2_Proxy( 
    SC_IBarCode * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IBarCode_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode_ScRotate3D_Proxy( 
    SC_IBarCode * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IBarCode_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode_ScOutline2D_Proxy( 
    SC_IBarCode * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IBarCode_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode_ScOutline3D_Proxy( 
    SC_IBarCode * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCode_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode_ScGetUniqueObjectId_Proxy( 
    SC_IBarCode * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCode_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCode_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCode39_INTERFACE_DEFINED__
#define __SC_IBarCode39_INTERFACE_DEFINED__

/* interface SC_IBarCode39 */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCode39;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A5-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IBarCode39 : public IDispatch
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
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IBarCode39Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCode39 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCode39 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCode39 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCode39 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCode39 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCode39 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCode39 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCode39 * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCode39 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCode39 * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCode39 * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCode39 * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCode39 * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCode39 * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCode39 * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCode39 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCode39 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCode39 * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCode39 * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCode39 * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCode39 * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_IBarCode39 * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCode39 * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IBarCode39 * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IBarCode39 * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCode39 * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCode39 * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCode39 * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCode39 * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCode39 * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCode39 * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCode39 * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCode39 * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCode39 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCode39 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCode39 * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCode39 * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCode39 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IBarCode39 * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCode39 * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_IBarCode39 * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCode39 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCode39 * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCode39 * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCode39 * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCode39 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCode39 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCode39 * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCode39 * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCode39 * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCode39 * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IBarCode39 * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCode39 * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCode39 * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCode39 * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_IBarCode39 * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_IBarCode39 * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCode39 * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCode39 * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCode39 * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCode39 * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCode39 * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCode39 * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCode39 * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCode39 * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCode39 * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCode39 * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCode39 * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCode39 * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCode39 * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCode39 * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCode39 * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCode39 * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCode39 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCode39 * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCode39 * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCode39 * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCode39 * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IBarCode39Vtbl;

    interface SC_IBarCode39
    {
        CONST_VTBL struct SC_IBarCode39Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCode39_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCode39_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCode39_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCode39_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCode39_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCode39_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCode39_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCode39_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCode39_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCode39_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCode39_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCode39_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCode39_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCode39_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCode39_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCode39_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCode39_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCode39_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCode39_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCode39_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCode39_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode39_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode39_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCode39_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCode39_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCode39_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCode39_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCode39_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCode39_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCode39_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCode39_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCode39_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCode39_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCode39_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_IBarCode39_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_IBarCode39_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_IBarCode39_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_IBarCode39_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCode39_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCode39_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IBarCode39_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IBarCode39_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IBarCode39_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IBarCode39_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCode39_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCode39_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode39_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode39_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCode39_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCode39_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCode39_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCode39_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCode39_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCode39_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCode39_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCode39_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCode39_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCode39_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCode39_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCode39_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCode39_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode39_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode39_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCode39_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCode39_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCode39_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode39_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode39_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCode39_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCode39_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_IBarCode39_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCode39_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCode39_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode39_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode39_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCode39_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCode39_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode39_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode39_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCode39_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCode39_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCode39_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCode39_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCode39_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCode39_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCode39_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCode39_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_IBarCode39_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCode39_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IBarCode39_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IBarCode39_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCode39_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCode39_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCode39_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCode39_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCode39_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_IBarCode39_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_IBarCode39_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_IBarCode39_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_IBarCode39_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCode39_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCode39_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCode39_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCode39_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCode39_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCode39_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCode39_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCode39_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode39_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode39_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode39_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode39_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode39_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode39_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCode39_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode39_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode39_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode39_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode39_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode39_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode39_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCode39_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCode39_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCode39_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCode39_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCode39_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCode39_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCode39_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCode39_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCode39_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39_ScSetPropertyVariant2_Proxy( 
    SC_IBarCode39 * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IBarCode39_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39_ScRotate3D_Proxy( 
    SC_IBarCode39 * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IBarCode39_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39_ScOutline2D_Proxy( 
    SC_IBarCode39 * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IBarCode39_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39_ScOutline3D_Proxy( 
    SC_IBarCode39 * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCode39_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39_ScGetUniqueObjectId_Proxy( 
    SC_IBarCode39 * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCode39_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCode39_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCode12_INTERFACE_DEFINED__
#define __SC_IBarCode12_INTERFACE_DEFINED__

/* interface SC_IBarCode12 */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCode12;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3527A2F2-8C89-11d2-9AA9-008048EEE00C")
    SC_IBarCode12 : public IDispatch
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
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLineArrays( 
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPackLayer( 
            /* [in] */ long All) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IBarCode12Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCode12 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCode12 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCode12 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCode12 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCode12 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCode12 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCode12 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCode12 * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCode12 * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCode12 * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCode12 * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCode12 * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCode12 * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCode12 * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCode12 * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCode12 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCode12 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCode12 * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCode12 * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCode12 * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCode12 * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScActive )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScActive )( 
            SC_IBarCode12 * This,
            /* [in] */ long Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPolyLines )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_IPolyLines2D **PolyLines);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLineArrays )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_ILineArrays2D **LineArrays);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCode12 * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IBarCode12 * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IBarCode12 * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCode12 * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCode12 * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCode12 * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCode12 * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCode12 * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCode12 * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCode12 * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCode12 * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCode12 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCode12 * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCode12 * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCode12 * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCode12 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IBarCode12 * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCode12 * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPackLayer )( 
            SC_IBarCode12 * This,
            /* [in] */ long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCode12 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCode12 * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCode12 * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCode12 * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCode12 * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCode12 * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCode12 * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCode12 * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCode12 * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCode12 * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPixelArrays )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ IDispatch **PixelArrays);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IBarCode12 * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCode12 * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCode12 * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCode12 * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenNum )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenNum )( 
            SC_IBarCode12 * This,
            /* [in] */ long Num);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchNum )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchNum )( 
            SC_IBarCode12 * This,
            /* [in] */ long Num);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCode12 * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCode12 * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCode12 * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCode12 * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCode12 * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCode12 * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCode12 * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCode12 * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCode12 * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCode12 * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCode12 * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCode12 * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCode12 * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCode12 * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCode12 * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCode12 * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCode12 * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCode12 * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCode12 * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCode12 * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCode12 * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IBarCode12Vtbl;

    interface SC_IBarCode12
    {
        CONST_VTBL struct SC_IBarCode12Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCode12_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCode12_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCode12_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCode12_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCode12_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCode12_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCode12_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCode12_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCode12_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCode12_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCode12_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCode12_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCode12_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCode12_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCode12_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCode12_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCode12_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCode12_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCode12_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCode12_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCode12_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode12_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode12_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCode12_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCode12_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCode12_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCode12_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCode12_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCode12_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCode12_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCode12_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCode12_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCode12_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCode12_get_ScActive(This,Active)	\
    ( (This)->lpVtbl -> get_ScActive(This,Active) ) 

#define SC_IBarCode12_put_ScActive(This,Active)	\
    ( (This)->lpVtbl -> put_ScActive(This,Active) ) 

#define SC_IBarCode12_ScGetPolyLines(This,PolyLines)	\
    ( (This)->lpVtbl -> ScGetPolyLines(This,PolyLines) ) 

#define SC_IBarCode12_ScGetLineArrays(This,LineArrays)	\
    ( (This)->lpVtbl -> ScGetLineArrays(This,LineArrays) ) 

#define SC_IBarCode12_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCode12_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCode12_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IBarCode12_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IBarCode12_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IBarCode12_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IBarCode12_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCode12_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCode12_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode12_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode12_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCode12_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCode12_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCode12_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCode12_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCode12_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCode12_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCode12_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCode12_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCode12_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCode12_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCode12_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCode12_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCode12_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode12_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode12_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCode12_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCode12_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCode12_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode12_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode12_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCode12_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCode12_ScPackLayer(This,All)	\
    ( (This)->lpVtbl -> ScPackLayer(This,All) ) 

#define SC_IBarCode12_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCode12_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCode12_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode12_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode12_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCode12_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCode12_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode12_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode12_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCode12_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCode12_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCode12_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCode12_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCode12_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCode12_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCode12_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCode12_ScGetPixelArrays(This,PixelArrays)	\
    ( (This)->lpVtbl -> ScGetPixelArrays(This,PixelArrays) ) 

#define SC_IBarCode12_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCode12_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IBarCode12_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IBarCode12_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCode12_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCode12_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCode12_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCode12_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCode12_get_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScPenNum(This,Num) ) 

#define SC_IBarCode12_put_ScPenNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScPenNum(This,Num) ) 

#define SC_IBarCode12_get_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> get_ScHatchNum(This,Num) ) 

#define SC_IBarCode12_put_ScHatchNum(This,Num)	\
    ( (This)->lpVtbl -> put_ScHatchNum(This,Num) ) 

#define SC_IBarCode12_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCode12_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCode12_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCode12_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCode12_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCode12_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCode12_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCode12_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCode12_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode12_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode12_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode12_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode12_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode12_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode12_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCode12_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode12_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode12_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode12_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode12_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode12_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode12_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCode12_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCode12_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCode12_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCode12_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCode12_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCode12_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCode12_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCode12_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCode12_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12_ScSetPropertyVariant2_Proxy( 
    SC_IBarCode12 * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IBarCode12_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12_ScRotate3D_Proxy( 
    SC_IBarCode12 * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IBarCode12_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12_ScOutline2D_Proxy( 
    SC_IBarCode12 * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IBarCode12_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12_ScOutline3D_Proxy( 
    SC_IBarCode12 * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCode12_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12_ScGetUniqueObjectId_Proxy( 
    SC_IBarCode12 * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCode12_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCode12_INTERFACE_DEFINED__ */


#ifndef __SC_IChars2D_INTERFACE_DEFINED__
#define __SC_IChars2D_INTERFACE_DEFINED__

/* interface SC_IChars2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IChars2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A1-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IChars2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IChars2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IChars2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IChars2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IChars2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IChars2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IChars2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IChars2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IChars2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IChars2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IChars2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IChars2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IChars2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IChars2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IChars2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IChars2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IChars2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IChars2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IChars2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IChars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IChars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IChars2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IChars2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IChars2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IChars2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IChars2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IChars2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IChars2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IChars2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IChars2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IChars2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IChars2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IChars2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IChars2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IChars2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IChars2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IChars2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IChars2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IChars2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IChars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IChars2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IChars2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IChars2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IChars2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IChars2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IChars2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IChars2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IChars2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IChars2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IChars2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IChars2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IChars2DVtbl;

    interface SC_IChars2D
    {
        CONST_VTBL struct SC_IChars2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IChars2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IChars2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IChars2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IChars2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IChars2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IChars2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IChars2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IChars2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IChars2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IChars2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IChars2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IChars2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IChars2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IChars2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IChars2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IChars2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IChars2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IChars2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IChars2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IChars2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IChars2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IChars2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IChars2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IChars2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IChars2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IChars2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IChars2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IChars2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IChars2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IChars2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IChars2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IChars2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IChars2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IChars2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IChars2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IChars2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IChars2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IChars2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IChars2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IChars2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IChars2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IChars2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChars2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChars2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IChars2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IChars2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IChars2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IChars2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IChars2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IChars2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IChars2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IChars2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IChars2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IChars2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IChars2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IChars2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IChars2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IChars2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IChars2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IChars2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IChars2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IChars2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IChars2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IChars2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IChars2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IChars2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IChars2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IChars2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IChars2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IChars2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IChars2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IChars2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IChars2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IChars2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IChars2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IChars2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IChars2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IChars2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IChars2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IChars2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IChars2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IChars2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IChars2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IChars2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IChars2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IChars2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IChars2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IChars2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IChars2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IChars2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IChars2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IChars2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IChars2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IChars2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IChars2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IChars2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IChars2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IChars2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IChars2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IChars2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IChars2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IChars2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IChars2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IChars2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IChars2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IChars2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IChars2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IChars2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IChars2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IChars2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IChars2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IChars2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IChars2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IChars2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChars2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IChars2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChars2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IChars2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IChars2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IChars2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IChars2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IChars2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IChars2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IChars2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IChars2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IChars2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IChars2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IChars2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IChars2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IChars2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChars2D_ScOutline3D_Proxy( 
    SC_IChars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IChars2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IChars2D_ScGetUniqueObjectId_Proxy( 
    SC_IChars2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IChars2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IChars2D_INTERFACE_DEFINED__ */


#ifndef __SC_IWinTextChars2D_INTERFACE_DEFINED__
#define __SC_IWinTextChars2D_INTERFACE_DEFINED__

/* interface SC_IWinTextChars2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IWinTextChars2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A3-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IWinTextChars2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ SC_IWinText2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ SC_IWinText2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IWinText2D *entity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFont( 
            /* [retval][out] */ BSTR *Font) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFont( 
            /* [in] */ BSTR Font) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOrientation( 
            /* [retval][out] */ double *Orientation) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOrientation( 
            /* [in] */ double Orientation) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPointResolution( 
            /* [retval][out] */ double *PointResolution) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPointResolution( 
            /* [in] */ double PointResolution) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGenerateSingleCharacters( 
            /* [retval][out] */ long *OnOff) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGenerateSingleCharacters( 
            /* [in] */ long OnOff) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGlyphCallBack( 
            /* [in] */ long CallBackFunction) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWeight( 
            /* [retval][out] */ long *Weight) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWeight( 
            /* [in] */ long Weight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRadius( 
            /* [retval][out] */ double *Radius) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRadius( 
            /* [in] */ double Radius) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStartAngle( 
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStartAngle( 
            /* [in] */ double Angle) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLengthLimit( 
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLengthLimit( 
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTextLength( 
            /* [retval][out] */ double *Length) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeightLimit( 
            /* [retval][out] */ double *Limit) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeightLimit( 
            /* [in] */ double Limit) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRadialCenterX( 
            /* [retval][out] */ double *x) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRadialCenterX( 
            /* [in] */ double x) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScRadialCenterY( 
            /* [retval][out] */ double *y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScRadialCenterY( 
            /* [in] */ double y) = 0;
        
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

    typedef struct SC_IWinTextChars2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IWinTextChars2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IWinTextChars2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IWinTextChars2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IWinTextChars2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IWinTextChars2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IWinTextChars2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IWinTextChars2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IWinTextChars2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IWinTextChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IWinTextChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IWinTextChars2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IWinTextChars2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IWinTextChars2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ SC_IWinText2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IWinTextChars2D * This,
            /* [in] */ SC_IWinText2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IWinTextChars2D * This,
            /* [in] */ SC_IWinText2D *entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFont )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ BSTR *Font);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFont )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR Font);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOrientation )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Orientation);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOrientation )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Orientation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IWinTextChars2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IWinTextChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IWinTextChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IWinTextChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IWinTextChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IWinTextChars2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IWinTextChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPointResolution )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *PointResolution);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPointResolution )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double PointResolution);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGenerateSingleCharacters )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *OnOff);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGenerateSingleCharacters )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IWinTextChars2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IWinTextChars2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGlyphCallBack )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long CallBackFunction);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWeight )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Weight);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWeight )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Weight);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRadius )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Radius);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRadius )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Radius);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStartAngle )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Angle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStartAngle )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Angle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IWinTextChars2D * This,
            long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLengthLimit )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLengthLimit )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTextLength )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Length);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeightLimit )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeightLimit )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRadialCenterX )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *x);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRadialCenterX )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double x);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScRadialCenterY )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ double *y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScRadialCenterY )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IWinTextChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IWinTextChars2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IWinTextChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IWinTextChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IWinTextChars2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IWinTextChars2DVtbl;

    interface SC_IWinTextChars2D
    {
        CONST_VTBL struct SC_IWinTextChars2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IWinTextChars2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IWinTextChars2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IWinTextChars2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IWinTextChars2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IWinTextChars2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IWinTextChars2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IWinTextChars2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IWinTextChars2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IWinTextChars2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IWinTextChars2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IWinTextChars2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IWinTextChars2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IWinTextChars2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IWinTextChars2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IWinTextChars2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IWinTextChars2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IWinTextChars2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IWinTextChars2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IWinTextChars2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IWinTextChars2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IWinTextChars2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IWinTextChars2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IWinTextChars2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IWinTextChars2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IWinTextChars2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IWinTextChars2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IWinTextChars2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IWinTextChars2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IWinTextChars2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IWinTextChars2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IWinTextChars2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IWinTextChars2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IWinTextChars2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IWinTextChars2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IWinTextChars2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IWinTextChars2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IWinTextChars2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IWinTextChars2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IWinTextChars2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IWinTextChars2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IWinTextChars2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IWinTextChars2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IWinTextChars2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IWinTextChars2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IWinTextChars2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IWinTextChars2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IWinTextChars2D_get_ScFont(This,Font)	\
    ( (This)->lpVtbl -> get_ScFont(This,Font) ) 

#define SC_IWinTextChars2D_put_ScFont(This,Font)	\
    ( (This)->lpVtbl -> put_ScFont(This,Font) ) 

#define SC_IWinTextChars2D_get_ScOrientation(This,Orientation)	\
    ( (This)->lpVtbl -> get_ScOrientation(This,Orientation) ) 

#define SC_IWinTextChars2D_put_ScOrientation(This,Orientation)	\
    ( (This)->lpVtbl -> put_ScOrientation(This,Orientation) ) 

#define SC_IWinTextChars2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinTextChars2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinTextChars2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IWinTextChars2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IWinTextChars2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IWinTextChars2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IWinTextChars2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IWinTextChars2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IWinTextChars2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IWinTextChars2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IWinTextChars2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IWinTextChars2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IWinTextChars2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IWinTextChars2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IWinTextChars2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IWinTextChars2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IWinTextChars2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IWinTextChars2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IWinTextChars2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IWinTextChars2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IWinTextChars2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IWinTextChars2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IWinTextChars2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IWinTextChars2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IWinTextChars2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IWinTextChars2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IWinTextChars2D_get_ScPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> get_ScPointResolution(This,PointResolution) ) 

#define SC_IWinTextChars2D_put_ScPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> put_ScPointResolution(This,PointResolution) ) 

#define SC_IWinTextChars2D_get_ScGenerateSingleCharacters(This,OnOff)	\
    ( (This)->lpVtbl -> get_ScGenerateSingleCharacters(This,OnOff) ) 

#define SC_IWinTextChars2D_put_ScGenerateSingleCharacters(This,OnOff)	\
    ( (This)->lpVtbl -> put_ScGenerateSingleCharacters(This,OnOff) ) 

#define SC_IWinTextChars2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IWinTextChars2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IWinTextChars2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IWinTextChars2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IWinTextChars2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IWinTextChars2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IWinTextChars2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IWinTextChars2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IWinTextChars2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IWinTextChars2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IWinTextChars2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IWinTextChars2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IWinTextChars2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IWinTextChars2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IWinTextChars2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IWinTextChars2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IWinTextChars2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IWinTextChars2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IWinTextChars2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IWinTextChars2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IWinTextChars2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IWinTextChars2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IWinTextChars2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IWinTextChars2D_ScSetGlyphCallBack(This,CallBackFunction)	\
    ( (This)->lpVtbl -> ScSetGlyphCallBack(This,CallBackFunction) ) 

#define SC_IWinTextChars2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IWinTextChars2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IWinTextChars2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IWinTextChars2D_get_ScWeight(This,Weight)	\
    ( (This)->lpVtbl -> get_ScWeight(This,Weight) ) 

#define SC_IWinTextChars2D_put_ScWeight(This,Weight)	\
    ( (This)->lpVtbl -> put_ScWeight(This,Weight) ) 

#define SC_IWinTextChars2D_get_ScRadius(This,Radius)	\
    ( (This)->lpVtbl -> get_ScRadius(This,Radius) ) 

#define SC_IWinTextChars2D_put_ScRadius(This,Radius)	\
    ( (This)->lpVtbl -> put_ScRadius(This,Radius) ) 

#define SC_IWinTextChars2D_get_ScStartAngle(This,Angle)	\
    ( (This)->lpVtbl -> get_ScStartAngle(This,Angle) ) 

#define SC_IWinTextChars2D_put_ScStartAngle(This,Angle)	\
    ( (This)->lpVtbl -> put_ScStartAngle(This,Angle) ) 

#define SC_IWinTextChars2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IWinTextChars2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IWinTextChars2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IWinTextChars2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IWinTextChars2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IWinTextChars2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IWinTextChars2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IWinTextChars2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IWinTextChars2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IWinTextChars2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IWinTextChars2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IWinTextChars2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IWinTextChars2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IWinTextChars2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IWinTextChars2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IWinTextChars2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IWinTextChars2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IWinTextChars2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IWinTextChars2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IWinTextChars2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IWinTextChars2D_get_ScLengthLimit(This,Limit)	\
    ( (This)->lpVtbl -> get_ScLengthLimit(This,Limit) ) 

#define SC_IWinTextChars2D_put_ScLengthLimit(This,Limit)	\
    ( (This)->lpVtbl -> put_ScLengthLimit(This,Limit) ) 

#define SC_IWinTextChars2D_ScGetTextLength(This,Length)	\
    ( (This)->lpVtbl -> ScGetTextLength(This,Length) ) 

#define SC_IWinTextChars2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IWinTextChars2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IWinTextChars2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IWinTextChars2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IWinTextChars2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IWinTextChars2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IWinTextChars2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IWinTextChars2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IWinTextChars2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IWinTextChars2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IWinTextChars2D_get_ScHeightLimit(This,Limit)	\
    ( (This)->lpVtbl -> get_ScHeightLimit(This,Limit) ) 

#define SC_IWinTextChars2D_put_ScHeightLimit(This,Limit)	\
    ( (This)->lpVtbl -> put_ScHeightLimit(This,Limit) ) 

#define SC_IWinTextChars2D_get_ScRadialCenterX(This,x)	\
    ( (This)->lpVtbl -> get_ScRadialCenterX(This,x) ) 

#define SC_IWinTextChars2D_put_ScRadialCenterX(This,x)	\
    ( (This)->lpVtbl -> put_ScRadialCenterX(This,x) ) 

#define SC_IWinTextChars2D_get_ScRadialCenterY(This,y)	\
    ( (This)->lpVtbl -> get_ScRadialCenterY(This,y) ) 

#define SC_IWinTextChars2D_put_ScRadialCenterY(This,y)	\
    ( (This)->lpVtbl -> put_ScRadialCenterY(This,y) ) 

#define SC_IWinTextChars2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IWinTextChars2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IWinTextChars2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IWinTextChars2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IWinTextChars2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IWinTextChars2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IWinTextChars2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScMarkBeatCount_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB SC_IWinTextChars2D_get_ScMarkBeatCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScMarkBeatCount_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long Count);


void __RPC_STUB SC_IWinTextChars2D_put_ScMarkBeatCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScMarkStartCount_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ long *Count);


void __RPC_STUB SC_IWinTextChars2D_get_ScMarkStartCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScMarkStartCount_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long Count);


void __RPC_STUB SC_IWinTextChars2D_put_ScMarkStartCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScChangeMarkSequence_Proxy( 
    SC_IWinTextChars2D * This,
    long Flags);


void __RPC_STUB SC_IWinTextChars2D_ScChangeMarkSequence_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScLengthLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *Limit);


void __RPC_STUB SC_IWinTextChars2D_get_ScLengthLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScLengthLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double Limit);


void __RPC_STUB SC_IWinTextChars2D_put_ScLengthLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScGetTextLength_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *Length);


void __RPC_STUB SC_IWinTextChars2D_ScGetTextLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScSetDimensionLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long LimitIndex,
    /* [in] */ double Limit);


void __RPC_STUB SC_IWinTextChars2D_ScSetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScGetDimensionLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long LimitIndex,
    /* [retval][out] */ double *Limit);


void __RPC_STUB SC_IWinTextChars2D_ScGetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScDimensionLimitFlags_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IWinTextChars2D_get_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScDimensionLimitFlags_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IWinTextChars2D_put_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScZScaleAbs_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IWinTextChars2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScZScaleAbs_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IWinTextChars2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScTranslateZ_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IWinTextChars2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScScaleZ_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IWinTextChars2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScMirrorOnPlane_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IWinTextChars2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScVarEntityData_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IWinTextChars2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScHeightLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *Limit);


void __RPC_STUB SC_IWinTextChars2D_get_ScHeightLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScHeightLimit_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double Limit);


void __RPC_STUB SC_IWinTextChars2D_put_ScHeightLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScRadialCenterX_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *x);


void __RPC_STUB SC_IWinTextChars2D_get_ScRadialCenterX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScRadialCenterX_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double x);


void __RPC_STUB SC_IWinTextChars2D_put_ScRadialCenterX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_get_ScRadialCenterY_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ double *y);


void __RPC_STUB SC_IWinTextChars2D_get_ScRadialCenterY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_put_ScRadialCenterY_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double y);


void __RPC_STUB SC_IWinTextChars2D_put_ScRadialCenterY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScSetMarkFlags_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IWinTextChars2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScGetMarkFlags_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IWinTextChars2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScSetPropertyVariant2_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IWinTextChars2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScRotate3D_Proxy( 
    SC_IWinTextChars2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IWinTextChars2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScOutline2D_Proxy( 
    SC_IWinTextChars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IWinTextChars2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScOutline3D_Proxy( 
    SC_IWinTextChars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IWinTextChars2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IWinTextChars2D_ScGetUniqueObjectId_Proxy( 
    SC_IWinTextChars2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IWinTextChars2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IWinTextChars2D_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCodeChars2D_INTERFACE_DEFINED__
#define __SC_IBarCodeChars2D_INTERFACE_DEFINED__

/* interface SC_IBarCodeChars2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCodeChars2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A6-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IBarCodeChars2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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

    typedef struct SC_IBarCodeChars2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCodeChars2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCodeChars2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCodeChars2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCodeChars2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCodeChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCodeChars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCodeChars2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCodeChars2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCodeChars2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCodeChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCodeChars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCodeChars2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCodeChars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCodeChars2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCodeChars2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCodeChars2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCodeChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCodeChars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCodeChars2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IBarCodeChars2DVtbl;

    interface SC_IBarCodeChars2D
    {
        CONST_VTBL struct SC_IBarCodeChars2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCodeChars2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCodeChars2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCodeChars2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCodeChars2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCodeChars2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCodeChars2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCodeChars2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCodeChars2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCodeChars2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCodeChars2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCodeChars2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCodeChars2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCodeChars2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCodeChars2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCodeChars2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCodeChars2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCodeChars2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCodeChars2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCodeChars2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCodeChars2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCodeChars2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCodeChars2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCodeChars2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCodeChars2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCodeChars2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCodeChars2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCodeChars2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCodeChars2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCodeChars2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCodeChars2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCodeChars2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCodeChars2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCodeChars2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCodeChars2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IBarCodeChars2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCodeChars2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCodeChars2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IBarCodeChars2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IBarCodeChars2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IBarCodeChars2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IBarCodeChars2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCodeChars2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCodeChars2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCodeChars2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCodeChars2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCodeChars2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCodeChars2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCodeChars2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCodeChars2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCodeChars2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCodeChars2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCodeChars2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCodeChars2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCodeChars2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCodeChars2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCodeChars2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCodeChars2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCodeChars2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCodeChars2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCodeChars2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCodeChars2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCodeChars2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCodeChars2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCodeChars2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCodeChars2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IBarCodeChars2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCodeChars2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCodeChars2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCodeChars2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCodeChars2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCodeChars2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCodeChars2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCodeChars2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCodeChars2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCodeChars2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCodeChars2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCodeChars2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCodeChars2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCodeChars2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCodeChars2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCodeChars2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCodeChars2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCodeChars2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCodeChars2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCodeChars2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IBarCodeChars2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IBarCodeChars2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IBarCodeChars2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IBarCodeChars2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IBarCodeChars2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCodeChars2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCodeChars2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCodeChars2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCodeChars2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCodeChars2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCodeChars2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCodeChars2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCodeChars2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCodeChars2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCodeChars2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCodeChars2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCodeChars2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCodeChars2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCodeChars2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCodeChars2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCodeChars2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCodeChars2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCodeChars2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCodeChars2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCodeChars2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCodeChars2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCodeChars2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCodeChars2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCodeChars2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCodeChars2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCodeChars2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCodeChars2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCodeChars2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCodeChars2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCodeChars2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCodeChars2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCodeChars2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCodeChars2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCodeChars2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCodeChars2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCodeChars2D_ScOutline3D_Proxy( 
    SC_IBarCodeChars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCodeChars2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCodeChars2D_ScGetUniqueObjectId_Proxy( 
    SC_IBarCodeChars2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCodeChars2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCodeChars2D_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCode39Chars2D_INTERFACE_DEFINED__
#define __SC_IBarCode39Chars2D_INTERFACE_DEFINED__

/* interface SC_IBarCode39Chars2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCode39Chars2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE33E8A7-F3AA-11d1-8C7F-008048EEDCB8")
    SC_IBarCode39Chars2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationStart( 
            /* [defaultvalue][in] */ long index = 0x1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIterationEnd( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNext( 
            /* [retval][out] */ SC_IBarCode39 **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdd( 
            /* [in] */ SC_IBarCode39 *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IBarCode39 *entity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScNarrow( 
            /* [retval][out] */ double *Narrow) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScNarrow( 
            /* [in] */ double Narrow) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWideToNarrow( 
            /* [retval][out] */ double *WN) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWideToNarrow( 
            /* [in] */ double WN) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineSpacing( 
            /* [retval][out] */ double *LineSpacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineSpacing( 
            /* [in] */ double LineSpacing) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCharFlags( 
            /* [in] */ long Flags) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkFlag( 
            /* [retval][out] */ long *MF) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkFlag( 
            /* [in] */ long MF) = 0;
        
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

    typedef struct SC_IBarCode39Chars2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCode39Chars2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCode39Chars2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCode39Chars2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCode39Chars2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCode39Chars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCode39Chars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCode39Chars2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCode39Chars2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSpacing )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSpacing )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSize )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSize )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IBarCode39Chars2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ SC_IBarCode39 **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdd )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ SC_IBarCode39 *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ SC_IBarCode39 *entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScNarrow )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Narrow);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScNarrow )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Narrow);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWideToNarrow )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *WN);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWideToNarrow )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double WN);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCode39Chars2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCode39Chars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCode39Chars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCode39Chars2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCode39Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineSpacing )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *LineSpacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineSpacing )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double LineSpacing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCharFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCharFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCode39Chars2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkFlag )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *MF);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkFlag )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long MF);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCode39Chars2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCode39Chars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCode39Chars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCode39Chars2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IBarCode39Chars2DVtbl;

    interface SC_IBarCode39Chars2D
    {
        CONST_VTBL struct SC_IBarCode39Chars2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCode39Chars2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCode39Chars2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCode39Chars2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCode39Chars2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCode39Chars2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCode39Chars2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCode39Chars2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCode39Chars2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCode39Chars2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCode39Chars2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCode39Chars2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCode39Chars2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCode39Chars2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCode39Chars2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCode39Chars2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCode39Chars2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCode39Chars2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCode39Chars2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCode39Chars2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCode39Chars2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCode39Chars2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode39Chars2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode39Chars2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCode39Chars2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCode39Chars2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCode39Chars2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCode39Chars2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCode39Chars2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCode39Chars2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCode39Chars2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCode39Chars2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCode39Chars2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCode39Chars2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCode39Chars2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IBarCode39Chars2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCode39Chars2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCode39Chars2D_get_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScSpacing(This,Spacing) ) 

#define SC_IBarCode39Chars2D_put_ScSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScSpacing(This,Spacing) ) 

#define SC_IBarCode39Chars2D_get_ScSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScSize(This,Size) ) 

#define SC_IBarCode39Chars2D_put_ScSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScSize(This,Size) ) 

#define SC_IBarCode39Chars2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCode39Chars2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IBarCode39Chars2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IBarCode39Chars2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IBarCode39Chars2D_ScAdd(This,entity)	\
    ( (This)->lpVtbl -> ScAdd(This,entity) ) 

#define SC_IBarCode39Chars2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IBarCode39Chars2D_get_ScNarrow(This,Narrow)	\
    ( (This)->lpVtbl -> get_ScNarrow(This,Narrow) ) 

#define SC_IBarCode39Chars2D_put_ScNarrow(This,Narrow)	\
    ( (This)->lpVtbl -> put_ScNarrow(This,Narrow) ) 

#define SC_IBarCode39Chars2D_get_ScWideToNarrow(This,WN)	\
    ( (This)->lpVtbl -> get_ScWideToNarrow(This,WN) ) 

#define SC_IBarCode39Chars2D_put_ScWideToNarrow(This,WN)	\
    ( (This)->lpVtbl -> put_ScWideToNarrow(This,WN) ) 

#define SC_IBarCode39Chars2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39Chars2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39Chars2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCode39Chars2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode39Chars2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode39Chars2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCode39Chars2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCode39Chars2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCode39Chars2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCode39Chars2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCode39Chars2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCode39Chars2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCode39Chars2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCode39Chars2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCode39Chars2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCode39Chars2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCode39Chars2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCode39Chars2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCode39Chars2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode39Chars2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode39Chars2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCode39Chars2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCode39Chars2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCode39Chars2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IBarCode39Chars2D_get_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> get_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode39Chars2D_put_ScLineSpacing(This,LineSpacing)	\
    ( (This)->lpVtbl -> put_ScLineSpacing(This,LineSpacing) ) 

#define SC_IBarCode39Chars2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCode39Chars2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCode39Chars2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCode39Chars2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCode39Chars2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode39Chars2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode39Chars2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCode39Chars2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode39Chars2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode39Chars2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCode39Chars2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCode39Chars2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCode39Chars2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCode39Chars2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCode39Chars2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCode39Chars2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCode39Chars2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCode39Chars2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IBarCode39Chars2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IBarCode39Chars2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IBarCode39Chars2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IBarCode39Chars2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IBarCode39Chars2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCode39Chars2D_get_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScCharFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_put_ScCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScCharFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCode39Chars2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCode39Chars2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCode39Chars2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCode39Chars2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCode39Chars2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCode39Chars2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCode39Chars2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCode39Chars2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCode39Chars2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCode39Chars2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCode39Chars2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCode39Chars2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCode39Chars2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode39Chars2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode39Chars2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode39Chars2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode39Chars2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode39Chars2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode39Chars2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCode39Chars2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode39Chars2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode39Chars2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode39Chars2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode39Chars2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCode39Chars2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCode39Chars2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCode39Chars2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCode39Chars2D_get_ScMarkFlag(This,MF)	\
    ( (This)->lpVtbl -> get_ScMarkFlag(This,MF) ) 

#define SC_IBarCode39Chars2D_put_ScMarkFlag(This,MF)	\
    ( (This)->lpVtbl -> put_ScMarkFlag(This,MF) ) 

#define SC_IBarCode39Chars2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCode39Chars2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCode39Chars2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode39Chars2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCode39Chars2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCode39Chars2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCode39Chars2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScTranslateZ_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IBarCode39Chars2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScScaleZ_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IBarCode39Chars2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScMirrorOnPlane_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IBarCode39Chars2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScVarEntityData_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IBarCode39Chars2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_get_ScMarkFlag_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [retval][out] */ long *MF);


void __RPC_STUB SC_IBarCode39Chars2D_get_ScMarkFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_put_ScMarkFlag_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ long MF);


void __RPC_STUB SC_IBarCode39Chars2D_put_ScMarkFlag_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScSetMarkFlags_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IBarCode39Chars2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScGetMarkFlags_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IBarCode39Chars2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScSetPropertyVariant2_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IBarCode39Chars2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScRotate3D_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IBarCode39Chars2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScOutline2D_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IBarCode39Chars2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScOutline3D_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCode39Chars2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode39Chars2D_ScGetUniqueObjectId_Proxy( 
    SC_IBarCode39Chars2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCode39Chars2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCode39Chars2D_INTERFACE_DEFINED__ */


#ifndef __SC_IBarCode12Chars2D_INTERFACE_DEFINED__
#define __SC_IBarCode12Chars2D_INTERFACE_DEFINED__

/* interface SC_IBarCode12Chars2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IBarCode12Chars2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3527A2F4-8C89-11d2-9AA9-008048EEE00C")
    SC_IBarCode12Chars2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCodeType( 
            /* [retval][out] */ BSTR *Type) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCodeType( 
            /* [in] */ BSTR Type) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar( 
            /* [in] */ BSTR Char) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScVerifyPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextFont( 
            /* [retval][out] */ BSTR *Font) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextFont( 
            /* [in] */ BSTR Font) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextPointResolution( 
            /* [retval][out] */ double *PointResolution) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextPointResolution( 
            /* [in] */ double PointResolution) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextSize( 
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextSize( 
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextSpacing( 
            /* [retval][out] */ double *Spacing) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextSpacing( 
            /* [in] */ double Spacing) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextBaseLine( 
            /* [retval][out] */ double *BaseLine) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextBaseLine( 
            /* [in] */ double BaseLine) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableText( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableText( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetRequiredCharacters( 
            /* [in] */ BSTR CodeType,
            /* [retval][out] */ long *Required) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckCharacters( 
            /* [in] */ BSTR CodeType,
            /* [in] */ BSTR Chars,
            /* [retval][out] */ long *Check) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCodeDimension( 
            /* [in] */ BSTR CodeType,
            /* [retval][out] */ long *Dim) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextWeight( 
            /* [retval][out] */ long *Weight) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextWeight( 
            /* [in] */ long Weight) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTextCharFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTextCharFlags( 
            /* [in] */ long Flags) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBarLineReduction( 
            /* [retval][out] */ double *Reduction) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBarLineReduction( 
            /* [in] */ double Reduction) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBarFlags( 
            /* [retval][out] */ ScComBarFlagConstants *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBarFlags( 
            /* [in] */ ScComBarFlagConstants Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDataMatrixExSymbolSize( 
            /* [retval][out] */ long *SizeID) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDataMatrixExSymbolSize( 
            /* [in] */ long SizeID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDataMatrixExSymbolSizeString( 
            /* [in] */ long SizeID,
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDataMatrixExEncodation( 
            /* [retval][out] */ ScComDataMatrixExEncodations *EncodationID) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDataMatrixExEncodation( 
            /* [in] */ ScComDataMatrixExEncodations EncodationID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDataMatrixExMinSymbolSize( 
            /* [retval][out] */ long *SizeID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDataMatrixExSymbolMode( 
            /* [retval][out] */ ScComDataMatrixExSymbolModes *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDataMatrixExSymbolMode( 
            /* [in] */ ScComDataMatrixExSymbolModes Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFormatString( 
            /* [retval][out] */ BSTR *Format) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFormatString( 
            /* [in] */ BSTR Format) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScNarrow( 
            /* [retval][out] */ double *Narrow) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScNarrow( 
            /* [in] */ double Narrow) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWideToNarrow( 
            /* [retval][out] */ double *WN) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWideToNarrow( 
            /* [in] */ double WN) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetQuietZone( 
            /* [in] */ long ID,
            /* [retval][out] */ double *Zone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetQuietZone( 
            /* [in] */ long ID,
            /* [in] */ double Zone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIs1DCode( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFormatedString( 
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCellSize( 
            /* [in] */ long ID,
            /* [in] */ double Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCellSize( 
            /* [in] */ long ID,
            /* [retval][out] */ double *Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVariant( 
            /* [in] */ long variant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetVariant( 
            /* [retval][out] */ long *variant) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCharXOffset( 
            /* [in] */ double charXOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCharXOffset( 
            /* [retval][out] */ double *charXOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCharYOffset( 
            /* [in] */ double charYOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCharYOffset( 
            /* [retval][out] */ double *charYOffset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetNominalSize( 
            /* [in] */ long nominalSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNominalSize( 
            /* [retval][out] */ long *nominalSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSecurityLevel( 
            /* [in] */ long securityLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSecurityLevel( 
            /* [retval][out] */ long *securityLevel) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScChar2( 
            /* [retval][out] */ BSTR *Char) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScChar2( 
            /* [in] */ BSTR Char) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstEnabledBarcode( 
            /* [retval][out] */ BSTR *BarcodeName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNextEnabledBarcode( 
            /* [retval][out] */ BSTR *BarcodeName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScBarcodeHasTextCaps( 
            /* [in] */ BSTR BarcodeName,
            /* [retval][out] */ long *textSupported) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScQrCodeExMode( 
            /* [retval][out] */ ScComQrcodeModes *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScQrCodeExMode( 
            /* [in] */ ScComQrcodeModes Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScQrCodeExVersion( 
            /* [retval][out] */ long *Version) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScQrCodeExVersion( 
            /* [in] */ long Version) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScQrCodeExWoundEntityName( 
            /* [retval][out] */ BSTR *EntityName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScQrCodeExWoundEntityName( 
            /* [in] */ BSTR EntityName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScQrCodeExWoundPadding( 
            /* [retval][out] */ double *Padding) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScQrCodeExWoundPadding( 
            /* [in] */ double Padding) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IBarCode12Chars2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IBarCode12Chars2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IBarCode12Chars2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IBarCode12Chars2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IBarCode12Chars2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IBarCode12Chars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IBarCode12Chars2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IBarCode12Chars2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IBarCode12Chars2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IBarCode12Chars2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IBarCode12Chars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IBarCode12Chars2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IBarCode12Chars2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCodeType )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Type);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCodeType )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Type);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_IBarCode12Chars2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextFont )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Font);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextFont )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Font);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextPointResolution )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *PointResolution);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextPointResolution )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double PointResolution);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextSpacing )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Spacing);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextSpacing )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Spacing);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextBaseLine )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *BaseLine);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextBaseLine )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double BaseLine);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableText )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableText )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetRequiredCharacters )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR CodeType,
            /* [retval][out] */ long *Required);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckCharacters )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR CodeType,
            /* [in] */ BSTR Chars,
            /* [retval][out] */ long *Check);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCodeDimension )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR CodeType,
            /* [retval][out] */ long *Dim);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextWeight )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Weight);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextWeight )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Weight);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTextCharFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTextCharFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBarLineReduction )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Reduction);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBarLineReduction )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Reduction);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IBarCode12Chars2D * This,
            long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBarFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ ScComBarFlagConstants *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBarFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ ScComBarFlagConstants Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDataMatrixExSymbolSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *SizeID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDataMatrixExSymbolSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long SizeID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDataMatrixExSymbolSizeString )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long SizeID,
            /* [retval][out] */ BSTR *String);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDataMatrixExEncodation )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ ScComDataMatrixExEncodations *EncodationID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDataMatrixExEncodation )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ ScComDataMatrixExEncodations EncodationID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDataMatrixExMinSymbolSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *SizeID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDataMatrixExSymbolMode )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ ScComDataMatrixExSymbolModes *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDataMatrixExSymbolMode )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ ScComDataMatrixExSymbolModes Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFormatString )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Format);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFormatString )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Format);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScNarrow )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Narrow);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScNarrow )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Narrow);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWideToNarrow )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *WN);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWideToNarrow )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double WN);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetQuietZone )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ double *Zone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetQuietZone )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [in] */ double Zone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIs1DCode )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFormatedString )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ BSTR *String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCellSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCellSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVariant )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long variant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetVariant )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *variant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCharXOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double charXOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCharXOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *charXOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCharYOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double charYOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCharYOffset )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *charYOffset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetNominalSize )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long nominalSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNominalSize )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *nominalSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSecurityLevel )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long securityLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSecurityLevel )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *securityLevel);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChar2 )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *Char);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChar2 )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR Char);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IBarCode12Chars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IBarCode12Chars2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ __int64 *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstEnabledBarcode )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *BarcodeName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextEnabledBarcode )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *BarcodeName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScBarcodeHasTextCaps )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR BarcodeName,
            /* [retval][out] */ long *textSupported);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScQrCodeExMode )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ ScComQrcodeModes *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScQrCodeExMode )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ ScComQrcodeModes Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScQrCodeExVersion )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ long *Version);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScQrCodeExVersion )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ long Version);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScQrCodeExWoundEntityName )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ BSTR *EntityName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScQrCodeExWoundEntityName )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ BSTR EntityName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScQrCodeExWoundPadding )( 
            SC_IBarCode12Chars2D * This,
            /* [retval][out] */ double *Padding);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScQrCodeExWoundPadding )( 
            SC_IBarCode12Chars2D * This,
            /* [in] */ double Padding);
        
        END_INTERFACE
    } SC_IBarCode12Chars2DVtbl;

    interface SC_IBarCode12Chars2D
    {
        CONST_VTBL struct SC_IBarCode12Chars2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IBarCode12Chars2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IBarCode12Chars2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IBarCode12Chars2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IBarCode12Chars2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IBarCode12Chars2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IBarCode12Chars2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IBarCode12Chars2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IBarCode12Chars2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IBarCode12Chars2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IBarCode12Chars2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IBarCode12Chars2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IBarCode12Chars2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IBarCode12Chars2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IBarCode12Chars2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IBarCode12Chars2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IBarCode12Chars2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IBarCode12Chars2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IBarCode12Chars2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IBarCode12Chars2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IBarCode12Chars2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IBarCode12Chars2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode12Chars2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IBarCode12Chars2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IBarCode12Chars2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IBarCode12Chars2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IBarCode12Chars2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IBarCode12Chars2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IBarCode12Chars2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IBarCode12Chars2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IBarCode12Chars2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IBarCode12Chars2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IBarCode12Chars2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IBarCode12Chars2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IBarCode12Chars2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12Chars2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12Chars2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IBarCode12Chars2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode12Chars2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IBarCode12Chars2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IBarCode12Chars2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IBarCode12Chars2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IBarCode12Chars2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IBarCode12Chars2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IBarCode12Chars2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IBarCode12Chars2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IBarCode12Chars2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IBarCode12Chars2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IBarCode12Chars2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IBarCode12Chars2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IBarCode12Chars2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IBarCode12Chars2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IBarCode12Chars2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode12Chars2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IBarCode12Chars2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IBarCode12Chars2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IBarCode12Chars2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IBarCode12Chars2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IBarCode12Chars2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IBarCode12Chars2D_get_ScCodeType(This,Type)	\
    ( (This)->lpVtbl -> get_ScCodeType(This,Type) ) 

#define SC_IBarCode12Chars2D_put_ScCodeType(This,Type)	\
    ( (This)->lpVtbl -> put_ScCodeType(This,Type) ) 

#define SC_IBarCode12Chars2D_get_ScChar(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar(This,Char) ) 

#define SC_IBarCode12Chars2D_put_ScChar(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar(This,Char) ) 

#define SC_IBarCode12Chars2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_IBarCode12Chars2D_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_IBarCode12Chars2D_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_IBarCode12Chars2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IBarCode12Chars2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IBarCode12Chars2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IBarCode12Chars2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode12Chars2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IBarCode12Chars2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IBarCode12Chars2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode12Chars2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IBarCode12Chars2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IBarCode12Chars2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IBarCode12Chars2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IBarCode12Chars2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IBarCode12Chars2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IBarCode12Chars2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IBarCode12Chars2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IBarCode12Chars2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IBarCode12Chars2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IBarCode12Chars2D_get_ScTextFont(This,Font)	\
    ( (This)->lpVtbl -> get_ScTextFont(This,Font) ) 

#define SC_IBarCode12Chars2D_put_ScTextFont(This,Font)	\
    ( (This)->lpVtbl -> put_ScTextFont(This,Font) ) 

#define SC_IBarCode12Chars2D_get_ScTextPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> get_ScTextPointResolution(This,PointResolution) ) 

#define SC_IBarCode12Chars2D_put_ScTextPointResolution(This,PointResolution)	\
    ( (This)->lpVtbl -> put_ScTextPointResolution(This,PointResolution) ) 

#define SC_IBarCode12Chars2D_get_ScTextSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScTextSize(This,Size) ) 

#define SC_IBarCode12Chars2D_put_ScTextSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScTextSize(This,Size) ) 

#define SC_IBarCode12Chars2D_get_ScTextSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> get_ScTextSpacing(This,Spacing) ) 

#define SC_IBarCode12Chars2D_put_ScTextSpacing(This,Spacing)	\
    ( (This)->lpVtbl -> put_ScTextSpacing(This,Spacing) ) 

#define SC_IBarCode12Chars2D_get_ScTextBaseLine(This,BaseLine)	\
    ( (This)->lpVtbl -> get_ScTextBaseLine(This,BaseLine) ) 

#define SC_IBarCode12Chars2D_put_ScTextBaseLine(This,BaseLine)	\
    ( (This)->lpVtbl -> put_ScTextBaseLine(This,BaseLine) ) 

#define SC_IBarCode12Chars2D_get_ScEnableText(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableText(This,Enable) ) 

#define SC_IBarCode12Chars2D_put_ScEnableText(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableText(This,Enable) ) 

#define SC_IBarCode12Chars2D_ScGetRequiredCharacters(This,CodeType,Required)	\
    ( (This)->lpVtbl -> ScGetRequiredCharacters(This,CodeType,Required) ) 

#define SC_IBarCode12Chars2D_ScCheckCharacters(This,CodeType,Chars,Check)	\
    ( (This)->lpVtbl -> ScCheckCharacters(This,CodeType,Chars,Check) ) 

#define SC_IBarCode12Chars2D_ScGetCodeDimension(This,CodeType,Dim)	\
    ( (This)->lpVtbl -> ScGetCodeDimension(This,CodeType,Dim) ) 

#define SC_IBarCode12Chars2D_get_ScTextWeight(This,Weight)	\
    ( (This)->lpVtbl -> get_ScTextWeight(This,Weight) ) 

#define SC_IBarCode12Chars2D_put_ScTextWeight(This,Weight)	\
    ( (This)->lpVtbl -> put_ScTextWeight(This,Weight) ) 

#define SC_IBarCode12Chars2D_get_ScTextCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScTextCharFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_put_ScTextCharFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScTextCharFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IBarCode12Chars2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IBarCode12Chars2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IBarCode12Chars2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IBarCode12Chars2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IBarCode12Chars2D_get_ScBarLineReduction(This,Reduction)	\
    ( (This)->lpVtbl -> get_ScBarLineReduction(This,Reduction) ) 

#define SC_IBarCode12Chars2D_put_ScBarLineReduction(This,Reduction)	\
    ( (This)->lpVtbl -> put_ScBarLineReduction(This,Reduction) ) 

#define SC_IBarCode12Chars2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IBarCode12Chars2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IBarCode12Chars2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IBarCode12Chars2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IBarCode12Chars2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IBarCode12Chars2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IBarCode12Chars2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IBarCode12Chars2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IBarCode12Chars2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode12Chars2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IBarCode12Chars2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode12Chars2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IBarCode12Chars2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode12Chars2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IBarCode12Chars2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IBarCode12Chars2D_get_ScBarFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScBarFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_put_ScBarFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScBarFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_get_ScDataMatrixExSymbolSize(This,SizeID)	\
    ( (This)->lpVtbl -> get_ScDataMatrixExSymbolSize(This,SizeID) ) 

#define SC_IBarCode12Chars2D_put_ScDataMatrixExSymbolSize(This,SizeID)	\
    ( (This)->lpVtbl -> put_ScDataMatrixExSymbolSize(This,SizeID) ) 

#define SC_IBarCode12Chars2D_ScGetDataMatrixExSymbolSizeString(This,SizeID,String)	\
    ( (This)->lpVtbl -> ScGetDataMatrixExSymbolSizeString(This,SizeID,String) ) 

#define SC_IBarCode12Chars2D_get_ScDataMatrixExEncodation(This,EncodationID)	\
    ( (This)->lpVtbl -> get_ScDataMatrixExEncodation(This,EncodationID) ) 

#define SC_IBarCode12Chars2D_put_ScDataMatrixExEncodation(This,EncodationID)	\
    ( (This)->lpVtbl -> put_ScDataMatrixExEncodation(This,EncodationID) ) 

#define SC_IBarCode12Chars2D_ScGetDataMatrixExMinSymbolSize(This,SizeID)	\
    ( (This)->lpVtbl -> ScGetDataMatrixExMinSymbolSize(This,SizeID) ) 

#define SC_IBarCode12Chars2D_get_ScDataMatrixExSymbolMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScDataMatrixExSymbolMode(This,Mode) ) 

#define SC_IBarCode12Chars2D_put_ScDataMatrixExSymbolMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScDataMatrixExSymbolMode(This,Mode) ) 

#define SC_IBarCode12Chars2D_get_ScFormatString(This,Format)	\
    ( (This)->lpVtbl -> get_ScFormatString(This,Format) ) 

#define SC_IBarCode12Chars2D_put_ScFormatString(This,Format)	\
    ( (This)->lpVtbl -> put_ScFormatString(This,Format) ) 

#define SC_IBarCode12Chars2D_get_ScNarrow(This,Narrow)	\
    ( (This)->lpVtbl -> get_ScNarrow(This,Narrow) ) 

#define SC_IBarCode12Chars2D_put_ScNarrow(This,Narrow)	\
    ( (This)->lpVtbl -> put_ScNarrow(This,Narrow) ) 

#define SC_IBarCode12Chars2D_get_ScWideToNarrow(This,WN)	\
    ( (This)->lpVtbl -> get_ScWideToNarrow(This,WN) ) 

#define SC_IBarCode12Chars2D_put_ScWideToNarrow(This,WN)	\
    ( (This)->lpVtbl -> put_ScWideToNarrow(This,WN) ) 

#define SC_IBarCode12Chars2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode12Chars2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IBarCode12Chars2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode12Chars2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IBarCode12Chars2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IBarCode12Chars2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IBarCode12Chars2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IBarCode12Chars2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IBarCode12Chars2D_ScGetQuietZone(This,ID,Zone)	\
    ( (This)->lpVtbl -> ScGetQuietZone(This,ID,Zone) ) 

#define SC_IBarCode12Chars2D_ScSetQuietZone(This,ID,Zone)	\
    ( (This)->lpVtbl -> ScSetQuietZone(This,ID,Zone) ) 

#define SC_IBarCode12Chars2D_ScIs1DCode(This,Result)	\
    ( (This)->lpVtbl -> ScIs1DCode(This,Result) ) 

#define SC_IBarCode12Chars2D_ScGetFormatedString(This,ID,String)	\
    ( (This)->lpVtbl -> ScGetFormatedString(This,ID,String) ) 

#define SC_IBarCode12Chars2D_ScSetCellSize(This,ID,Size)	\
    ( (This)->lpVtbl -> ScSetCellSize(This,ID,Size) ) 

#define SC_IBarCode12Chars2D_ScGetCellSize(This,ID,Size)	\
    ( (This)->lpVtbl -> ScGetCellSize(This,ID,Size) ) 

#define SC_IBarCode12Chars2D_ScSetVariant(This,variant)	\
    ( (This)->lpVtbl -> ScSetVariant(This,variant) ) 

#define SC_IBarCode12Chars2D_ScGetVariant(This,variant)	\
    ( (This)->lpVtbl -> ScGetVariant(This,variant) ) 

#define SC_IBarCode12Chars2D_ScSetCharXOffset(This,charXOffset)	\
    ( (This)->lpVtbl -> ScSetCharXOffset(This,charXOffset) ) 

#define SC_IBarCode12Chars2D_ScGetCharXOffset(This,charXOffset)	\
    ( (This)->lpVtbl -> ScGetCharXOffset(This,charXOffset) ) 

#define SC_IBarCode12Chars2D_ScSetCharYOffset(This,charYOffset)	\
    ( (This)->lpVtbl -> ScSetCharYOffset(This,charYOffset) ) 

#define SC_IBarCode12Chars2D_ScGetCharYOffset(This,charYOffset)	\
    ( (This)->lpVtbl -> ScGetCharYOffset(This,charYOffset) ) 

#define SC_IBarCode12Chars2D_ScSetNominalSize(This,nominalSize)	\
    ( (This)->lpVtbl -> ScSetNominalSize(This,nominalSize) ) 

#define SC_IBarCode12Chars2D_ScGetNominalSize(This,nominalSize)	\
    ( (This)->lpVtbl -> ScGetNominalSize(This,nominalSize) ) 

#define SC_IBarCode12Chars2D_ScSetSecurityLevel(This,securityLevel)	\
    ( (This)->lpVtbl -> ScSetSecurityLevel(This,securityLevel) ) 

#define SC_IBarCode12Chars2D_ScGetSecurityLevel(This,securityLevel)	\
    ( (This)->lpVtbl -> ScGetSecurityLevel(This,securityLevel) ) 

#define SC_IBarCode12Chars2D_get_ScChar2(This,Char)	\
    ( (This)->lpVtbl -> get_ScChar2(This,Char) ) 

#define SC_IBarCode12Chars2D_put_ScChar2(This,Char)	\
    ( (This)->lpVtbl -> put_ScChar2(This,Char) ) 

#define SC_IBarCode12Chars2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IBarCode12Chars2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IBarCode12Chars2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IBarCode12Chars2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IBarCode12Chars2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IBarCode12Chars2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IBarCode12Chars2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#define SC_IBarCode12Chars2D_ScGetFirstEnabledBarcode(This,BarcodeName)	\
    ( (This)->lpVtbl -> ScGetFirstEnabledBarcode(This,BarcodeName) ) 

#define SC_IBarCode12Chars2D_ScGetNextEnabledBarcode(This,BarcodeName)	\
    ( (This)->lpVtbl -> ScGetNextEnabledBarcode(This,BarcodeName) ) 

#define SC_IBarCode12Chars2D_ScBarcodeHasTextCaps(This,BarcodeName,textSupported)	\
    ( (This)->lpVtbl -> ScBarcodeHasTextCaps(This,BarcodeName,textSupported) ) 

#define SC_IBarCode12Chars2D_get_ScQrCodeExMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScQrCodeExMode(This,Mode) ) 

#define SC_IBarCode12Chars2D_put_ScQrCodeExMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScQrCodeExMode(This,Mode) ) 

#define SC_IBarCode12Chars2D_get_ScQrCodeExVersion(This,Version)	\
    ( (This)->lpVtbl -> get_ScQrCodeExVersion(This,Version) ) 

#define SC_IBarCode12Chars2D_put_ScQrCodeExVersion(This,Version)	\
    ( (This)->lpVtbl -> put_ScQrCodeExVersion(This,Version) ) 

#define SC_IBarCode12Chars2D_get_ScQrCodeExWoundEntityName(This,EntityName)	\
    ( (This)->lpVtbl -> get_ScQrCodeExWoundEntityName(This,EntityName) ) 

#define SC_IBarCode12Chars2D_put_ScQrCodeExWoundEntityName(This,EntityName)	\
    ( (This)->lpVtbl -> put_ScQrCodeExWoundEntityName(This,EntityName) ) 

#define SC_IBarCode12Chars2D_get_ScQrCodeExWoundPadding(This,Padding)	\
    ( (This)->lpVtbl -> get_ScQrCodeExWoundPadding(This,Padding) ) 

#define SC_IBarCode12Chars2D_put_ScQrCodeExWoundPadding(This,Padding)	\
    ( (This)->lpVtbl -> put_ScQrCodeExWoundPadding(This,Padding) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetDataMatrixExSymbolSizeString_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long SizeID,
    /* [retval][out] */ BSTR *String);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetDataMatrixExSymbolSizeString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScDataMatrixExEncodation_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ ScComDataMatrixExEncodations *EncodationID);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScDataMatrixExEncodation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScDataMatrixExEncodation_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ ScComDataMatrixExEncodations EncodationID);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScDataMatrixExEncodation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetDataMatrixExMinSymbolSize_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *SizeID);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetDataMatrixExMinSymbolSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScDataMatrixExSymbolMode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ ScComDataMatrixExSymbolModes *Mode);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScDataMatrixExSymbolMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScDataMatrixExSymbolMode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ ScComDataMatrixExSymbolModes Mode);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScDataMatrixExSymbolMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScFormatString_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ BSTR *Format);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScFormatString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScFormatString_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ BSTR Format);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScFormatString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScNarrow_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *Narrow);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScNarrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScNarrow_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double Narrow);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScNarrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScWideToNarrow_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *WN);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScWideToNarrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScWideToNarrow_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double WN);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScWideToNarrow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetDimensionLimit_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long LimitIndex,
    /* [in] */ double Limit);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetDimensionLimit_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long LimitIndex,
    /* [retval][out] */ double *Limit);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetDimensionLimit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScDimensionLimitFlags_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScDimensionLimitFlags_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScZScaleAbs_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScZScaleAbs_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScTranslateZ_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_IBarCode12Chars2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScScaleZ_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_IBarCode12Chars2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScMirrorOnPlane_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_IBarCode12Chars2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScVarEntityData_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_IBarCode12Chars2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetQuietZone_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long ID,
    /* [retval][out] */ double *Zone);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetQuietZone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetQuietZone_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long ID,
    /* [in] */ double Zone);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetQuietZone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScIs1DCode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IBarCode12Chars2D_ScIs1DCode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetFormatedString_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long ID,
    /* [retval][out] */ BSTR *String);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetFormatedString_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetCellSize_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long ID,
    /* [in] */ double Size);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetCellSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetCellSize_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long ID,
    /* [retval][out] */ double *Size);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetCellSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetVariant_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long variant);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetVariant_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *variant);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetCharXOffset_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double charXOffset);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetCharXOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetCharXOffset_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *charXOffset);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetCharXOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetCharYOffset_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double charYOffset);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetCharYOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetCharYOffset_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *charYOffset);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetCharYOffset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetNominalSize_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long nominalSize);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetNominalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetNominalSize_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *nominalSize);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetNominalSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetSecurityLevel_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long securityLevel);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetSecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetSecurityLevel_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *securityLevel);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetSecurityLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScChar2_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ BSTR *Char);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScChar2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScChar2_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ BSTR Char);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScChar2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetMarkFlags_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetMarkFlags_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScSetPropertyVariant2_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_IBarCode12Chars2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScRotate3D_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_IBarCode12Chars2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScOutline2D_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_IBarCode12Chars2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScOutline3D_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_IBarCode12Chars2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetUniqueObjectId_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetFirstEnabledBarcode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ BSTR *BarcodeName);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetFirstEnabledBarcode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScGetNextEnabledBarcode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ BSTR *BarcodeName);


void __RPC_STUB SC_IBarCode12Chars2D_ScGetNextEnabledBarcode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_ScBarcodeHasTextCaps_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ BSTR BarcodeName,
    /* [retval][out] */ long *textSupported);


void __RPC_STUB SC_IBarCode12Chars2D_ScBarcodeHasTextCaps_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScQrCodeExMode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ ScComQrcodeModes *Mode);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScQrCodeExMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScQrCodeExMode_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ ScComQrcodeModes Mode);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScQrCodeExMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScQrCodeExVersion_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ long *Version);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScQrCodeExVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScQrCodeExVersion_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ long Version);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScQrCodeExVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScQrCodeExWoundEntityName_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ BSTR *EntityName);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScQrCodeExWoundEntityName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScQrCodeExWoundEntityName_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ BSTR EntityName);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScQrCodeExWoundEntityName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_get_ScQrCodeExWoundPadding_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [retval][out] */ double *Padding);


void __RPC_STUB SC_IBarCode12Chars2D_get_ScQrCodeExWoundPadding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IBarCode12Chars2D_put_ScQrCodeExWoundPadding_Proxy( 
    SC_IBarCode12Chars2D * This,
    /* [in] */ double Padding);


void __RPC_STUB SC_IBarCode12Chars2D_put_ScQrCodeExWoundPadding_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IBarCode12Chars2D_INTERFACE_DEFINED__ */


#ifndef __SC_ISerialNumber2D_INTERFACE_DEFINED__
#define __SC_ISerialNumber2D_INTERFACE_DEFINED__

/* interface SC_ISerialNumber2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ISerialNumber2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8549733-CD97-11d2-9AC8-008048EEE00C")
    SC_ISerialNumber2D : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStartValue( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStartValue( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScIncrementValue( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScIncrementValue( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCurrentValue( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCurrentValue( 
            /* [in] */ BSTR Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFormatString( 
            /* [retval][out] */ BSTR *Format) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFormatString( 
            /* [in] */ BSTR Format) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScNumberMode( 
            /* [retval][out] */ ScComSerialNumberModes *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScNumberMode( 
            /* [in] */ ScComSerialNumberModes Mode) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLinesPerBlock( 
            /* [retval][out] */ long *Lines) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLinesPerBlock( 
            /* [in] */ long Lines) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScASCIIFileName( 
            /* [retval][out] */ BSTR *FileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScASCIIFileName( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDateTimeLocale( 
            /* [retval][out] */ long *Locale) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDateTimeLocale( 
            /* [in] */ long Locale) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowLeadingZeros( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowLeadingZeros( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScNumDigits( 
            /* [retval][out] */ long *Digits) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScNumDigits( 
            /* [in] */ long Digits) = 0;
        
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldName( 
            /* [retval][out] */ BSTR *FieldName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldName( 
            /* [in] */ BSTR FieldName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScTableName( 
            /* [retval][out] */ BSTR *TableName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScTableName( 
            /* [in] */ BSTR TableName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMarkFlags( 
            /* [in] */ long Flags,
            /* [in] */ long Mask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMarkFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumTables( 
            /* [retval][out] */ long *NumTables) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTableName( 
            /* [in] */ long TableIndex,
            /* [retval][out] */ BSTR *TableName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumFields( 
            /* [retval][out] */ long *NumFields) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFieldName( 
            /* [in] */ long FieldIndex,
            /* [retval][out] */ BSTR *FieldName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPropertyVariant2( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerate( void) = 0;
        
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

    typedef struct SC_ISerialNumber2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ISerialNumber2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ISerialNumber2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ISerialNumber2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ISerialNumber2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ISerialNumber2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ISerialNumber2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ISerialNumber2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_ISerialNumber2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_ISerialNumber2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_ISerialNumber2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_ISerialNumber2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_ISerialNumber2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_ISerialNumber2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_ISerialNumber2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_ISerialNumber2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_ISerialNumber2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_ISerialNumber2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_ISerialNumber2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReset )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBeat )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Beat);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBeat )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Beat);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSequenceCount )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResetCount )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResetCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_ISerialNumber2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStartValue )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStartValue )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScIncrementValue )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScIncrementValue )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCurrentValue )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCurrentValue )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFormatString )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *Format);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFormatString )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR Format);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScNumberMode )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ ScComSerialNumberModes *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScNumberMode )( 
            SC_ISerialNumber2D * This,
            /* [in] */ ScComSerialNumberModes Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Num,
            /* [retval][out] */ /* external definition not present */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLinesPerBlock )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Lines);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLinesPerBlock )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Lines);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScASCIIFileName )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *FileName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScASCIIFileName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDateTimeLocale )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Locale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDateTimeLocale )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Locale);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowLeadingZeros )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowLeadingZeros )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScNumDigits )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Digits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScNumDigits )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Digits);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_ISerialNumber2D * This,
            long Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSequenceCount )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldName )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *FieldName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR FieldName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScTableName )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ BSTR *TableName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScTableName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ BSTR TableName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumTables )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *NumTables);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTableName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long TableIndex,
            /* [retval][out] */ BSTR *TableName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumFields )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ long *NumFields);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFieldName )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long FieldIndex,
            /* [retval][out] */ BSTR *FieldName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_ISerialNumber2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerate )( 
            SC_ISerialNumber2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_ISerialNumber2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_ISerialNumber2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_ISerialNumber2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_ISerialNumber2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_ISerialNumber2DVtbl;

    interface SC_ISerialNumber2D
    {
        CONST_VTBL struct SC_ISerialNumber2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ISerialNumber2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ISerialNumber2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ISerialNumber2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ISerialNumber2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ISerialNumber2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ISerialNumber2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ISerialNumber2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ISerialNumber2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_ISerialNumber2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_ISerialNumber2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_ISerialNumber2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_ISerialNumber2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_ISerialNumber2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_ISerialNumber2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_ISerialNumber2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_ISerialNumber2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_ISerialNumber2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_ISerialNumber2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_ISerialNumber2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_ISerialNumber2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_ISerialNumber2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISerialNumber2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_ISerialNumber2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_ISerialNumber2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_ISerialNumber2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_ISerialNumber2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_ISerialNumber2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_ISerialNumber2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_ISerialNumber2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_ISerialNumber2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_ISerialNumber2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_ISerialNumber2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_ISerialNumber2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_ISerialNumber2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISerialNumber2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISerialNumber2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_ISerialNumber2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_ISerialNumber2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_ISerialNumber2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_ISerialNumber2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_ISerialNumber2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_ISerialNumber2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_ISerialNumber2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_ISerialNumber2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_ISerialNumber2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_ISerialNumber2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_ISerialNumber2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_ISerialNumber2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_ISerialNumber2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_ISerialNumber2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_ISerialNumber2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_ISerialNumber2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_ISerialNumber2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_ISerialNumber2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_ISerialNumber2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_ISerialNumber2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_ISerialNumber2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_ISerialNumber2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_ISerialNumber2D_ScReset(This)	\
    ( (This)->lpVtbl -> ScReset(This) ) 

#define SC_ISerialNumber2D_get_ScBeat(This,Beat)	\
    ( (This)->lpVtbl -> get_ScBeat(This,Beat) ) 

#define SC_ISerialNumber2D_put_ScBeat(This,Beat)	\
    ( (This)->lpVtbl -> put_ScBeat(This,Beat) ) 

#define SC_ISerialNumber2D_get_ScSequenceCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScSequenceCount(This,Count) ) 

#define SC_ISerialNumber2D_get_ScResetCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScResetCount(This,Count) ) 

#define SC_ISerialNumber2D_put_ScResetCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScResetCount(This,Count) ) 

#define SC_ISerialNumber2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_ISerialNumber2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_ISerialNumber2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_ISerialNumber2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_ISerialNumber2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_ISerialNumber2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_ISerialNumber2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_ISerialNumber2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_ISerialNumber2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_ISerialNumber2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_ISerialNumber2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_ISerialNumber2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_ISerialNumber2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_ISerialNumber2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_ISerialNumber2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_ISerialNumber2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_ISerialNumber2D_get_ScStartValue(This,Value)	\
    ( (This)->lpVtbl -> get_ScStartValue(This,Value) ) 

#define SC_ISerialNumber2D_put_ScStartValue(This,Value)	\
    ( (This)->lpVtbl -> put_ScStartValue(This,Value) ) 

#define SC_ISerialNumber2D_get_ScIncrementValue(This,Value)	\
    ( (This)->lpVtbl -> get_ScIncrementValue(This,Value) ) 

#define SC_ISerialNumber2D_put_ScIncrementValue(This,Value)	\
    ( (This)->lpVtbl -> put_ScIncrementValue(This,Value) ) 

#define SC_ISerialNumber2D_get_ScCurrentValue(This,Value)	\
    ( (This)->lpVtbl -> get_ScCurrentValue(This,Value) ) 

#define SC_ISerialNumber2D_put_ScCurrentValue(This,Value)	\
    ( (This)->lpVtbl -> put_ScCurrentValue(This,Value) ) 

#define SC_ISerialNumber2D_get_ScFormatString(This,Format)	\
    ( (This)->lpVtbl -> get_ScFormatString(This,Format) ) 

#define SC_ISerialNumber2D_put_ScFormatString(This,Format)	\
    ( (This)->lpVtbl -> put_ScFormatString(This,Format) ) 

#define SC_ISerialNumber2D_get_ScNumberMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScNumberMode(This,Mode) ) 

#define SC_ISerialNumber2D_put_ScNumberMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScNumberMode(This,Mode) ) 

#define SC_ISerialNumber2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_ISerialNumber2D_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_ISerialNumber2D_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_ISerialNumber2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_ISerialNumber2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_ISerialNumber2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_ISerialNumber2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_ISerialNumber2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_ISerialNumber2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_ISerialNumber2D_get_ScLinesPerBlock(This,Lines)	\
    ( (This)->lpVtbl -> get_ScLinesPerBlock(This,Lines) ) 

#define SC_ISerialNumber2D_put_ScLinesPerBlock(This,Lines)	\
    ( (This)->lpVtbl -> put_ScLinesPerBlock(This,Lines) ) 

#define SC_ISerialNumber2D_get_ScASCIIFileName(This,FileName)	\
    ( (This)->lpVtbl -> get_ScASCIIFileName(This,FileName) ) 

#define SC_ISerialNumber2D_put_ScASCIIFileName(This,FileName)	\
    ( (This)->lpVtbl -> put_ScASCIIFileName(This,FileName) ) 

#define SC_ISerialNumber2D_get_ScDateTimeLocale(This,Locale)	\
    ( (This)->lpVtbl -> get_ScDateTimeLocale(This,Locale) ) 

#define SC_ISerialNumber2D_put_ScDateTimeLocale(This,Locale)	\
    ( (This)->lpVtbl -> put_ScDateTimeLocale(This,Locale) ) 

#define SC_ISerialNumber2D_get_ScShowLeadingZeros(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowLeadingZeros(This,Show) ) 

#define SC_ISerialNumber2D_put_ScShowLeadingZeros(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowLeadingZeros(This,Show) ) 

#define SC_ISerialNumber2D_get_ScNumDigits(This,Digits)	\
    ( (This)->lpVtbl -> get_ScNumDigits(This,Digits) ) 

#define SC_ISerialNumber2D_put_ScNumDigits(This,Digits)	\
    ( (This)->lpVtbl -> put_ScNumDigits(This,Digits) ) 

#define SC_ISerialNumber2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_ISerialNumber2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_ISerialNumber2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_ISerialNumber2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_ISerialNumber2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_ISerialNumber2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_ISerialNumber2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_ISerialNumber2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_ISerialNumber2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_ISerialNumber2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_ISerialNumber2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_ISerialNumber2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_ISerialNumber2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_ISerialNumber2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_ISerialNumber2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_ISerialNumber2D_put_ScSequenceCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScSequenceCount(This,Count) ) 

#define SC_ISerialNumber2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISerialNumber2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_ISerialNumber2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISerialNumber2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_ISerialNumber2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_ISerialNumber2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_ISerialNumber2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_ISerialNumber2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_ISerialNumber2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_ISerialNumber2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_ISerialNumber2D_get_ScFieldName(This,FieldName)	\
    ( (This)->lpVtbl -> get_ScFieldName(This,FieldName) ) 

#define SC_ISerialNumber2D_put_ScFieldName(This,FieldName)	\
    ( (This)->lpVtbl -> put_ScFieldName(This,FieldName) ) 

#define SC_ISerialNumber2D_get_ScTableName(This,TableName)	\
    ( (This)->lpVtbl -> get_ScTableName(This,TableName) ) 

#define SC_ISerialNumber2D_put_ScTableName(This,TableName)	\
    ( (This)->lpVtbl -> put_ScTableName(This,TableName) ) 

#define SC_ISerialNumber2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_ISerialNumber2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_ISerialNumber2D_ScGetNumTables(This,NumTables)	\
    ( (This)->lpVtbl -> ScGetNumTables(This,NumTables) ) 

#define SC_ISerialNumber2D_ScGetTableName(This,TableIndex,TableName)	\
    ( (This)->lpVtbl -> ScGetTableName(This,TableIndex,TableName) ) 

#define SC_ISerialNumber2D_ScGetNumFields(This,NumFields)	\
    ( (This)->lpVtbl -> ScGetNumFields(This,NumFields) ) 

#define SC_ISerialNumber2D_ScGetFieldName(This,FieldIndex,FieldName)	\
    ( (This)->lpVtbl -> ScGetFieldName(This,FieldIndex,FieldName) ) 

#define SC_ISerialNumber2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_ISerialNumber2D_ScGenerate(This)	\
    ( (This)->lpVtbl -> ScGenerate(This) ) 

#define SC_ISerialNumber2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_ISerialNumber2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_ISerialNumber2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_ISerialNumber2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_put_ScDimensionLimitFlags_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_ISerialNumber2D_put_ScDimensionLimitFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_get_ScZScaleAbs_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ double *Scale);


void __RPC_STUB SC_ISerialNumber2D_get_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_put_ScZScaleAbs_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ double Scale);


void __RPC_STUB SC_ISerialNumber2D_put_ScZScaleAbs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScTranslateZ_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ double Add);


void __RPC_STUB SC_ISerialNumber2D_ScTranslateZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScScaleZ_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ double fac);


void __RPC_STUB SC_ISerialNumber2D_ScScaleZ_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScMirrorOnPlane_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long PlaneType,
    /* [in] */ long UseCenterOfPart);


void __RPC_STUB SC_ISerialNumber2D_ScMirrorOnPlane_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScVarEntityData_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long DataId,
    /* [in] */ VARIANT Data);


void __RPC_STUB SC_ISerialNumber2D_ScVarEntityData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_get_ScFieldName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ BSTR *FieldName);


void __RPC_STUB SC_ISerialNumber2D_get_ScFieldName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_put_ScFieldName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ BSTR FieldName);


void __RPC_STUB SC_ISerialNumber2D_put_ScFieldName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_get_ScTableName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ BSTR *TableName);


void __RPC_STUB SC_ISerialNumber2D_get_ScTableName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_put_ScTableName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ BSTR TableName);


void __RPC_STUB SC_ISerialNumber2D_put_ScTableName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScSetMarkFlags_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long Flags,
    /* [in] */ long Mask);


void __RPC_STUB SC_ISerialNumber2D_ScSetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetMarkFlags_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_ISerialNumber2D_ScGetMarkFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetNumTables_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ long *NumTables);


void __RPC_STUB SC_ISerialNumber2D_ScGetNumTables_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetTableName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long TableIndex,
    /* [retval][out] */ BSTR *TableName);


void __RPC_STUB SC_ISerialNumber2D_ScGetTableName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetNumFields_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ long *NumFields);


void __RPC_STUB SC_ISerialNumber2D_ScGetNumFields_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetFieldName_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long FieldIndex,
    /* [retval][out] */ BSTR *FieldName);


void __RPC_STUB SC_ISerialNumber2D_ScGetFieldName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScSetPropertyVariant2_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ long Pid1,
    /* [in] */ long Pid2,
    /* [in] */ long Pid3,
    /* [in] */ long Pid4,
    /* [in] */ long VariantId,
    /* [in] */ long ParamId,
    /* [in] */ VARIANT Value);


void __RPC_STUB SC_ISerialNumber2D_ScSetPropertyVariant2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGenerate_Proxy( 
    SC_ISerialNumber2D * This);


void __RPC_STUB SC_ISerialNumber2D_ScGenerate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScRotate3D_Proxy( 
    SC_ISerialNumber2D * This,
    /* [in] */ double px,
    /* [in] */ double py,
    /* [in] */ double pz,
    /* [in] */ double vx,
    /* [in] */ double vy,
    /* [in] */ double vz,
    /* [in] */ double radians);


void __RPC_STUB SC_ISerialNumber2D_ScRotate3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScOutline2D_Proxy( 
    SC_ISerialNumber2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY);


void __RPC_STUB SC_ISerialNumber2D_ScOutline2D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScOutline3D_Proxy( 
    SC_ISerialNumber2D * This,
    /* [out] */ double *MinX,
    /* [out] */ double *MinY,
    /* [out] */ double *MaxX,
    /* [out] */ double *MaxY,
    /* [out] */ double *MinZ,
    /* [out] */ double *MaxZ);


void __RPC_STUB SC_ISerialNumber2D_ScOutline3D_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_ISerialNumber2D_ScGetUniqueObjectId_Proxy( 
    SC_ISerialNumber2D * This,
    /* [retval][out] */ __int64 *Id);


void __RPC_STUB SC_ISerialNumber2D_ScGetUniqueObjectId_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_ISerialNumber2D_INTERFACE_DEFINED__ */



#ifndef __ScConstantsText2D_MODULE_DEFINED__
#define __ScConstantsText2D_MODULE_DEFINED__


/* module ScConstantsText2D */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectWinText2D	=	( 0x2000 | ( ( 5 * 0x1000000 )  + (( 0x1000 + (( 0x8000 + 0x40000 ) ) ) ) )  ) ;

/* [helpstring] */ const long scComObjectWinTextChars2D	=	( 0x2000 | ( ( 8 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectSerialNumber2D	=	( 0x2000 | ( ( 12 * 0x1000000 )  + (( 0x1000 + (( 0x8000 + 0x40000 ) ) ) ) )  ) ;

/* [helpstring] */ const long scComObjectBarCode12	=	( 0x2000 | ( ( 10 * 0x1000000 )  + (( 0x1000 + (( 0x8000 + 0x40000 ) ) ) ) )  ) ;

/* [helpstring] */ const long scComObjectBarCode39	=	( 0x2000 | ( ( 10 * 0x1000000 )  + (( ( 0x80000 + 0x40000 )  + 0x8000 ) ) )  ) ;

/* [helpstring] */ const long scComCharFlagMonoSpaced	=	0x1;

/* [helpstring] */ const long scComCharFlagAlignCenter	=	0x2;

/* [helpstring] */ const long scComCharFlagItalic	=	0x10000;

/* [helpstring] */ const long scComCharFlagRadial	=	0x20000;

/* [helpstring] */ const long scComCharFlagRadialAlignToCharOutline	=	0x40000;

/* [helpstring] */ const long scComCharFlagReverseOrder	=	0x80000;

/* [helpstring] */ const long scComCharFlagMirrorCharOnXAxis	=	0x100000;

/* [helpstring] */ const long scComCharFlagMirrorCharOnYAxis	=	0x200000;

/* [helpstring] */ const long scComCharFlagSwapLines	=	0x400000;

/* [helpstring] */ const long scComCharFlagSetToLimitLength	=	0x800000;

/* [helpstring] */ const long scComCharFlagSetToLimitHeight	=	0x1000000;

/* [helpstring] */ const long scComCharFlagSetToLimitKeepAspect	=	0x2000000;

/* [helpstring] */ const long scComCharFlagOrderXDown	=	0x4000000;

/* [helpstring] */ const long scComCharFlagOrderYUp	=	0x8000000;

/* [helpstring] */ const long scComCharFlagOrderXMainDir	=	0x10000000;

/* [helpstring] */ const long scComCharFlagOrderBiDir	=	0x20000000;

/* [helpstring] */ const long scComCharFlagRadialCenterMode	=	0x40000000;

/* [helpstring] */ const long scComCharWeightThin	=	100;

/* [helpstring] */ const long scComCharWeightExtraLight	=	200;

/* [helpstring] */ const long scComCharWeightLight	=	300;

/* [helpstring] */ const long scComCharWeightNormal	=	400;

/* [helpstring] */ const long scComCharWeightMedium	=	500;

/* [helpstring] */ const long scComCharWeightSemiBold	=	600;

/* [helpstring] */ const long scComCharWeightBold	=	700;

/* [helpstring] */ const long scComCharWeightExtraBold	=	800;

/* [helpstring] */ const long scComCharWeightHeavy	=	900;

/* [helpstring] */ const long scComBarFormatedStringIDBarcode	=	0;

/* [helpstring] */ const long scComBarFormatedStringIDHR	=	1;

/* [helpstring] */ const long scComBarCellSizeX	=	0;

/* [helpstring] */ const long scComBarCellSizeY	=	1;

/* [helpstring] */ const long scComFinderBarCellSizeX	=	2;

/* [helpstring] */ const long scComFinderBarCellSizeY	=	3;

/* [helpstring] */ const long scComBarNoOfDots	=	4;

/* [helpstring] */ const long scComBarDistanceBetweenDots	=	5;

#endif /* __ScConstantsText2D_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScWinText2D;

#ifdef __cplusplus

class DECLSPEC_UUID("C13C9278-4D50-11d1-9702-008048EEE00C")
ScWinText2D;
#endif

EXTERN_C const CLSID CLSID_ScWinTextChars2D;

#ifdef __cplusplus

class DECLSPEC_UUID("7440F316-F321-11d1-8C7F-008048EEDCB8")
ScWinTextChars2D;
#endif

EXTERN_C const CLSID CLSID_ScBarCode39Chars2D;

#ifdef __cplusplus

class DECLSPEC_UUID("FE33E8A9-F3AA-11d1-8C7F-008048EEDCB8")
ScBarCode39Chars2D;
#endif

EXTERN_C const CLSID CLSID_ScBarCode39;

#ifdef __cplusplus

class DECLSPEC_UUID("39436011-465A-11d2-8CD3-008048EEDCB8")
ScBarCode39;
#endif

EXTERN_C const CLSID CLSID_ScBarCode12;

#ifdef __cplusplus

class DECLSPEC_UUID("6A0156F2-8DDE-11d2-9AAC-008048EEE00C")
ScBarCode12;
#endif

EXTERN_C const CLSID CLSID_ScBarCode12Chars2D;

#ifdef __cplusplus

class DECLSPEC_UUID("3527A2F6-8C89-11d2-9AA9-008048EEE00C")
ScBarCode12Chars2D;
#endif

EXTERN_C const CLSID CLSID_ScSerialNumber2D;

#ifdef __cplusplus

class DECLSPEC_UUID("F8549735-CD97-11d2-9AC8-008048EEE00C")
ScSerialNumber2D;
#endif
#endif /* __ScapsSamText2D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


