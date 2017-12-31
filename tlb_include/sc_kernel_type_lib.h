

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:22 2017
 */
/* Compiler settings for d:\scaps\dll_source\kernel\com\include\sc_kernel_type_lib.idl:
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


#ifndef __sc_kernel_type_lib_h__
#define __sc_kernel_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IKernel_FWD_DEFINED__
#define __SC_IKernel_FWD_DEFINED__
typedef interface SC_IKernel SC_IKernel;
#endif 	/* __SC_IKernel_FWD_DEFINED__ */


#ifndef __SC_IResourceManager_FWD_DEFINED__
#define __SC_IResourceManager_FWD_DEFINED__
typedef interface SC_IResourceManager SC_IResourceManager;
#endif 	/* __SC_IResourceManager_FWD_DEFINED__ */


#ifndef __SC_IError_FWD_DEFINED__
#define __SC_IError_FWD_DEFINED__
typedef interface SC_IError SC_IError;
#endif 	/* __SC_IError_FWD_DEFINED__ */


#ifndef __SC_IObject_FWD_DEFINED__
#define __SC_IObject_FWD_DEFINED__
typedef interface SC_IObject SC_IObject;
#endif 	/* __SC_IObject_FWD_DEFINED__ */


#ifndef __SC_IEntity_FWD_DEFINED__
#define __SC_IEntity_FWD_DEFINED__
typedef interface SC_IEntity SC_IEntity;
#endif 	/* __SC_IEntity_FWD_DEFINED__ */


#ifndef __SC_IEntity3D_FWD_DEFINED__
#define __SC_IEntity3D_FWD_DEFINED__
typedef interface SC_IEntity3D SC_IEntity3D;
#endif 	/* __SC_IEntity3D_FWD_DEFINED__ */


#ifndef __SC_IEntity2D_FWD_DEFINED__
#define __SC_IEntity2D_FWD_DEFINED__
typedef interface SC_IEntity2D SC_IEntity2D;
#endif 	/* __SC_IEntity2D_FWD_DEFINED__ */


#ifndef __SC_IEntity2DContainer_FWD_DEFINED__
#define __SC_IEntity2DContainer_FWD_DEFINED__
typedef interface SC_IEntity2DContainer SC_IEntity2DContainer;
#endif 	/* __SC_IEntity2DContainer_FWD_DEFINED__ */


#ifndef __SC_IEntity3DContainer_FWD_DEFINED__
#define __SC_IEntity3DContainer_FWD_DEFINED__
typedef interface SC_IEntity3DContainer SC_IEntity3DContainer;
#endif 	/* __SC_IEntity3DContainer_FWD_DEFINED__ */


#ifndef __SC_IGroup3D_FWD_DEFINED__
#define __SC_IGroup3D_FWD_DEFINED__
typedef interface SC_IGroup3D SC_IGroup3D;
#endif 	/* __SC_IGroup3D_FWD_DEFINED__ */


#ifndef __SC_IGroup2D_FWD_DEFINED__
#define __SC_IGroup2D_FWD_DEFINED__
typedef interface SC_IGroup2D SC_IGroup2D;
#endif 	/* __SC_IGroup2D_FWD_DEFINED__ */


#ifndef __SC_IElement3D_FWD_DEFINED__
#define __SC_IElement3D_FWD_DEFINED__
typedef interface SC_IElement3D SC_IElement3D;
#endif 	/* __SC_IElement3D_FWD_DEFINED__ */


#ifndef __SC_IElement2D_FWD_DEFINED__
#define __SC_IElement2D_FWD_DEFINED__
typedef interface SC_IElement2D SC_IElement2D;
#endif 	/* __SC_IElement2D_FWD_DEFINED__ */


#ifndef __ScEntity3D_FWD_DEFINED__
#define __ScEntity3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntity3D ScEntity3D;
#else
typedef struct ScEntity3D ScEntity3D;
#endif /* __cplusplus */

#endif 	/* __ScEntity3D_FWD_DEFINED__ */


#ifndef __ScEntity2D_FWD_DEFINED__
#define __ScEntity2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntity2D ScEntity2D;
#else
typedef struct ScEntity2D ScEntity2D;
#endif /* __cplusplus */

#endif 	/* __ScEntity2D_FWD_DEFINED__ */


#ifndef __ScEntity_FWD_DEFINED__
#define __ScEntity_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntity ScEntity;
#else
typedef struct ScEntity ScEntity;
#endif /* __cplusplus */

#endif 	/* __ScEntity_FWD_DEFINED__ */


#ifndef __ScGroup2D_FWD_DEFINED__
#define __ScGroup2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGroup2D ScGroup2D;
#else
typedef struct ScGroup2D ScGroup2D;
#endif /* __cplusplus */

#endif 	/* __ScGroup2D_FWD_DEFINED__ */


#ifndef __ScGroup3D_FWD_DEFINED__
#define __ScGroup3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGroup3D ScGroup3D;
#else
typedef struct ScGroup3D ScGroup3D;
#endif /* __cplusplus */

#endif 	/* __ScGroup3D_FWD_DEFINED__ */


#ifndef __ScElement2D_FWD_DEFINED__
#define __ScElement2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScElement2D ScElement2D;
#else
typedef struct ScElement2D ScElement2D;
#endif /* __cplusplus */

#endif 	/* __ScElement2D_FWD_DEFINED__ */


#ifndef __ScElement3D_FWD_DEFINED__
#define __ScElement3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScElement3D ScElement3D;
#else
typedef struct ScElement3D ScElement3D;
#endif /* __cplusplus */

#endif 	/* __ScElement3D_FWD_DEFINED__ */


#ifndef __ScEntity2DContainer_FWD_DEFINED__
#define __ScEntity2DContainer_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntity2DContainer ScEntity2DContainer;
#else
typedef struct ScEntity2DContainer ScEntity2DContainer;
#endif /* __cplusplus */

#endif 	/* __ScEntity2DContainer_FWD_DEFINED__ */


#ifndef __ScKernel_FWD_DEFINED__
#define __ScKernel_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScKernel ScKernel;
#else
typedef struct ScKernel ScKernel;
#endif /* __cplusplus */

#endif 	/* __ScKernel_FWD_DEFINED__ */


#ifndef __ScObject_FWD_DEFINED__
#define __ScObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScObject ScObject;
#else
typedef struct ScObject ScObject;
#endif /* __cplusplus */

#endif 	/* __ScObject_FWD_DEFINED__ */


#ifndef __ScError_FWD_DEFINED__
#define __ScError_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScError ScError;
#else
typedef struct ScError ScError;
#endif /* __cplusplus */

#endif 	/* __ScError_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_kernel_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5




#pragma pack(push, 1)
typedef struct sc_com_epc_settings_tag
    {
    double m_v_min;
    double m_v_max;
    double m_value[ 3 ];
    long m_source;
    double m_offset;
    double m_gain;
    double m_min_val;
    double m_max_val;
    long m_special_flags;
    } 	sc_com_epc_settings;

typedef struct sc_com_gcode_settings_tag
    {
    long m_style_gcode;
    double m_nom_motf_speed;
    long m_loop_count;
    long m_progress_count;
    long m_head_id;
    sc_com_epc_settings m_epc_os;
    sc_com_epc_settings m_epc_op;
    double m_motf_offset;
    } 	sc_com_gcode_settings;


#pragma pack(pop)


extern RPC_IF_HANDLE __MIDL_itf_sc_kernel_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_kernel_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamKernel_LIBRARY_DEFINED__
#define __ScapsSamKernel_LIBRARY_DEFINED__

/* library ScapsSamKernel */
/* [version][helpstring][uuid] */ 

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("31459965-0311-40c1-955A-845658B10477") 
enum __MIDL___MIDL_itf_sc_kernel_type_lib_0000_0000_0001
    {	scComEntityDimensionFlagVariableLenght	= 1,
	scComEntityDimensionFlagFitToOutline	= 2
    } 	ScComEntityDimensionFlagConstants;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("3466247A-595D-4DD5-8829-7B8FE15E7C29") 
enum __MIDL___MIDL_itf_sc_kernel_type_lib_0000_0000_0002
    {	ScComEntityUserDataIdAddShowFlag	= 1002,
	ScComEntityUserDataIdRemoveShowFlag	= 1004,
	ScComEntityUserDataIdInvertIsBackground	= 1005
    } 	ScComEntityUserDataIdParam;

typedef /* [public][v1_enum][helpstring][uuid] */  DECLSPEC_UUID("59C1C54B-CA18-43C4-BF42-AFA3B857DDD8") 
enum __MIDL___MIDL_itf_sc_kernel_type_lib_0000_0000_0003
    {	ScComEntityUserDataDataParamRenderDithered	= 0x1,
	ScComEntityUserDataDataParamRenderAsNotActualMarked	= 0x2,
	ScComEntityUserDataDataParamRenderDontUseMultiHead	= 0x4,
	ScComEntityUserDataDataParamDoNotRender	= 0x8,
	ScComEntityUserDataDataParamZOrderFirst	= 0x10,
	ScComEntityUserDataDataParamNoTranslate	= 0x100,
	ScComEntityUserDataDataParamNoScale	= 0x200,
	ScComEntityUserDataDataParamNoSlant	= 0x400,
	ScComEntityUserDataDataParamNoRotate	= 0x800,
	ScComEntityUserDataDataParamNotInObjectList	= 0x1000,
	ScComEntityUserDataDataParamNoVerticalTranlate	= 0x2000,
	ScComEntityUserDataDataParamNotView2DSelectable	= 0x4000,
	ScComEntityUserDataDataParamNoHorizontaltranslate	= 0x8000
    } 	ScComEntityUserDataDataParam;


EXTERN_C const IID LIBID_ScapsSamKernel;

#ifndef __SC_IKernel_INTERFACE_DEFINED__
#define __SC_IKernel_INTERFACE_DEFINED__

/* interface SC_IKernel */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IKernel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A80E1092-6EFF-11d1-9733-008048EEE00C")
    SC_IKernel : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDebug( 
            /* [retval][out] */ long *Debug) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDebug( 
            /* [in] */ long Debug) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScShowObjects( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScShowModules( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExit( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetKernelUnit( 
            /* [in] */ long UnitId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetKernelUnit( 
            /* [retval][out] */ long *UnitId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetKernelUnitString( 
            /* [retval][out] */ BSTR *UnitString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckKernel( 
            /* [in] */ long CheckFlags,
            /* [retval][out] */ long *CheckResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartSequence( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEndSequence( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClearLastSequence( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDongleNumber( 
            /* [retval][out] */ long *DongleNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDongleUserID( 
            /* [retval][out] */ long *DongleUserID) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSetupDefaults( 
            /* [retval][out] */ long *Default) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSetupDefaults( 
            /* [in] */ long Default) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUndoLevel( 
            /* [retval][out] */ long *Level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUndoLevel( 
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateObject( 
            /* [in] */ long ClassId,
            /* [retval][out] */ SC_IObject **Object) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoUpdate( 
            /* [retval][out] */ long *Update) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoUpdate( 
            /* [in] */ long Update) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableTrail( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableTrail( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTrailInfoString( 
            /* [in] */ long Id,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDefaultSettingsFileName( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDefaultSettingsFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRedo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPushLockMessage( 
            long Lock) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPopLockMessage( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResourceEditMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResourceEditMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResourceLanguage( 
            /* [in] */ BSTR Language) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResourceLanguage( 
            /* [retval][out] */ BSTR *Language) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetResourceFileName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetResourceManager( 
            /* [retval][out] */ SC_IResourceManager **ResourceManager) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetModuleName( 
            /* [in] */ long MapID,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetConfigString( 
            /* [in] */ long StringID,
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetConfigString( 
            /* [in] */ long StringID,
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticSetup( 
            /* [retval][out] */ long *OnOff) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticSetup( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetHardwareIOInfo( 
            /* [in] */ long InfoTypeId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHardwareIOInfo( 
            /* [in] */ long InfoTypeId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScConvertToUnit( 
            /* [in] */ long ConvertDir,
            /* [in] */ double Value,
            /* [in] */ double Resolution,
            /* [retval][out] */ double *ConvertedValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMotionControl( 
            /* [in] */ long Type,
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMotionControl( 
            /* [in] */ long Type,
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDefaultPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDefaultPropertyVariant( 
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDisplayFlags( 
            /* [in] */ long FlagsId,
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDisplayFlags( 
            /* [in] */ long FlagsId,
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDoHelp( 
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpID,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHelpFilePath( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHelpFilePath( 
            /* [in] */ BSTR Path) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHelpFlag( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHelpFlag( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDoubleValue( 
            /* [in] */ long ValueID,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDoubleValue( 
            /* [in] */ long ValueID,
            /* [in] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetLongValue( 
            /* [in] */ long ValueID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetLongValue( 
            /* [in] */ long ValueID,
            /* [in] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGenerateResourceOrgName( 
            /* [in] */ BSTR Name,
            /* [in] */ CLSID cls_id,
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUserChiffre( 
            /* [in] */ long CustomerId,
            /* [in] */ long DongleId,
            /* [in] */ long Mode,
            /* [in] */ long *Data,
            /* [in] */ long *Key,
            /* [in] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetShiftStartTime( 
            /* [in] */ long Index,
            /* [in] */ DATE time) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetShiftStartTime( 
            /* [in] */ long Index,
            /* [retval][out] */ DATE *pTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetShiftIdentifier( 
            /* [in] */ long Index,
            /* [in] */ BSTR ident) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetShiftIdentifier( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMapTime( 
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [in] */ DATE time) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMapTime( 
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [retval][out] */ DATE *pTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMapIdentifier( 
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [in] */ BSTR ident) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMapIdentifier( 
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDotMarkerActive( 
            /* [in] */ long activate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReinitKernel( 
            /* [in] */ long flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGCodeSettings( 
            /* [retval][out] */ sc_com_gcode_settings *gcode_settings) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGCodeSettings( 
            /* [in] */ sc_com_gcode_settings *gcode_settings) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectShiftMap( 
            /* [in] */ long shiftMap) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGlobalSequence( 
            /* [in] */ long sequence_nr,
            /* [in] */ long sequence) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGlobalSequence( 
            /* [in] */ long sequence_nr,
            /* [retval][out] */ long *sequence) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetGlobalSequenceReset( 
            /* [in] */ long sequence_nr,
            /* [in] */ DATE reset_time,
            /* [in] */ DATE reset_time_period,
            /* [in] */ long reset_months_period) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetGlobalSequenceReset( 
            /* [in] */ long sequence_nr,
            /* [out] */ DATE *reset_time,
            /* [out] */ DATE *reset_time_period,
            /* [out] */ long *reset_months_period) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntityForArrayCopy( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSelectedEntity( 
            /* [retval][out] */ SC_IEntity2D ***Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSelectedEntityCount( 
            /* [in] */ LPDISPATCH toIterate,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByID( 
            /* [in] */ __int64 entityID,
            /* [retval][out] */ SC_IEntity2D **entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSelectedEntityID( 
            /* [retval][out] */ __int64 **Entity) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IKernelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IKernel * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IKernel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IKernel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IKernel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IKernel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IKernel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IKernel * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDebug )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Debug);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDebug )( 
            SC_IKernel * This,
            /* [in] */ long Debug);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScShowObjects )( 
            SC_IKernel * This,
            /* [in] */ long Show);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScShowModules )( 
            SC_IKernel * This,
            /* [in] */ long Show);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExit )( 
            SC_IKernel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetKernelUnit )( 
            SC_IKernel * This,
            /* [in] */ long UnitId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetKernelUnit )( 
            SC_IKernel * This,
            /* [retval][out] */ long *UnitId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetKernelUnitString )( 
            SC_IKernel * This,
            /* [retval][out] */ BSTR *UnitString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckKernel )( 
            SC_IKernel * This,
            /* [in] */ long CheckFlags,
            /* [retval][out] */ long *CheckResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartSequence )( 
            SC_IKernel * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndSequence )( 
            SC_IKernel * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearUndo )( 
            SC_IKernel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClearLastSequence )( 
            SC_IKernel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDongleNumber )( 
            SC_IKernel * This,
            /* [retval][out] */ long *DongleNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDongleUserID )( 
            SC_IKernel * This,
            /* [retval][out] */ long *DongleUserID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSetupDefaults )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Default);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSetupDefaults )( 
            SC_IKernel * This,
            /* [in] */ long Default);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUndoLevel )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Level);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUndoLevel )( 
            SC_IKernel * This,
            /* [in] */ long Level);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateObject )( 
            SC_IKernel * This,
            /* [in] */ long ClassId,
            /* [retval][out] */ SC_IObject **Object);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoUpdate )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Update);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoUpdate )( 
            SC_IKernel * This,
            /* [in] */ long Update);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableTrail )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableTrail )( 
            SC_IKernel * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTrailInfoString )( 
            SC_IKernel * This,
            /* [in] */ long Id,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDefaultSettingsFileName )( 
            SC_IKernel * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDefaultSettingsFileName )( 
            SC_IKernel * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUndo )( 
            SC_IKernel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRedo )( 
            SC_IKernel * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPushLockMessage )( 
            SC_IKernel * This,
            long Lock);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPopLockMessage )( 
            SC_IKernel * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResourceEditMode )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResourceEditMode )( 
            SC_IKernel * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResourceLanguage )( 
            SC_IKernel * This,
            /* [in] */ BSTR Language);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResourceLanguage )( 
            SC_IKernel * This,
            /* [retval][out] */ BSTR *Language);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetResourceFileName )( 
            SC_IKernel * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetResourceManager )( 
            SC_IKernel * This,
            /* [retval][out] */ SC_IResourceManager **ResourceManager);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetModuleName )( 
            SC_IKernel * This,
            /* [in] */ long MapID,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetConfigString )( 
            SC_IKernel * This,
            /* [in] */ long StringID,
            /* [in] */ BSTR String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetConfigString )( 
            SC_IKernel * This,
            /* [in] */ long StringID,
            /* [retval][out] */ BSTR *String);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticSetup )( 
            SC_IKernel * This,
            /* [retval][out] */ long *OnOff);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticSetup )( 
            SC_IKernel * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetHardwareIOInfo )( 
            SC_IKernel * This,
            /* [in] */ long InfoTypeId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHardwareIOInfo )( 
            SC_IKernel * This,
            /* [in] */ long InfoTypeId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScConvertToUnit )( 
            SC_IKernel * This,
            /* [in] */ long ConvertDir,
            /* [in] */ double Value,
            /* [in] */ double Resolution,
            /* [retval][out] */ double *ConvertedValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMotionControl )( 
            SC_IKernel * This,
            /* [in] */ long Type,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMotionControl )( 
            SC_IKernel * This,
            /* [in] */ long Type,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDefaultPropertyVariant )( 
            SC_IKernel * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDefaultPropertyVariant )( 
            SC_IKernel * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDisplayFlags )( 
            SC_IKernel * This,
            /* [in] */ long FlagsId,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDisplayFlags )( 
            SC_IKernel * This,
            /* [in] */ long FlagsId,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDoHelp )( 
            SC_IKernel * This,
            /* [in] */ BSTR HelpFile,
            /* [in] */ long HelpID,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHelpFilePath )( 
            SC_IKernel * This,
            /* [retval][out] */ BSTR *Path);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHelpFilePath )( 
            SC_IKernel * This,
            /* [in] */ BSTR Path);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHelpFlag )( 
            SC_IKernel * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHelpFlag )( 
            SC_IKernel * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDoubleValue )( 
            SC_IKernel * This,
            /* [in] */ long ValueID,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDoubleValue )( 
            SC_IKernel * This,
            /* [in] */ long ValueID,
            /* [in] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetLongValue )( 
            SC_IKernel * This,
            /* [in] */ long ValueID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetLongValue )( 
            SC_IKernel * This,
            /* [in] */ long ValueID,
            /* [in] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGenerateResourceOrgName )( 
            SC_IKernel * This,
            /* [in] */ BSTR Name,
            /* [in] */ CLSID cls_id,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUserChiffre )( 
            SC_IKernel * This,
            /* [in] */ long CustomerId,
            /* [in] */ long DongleId,
            /* [in] */ long Mode,
            /* [in] */ long *Data,
            /* [in] */ long *Key,
            /* [in] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShiftStartTime )( 
            SC_IKernel * This,
            /* [in] */ long Index,
            /* [in] */ DATE time);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetShiftStartTime )( 
            SC_IKernel * This,
            /* [in] */ long Index,
            /* [retval][out] */ DATE *pTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetShiftIdentifier )( 
            SC_IKernel * This,
            /* [in] */ long Index,
            /* [in] */ BSTR ident);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetShiftIdentifier )( 
            SC_IKernel * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMapTime )( 
            SC_IKernel * This,
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [in] */ DATE time);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMapTime )( 
            SC_IKernel * This,
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [retval][out] */ DATE *pTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMapIdentifier )( 
            SC_IKernel * This,
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [in] */ BSTR ident);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMapIdentifier )( 
            SC_IKernel * This,
            /* [in] */ long mode,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDotMarkerActive )( 
            SC_IKernel * This,
            /* [in] */ long activate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReinitKernel )( 
            SC_IKernel * This,
            /* [in] */ long flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGCodeSettings )( 
            SC_IKernel * This,
            /* [retval][out] */ sc_com_gcode_settings *gcode_settings);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGCodeSettings )( 
            SC_IKernel * This,
            /* [in] */ sc_com_gcode_settings *gcode_settings);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectShiftMap )( 
            SC_IKernel * This,
            /* [in] */ long shiftMap);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGlobalSequence )( 
            SC_IKernel * This,
            /* [in] */ long sequence_nr,
            /* [in] */ long sequence);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGlobalSequence )( 
            SC_IKernel * This,
            /* [in] */ long sequence_nr,
            /* [retval][out] */ long *sequence);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetGlobalSequenceReset )( 
            SC_IKernel * This,
            /* [in] */ long sequence_nr,
            /* [in] */ DATE reset_time,
            /* [in] */ DATE reset_time_period,
            /* [in] */ long reset_months_period);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetGlobalSequenceReset )( 
            SC_IKernel * This,
            /* [in] */ long sequence_nr,
            /* [out] */ DATE *reset_time,
            /* [out] */ DATE *reset_time_period,
            /* [out] */ long *reset_months_period);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityForArrayCopy )( 
            SC_IKernel * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSelectedEntity )( 
            SC_IKernel * This,
            /* [retval][out] */ SC_IEntity2D ***Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSelectedEntityCount )( 
            SC_IKernel * This,
            /* [in] */ LPDISPATCH toIterate,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByID )( 
            SC_IKernel * This,
            /* [in] */ __int64 entityID,
            /* [retval][out] */ SC_IEntity2D **entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSelectedEntityID )( 
            SC_IKernel * This,
            /* [retval][out] */ __int64 **Entity);
        
        END_INTERFACE
    } SC_IKernelVtbl;

    interface SC_IKernel
    {
        CONST_VTBL struct SC_IKernelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IKernel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IKernel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IKernel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IKernel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IKernel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IKernel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IKernel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IKernel_get_ScDebug(This,Debug)	\
    ( (This)->lpVtbl -> get_ScDebug(This,Debug) ) 

#define SC_IKernel_put_ScDebug(This,Debug)	\
    ( (This)->lpVtbl -> put_ScDebug(This,Debug) ) 

#define SC_IKernel_ScShowObjects(This,Show)	\
    ( (This)->lpVtbl -> ScShowObjects(This,Show) ) 

#define SC_IKernel_ScShowModules(This,Show)	\
    ( (This)->lpVtbl -> ScShowModules(This,Show) ) 

#define SC_IKernel_ScExit(This)	\
    ( (This)->lpVtbl -> ScExit(This) ) 

#define SC_IKernel_ScSetKernelUnit(This,UnitId)	\
    ( (This)->lpVtbl -> ScSetKernelUnit(This,UnitId) ) 

#define SC_IKernel_ScGetKernelUnit(This,UnitId)	\
    ( (This)->lpVtbl -> ScGetKernelUnit(This,UnitId) ) 

#define SC_IKernel_ScGetKernelUnitString(This,UnitString)	\
    ( (This)->lpVtbl -> ScGetKernelUnitString(This,UnitString) ) 

#define SC_IKernel_ScCheckKernel(This,CheckFlags,CheckResult)	\
    ( (This)->lpVtbl -> ScCheckKernel(This,CheckFlags,CheckResult) ) 

#define SC_IKernel_ScStartSequence(This,Name)	\
    ( (This)->lpVtbl -> ScStartSequence(This,Name) ) 

#define SC_IKernel_ScEndSequence(This,Name)	\
    ( (This)->lpVtbl -> ScEndSequence(This,Name) ) 

#define SC_IKernel_ScClearUndo(This)	\
    ( (This)->lpVtbl -> ScClearUndo(This) ) 

#define SC_IKernel_ScClearLastSequence(This)	\
    ( (This)->lpVtbl -> ScClearLastSequence(This) ) 

#define SC_IKernel_ScGetDongleNumber(This,DongleNumber)	\
    ( (This)->lpVtbl -> ScGetDongleNumber(This,DongleNumber) ) 

#define SC_IKernel_ScGetDongleUserID(This,DongleUserID)	\
    ( (This)->lpVtbl -> ScGetDongleUserID(This,DongleUserID) ) 

#define SC_IKernel_get_ScSetupDefaults(This,Default)	\
    ( (This)->lpVtbl -> get_ScSetupDefaults(This,Default) ) 

#define SC_IKernel_put_ScSetupDefaults(This,Default)	\
    ( (This)->lpVtbl -> put_ScSetupDefaults(This,Default) ) 

#define SC_IKernel_get_ScUndoLevel(This,Level)	\
    ( (This)->lpVtbl -> get_ScUndoLevel(This,Level) ) 

#define SC_IKernel_put_ScUndoLevel(This,Level)	\
    ( (This)->lpVtbl -> put_ScUndoLevel(This,Level) ) 

#define SC_IKernel_ScCreateObject(This,ClassId,Object)	\
    ( (This)->lpVtbl -> ScCreateObject(This,ClassId,Object) ) 

#define SC_IKernel_get_ScAutoUpdate(This,Update)	\
    ( (This)->lpVtbl -> get_ScAutoUpdate(This,Update) ) 

#define SC_IKernel_put_ScAutoUpdate(This,Update)	\
    ( (This)->lpVtbl -> put_ScAutoUpdate(This,Update) ) 

#define SC_IKernel_get_ScEnableTrail(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableTrail(This,Enable) ) 

#define SC_IKernel_put_ScEnableTrail(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableTrail(This,Enable) ) 

#define SC_IKernel_ScGetTrailInfoString(This,Id,pVal)	\
    ( (This)->lpVtbl -> ScGetTrailInfoString(This,Id,pVal) ) 

#define SC_IKernel_put_ScDefaultSettingsFileName(This,Name)	\
    ( (This)->lpVtbl -> put_ScDefaultSettingsFileName(This,Name) ) 

#define SC_IKernel_get_ScDefaultSettingsFileName(This,Name)	\
    ( (This)->lpVtbl -> get_ScDefaultSettingsFileName(This,Name) ) 

#define SC_IKernel_ScUndo(This)	\
    ( (This)->lpVtbl -> ScUndo(This) ) 

#define SC_IKernel_ScRedo(This)	\
    ( (This)->lpVtbl -> ScRedo(This) ) 

#define SC_IKernel_ScPushLockMessage(This,Lock)	\
    ( (This)->lpVtbl -> ScPushLockMessage(This,Lock) ) 

#define SC_IKernel_ScPopLockMessage(This)	\
    ( (This)->lpVtbl -> ScPopLockMessage(This) ) 

#define SC_IKernel_get_ScResourceEditMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScResourceEditMode(This,Mode) ) 

#define SC_IKernel_put_ScResourceEditMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScResourceEditMode(This,Mode) ) 

#define SC_IKernel_put_ScResourceLanguage(This,Language)	\
    ( (This)->lpVtbl -> put_ScResourceLanguage(This,Language) ) 

#define SC_IKernel_get_ScResourceLanguage(This,Language)	\
    ( (This)->lpVtbl -> get_ScResourceLanguage(This,Language) ) 

#define SC_IKernel_ScGetResourceFileName(This,Name)	\
    ( (This)->lpVtbl -> ScGetResourceFileName(This,Name) ) 

#define SC_IKernel_ScGetResourceManager(This,ResourceManager)	\
    ( (This)->lpVtbl -> ScGetResourceManager(This,ResourceManager) ) 

#define SC_IKernel_ScSetModuleName(This,MapID,Name)	\
    ( (This)->lpVtbl -> ScSetModuleName(This,MapID,Name) ) 

#define SC_IKernel_ScSetConfigString(This,StringID,String)	\
    ( (This)->lpVtbl -> ScSetConfigString(This,StringID,String) ) 

#define SC_IKernel_ScGetConfigString(This,StringID,String)	\
    ( (This)->lpVtbl -> ScGetConfigString(This,StringID,String) ) 

#define SC_IKernel_get_ScOpticSetup(This,OnOff)	\
    ( (This)->lpVtbl -> get_ScOpticSetup(This,OnOff) ) 

#define SC_IKernel_put_ScOpticSetup(This,OnOff)	\
    ( (This)->lpVtbl -> put_ScOpticSetup(This,OnOff) ) 

#define SC_IKernel_ScSetHardwareIOInfo(This,InfoTypeId,Value)	\
    ( (This)->lpVtbl -> ScSetHardwareIOInfo(This,InfoTypeId,Value) ) 

#define SC_IKernel_ScGetHardwareIOInfo(This,InfoTypeId,Value)	\
    ( (This)->lpVtbl -> ScGetHardwareIOInfo(This,InfoTypeId,Value) ) 

#define SC_IKernel_ScConvertToUnit(This,ConvertDir,Value,Resolution,ConvertedValue)	\
    ( (This)->lpVtbl -> ScConvertToUnit(This,ConvertDir,Value,Resolution,ConvertedValue) ) 

#define SC_IKernel_ScGetMotionControl(This,Type,Control)	\
    ( (This)->lpVtbl -> ScGetMotionControl(This,Type,Control) ) 

#define SC_IKernel_ScSetMotionControl(This,Type,Control)	\
    ( (This)->lpVtbl -> ScSetMotionControl(This,Type,Control) ) 

#define SC_IKernel_ScSetDefaultPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetDefaultPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IKernel_ScGetDefaultPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetDefaultPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IKernel_ScSetDisplayFlags(This,FlagsId,Flags)	\
    ( (This)->lpVtbl -> ScSetDisplayFlags(This,FlagsId,Flags) ) 

#define SC_IKernel_ScGetDisplayFlags(This,FlagsId,Flags)	\
    ( (This)->lpVtbl -> ScGetDisplayFlags(This,FlagsId,Flags) ) 

#define SC_IKernel_ScDoHelp(This,HelpFile,HelpID,Flags,Result)	\
    ( (This)->lpVtbl -> ScDoHelp(This,HelpFile,HelpID,Flags,Result) ) 

#define SC_IKernel_get_ScHelpFilePath(This,Path)	\
    ( (This)->lpVtbl -> get_ScHelpFilePath(This,Path) ) 

#define SC_IKernel_put_ScHelpFilePath(This,Path)	\
    ( (This)->lpVtbl -> put_ScHelpFilePath(This,Path) ) 

#define SC_IKernel_get_ScHelpFlag(This,Flags)	\
    ( (This)->lpVtbl -> get_ScHelpFlag(This,Flags) ) 

#define SC_IKernel_put_ScHelpFlag(This,Flags)	\
    ( (This)->lpVtbl -> put_ScHelpFlag(This,Flags) ) 

#define SC_IKernel_ScSetDoubleValue(This,ValueID,Value)	\
    ( (This)->lpVtbl -> ScSetDoubleValue(This,ValueID,Value) ) 

#define SC_IKernel_ScGetDoubleValue(This,ValueID,Value)	\
    ( (This)->lpVtbl -> ScGetDoubleValue(This,ValueID,Value) ) 

#define SC_IKernel_ScSetLongValue(This,ValueID,Value)	\
    ( (This)->lpVtbl -> ScSetLongValue(This,ValueID,Value) ) 

#define SC_IKernel_ScGetLongValue(This,ValueID,Value)	\
    ( (This)->lpVtbl -> ScGetLongValue(This,ValueID,Value) ) 

#define SC_IKernel_ScGenerateResourceOrgName(This,Name,cls_id,Value)	\
    ( (This)->lpVtbl -> ScGenerateResourceOrgName(This,Name,cls_id,Value) ) 

#define SC_IKernel_ScUserChiffre(This,CustomerId,DongleId,Mode,Data,Key,Result)	\
    ( (This)->lpVtbl -> ScUserChiffre(This,CustomerId,DongleId,Mode,Data,Key,Result) ) 

#define SC_IKernel_ScSetShiftStartTime(This,Index,time)	\
    ( (This)->lpVtbl -> ScSetShiftStartTime(This,Index,time) ) 

#define SC_IKernel_ScGetShiftStartTime(This,Index,pTime)	\
    ( (This)->lpVtbl -> ScGetShiftStartTime(This,Index,pTime) ) 

#define SC_IKernel_ScSetShiftIdentifier(This,Index,ident)	\
    ( (This)->lpVtbl -> ScSetShiftIdentifier(This,Index,ident) ) 

#define SC_IKernel_ScGetShiftIdentifier(This,Index,pVal)	\
    ( (This)->lpVtbl -> ScGetShiftIdentifier(This,Index,pVal) ) 

#define SC_IKernel_ScSetMapTime(This,mode,Index,time)	\
    ( (This)->lpVtbl -> ScSetMapTime(This,mode,Index,time) ) 

#define SC_IKernel_ScGetMapTime(This,mode,Index,pTime)	\
    ( (This)->lpVtbl -> ScGetMapTime(This,mode,Index,pTime) ) 

#define SC_IKernel_ScSetMapIdentifier(This,mode,Index,ident)	\
    ( (This)->lpVtbl -> ScSetMapIdentifier(This,mode,Index,ident) ) 

#define SC_IKernel_ScGetMapIdentifier(This,mode,Index,pVal)	\
    ( (This)->lpVtbl -> ScGetMapIdentifier(This,mode,Index,pVal) ) 

#define SC_IKernel_ScSetDotMarkerActive(This,activate)	\
    ( (This)->lpVtbl -> ScSetDotMarkerActive(This,activate) ) 

#define SC_IKernel_ScReinitKernel(This,flags)	\
    ( (This)->lpVtbl -> ScReinitKernel(This,flags) ) 

#define SC_IKernel_get_ScGCodeSettings(This,gcode_settings)	\
    ( (This)->lpVtbl -> get_ScGCodeSettings(This,gcode_settings) ) 

#define SC_IKernel_put_ScGCodeSettings(This,gcode_settings)	\
    ( (This)->lpVtbl -> put_ScGCodeSettings(This,gcode_settings) ) 

#define SC_IKernel_ScSelectShiftMap(This,shiftMap)	\
    ( (This)->lpVtbl -> ScSelectShiftMap(This,shiftMap) ) 

#define SC_IKernel_ScSetGlobalSequence(This,sequence_nr,sequence)	\
    ( (This)->lpVtbl -> ScSetGlobalSequence(This,sequence_nr,sequence) ) 

#define SC_IKernel_ScGetGlobalSequence(This,sequence_nr,sequence)	\
    ( (This)->lpVtbl -> ScGetGlobalSequence(This,sequence_nr,sequence) ) 

#define SC_IKernel_ScSetGlobalSequenceReset(This,sequence_nr,reset_time,reset_time_period,reset_months_period)	\
    ( (This)->lpVtbl -> ScSetGlobalSequenceReset(This,sequence_nr,reset_time,reset_time_period,reset_months_period) ) 

#define SC_IKernel_ScGetGlobalSequenceReset(This,sequence_nr,reset_time,reset_time_period,reset_months_period)	\
    ( (This)->lpVtbl -> ScGetGlobalSequenceReset(This,sequence_nr,reset_time,reset_time_period,reset_months_period) ) 

#define SC_IKernel_ScSetEntityForArrayCopy(This,Control)	\
    ( (This)->lpVtbl -> ScSetEntityForArrayCopy(This,Control) ) 

#define SC_IKernel_ScGetSelectedEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScGetSelectedEntity(This,Entity) ) 

#define SC_IKernel_ScGetSelectedEntityCount(This,toIterate,Count)	\
    ( (This)->lpVtbl -> ScGetSelectedEntityCount(This,toIterate,Count) ) 

#define SC_IKernel_ScGetEntityByID(This,entityID,entity)	\
    ( (This)->lpVtbl -> ScGetEntityByID(This,entityID,entity) ) 

#define SC_IKernel_ScGetSelectedEntityID(This,Entity)	\
    ( (This)->lpVtbl -> ScGetSelectedEntityID(This,Entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IKernel_INTERFACE_DEFINED__ */


#ifndef __SC_IResourceManager_INTERFACE_DEFINED__
#define __SC_IResourceManager_INTERFACE_DEFINED__

/* interface SC_IResourceManager */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IResourceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF12CBF1-5969-11d3-8548-00C0DFEA4A3A")
    SC_IResourceManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetFileName( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetWindow( 
            /* [in] */ long WindowHWND) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDialogStorageInfo( 
            /* [in] */ long ID1,
            /* [in] */ long ID2,
            /* [in] */ long ID3,
            /* [in] */ long ID4,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadDialog( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetString( 
            /* [in] */ long ModuleMapID,
            /* [in] */ long StringID,
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetString( 
            /* [in] */ long ModuleMapID,
            /* [in] */ long StringID,
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadStrings( 
            /* [in] */ long ModuleMapID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStrings( 
            /* [in] */ long ModuleMapID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDeleteDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadDialogEx( 
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditDialogEx( 
            /* [in] */ long Flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IResourceManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IResourceManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IResourceManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IResourceManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IResourceManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IResourceManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IResourceManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IResourceManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFileName )( 
            SC_IResourceManager * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetWindow )( 
            SC_IResourceManager * This,
            /* [in] */ long WindowHWND);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDialogStorageInfo )( 
            SC_IResourceManager * This,
            /* [in] */ long ID1,
            /* [in] */ long ID2,
            /* [in] */ long ID3,
            /* [in] */ long ID4,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadDialog )( 
            SC_IResourceManager * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditDialog )( 
            SC_IResourceManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetString )( 
            SC_IResourceManager * This,
            /* [in] */ long ModuleMapID,
            /* [in] */ long StringID,
            /* [in] */ BSTR String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetString )( 
            SC_IResourceManager * This,
            /* [in] */ long ModuleMapID,
            /* [in] */ long StringID,
            /* [retval][out] */ BSTR *String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadStrings )( 
            SC_IResourceManager * This,
            /* [in] */ long ModuleMapID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStrings )( 
            SC_IResourceManager * This,
            /* [in] */ long ModuleMapID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDeleteDialog )( 
            SC_IResourceManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveDialog )( 
            SC_IResourceManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadDialogEx )( 
            SC_IResourceManager * This,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditDialogEx )( 
            SC_IResourceManager * This,
            /* [in] */ long Flags);
        
        END_INTERFACE
    } SC_IResourceManagerVtbl;

    interface SC_IResourceManager
    {
        CONST_VTBL struct SC_IResourceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IResourceManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IResourceManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IResourceManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IResourceManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IResourceManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IResourceManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IResourceManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IResourceManager_ScSetFileName(This,FileName)	\
    ( (This)->lpVtbl -> ScSetFileName(This,FileName) ) 

#define SC_IResourceManager_ScSetWindow(This,WindowHWND)	\
    ( (This)->lpVtbl -> ScSetWindow(This,WindowHWND) ) 

#define SC_IResourceManager_ScSetDialogStorageInfo(This,ID1,ID2,ID3,ID4,Name)	\
    ( (This)->lpVtbl -> ScSetDialogStorageInfo(This,ID1,ID2,ID3,ID4,Name) ) 

#define SC_IResourceManager_ScLoadDialog(This,Result)	\
    ( (This)->lpVtbl -> ScLoadDialog(This,Result) ) 

#define SC_IResourceManager_ScEditDialog(This)	\
    ( (This)->lpVtbl -> ScEditDialog(This) ) 

#define SC_IResourceManager_ScSetString(This,ModuleMapID,StringID,String)	\
    ( (This)->lpVtbl -> ScSetString(This,ModuleMapID,StringID,String) ) 

#define SC_IResourceManager_ScGetString(This,ModuleMapID,StringID,String)	\
    ( (This)->lpVtbl -> ScGetString(This,ModuleMapID,StringID,String) ) 

#define SC_IResourceManager_ScLoadStrings(This,ModuleMapID)	\
    ( (This)->lpVtbl -> ScLoadStrings(This,ModuleMapID) ) 

#define SC_IResourceManager_ScEditStrings(This,ModuleMapID)	\
    ( (This)->lpVtbl -> ScEditStrings(This,ModuleMapID) ) 

#define SC_IResourceManager_ScDeleteDialog(This)	\
    ( (This)->lpVtbl -> ScDeleteDialog(This) ) 

#define SC_IResourceManager_ScSaveDialog(This)	\
    ( (This)->lpVtbl -> ScSaveDialog(This) ) 

#define SC_IResourceManager_ScLoadDialogEx(This,Flags,Result)	\
    ( (This)->lpVtbl -> ScLoadDialogEx(This,Flags,Result) ) 

#define SC_IResourceManager_ScEditDialogEx(This,Flags)	\
    ( (This)->lpVtbl -> ScEditDialogEx(This,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IResourceManager_INTERFACE_DEFINED__ */


#ifndef __SC_IError_INTERFACE_DEFINED__
#define __SC_IError_INTERFACE_DEFINED__

/* interface SC_IError */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("084CAA83-6783-11d2-9A78-008048EEE00C")
    SC_IError : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct SC_IErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IError * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IError * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IErrorVtbl;

    interface SC_IError
    {
        CONST_VTBL struct SC_IErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IError_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IError_INTERFACE_DEFINED__ */


#ifndef __SC_IObject_INTERFACE_DEFINED__
#define __SC_IObject_INTERFACE_DEFINED__

/* interface SC_IObject */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("862E45F1-6E3D-11d1-9732-008048EEE00C")
    SC_IObject : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *type_id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *is_dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDirty( 
            /* [in] */ long Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScObjectId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IObject * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IObject * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IObject * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IObject * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IObject * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IObject * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IObject * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IObject * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IObject * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IObjectVtbl;

    interface SC_IObject
    {
        CONST_VTBL struct SC_IObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IObject_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IObject_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IObject_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IObject_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IObject_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IObject_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IObject_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IObject_INTERFACE_DEFINED__ */


#ifndef __SC_IEntity_INTERFACE_DEFINED__
#define __SC_IEntity_INTERFACE_DEFINED__

/* interface SC_IEntity */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("69931621-3007-11d1-96C5-A4BD2EC61F49")
    SC_IEntity : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUniqueObjectId( 
            /* [retval][out] */ __int64 *Id) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEntityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntity * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntity * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntity * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntity * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntity * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntity * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntity * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntity * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntity * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntity * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntity * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntity * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntity * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntity * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntity * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntity * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntity * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntity * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntity * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntity * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntity * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntity * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntity * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntity * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntity * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntity * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntity * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntity * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntity * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntity * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntity * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntity * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntity * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntity * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntity * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntity * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntity * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntity * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntity * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntity * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntity * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntity * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntity * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntity * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntity * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntity * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntity * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntity * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntity * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntityVtbl;

    interface SC_IEntity
    {
        CONST_VTBL struct SC_IEntityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntity_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntity_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntity_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntity_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntity_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntity_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntity_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntity_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntity_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntity_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntity_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntity_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntity_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntity_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntity_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntity_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntity_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntity_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntity_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntity_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntity_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntity_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntity_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntity_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntity_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntity_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntity_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntity_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntity_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntity_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntity_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntity_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntity_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntity_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntity_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntity_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntity_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntity_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntity_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntity_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntity_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntity_INTERFACE_DEFINED__ */


#ifndef __SC_IEntity3D_INTERFACE_DEFINED__
#define __SC_IEntity3D_INTERFACE_DEFINED__

/* interface SC_IEntity3D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntity3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA1-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IEntity3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IEntity3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntity3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntity3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntity3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntity3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntity3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntity3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntity3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntity3D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntity3D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntity3D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntity3D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntity3D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntity3D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntity3D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntity3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntity3D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntity3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntity3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntity3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntity3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntity3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntity3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntity3D * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntity3D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntity3D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntity3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntity3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntity3D * This,
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
            SC_IEntity3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntity3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntity3D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntity3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntity3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntity3D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntity3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntity3D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntity3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntity3D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntity3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntity3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntity3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntity3D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntity3D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntity3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntity3D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntity3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntity3D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntity3D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntity3D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntity3DVtbl;

    interface SC_IEntity3D
    {
        CONST_VTBL struct SC_IEntity3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntity3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntity3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntity3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntity3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntity3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntity3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntity3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntity3D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntity3D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntity3D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntity3D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntity3D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntity3D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntity3D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntity3D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntity3D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntity3D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntity3D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntity3D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntity3D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntity3D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity3D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity3D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntity3D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntity3D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntity3D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntity3D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntity3D_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_IEntity3D_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_IEntity3D_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_IEntity3D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntity3D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity3D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity3D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntity3D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntity3D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntity3D_ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23) ) 

#define SC_IEntity3D_ScGetInverseMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,index,Value) ) 

#define SC_IEntity3D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntity3D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntity3D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntity3D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntity3D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntity3D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity3D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity3D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntity3D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntity3D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity3D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity3D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntity3D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntity3D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntity3D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntity3D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntity3D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntity3D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntity3D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntity3D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntity3D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntity3D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntity3D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntity3D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntity3D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntity3D_INTERFACE_DEFINED__ */


#ifndef __SC_IEntity2D_INTERFACE_DEFINED__
#define __SC_IEntity2D_INTERFACE_DEFINED__

/* interface SC_IEntity2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntity2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA2-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IEntity2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IEntity2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntity2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntity2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntity2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntity2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntity2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntity2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntity2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntity2D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntity2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntity2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntity2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntity2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntity2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntity2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntity2D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntity2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntity2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntity2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntity2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntity2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IEntity2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntity2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntity2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IEntity2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IEntity2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IEntity2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IEntity2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IEntity2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IEntity2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IEntity2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntity2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntity2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntity2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEntity2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntity2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntity2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntity2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntity2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntity2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntity2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntity2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntity2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntity2D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IEntity2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IEntity2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IEntity2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IEntity2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntity2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IEntity2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IEntity2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntity2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntity2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntity2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntity2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IEntity2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IEntity2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IEntity2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IEntity2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IEntity2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IEntity2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IEntity2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IEntity2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IEntity2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IEntity2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IEntity2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntity2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntity2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntity2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntity2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IEntity2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntity2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntity2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntity2DVtbl;

    interface SC_IEntity2D
    {
        CONST_VTBL struct SC_IEntity2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntity2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntity2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntity2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntity2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntity2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntity2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntity2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntity2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntity2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntity2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntity2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntity2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntity2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntity2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntity2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntity2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntity2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntity2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntity2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntity2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntity2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntity2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntity2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntity2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntity2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntity2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IEntity2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IEntity2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IEntity2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IEntity2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IEntity2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IEntity2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntity2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IEntity2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IEntity2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IEntity2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IEntity2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IEntity2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IEntity2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IEntity2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IEntity2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IEntity2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IEntity2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IEntity2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IEntity2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntity2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntity2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntity2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IEntity2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IEntity2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntity2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntity2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntity2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntity2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntity2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntity2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntity2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntity2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IEntity2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IEntity2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IEntity2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IEntity2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IEntity2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IEntity2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IEntity2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntity2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntity2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntity2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IEntity2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IEntity2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IEntity2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntity2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntity2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntity2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntity2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntity2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IEntity2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IEntity2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IEntity2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IEntity2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IEntity2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IEntity2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IEntity2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IEntity2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IEntity2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IEntity2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntity2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntity2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntity2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntity2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IEntity2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IEntity2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IEntity2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IEntity2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IEntity2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IEntity2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntity2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntity2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntity2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEntity2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntity2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntity2D_INTERFACE_DEFINED__ */


#ifndef __SC_IEntity2DContainer_INTERFACE_DEFINED__
#define __SC_IEntity2DContainer_INTERFACE_DEFINED__

/* interface SC_IEntity2DContainer */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntity2DContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("492916D2-A023-11d2-9AB3-008048EEE00C")
    SC_IEntity2DContainer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumEntities( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntity( 
            /* [in] */ long Num,
            /* [retval][out] */ SC_IEntity2D **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IEntity2DContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntity2DContainer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntity2DContainer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntity2DContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntity2DContainer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntity2DContainer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntity2DContainer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntity2DContainer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntity2DContainer * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntity2DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntity2DContainer * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntity2DContainer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntity2DContainer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntity2DContainer * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntity2DContainer * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntity2DContainer * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IEntity2DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IEntity2DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IEntity2DContainer * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntity2DContainer * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IEntity2DContainer * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IEntity2DContainer * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IEntity2DContainer * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntity2DContainer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntity2DContainer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntity2DContainer * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntity2DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntity2DContainer * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Num,
            /* [retval][out] */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntity2DContainer * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IEntity2DContainer * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntity2DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntity2DContainer * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IEntity2DContainer * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntity2DContainer * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntity2DContainer * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntity2DContainerVtbl;

    interface SC_IEntity2DContainer
    {
        CONST_VTBL struct SC_IEntity2DContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntity2DContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntity2DContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntity2DContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntity2DContainer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntity2DContainer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntity2DContainer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntity2DContainer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntity2DContainer_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntity2DContainer_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntity2DContainer_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntity2DContainer_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntity2DContainer_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntity2DContainer_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntity2DContainer_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntity2DContainer_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntity2DContainer_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntity2DContainer_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntity2DContainer_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntity2DContainer_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntity2DContainer_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntity2DContainer_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity2DContainer_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity2DContainer_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntity2DContainer_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntity2DContainer_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntity2DContainer_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntity2DContainer_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntity2DContainer_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IEntity2DContainer_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IEntity2DContainer_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IEntity2DContainer_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IEntity2DContainer_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IEntity2DContainer_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IEntity2DContainer_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2DContainer_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2DContainer_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntity2DContainer_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity2DContainer_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity2DContainer_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IEntity2DContainer_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IEntity2DContainer_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IEntity2DContainer_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IEntity2DContainer_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IEntity2DContainer_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IEntity2DContainer_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IEntity2DContainer_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IEntity2DContainer_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IEntity2DContainer_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IEntity2DContainer_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IEntity2DContainer_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IEntity2DContainer_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntity2DContainer_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntity2DContainer_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntity2DContainer_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IEntity2DContainer_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IEntity2DContainer_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntity2DContainer_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntity2DContainer_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntity2DContainer_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_IEntity2DContainer_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_IEntity2DContainer_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IEntity2DContainer_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntity2DContainer_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntity2DContainer_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity2DContainer_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity2DContainer_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntity2DContainer_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntity2DContainer_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity2DContainer_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity2DContainer_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntity2DContainer_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IEntity2DContainer_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IEntity2DContainer_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IEntity2DContainer_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IEntity2DContainer_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IEntity2DContainer_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IEntity2DContainer_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IEntity2DContainer_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntity2DContainer_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntity2DContainer_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntity2DContainer_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IEntity2DContainer_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IEntity2DContainer_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IEntity2DContainer_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntity2DContainer_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntity2DContainer_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntity2DContainer_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntity2DContainer_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntity2DContainer_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IEntity2DContainer_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IEntity2DContainer_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IEntity2DContainer_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IEntity2DContainer_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IEntity2DContainer_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IEntity2DContainer_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IEntity2DContainer_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IEntity2DContainer_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IEntity2DContainer_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IEntity2DContainer_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntity2DContainer_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IEntity2DContainer_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntity2DContainer_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IEntity2DContainer_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IEntity2DContainer_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IEntity2DContainer_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IEntity2DContainer_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IEntity2DContainer_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IEntity2DContainer_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IEntity2DContainer_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntity2DContainer_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntity2DContainer_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity2DContainer_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntity2DContainer_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IEntity2DContainer_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntity2DContainer_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntity2DContainer_INTERFACE_DEFINED__ */


#ifndef __SC_IEntity3DContainer_INTERFACE_DEFINED__
#define __SC_IEntity3DContainer_INTERFACE_DEFINED__

/* interface SC_IEntity3DContainer */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntity3DContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C0BDB2F3-FE61-11d3-9BBD-008048EEE00C")
    SC_IEntity3DContainer : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumEntities( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntity( 
            /* [in] */ long Num,
            /* [retval][out] */ SC_IEntity3D **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IEntity3DContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntity3DContainer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntity3DContainer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntity3DContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntity3DContainer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntity3DContainer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntity3DContainer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntity3DContainer * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IEntity3DContainer * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntity3DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IEntity3DContainer * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IEntity3DContainer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IEntity3DContainer * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IEntity3DContainer * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IEntity3DContainer * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IEntity3DContainer * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IEntity3DContainer * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntity3DContainer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntity3DContainer * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IEntity3DContainer * This,
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
            SC_IEntity3DContainer * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IEntity3DContainer * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IEntity3DContainer * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumEntities )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntity )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Num,
            /* [retval][out] */ SC_IEntity3D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IEntity3DContainer * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IEntity3DContainer * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IEntity3DContainer * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IEntity3DContainer * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IEntity3DContainer * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IEntity3DContainerVtbl;

    interface SC_IEntity3DContainer
    {
        CONST_VTBL struct SC_IEntity3DContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntity3DContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntity3DContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntity3DContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntity3DContainer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntity3DContainer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntity3DContainer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntity3DContainer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntity3DContainer_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IEntity3DContainer_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IEntity3DContainer_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IEntity3DContainer_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IEntity3DContainer_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IEntity3DContainer_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IEntity3DContainer_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IEntity3DContainer_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IEntity3DContainer_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IEntity3DContainer_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IEntity3DContainer_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IEntity3DContainer_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntity3DContainer_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IEntity3DContainer_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity3DContainer_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IEntity3DContainer_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IEntity3DContainer_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IEntity3DContainer_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IEntity3DContainer_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IEntity3DContainer_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IEntity3DContainer_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_IEntity3DContainer_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_IEntity3DContainer_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_IEntity3DContainer_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3DContainer_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3DContainer_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IEntity3DContainer_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity3DContainer_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IEntity3DContainer_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IEntity3DContainer_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IEntity3DContainer_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IEntity3DContainer_ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23) ) 

#define SC_IEntity3DContainer_ScGetInverseMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,index,Value) ) 

#define SC_IEntity3DContainer_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IEntity3DContainer_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IEntity3DContainer_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IEntity3DContainer_ScGetNumEntities(This,Num)	\
    ( (This)->lpVtbl -> ScGetNumEntities(This,Num) ) 

#define SC_IEntity3DContainer_ScGetEntity(This,Num,Entity)	\
    ( (This)->lpVtbl -> ScGetEntity(This,Num,Entity) ) 

#define SC_IEntity3DContainer_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IEntity3DContainer_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IEntity3DContainer_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IEntity3DContainer_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity3DContainer_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IEntity3DContainer_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IEntity3DContainer_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IEntity3DContainer_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity3DContainer_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IEntity3DContainer_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IEntity3DContainer_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IEntity3DContainer_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IEntity3DContainer_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IEntity3DContainer_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IEntity3DContainer_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IEntity3DContainer_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IEntity3DContainer_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IEntity3DContainer_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IEntity3DContainer_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IEntity3DContainer_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IEntity3DContainer_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IEntity3DContainer_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IEntity3DContainer_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IEntity3DContainer_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntity3DContainer_INTERFACE_DEFINED__ */


#ifndef __SC_IGroup3D_INTERFACE_DEFINED__
#define __SC_IGroup3D_INTERFACE_DEFINED__

/* interface SC_IGroup3D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGroup3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA3-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IGroup3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity3D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IEntity3D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IGroup3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGroup3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGroup3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGroup3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGroup3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGroup3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGroup3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGroup3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IGroup3D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IGroup3D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IGroup3D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IGroup3D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IGroup3D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IGroup3D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IGroup3D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IGroup3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IGroup3D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IGroup3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IGroup3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IGroup3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IGroup3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IGroup3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IGroup3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IGroup3D * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IGroup3D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IGroup3D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IGroup3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IGroup3D * This,
            /* [retval][out] */ SC_IEntity3D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IGroup3D * This,
            /* [in] */ SC_IEntity3D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IGroup3D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IGroup3D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IGroup3D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IGroup3D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IGroup3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IGroup3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IGroup3D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IGroup3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IGroup3D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IGroup3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IGroup3D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IGroup3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IGroup3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IGroup3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IGroup3D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IGroup3D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IGroup3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IGroup3D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IGroup3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IGroup3D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IGroup3D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IGroup3D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IGroup3DVtbl;

    interface SC_IGroup3D
    {
        CONST_VTBL struct SC_IGroup3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGroup3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGroup3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGroup3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGroup3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGroup3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGroup3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGroup3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGroup3D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IGroup3D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IGroup3D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IGroup3D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IGroup3D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IGroup3D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IGroup3D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IGroup3D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IGroup3D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IGroup3D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IGroup3D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IGroup3D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IGroup3D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IGroup3D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IGroup3D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IGroup3D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IGroup3D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IGroup3D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IGroup3D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IGroup3D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IGroup3D_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_IGroup3D_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_IGroup3D_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_IGroup3D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IGroup3D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IGroup3D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IGroup3D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IGroup3D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IGroup3D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IGroup3D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup3D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup3D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IGroup3D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IGroup3D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IGroup3D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IGroup3D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IGroup3D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IGroup3D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IGroup3D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IGroup3D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IGroup3D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IGroup3D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IGroup3D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IGroup3D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IGroup3D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IGroup3D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IGroup3D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IGroup3D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IGroup3D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IGroup3D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IGroup3D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IGroup3D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IGroup3D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IGroup3D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IGroup3D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IGroup3D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup3D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IGroup3D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IGroup3D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGroup3D_INTERFACE_DEFINED__ */


#ifndef __SC_IGroup2D_INTERFACE_DEFINED__
#define __SC_IGroup2D_INTERFACE_DEFINED__

/* interface SC_IGroup2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGroup2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA4-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IGroup2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity2D **retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemove( 
            /* [in] */ SC_IEntity2D *entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity2D **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveEntity( 
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIndex( 
            /* [in] */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityByName( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IEntity2D **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IGroup2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGroup2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGroup2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGroup2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGroup2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGroup2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGroup2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGroup2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IGroup2D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IGroup2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IGroup2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IGroup2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IGroup2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IGroup2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IGroup2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IGroup2D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IGroup2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IGroup2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IGroup2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IGroup2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IGroup2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IGroup2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IGroup2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IGroup2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IGroup2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IGroup2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IGroup2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IGroup2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IGroup2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IGroup2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IGroup2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IGroup2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IGroup2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IGroup2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationStart )( 
            SC_IGroup2D * This,
            /* [defaultvalue][in] */ long index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIterationEnd )( 
            SC_IGroup2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNext )( 
            SC_IGroup2D * This,
            /* [retval][out] */ SC_IEntity2D **retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemove )( 
            SC_IGroup2D * This,
            /* [in] */ SC_IEntity2D *entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IGroup2D * This,
            /* [in] */ long Mask,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IGroup2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IGroup2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IGroup2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IGroup2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IGroup2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IGroup2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IGroup2D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IGroup2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IGroup2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IGroup2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IGroup2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IGroup2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByIndex )( 
            SC_IGroup2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveEntity )( 
            SC_IGroup2D * This,
            /* [in] */ long OldIndex,
            /* [in] */ long NewIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIndex )( 
            SC_IGroup2D * This,
            /* [in] */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Index);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityByName )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IEntity2D **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNameCount )( 
            SC_IGroup2D * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IGroup2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IGroup2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IGroup2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IGroup2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IGroup2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IGroup2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IGroup2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IGroup2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IGroup2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IGroup2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IGroup2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IGroup2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IGroup2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IGroup2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IGroup2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IGroup2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IGroup2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IGroup2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IGroup2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IGroup2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IGroup2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IGroup2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IGroup2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IGroup2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IGroup2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IGroup2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IGroup2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IGroup2DVtbl;

    interface SC_IGroup2D
    {
        CONST_VTBL struct SC_IGroup2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGroup2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGroup2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGroup2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGroup2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGroup2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGroup2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGroup2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGroup2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IGroup2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IGroup2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IGroup2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IGroup2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IGroup2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IGroup2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IGroup2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IGroup2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IGroup2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IGroup2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IGroup2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IGroup2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IGroup2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IGroup2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IGroup2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IGroup2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IGroup2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IGroup2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IGroup2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IGroup2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IGroup2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IGroup2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IGroup2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IGroup2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IGroup2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IGroup2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IGroup2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IGroup2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IGroup2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IGroup2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IGroup2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IGroup2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IGroup2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IGroup2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IGroup2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IGroup2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IGroup2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IGroup2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IGroup2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IGroup2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IGroup2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IGroup2D_ScIterationStart(This,index)	\
    ( (This)->lpVtbl -> ScIterationStart(This,index) ) 

#define SC_IGroup2D_ScIterationEnd(This)	\
    ( (This)->lpVtbl -> ScIterationEnd(This) ) 

#define SC_IGroup2D_ScGetNext(This,retval)	\
    ( (This)->lpVtbl -> ScGetNext(This,retval) ) 

#define SC_IGroup2D_ScRemove(This,entity)	\
    ( (This)->lpVtbl -> ScRemove(This,entity) ) 

#define SC_IGroup2D_ScGetCount(This,Mask,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Mask,Count) ) 

#define SC_IGroup2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IGroup2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IGroup2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IGroup2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IGroup2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IGroup2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IGroup2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IGroup2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IGroup2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IGroup2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IGroup2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IGroup2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IGroup2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IGroup2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IGroup2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IGroup2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IGroup2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IGroup2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IGroup2D_ScGetEntityByIndex(This,Index,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByIndex(This,Index,Entity) ) 

#define SC_IGroup2D_ScMoveEntity(This,OldIndex,NewIndex)	\
    ( (This)->lpVtbl -> ScMoveEntity(This,OldIndex,NewIndex) ) 

#define SC_IGroup2D_ScGetIndex(This,Entity,Index)	\
    ( (This)->lpVtbl -> ScGetIndex(This,Entity,Index) ) 

#define SC_IGroup2D_ScGetEntityByName(This,Name,Entity)	\
    ( (This)->lpVtbl -> ScGetEntityByName(This,Name,Entity) ) 

#define SC_IGroup2D_ScGetNameCount(This,Name,Count)	\
    ( (This)->lpVtbl -> ScGetNameCount(This,Name,Count) ) 

#define SC_IGroup2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IGroup2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IGroup2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IGroup2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IGroup2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IGroup2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IGroup2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IGroup2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IGroup2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IGroup2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IGroup2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IGroup2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IGroup2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IGroup2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IGroup2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IGroup2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IGroup2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IGroup2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IGroup2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IGroup2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IGroup2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IGroup2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IGroup2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IGroup2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IGroup2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IGroup2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IGroup2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IGroup2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IGroup2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IGroup2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IGroup2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IGroup2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IGroup2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IGroup2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IGroup2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IGroup2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IGroup2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IGroup2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGroup2D_INTERFACE_DEFINED__ */


#ifndef __SC_IElement3D_INTERFACE_DEFINED__
#define __SC_IElement3D_INTERFACE_DEFINED__

/* interface SC_IElement3D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IElement3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA5-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IElement3D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRunMacro( 
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCopyConstruct( 
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IElement3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IElement3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IElement3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IElement3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IElement3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IElement3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IElement3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IElement3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IElement3D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IElement3D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IElement3D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IElement3D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IElement3D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IElement3D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IElement3D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IElement3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IElement3D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IElement3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IElement3D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IElement3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IElement3D * This,
            double X,
            double Y,
            double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IElement3D * This,
            double X,
            double Y,
            double Z,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IElement3D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IElement3D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IElement3D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IElement3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IElement3D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IElement3D * This,
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
            SC_IElement3D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IElement3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IElement3D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IElement3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IElement3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IElement3D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IElement3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IElement3D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IElement3D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IElement3D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IElement3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IElement3D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IElement3D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IElement3D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IElement3D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IElement3D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IElement3D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IElement3D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IElement3D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IElement3D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IElement3D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IElement3DVtbl;

    interface SC_IElement3D
    {
        CONST_VTBL struct SC_IElement3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IElement3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IElement3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IElement3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IElement3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IElement3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IElement3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IElement3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IElement3D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IElement3D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IElement3D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IElement3D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IElement3D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IElement3D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IElement3D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IElement3D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IElement3D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IElement3D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IElement3D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IElement3D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IElement3D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IElement3D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IElement3D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IElement3D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IElement3D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IElement3D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IElement3D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IElement3D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IElement3D_ScTranslate(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y,Z) ) 

#define SC_IElement3D_ScScale(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y,Z) ) 

#define SC_IElement3D_ScRotate(This,X,Y,Z,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Z,Angle) ) 

#define SC_IElement3D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IElement3D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IElement3D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IElement3D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IElement3D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IElement3D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IElement3D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IElement3D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement3D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement3D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IElement3D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IElement3D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IElement3D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IElement3D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IElement3D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IElement3D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IElement3D_ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m03,m10,m11,m12,m13,m20,m21,m22,m23) ) 

#define SC_IElement3D_ScGetInverseMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,index,Value) ) 

#define SC_IElement3D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IElement3D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IElement3D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IElement3D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IElement3D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IElement3D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IElement3D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IElement3D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IElement3D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IElement3D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IElement3D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IElement3D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IElement3D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IElement3D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IElement3D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IElement3D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IElement3D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IElement3D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IElement3D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IElement3D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IElement3D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IElement3D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IElement3D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement3D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IElement3D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IElement3D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IElement3D_INTERFACE_DEFINED__ */


#ifndef __SC_IElement2D_INTERFACE_DEFINED__
#define __SC_IElement2D_INTERFACE_DEFINED__

/* interface SC_IElement2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IElement2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("112DDEA6-34EC-11d1-96CC-9A7F2BB72D49")
    SC_IElement2D : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ SC_IKernel **Kernel) = 0;
        
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
            SC_IEntity *Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Parent) = 0;
        
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
            /* [retval][out] */ SC_IEntity **Entity) = 0;
        
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

    typedef struct SC_IElement2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IElement2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IElement2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IElement2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IElement2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IElement2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IElement2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IElement2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IElement2D * This,
            /* [retval][out] */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IElement2D * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScName )( 
            SC_IElement2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScName )( 
            SC_IElement2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSelected )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSelected )( 
            SC_IElement2D * This,
            /* [in] */ long Selected);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUsed )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUsed )( 
            SC_IElement2D * This,
            /* [in] */ long Used);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOnWork )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *OnWork);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOnWork )( 
            SC_IElement2D * This,
            /* [in] */ long OnWork);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IElement2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopy )( 
            SC_IElement2D * This,
            SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddProperty )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ short VariantCount,
            /* [in] */ long Flags,
            /* [in] */ short Version,
            /* [in] */ long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyInfo )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            short *VariantCount,
            long *Flags,
            short *Version,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDelProperty )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            long ParamId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadEntity )( 
            SC_IElement2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveEntity )( 
            SC_IElement2D * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMatrix )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslate )( 
            SC_IElement2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScale )( 
            SC_IElement2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate )( 
            SC_IElement2D * This,
            double X,
            double Y,
            double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnXAxis )( 
            SC_IElement2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnYAxis )( 
            SC_IElement2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnAxis )( 
            SC_IElement2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSelectCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemUsedCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemUsed )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemUsed )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [in] */ long Used);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemSelected )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemSelected )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyVariant )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [retval][out] */ VARIANT *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateProperties )( 
            SC_IElement2D * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkAble )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *MarkAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkAble )( 
            SC_IElement2D * This,
            /* [in] */ long MarkAble);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzPos )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzPos )( 
            SC_IElement2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertPos )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertPos )( 
            SC_IElement2D * This,
            /* [in] */ double Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHorzSize )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHorzSize )( 
            SC_IElement2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVertSize )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Size);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVertSize )( 
            SC_IElement2D * This,
            /* [in] */ double Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutline )( 
            SC_IElement2D * This,
            double XMin,
            double YMin,
            double XMax,
            double YMax);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutlineValid )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantX )( 
            SC_IElement2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSlantY )( 
            SC_IElement2D * This,
            double Slant);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPack )( 
            SC_IElement2D * This,
            /* [in] */ long DeleteAll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IElement2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IElement2D * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTransform )( 
            SC_IElement2D * This,
            double m00,
            double m01,
            double m02,
            double m10,
            double m11,
            double m12);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetInverseMatrix )( 
            SC_IElement2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUnifyMatrix )( 
            SC_IElement2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRunMacro )( 
            SC_IElement2D * This,
            /* [in] */ BSTR MacroName,
            /* [in] */ BSTR ParameterList,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCopyConstruct )( 
            SC_IElement2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IElement2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScChangeAble )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *ChangeAble);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScChangeAble )( 
            SC_IElement2D * This,
            /* [in] */ long ChangeAble);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOrderFlags )( 
            SC_IElement2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOrderFlags )( 
            SC_IElement2D * This,
            /* [out] */ long *Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScVectorsDirty )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScVectorsDirty )( 
            SC_IElement2D * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParent )( 
            SC_IElement2D * This,
            /* [retval][out] */ SC_IEntity **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayStep )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ double *Step);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayStep )( 
            SC_IElement2D * This,
            /* [in] */ double XStep,
            /* [in] */ double YStep);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArrayCount )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetArrayCount )( 
            SC_IElement2D * This,
            /* [in] */ long XCount,
            /* [in] */ long YCount);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAlign )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Align);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAlign )( 
            SC_IElement2D * This,
            /* [in] */ long Align);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNextSequence )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVerifyPropertyVariant )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value,
            /* [retval][out] */ long *Verify);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadId )( 
            SC_IElement2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadId )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZOffset )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZOffset )( 
            SC_IElement2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstPoint )( 
            SC_IElement2D * This,
            /* [in] */ long FromEnd,
            /* [in] */ double *X,
            /* [in] */ double *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetItemHeadId )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *pHeadId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetItemHeadId )( 
            SC_IElement2D * This,
            /* [in] */ long index,
            /* [in] */ long HeadId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScClusterID )( 
            SC_IElement2D * This,
            /* [in] */ long ID);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScClusterID )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTopLevelCluster )( 
            SC_IElement2D * This,
            /* [retval][out] */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUserData )( 
            SC_IElement2D * This,
            /* [in] */ long ID,
            /* [in] */ long Data,
            /* [defaultvalue][optional][in] */ long Iterate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUserData )( 
            SC_IElement2D * This,
            /* [in] */ long ID,
            /* [retval][out] */ long *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPreviousSequence )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScResetSequence )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateSequence )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkLoopCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkLoopCount )( 
            SC_IElement2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkBeatCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkBeatCount )( 
            SC_IElement2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkStartCount )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkStartCount )( 
            SC_IElement2D * This,
            /* [in] */ long Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScChangeMarkSequence )( 
            SC_IElement2D * This,
            long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDimensionLimit )( 
            SC_IElement2D * This,
            /* [in] */ long LimitIndex,
            /* [in] */ double Limit);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDimensionLimit )( 
            SC_IElement2D * This,
            /* [in] */ long LimitIndex,
            /* [retval][out] */ double *Limit);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDimensionLimitFlags )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDimensionLimitFlags )( 
            SC_IElement2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScZScaleAbs )( 
            SC_IElement2D * This,
            /* [retval][out] */ double *Scale);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScZScaleAbs )( 
            SC_IElement2D * This,
            /* [in] */ double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateZ )( 
            SC_IElement2D * This,
            /* [in] */ double Add);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleZ )( 
            SC_IElement2D * This,
            /* [in] */ double fac);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMirrorOnPlane )( 
            SC_IElement2D * This,
            /* [in] */ long PlaneType,
            /* [in] */ long UseCenterOfPart);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScVarEntityData )( 
            SC_IElement2D * This,
            /* [in] */ long DataId,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMarkFlags )( 
            SC_IElement2D * This,
            /* [in] */ long Flags,
            /* [in] */ long Mask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMarkFlags )( 
            SC_IElement2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPropertyVariant2 )( 
            SC_IElement2D * This,
            /* [in] */ long Pid1,
            /* [in] */ long Pid2,
            /* [in] */ long Pid3,
            /* [in] */ long Pid4,
            /* [in] */ long VariantId,
            /* [in] */ long ParamId,
            /* [in] */ VARIANT Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotate3D )( 
            SC_IElement2D * This,
            /* [in] */ double px,
            /* [in] */ double py,
            /* [in] */ double pz,
            /* [in] */ double vx,
            /* [in] */ double vy,
            /* [in] */ double vz,
            /* [in] */ double radians);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline2D )( 
            SC_IElement2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOutline3D )( 
            SC_IElement2D * This,
            /* [out] */ double *MinX,
            /* [out] */ double *MinY,
            /* [out] */ double *MaxX,
            /* [out] */ double *MaxY,
            /* [out] */ double *MinZ,
            /* [out] */ double *MaxZ);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUniqueObjectId )( 
            SC_IElement2D * This,
            /* [retval][out] */ __int64 *Id);
        
        END_INTERFACE
    } SC_IElement2DVtbl;

    interface SC_IElement2D
    {
        CONST_VTBL struct SC_IElement2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IElement2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IElement2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IElement2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IElement2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IElement2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IElement2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IElement2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IElement2D_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IElement2D_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IElement2D_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IElement2D_get_ScName(This,Name)	\
    ( (This)->lpVtbl -> get_ScName(This,Name) ) 

#define SC_IElement2D_put_ScName(This,Name)	\
    ( (This)->lpVtbl -> put_ScName(This,Name) ) 

#define SC_IElement2D_get_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> get_ScSelected(This,Selected) ) 

#define SC_IElement2D_put_ScSelected(This,Selected)	\
    ( (This)->lpVtbl -> put_ScSelected(This,Selected) ) 

#define SC_IElement2D_get_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> get_ScUsed(This,Used) ) 

#define SC_IElement2D_put_ScUsed(This,Used)	\
    ( (This)->lpVtbl -> put_ScUsed(This,Used) ) 

#define SC_IElement2D_get_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> get_ScOnWork(This,OnWork) ) 

#define SC_IElement2D_put_ScOnWork(This,OnWork)	\
    ( (This)->lpVtbl -> put_ScOnWork(This,OnWork) ) 

#define SC_IElement2D_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IElement2D_ScCopy(This,Entity)	\
    ( (This)->lpVtbl -> ScCopy(This,Entity) ) 

#define SC_IElement2D_ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScAddProperty(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IElement2D_ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId)	\
    ( (This)->lpVtbl -> ScGetPropertyInfo(This,Pid1,Pid2,Pid3,Pid4,VariantCount,Flags,Version,ParamId) ) 

#define SC_IElement2D_ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId)	\
    ( (This)->lpVtbl -> ScDelProperty(This,Pid1,Pid2,Pid3,Pid4,ParamId) ) 

#define SC_IElement2D_ScLoadEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadEntity(This,FileName) ) 

#define SC_IElement2D_ScSaveEntity(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveEntity(This,FileName) ) 

#define SC_IElement2D_ScMatrix(This,index,Value)	\
    ( (This)->lpVtbl -> ScMatrix(This,index,Value) ) 

#define SC_IElement2D_ScOutline(This,index,Value)	\
    ( (This)->lpVtbl -> ScOutline(This,index,Value) ) 

#define SC_IElement2D_ScTranslate(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslate(This,X,Y) ) 

#define SC_IElement2D_ScScale(This,X,Y)	\
    ( (This)->lpVtbl -> ScScale(This,X,Y) ) 

#define SC_IElement2D_ScRotate(This,X,Y,Angle)	\
    ( (This)->lpVtbl -> ScRotate(This,X,Y,Angle) ) 

#define SC_IElement2D_ScMirrorOnXAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnXAxis(This) ) 

#define SC_IElement2D_ScMirrorOnYAxis(This)	\
    ( (This)->lpVtbl -> ScMirrorOnYAxis(This) ) 

#define SC_IElement2D_ScMirrorOnAxis(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScMirrorOnAxis(This,X1,Y1,X2,Y2) ) 

#define SC_IElement2D_ScItemCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemCount(This,Count) ) 

#define SC_IElement2D_ScItemSelectCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemSelectCount(This,Count) ) 

#define SC_IElement2D_ScItemUsedCount(This,Count)	\
    ( (This)->lpVtbl -> ScItemUsedCount(This,Count) ) 

#define SC_IElement2D_ScGetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScGetItemUsed(This,index,Used) ) 

#define SC_IElement2D_ScSetItemUsed(This,index,Used)	\
    ( (This)->lpVtbl -> ScSetItemUsed(This,index,Used) ) 

#define SC_IElement2D_ScGetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScGetItemSelected(This,index,Selected) ) 

#define SC_IElement2D_ScSetItemSelected(This,index,Selected)	\
    ( (This)->lpVtbl -> ScSetItemSelected(This,index,Selected) ) 

#define SC_IElement2D_ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement2D_ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScGetPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement2D_ScUpdateProperties(This)	\
    ( (This)->lpVtbl -> ScUpdateProperties(This) ) 

#define SC_IElement2D_get_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> get_ScMarkAble(This,MarkAble) ) 

#define SC_IElement2D_put_ScMarkAble(This,MarkAble)	\
    ( (This)->lpVtbl -> put_ScMarkAble(This,MarkAble) ) 

#define SC_IElement2D_get_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScHorzPos(This,Pos) ) 

#define SC_IElement2D_put_ScHorzPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScHorzPos(This,Pos) ) 

#define SC_IElement2D_get_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> get_ScVertPos(This,Pos) ) 

#define SC_IElement2D_put_ScVertPos(This,Pos)	\
    ( (This)->lpVtbl -> put_ScVertPos(This,Pos) ) 

#define SC_IElement2D_get_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScHorzSize(This,Size) ) 

#define SC_IElement2D_put_ScHorzSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScHorzSize(This,Size) ) 

#define SC_IElement2D_get_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> get_ScVertSize(This,Size) ) 

#define SC_IElement2D_put_ScVertSize(This,Size)	\
    ( (This)->lpVtbl -> put_ScVertSize(This,Size) ) 

#define SC_IElement2D_ScSetOutline(This,XMin,YMin,XMax,YMax)	\
    ( (This)->lpVtbl -> ScSetOutline(This,XMin,YMin,XMax,YMax) ) 

#define SC_IElement2D_get_ScOutlineValid(This,Valid)	\
    ( (This)->lpVtbl -> get_ScOutlineValid(This,Valid) ) 

#define SC_IElement2D_ScSlantX(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantX(This,Slant) ) 

#define SC_IElement2D_ScSlantY(This,Slant)	\
    ( (This)->lpVtbl -> ScSlantY(This,Slant) ) 

#define SC_IElement2D_ScPack(This,DeleteAll)	\
    ( (This)->lpVtbl -> ScPack(This,DeleteAll) ) 

#define SC_IElement2D_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IElement2D_ScLoadFromArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Error) ) 

#define SC_IElement2D_ScSaveToArchive(This,Archive,Name,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Error) ) 

#define SC_IElement2D_ScTransform(This,m00,m01,m02,m10,m11,m12)	\
    ( (This)->lpVtbl -> ScTransform(This,m00,m01,m02,m10,m11,m12) ) 

#define SC_IElement2D_ScGetInverseMatrix(This,Index,Value)	\
    ( (This)->lpVtbl -> ScGetInverseMatrix(This,Index,Value) ) 

#define SC_IElement2D_ScUnifyMatrix(This)	\
    ( (This)->lpVtbl -> ScUnifyMatrix(This) ) 

#define SC_IElement2D_ScRunMacro(This,MacroName,ParameterList,Result)	\
    ( (This)->lpVtbl -> ScRunMacro(This,MacroName,ParameterList,Result) ) 

#define SC_IElement2D_ScCopyConstruct(This,Entity)	\
    ( (This)->lpVtbl -> ScCopyConstruct(This,Entity) ) 

#define SC_IElement2D_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IElement2D_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IElement2D_get_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> get_ScChangeAble(This,ChangeAble) ) 

#define SC_IElement2D_put_ScChangeAble(This,ChangeAble)	\
    ( (This)->lpVtbl -> put_ScChangeAble(This,ChangeAble) ) 

#define SC_IElement2D_ScSetOrderFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetOrderFlags(This,Flags,Mask) ) 

#define SC_IElement2D_ScGetOrderFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetOrderFlags(This,Flags) ) 

#define SC_IElement2D_get_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> get_ScVectorsDirty(This,Dirty) ) 

#define SC_IElement2D_put_ScVectorsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> put_ScVectorsDirty(This,Dirty) ) 

#define SC_IElement2D_ScGetParent(This,Parent)	\
    ( (This)->lpVtbl -> ScGetParent(This,Parent) ) 

#define SC_IElement2D_ScGetArrayStep(This,index,Step)	\
    ( (This)->lpVtbl -> ScGetArrayStep(This,index,Step) ) 

#define SC_IElement2D_ScSetArrayStep(This,XStep,YStep)	\
    ( (This)->lpVtbl -> ScSetArrayStep(This,XStep,YStep) ) 

#define SC_IElement2D_ScGetArrayCount(This,index,Count)	\
    ( (This)->lpVtbl -> ScGetArrayCount(This,index,Count) ) 

#define SC_IElement2D_ScSetArrayCount(This,XCount,YCount)	\
    ( (This)->lpVtbl -> ScSetArrayCount(This,XCount,YCount) ) 

#define SC_IElement2D_get_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> get_ScAlign(This,Align) ) 

#define SC_IElement2D_put_ScAlign(This,Align)	\
    ( (This)->lpVtbl -> put_ScAlign(This,Align) ) 

#define SC_IElement2D_ScNextSequence(This,Res)	\
    ( (This)->lpVtbl -> ScNextSequence(This,Res) ) 

#define SC_IElement2D_ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify)	\
    ( (This)->lpVtbl -> ScVerifyPropertyVariant(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value,Verify) ) 

#define SC_IElement2D_put_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> put_ScHeadId(This,ID) ) 

#define SC_IElement2D_get_ScHeadId(This,ID)	\
    ( (This)->lpVtbl -> get_ScHeadId(This,ID) ) 

#define SC_IElement2D_get_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScZOffset(This,Offset) ) 

#define SC_IElement2D_put_ScZOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScZOffset(This,Offset) ) 

#define SC_IElement2D_ScGetFirstPoint(This,FromEnd,X,Y)	\
    ( (This)->lpVtbl -> ScGetFirstPoint(This,FromEnd,X,Y) ) 

#define SC_IElement2D_ScGetItemHeadId(This,index,pHeadId)	\
    ( (This)->lpVtbl -> ScGetItemHeadId(This,index,pHeadId) ) 

#define SC_IElement2D_ScSetItemHeadId(This,index,HeadId)	\
    ( (This)->lpVtbl -> ScSetItemHeadId(This,index,HeadId) ) 

#define SC_IElement2D_put_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> put_ScClusterID(This,ID) ) 

#define SC_IElement2D_get_ScClusterID(This,ID)	\
    ( (This)->lpVtbl -> get_ScClusterID(This,ID) ) 

#define SC_IElement2D_ScGetTopLevelCluster(This,Entity)	\
    ( (This)->lpVtbl -> ScGetTopLevelCluster(This,Entity) ) 

#define SC_IElement2D_ScSetUserData(This,ID,Data,Iterate)	\
    ( (This)->lpVtbl -> ScSetUserData(This,ID,Data,Iterate) ) 

#define SC_IElement2D_ScGetUserData(This,ID,Data)	\
    ( (This)->lpVtbl -> ScGetUserData(This,ID,Data) ) 

#define SC_IElement2D_ScPreviousSequence(This,Res)	\
    ( (This)->lpVtbl -> ScPreviousSequence(This,Res) ) 

#define SC_IElement2D_ScResetSequence(This,Res)	\
    ( (This)->lpVtbl -> ScResetSequence(This,Res) ) 

#define SC_IElement2D_ScUpdateSequence(This,Res)	\
    ( (This)->lpVtbl -> ScUpdateSequence(This,Res) ) 

#define SC_IElement2D_get_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkLoopCount(This,Count) ) 

#define SC_IElement2D_put_ScMarkLoopCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkLoopCount(This,Count) ) 

#define SC_IElement2D_get_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkBeatCount(This,Count) ) 

#define SC_IElement2D_put_ScMarkBeatCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkBeatCount(This,Count) ) 

#define SC_IElement2D_get_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> get_ScMarkStartCount(This,Count) ) 

#define SC_IElement2D_put_ScMarkStartCount(This,Count)	\
    ( (This)->lpVtbl -> put_ScMarkStartCount(This,Count) ) 

#define SC_IElement2D_ScChangeMarkSequence(This,Flags)	\
    ( (This)->lpVtbl -> ScChangeMarkSequence(This,Flags) ) 

#define SC_IElement2D_ScSetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScSetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IElement2D_ScGetDimensionLimit(This,LimitIndex,Limit)	\
    ( (This)->lpVtbl -> ScGetDimensionLimit(This,LimitIndex,Limit) ) 

#define SC_IElement2D_get_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IElement2D_put_ScDimensionLimitFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDimensionLimitFlags(This,Flags) ) 

#define SC_IElement2D_get_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> get_ScZScaleAbs(This,Scale) ) 

#define SC_IElement2D_put_ScZScaleAbs(This,Scale)	\
    ( (This)->lpVtbl -> put_ScZScaleAbs(This,Scale) ) 

#define SC_IElement2D_ScTranslateZ(This,Add)	\
    ( (This)->lpVtbl -> ScTranslateZ(This,Add) ) 

#define SC_IElement2D_ScScaleZ(This,fac)	\
    ( (This)->lpVtbl -> ScScaleZ(This,fac) ) 

#define SC_IElement2D_ScMirrorOnPlane(This,PlaneType,UseCenterOfPart)	\
    ( (This)->lpVtbl -> ScMirrorOnPlane(This,PlaneType,UseCenterOfPart) ) 

#define SC_IElement2D_ScVarEntityData(This,DataId,Data)	\
    ( (This)->lpVtbl -> ScVarEntityData(This,DataId,Data) ) 

#define SC_IElement2D_ScSetMarkFlags(This,Flags,Mask)	\
    ( (This)->lpVtbl -> ScSetMarkFlags(This,Flags,Mask) ) 

#define SC_IElement2D_ScGetMarkFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetMarkFlags(This,Flags) ) 

#define SC_IElement2D_ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value)	\
    ( (This)->lpVtbl -> ScSetPropertyVariant2(This,Pid1,Pid2,Pid3,Pid4,VariantId,ParamId,Value) ) 

#define SC_IElement2D_ScRotate3D(This,px,py,pz,vx,vy,vz,radians)	\
    ( (This)->lpVtbl -> ScRotate3D(This,px,py,pz,vx,vy,vz,radians) ) 

#define SC_IElement2D_ScOutline2D(This,MinX,MinY,MaxX,MaxY)	\
    ( (This)->lpVtbl -> ScOutline2D(This,MinX,MinY,MaxX,MaxY) ) 

#define SC_IElement2D_ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ)	\
    ( (This)->lpVtbl -> ScOutline3D(This,MinX,MinY,MaxX,MaxY,MinZ,MaxZ) ) 

#define SC_IElement2D_ScGetUniqueObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScGetUniqueObjectId(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IElement2D_INTERFACE_DEFINED__ */



#ifndef __ScConstantsKernel_MODULE_DEFINED__
#define __ScConstantsKernel_MODULE_DEFINED__


/* module ScConstantsKernel */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComKernelUnitMM	=	1;

/* [helpstring] */ const long scComKernelUnitInch	=	2;

/* [helpstring] */ const long scComKernelUnitMil	=	3;

/* [helpstring] */ const long scComKernelUnitBit	=	4;

/* [helpstring] */ const long scComObject	=	( 0x2000 | 0 ) ;

/* [helpstring] */ const long scComObjectEntity	=	( 0x2000 | 0x8000 ) ;

/* [helpstring] */ const long scComObjectEntity2D	=	( 0x2000 | ( 0x8000 + 0x40000 )  ) ;

/* [helpstring] */ const long scComObjectEntity2DContainer	=	( 0x2000 | ( 0x1000 + (( 0x8000 + 0x40000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectEntity3DContainer	=	( 0x2000 | ( ( 1 * 0x1000000 )  + (( 0x8000 + 0x20000 ) ) )  ) ;

/* [helpstring] */ const long scComObjectEntity3D	=	( 0x2000 | ( 0x8000 + 0x20000 )  ) ;

/* [helpstring] */ const long scComObjectGroup2D	=	( 0x2000 | ( ( 0x80000 + 0x40000 )  + 0x8000 )  ) ;

/* [helpstring] */ const long scComObjectGroup3D	=	( 0x2000 | ( ( 0x80000 + 0x20000 )  + 0x8000 )  ) ;

/* [helpstring] */ const long scComObjectElement2D	=	( 0x2000 | ( ( 0x100000 + 0x40000 )  + 0x8000 )  ) ;

/* [helpstring] */ const long scComObjectElement3D	=	( 0x2000 | ( ( 0x100000 + 0x20000 )  + 0x8000 )  ) ;

/* [helpstring] */ const long scComEntityUsed	=	0x1;

/* [helpstring] */ const long scComEntitySelected	=	0x2;

/* [helpstring] */ const long scComEntityOnWork	=	0x4;

/* [helpstring] */ const long scComEntityChangeable	=	0x8;

/* [helpstring] */ const long scComEntityMarkable	=	0x10;

/* [helpstring] */ const long scComEventObjectChanged	=	0x10;

/* [helpstring] */ const long scComDebugNoOutput	=	0x4;

/* [helpstring] */ const long scComDebugMessageBox	=	0x2;

/* [helpstring] */ const long scComDebugFileOutput	=	0x1;

/* [helpstring] */ const long scComDebugStrArray	=	0x8;

/* [helpstring] */ const long scComKernelCheckInit	=	0x1;

/* [helpstring] */ const long scComKernelCheckLicense	=	0x2;

/* [helpstring] */ const long scComKernelCheckSystemPath	=	0x4;

/* [helpstring] */ const long scComKernelCheckIntermedPath	=	0x8;

/* [helpstring] */ const long scComKernelCheckOpticSetupMode	=	0x10;

/* [helpstring] */ const long scComArchiveRead	=	0x1;

/* [helpstring] */ const long scComArchiveWrite	=	0x2;

/* [helpstring] */ const long scComArchiveErrorFormat	=	-0x2;

/* [helpstring] */ const long scComArchiveErrorFileNotFound	=	-0x3;

/* [helpstring] */ const long scComArchiveErrorAccessDenied	=	-0x4;

/* [helpstring] */ const long scComArchiveErrorInsufficientMemory	=	-0x5;

/* [helpstring] */ const long scComArchiveErrorNameAlreadyExists	=	-0x6;

/* [helpstring] */ const long scComArchiveProperty	=	0x1;

/* [helpstring] */ const long scComArchiveStyle	=	0x2;

/* [helpstring] */ const long scComArchiveChild	=	0x4;

/* [helpstring] */ const long scComArchiveMacro	=	0x8;

/* [helpstring] */ const long scComArchiveEntity	=	0x10;

/* [helpstring] */ const long scComArchiveOverWriteEntity	=	0x20;

/* [helpstring] */ const long scComArchivePages	=	0x40;

/* [helpstring] */ const long scComArchiveOptic	=	0x80;

/* [helpstring] */ const long scComArchiveScanner	=	0x100;

/* [helpstring] */ const long scComArchiveDefaults	=	0x200;

/* [helpstring] */ const long scComArchiveGlobal	=	0x400;

/* [helpstring] */ const long scComArchiveResource	=	0x800;

/* [helpstring] */ const long scComArchiveJob	=	0x1000;

/* [helpstring] */ const long scComArchiveLens	=	0x8000;

/* [helpstring] */ const long scComArchiveLaser	=	0x4000;

/* [helpstring] */ const long scComArchiveUser	=	0x1000000;

/* [helpstring] */ const long scComArchiveDeviceStream	=	0x2000;

/* [helpstring] */ const long scComArchiveMotion	=	0x20000;

/* [helpstring] */ const long scComAlignCenter	=	0x1;

/* [helpstring] */ const long scComAlignLeft	=	0x2;

/* [helpstring] */ const long scComAlignRight	=	0x4;

/* [helpstring] */ const long scComAlignTop	=	0x8;

/* [helpstring] */ const long scComAlignBottom	=	0x10;

/* [helpstring] */ const long scComAlignMiddle	=	0x20;

/* [helpstring] */ const long scComAlignRadialCenter	=	0x40;

/* [helpstring] */ const long scComAlignRadialEnd	=	0x80;

/* [helpstring] */ const long scComAlignLineLeft	=	0x100;

/* [helpstring] */ const long scComAlignLineRight	=	0x200;

/* [helpstring] */ const long scComAlignLineCenter	=	0x400;

/* [helpstring] */ const long scComAlignNo	=	0x8000;

/* [helpstring] */ const long scComEntityOrderFlagHatchFirst	=	0x1;

/* [helpstring] */ const long scComEntityOrderFlagArrayXDown	=	0x100;

/* [helpstring] */ const long scComEntityOrderFlagArrayYDown	=	0x200;

/* [helpstring] */ const long scComEntityOrderFlagArrayXMainDir	=	0x400;

/* [helpstring] */ const long scComEntityOrderFlagArrayBiDir	=	0x800;

/* [helpstring] */ const long scComEntityOrderFlagBitmapBeginMarkWithLastLine	=	0x1000;

/* [helpstring] */ const long scComEntityOrderFlagBitmapNoLineIncrement	=	0x2000;

/* [helpstring] */ const long scComEntityOrderFlagBitmapMarkBiDir	=	0x4000;

/* [helpstring] */ const long scComTrailUndo	=	1;

/* [helpstring] */ const long scComTrailRedo	=	2;

/* [helpstring] */ const long scComExposurePropertyParamEntity	=	0;

/* [helpstring] */ const long scComExposurePropertyParamPolyLines2D	=	1;

/* [helpstring] */ const long scComExposurePropertyParamLineArrays2D	=	2;

/* [helpstring] */ const long scComExposurePropertyParamHatch1	=	3;

/* [helpstring] */ const long scComExposurePropertyParamHatch2	=	4;

/* [helpstring] */ const long scComExposurePropertyParamHatch1A	=	3;

/* [helpstring] */ const long scComExposurePropertyParamHatch2A	=	4;

/* [helpstring] */ const long scComExposurePropertyParamHatch1B	=	5;

/* [helpstring] */ const long scComExposurePropertyParamHatch2B	=	6;

/* [helpstring] */ const long scComExposurePropertyParamHatch1C	=	7;

/* [helpstring] */ const long scComExposurePropertyParamHatch2C	=	8;

/* [helpstring] */ const long scComExposurePropertyParamHatch1D	=	9;

/* [helpstring] */ const long scComExposurePropertyParamHatch2D	=	10;

/* [helpstring] */ const long scComExposurePropertyParamHatch1E	=	11;

/* [helpstring] */ const long scComExposurePropertyParamHatch2E	=	12;

/* [helpstring] */ const long scComItemStatusUsed	=	0x1;

/* [helpstring] */ const long scComItemStatusDone	=	0x2;

/* [helpstring] */ const long scComItemStatusSelected	=	0x4;

/* [helpstring] */ const long scComItemStatusUseStyleFlags	=	0x10;

/* [helpstring] */ const long scComItemStatusMarkable	=	0x20;

/* [helpstring] */ const long scComItemStatusStyleParam	=	0x100000;

/* [helpstring] */ const long scComItemStatusSetStatus	=	0x80000000;

/* [helpstring] */ const long scComConfigStringIDErrStr1	=	-10;

/* [helpstring] */ const long scComConfigStringIDErrStr2	=	-9;

/* [helpstring] */ const long scComConfigStringIDErrStr3	=	-8;

/* [helpstring] */ const long scComConfigStringIDErrStr4	=	-7;

/* [helpstring] */ const long scComConfigStringIDErrStr5	=	-6;

/* [helpstring] */ const long scComConfigStringIDErrStr6	=	-5;

/* [helpstring] */ const long scComConfigStringIDErrStr7	=	-4;

/* [helpstring] */ const long scComConfigStringIDErrStr8	=	-3;

/* [helpstring] */ const long scComConfigStringIDErrStr9	=	-2;

/* [helpstring] */ const long scComConfigStringIDErrStr10	=	-1;

/* [helpstring] */ const long scComConfigStringIDPathIntermed	=	0;

/* [helpstring] */ const long scComConfigStringIDPathJob	=	3;

/* [helpstring] */ const long scComConfigStringIDPathJob3D	=	4;

/* [helpstring] */ const long scComConfigStringIDScapsJobFormatIdent	=	100;

/* [helpstring] */ const long scComConfigStringIDScapsJobFormatExt	=	101;

/* [helpstring] */ const long scComConfigStringIDPathImportExport	=	102;

/* [helpstring] */ const long scComConfigStringIDScapsArchiveFormatIdent	=	103;

/* [helpstring] */ const long scComConfigStringIDScapsArchiveFormatExt	=	104;

/* [helpstring] */ const long scComConfigStringIDScapsCustomFormat1Ext	=	105;

/* [helpstring] */ const long scComConfigStringIDScapsSerialTextPauseString	=	106;

/* [helpstring] */ const long scComConfigStringIDJobLoadDir	=	107;

/* [helpstring] */ const long scComConfigStringIDJobNumber	=	108;

/* [helpstring] */ const long scComConfigStringIDAppName	=	109;

/* [helpstring] */ const long scComConfigStringIDLastTraceCommonError	=	110;

/* [helpstring] */ const long scComConfigStringIDDefaultScannerCard	=	111;

/* [helpstring] */ const long scComConfigStringIDSaveAsFileDialogDefaultFolder	=	112;

/* [helpstring] */ const long scComConfigStringIDOpenFileDialogDefaultFolder	=	112;

/* [helpstring] */ const long scComConfigStringIDPathImportExport3D	=	113;

/* [helpstring] */ const long scComConfigStringIDArrayCopyHardNamePrefix	=	114;

/* [helpstring] */ const long scComConfigStringIDAlternativeStepperMotionFile	=	115;

/* [helpstring] */ const long scComConfigStringIDAutoReleaseVariantString	=	100000;

/* [helpstring] */ const long scComConfigStringIDSetThreadName	=	200000;

/* [helpstring] */ const long scComConfigStringIDSetTraceEntry	=	300000;

/* [helpstring] */ const long scComChangeMarkSequenceFlagReset	=	1;

/* [helpstring] */ const long scComChangeMarkSequenceFlagIncrement	=	2;

/* [helpstring] */ const long scComChangeMarkSequenceFlagDecrement	=	3;

/* [helpstring] */ const long scComKernelDisplayFlagId0DimensionCtrlDisableFreezeTransformationState	=	0x1;

/* [helpstring] */ const long scComKernelDisplayFlagId0DimensionCtrlDisableGotoLastFreezeState	=	0x2;

/* [helpstring] */ const long scComKernelHelpIdDisableF1Help	=	0x1;

/* [helpstring] */ const long scComKernelHelpIdDisableHelp	=	0x2;

/* [helpstring] */ const long scComEntityCallBackIDConstruct	=	1;

/* [helpstring] */ const long scComEntityCallBackIDDestruct	=	2;

/* [helpstring] */ const long scComEntityCallBackIDLoad	=	3;

/* [helpstring] */ const long scComEntityCallBackIDSave	=	4;

/* [helpstring] */ const long scComEntityCallBackIDUpdate	=	5;

/* [helpstring] */ const long scComEntityCallBackIDReset	=	6;

/* [helpstring] */ const long scComEntityCallBackIDNext	=	7;

/* [helpstring] */ const long scComEntityCallBackIDCopy	=	8;

/* [helpstring] */ const long scComLongValueIDUseUniCodeStrings	=	12;

/* [helpstring] */ const long scComLongValueIDCallBackFunction	=	1000;

/* [helpstring] */ const long scComLongValueIDCallBackFlags	=	1001;

/* [helpstring] */ const long scComLongValueIDStopMarkingAfterEventHandled	=	13;

/* [helpstring] */ const long scComLongValueIDDisableGuiUpdate	=	14;

/* [helpstring] */ const long scComLongValueIDDisableFileCompression	=	15;

/* [helpstring] */ const long scComLongValueIDFlashFontCodepage	=	37;

/* [helpstring] */ const long scComLongValueIDParentFrameHwnd	=	18;

/* [helpstring] */ const long scComLongValueIDNumDisplayDigits	=	19;

/* [helpstring] */ const long scComLongValueID3dUsesStyles	=	20;

/* [helpstring] */ const long scComLongValueIDUseClipperForBC	=	39;

/* [helpstring] */ const long scComLongValueIDEntityArrayCountX	=	40;

/* [helpstring] */ const long scComLongValueIDEntityArrayCountY	=	41;

/* [helpstring] */ const long scComLongValueIDEntityArrayOrderFlags	=	42;

/* [helpstring] */ const long scComLongValueIDGrayValuesUseCtrlPts	=	43;

/* [helpstring] */ const long scComLongValueIDSplineTypes	=	44;

/* [helpstring] */ const long scComLongValueIDShowOnlySelected	=	45;

/* [helpstring] */ const long scComLongValueIDImprovedBitmapHandling	=	46;

/* [helpstring] */ const long scComLongValueIDEnableNextSequence	=	16;

/* [helpstring] */ const long scComLongValueIDBigIcons	=	21;

/* [helpstring] */ const long scComLongValueIDLightCtrlExists	=	22;

/* [helpstring] */ const long scComLongValueIDDefaultPenNumber	=	24;

/* [helpstring] */ const long scComLongValueIDInLightCtrl	=	25;

/* [helpstring] */ const long scComLongValueIDEnablePenPaths	=	26;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendHandleBmp	=	27;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendSourceConstantAlpha	=	28;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendCenterPointX	=	29;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendCenterPointY	=	30;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendBmpDimX	=	31;

/* [helpstring] */ const long scComLongValueIDBmpAlphaBlendBmpDimY	=	32;

/* [helpstring] */ const long scComLongValueIDReturnNegativeHResultInCaseSFalse	=	34;

/* [helpstring] */ const long scComLongValueID3DFileImportChoosenFilterIndex	=	36;

/* [helpstring] */ const long scComLongValueIDModuleLaserPortResolution	=	38;

/* [helpstring] */ const long scComDoubleValueIDEntityArrayStepDistanceX	=	4;

/* [helpstring] */ const long scComDoubleValueIDEntityArrayStepDistanceY	=	5;

/* [helpstring] */ const long scComKernelDisplayFlagId1UserLevelHideEdit	=	0x1;

/* [helpstring] */ const long scComKernelExposurePropertyFlagEnablePenPaths	=	1;

#endif /* __ScConstantsKernel_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScEntity3D;

#ifdef __cplusplus

class DECLSPEC_UUID("ADE6B2D1-44BF-11d1-96ED-008048EEE00C")
ScEntity3D;
#endif

EXTERN_C const CLSID CLSID_ScEntity2D;

#ifdef __cplusplus

class DECLSPEC_UUID("ADE6B2D3-44BF-11d1-96ED-008048EEE00C")
ScEntity2D;
#endif

EXTERN_C const CLSID CLSID_ScEntity;

#ifdef __cplusplus

class DECLSPEC_UUID("BC69F602-6C1C-11d1-A355-BE3BE1E79139")
ScEntity;
#endif

EXTERN_C const CLSID CLSID_ScGroup2D;

#ifdef __cplusplus

class DECLSPEC_UUID("38A32EB1-042C-11d2-8C87-008048EEDCB8")
ScGroup2D;
#endif

EXTERN_C const CLSID CLSID_ScGroup3D;

#ifdef __cplusplus

class DECLSPEC_UUID("4A279191-2954-11d2-9A48-008048EEE00C")
ScGroup3D;
#endif

EXTERN_C const CLSID CLSID_ScElement2D;

#ifdef __cplusplus

class DECLSPEC_UUID("4A279194-2954-11d2-9A48-008048EEE00C")
ScElement2D;
#endif

EXTERN_C const CLSID CLSID_ScElement3D;

#ifdef __cplusplus

class DECLSPEC_UUID("4A279196-2954-11d2-9A48-008048EEE00C")
ScElement3D;
#endif

EXTERN_C const CLSID CLSID_ScEntity2DContainer;

#ifdef __cplusplus

class DECLSPEC_UUID("4E822FA2-5F0A-11d3-9B2B-008048EEE00C")
ScEntity2DContainer;
#endif

EXTERN_C const CLSID CLSID_ScKernel;

#ifdef __cplusplus

class DECLSPEC_UUID("A80E1094-6EFF-11d1-9733-008048EEE00C")
ScKernel;
#endif

EXTERN_C const CLSID CLSID_ScObject;

#ifdef __cplusplus

class DECLSPEC_UUID("A80E1095-6EFF-11d1-9733-008048EEE00C")
ScObject;
#endif

EXTERN_C const CLSID CLSID_ScError;

#ifdef __cplusplus

class DECLSPEC_UUID("084CAA82-6783-11d2-9A78-008048EEE00C")
ScError;
#endif
#endif /* __ScapsSamKernel_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


