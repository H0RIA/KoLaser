

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:47 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\opticmodulectrl\sc_optic_module_ctrl_type_lib.idl:
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


#ifndef __sc_optic_module_ctrl_type_lib_h__
#define __sc_optic_module_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_DispOpticModule2DCtrl_FWD_DEFINED__
#define __SC_DispOpticModule2DCtrl_FWD_DEFINED__
typedef interface SC_DispOpticModule2DCtrl SC_DispOpticModule2DCtrl;
#endif 	/* __SC_DispOpticModule2DCtrl_FWD_DEFINED__ */


#ifndef __SC_IOpticModule2DCtrl_FWD_DEFINED__
#define __SC_IOpticModule2DCtrl_FWD_DEFINED__
typedef interface SC_IOpticModule2DCtrl SC_IOpticModule2DCtrl;
#endif 	/* __SC_IOpticModule2DCtrl_FWD_DEFINED__ */


#ifndef __SC_IOpticModule2DCtrlEvents_FWD_DEFINED__
#define __SC_IOpticModule2DCtrlEvents_FWD_DEFINED__
typedef interface SC_IOpticModule2DCtrlEvents SC_IOpticModule2DCtrlEvents;
#endif 	/* __SC_IOpticModule2DCtrlEvents_FWD_DEFINED__ */


#ifndef __SC_IOpticModuleCtrlStdDev_FWD_DEFINED__
#define __SC_IOpticModuleCtrlStdDev_FWD_DEFINED__
typedef interface SC_IOpticModuleCtrlStdDev SC_IOpticModuleCtrlStdDev;
#endif 	/* __SC_IOpticModuleCtrlStdDev_FWD_DEFINED__ */


#ifndef __SC_IMultiHeadSimDev_FWD_DEFINED__
#define __SC_IMultiHeadSimDev_FWD_DEFINED__
typedef interface SC_IMultiHeadSimDev SC_IMultiHeadSimDev;
#endif 	/* __SC_IMultiHeadSimDev_FWD_DEFINED__ */


#ifndef __ScOpticModuleCtrl_FWD_DEFINED__
#define __ScOpticModuleCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScOpticModuleCtrl ScOpticModuleCtrl;
#else
typedef struct ScOpticModuleCtrl ScOpticModuleCtrl;
#endif /* __cplusplus */

#endif 	/* __ScOpticModuleCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_optic_module_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.6
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_pixel2d_type_lib.h"
#include "sc_control_ad_io_type_lib.h"
#include "sc_gui_type_lib.h"
#include "sc_optic_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_optic_module_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_optic_module_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamOpticModule2DCtrl_LIBRARY_DEFINED__
#define __ScapsSamOpticModule2DCtrl_LIBRARY_DEFINED__

/* library ScapsSamOpticModule2DCtrl */
/* [helpstring][version][uuid] */ 

typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("DEA29F2E-288B-4605-97C5-C7119477B231") 
enum ScComStandardDeviceIdent
    {	scComStandardDeviceUndefined	= 0,
	scComStandardDeviceScanlabRTC2	= 1,
	scComStandardDeviceScanlabRTC3	= 2,
	scComStandardDeviceGsiHC2	= 3,
	scComStandardDeviceUSC1	= 4,
	scComStandardDeviceUSC2	= 7,
	scComStandardDeviceUSC3	= 8
    } 	ScComStandardDeviceIdent;


EXTERN_C const IID LIBID_ScapsSamOpticModule2DCtrl;

#ifndef __SC_DispOpticModule2DCtrl_DISPINTERFACE_DEFINED__
#define __SC_DispOpticModule2DCtrl_DISPINTERFACE_DEFINED__

/* dispinterface SC_DispOpticModule2DCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DispOpticModule2DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EEC215C4-996E-11D1-9767-008048EEE00C")
    SC_DispOpticModule2DCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DispOpticModule2DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DispOpticModule2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DispOpticModule2DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DispOpticModule2DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DispOpticModule2DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DispOpticModule2DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DispOpticModule2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DispOpticModule2DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DispOpticModule2DCtrlVtbl;

    interface SC_DispOpticModule2DCtrl
    {
        CONST_VTBL struct SC_DispOpticModule2DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DispOpticModule2DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DispOpticModule2DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DispOpticModule2DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DispOpticModule2DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DispOpticModule2DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DispOpticModule2DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DispOpticModule2DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DispOpticModule2DCtrl_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IOpticModule2DCtrl_INTERFACE_DEFINED__
#define __SC_IOpticModule2DCtrl_INTERFACE_DEFINED__

/* interface SC_IOpticModule2DCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IOpticModule2DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("666CB794-C731-11d2-84D6-00C0DFEA4A3A")
    SC_IOpticModule2DCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScSetupFileName( 
            /* [retval][out] */ BSTR *FileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScSetupFileName( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOffsetX( 
            /* [retval][out] */ double *OffsetX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOffsetX( 
            /* [in] */ double OffsetX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOffsetY( 
            /* [retval][out] */ double *OffsetY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOffsetY( 
            /* [in] */ double OffsetY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGainX( 
            /* [retval][out] */ double *GainX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGainX( 
            /* [in] */ double GainX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGainY( 
            /* [retval][out] */ double *GainY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGainY( 
            /* [in] */ double GainY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldMinX( 
            /* [retval][out] */ double *FieldMinX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldMinX( 
            /* [in] */ double FieldMinX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldMaxX( 
            /* [retval][out] */ double *FieldMaxX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldMaxX( 
            /* [in] */ double FieldMaxX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldMinY( 
            /* [retval][out] */ double *FieldMinY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldMinY( 
            /* [in] */ double FieldMinY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldMaxY( 
            /* [retval][out] */ double *FieldMaxY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldMaxY( 
            /* [in] */ double FieldMaxY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMinX( 
            /* [retval][out] */ double *WorkingAreaMinX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMinX( 
            /* [in] */ double WorkingAreaMinX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMinY( 
            /* [retval][out] */ double *WorkingAreaMinY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMinY( 
            /* [in] */ double WorkingAreaMinY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMaxX( 
            /* [retval][out] */ double *WorkingAreaMaxX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMaxX( 
            /* [in] */ double WorkingAreaMaxX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMaxY( 
            /* [retval][out] */ double *WorkingAreaMaxY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMaxY( 
            /* [in] */ double WorkingAreaMaxY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBackGroundColor( 
            /* [retval][out] */ long *BackGroundColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBackGroundColor( 
            /* [in] */ long BackGroundColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJumpColor( 
            /* [retval][out] */ long *JumpColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJumpColor( 
            /* [in] */ long JumpColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMarkColor( 
            /* [retval][out] */ long *MarkColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMarkColor( 
            /* [in] */ long MarkColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPolyAColor( 
            /* [retval][out] */ long *PolyAColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPolyAColor( 
            /* [in] */ long PolyAColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPolyBColor( 
            /* [retval][out] */ long *PolyBColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPolyBColor( 
            /* [in] */ long PolyBColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPolyCColor( 
            /* [retval][out] */ long *PolyCColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPolyCColor( 
            /* [in] */ long PolyCColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHomePositionX( 
            /* [retval][out] */ double *HomePositionX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHomePositionX( 
            /* [in] */ double HomePositionX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHomePositionY( 
            /* [retval][out] */ double *HomePositionY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHomePositionY( 
            /* [in] */ double HomePositionY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOutputMode( 
            /* [retval][out] */ long *OutputMode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOutputMode( 
            /* [in] */ long OutputMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCheckMode( 
            /* [retval][out] */ long *CheckMode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCheckMode( 
            /* [in] */ long CheckMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldColor( 
            /* [retval][out] */ long *FieldColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldColor( 
            /* [in] */ long FieldColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaColor( 
            /* [retval][out] */ long *WorkingAreaColor) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaColor( 
            /* [in] */ long WorkingAreaColor) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFieldTypeId( 
            /* [retval][out] */ long *FieldTypeId) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFieldTypeId( 
            /* [in] */ long FieldTypeId) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHideOutputWindow( 
            /* [retval][out] */ long *HideOutputWindow) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHideOutputWindow( 
            /* [in] */ long HideOutputWindow) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAxisState( 
            /* [retval][out] */ long *AxisState) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAxisState( 
            /* [in] */ long AxisState) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowJumps( 
            /* [retval][out] */ long *ShowJumps) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowJumps( 
            /* [in] */ long ShowJumps) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableShowFlags( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableShowFlags( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOpticModule2d( 
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **OpticModule2D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToField( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOutputDevice( 
            /* [retval][out] */ long *Device) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutputDevice( 
            /* [in] */ ScComStandardDeviceIdent Device) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStopBeep( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStopBeep( 
            /* [in] */ long Enable) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IOpticModule2DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IOpticModule2DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IOpticModule2DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IOpticModule2DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScSetupFileName )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ BSTR *FileName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScSetupFileName )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOffsetX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *OffsetX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOffsetX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double OffsetX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOffsetY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *OffsetY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOffsetY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double OffsetY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGainX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *GainX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGainX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double GainX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGainY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *GainY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGainY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double GainY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldMinX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *FieldMinX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldMinX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double FieldMinX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldMaxX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *FieldMaxX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldMaxX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double FieldMaxX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldMinY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *FieldMinY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldMinY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double FieldMinY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldMaxY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *FieldMaxY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldMaxY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double FieldMaxY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMinX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *WorkingAreaMinX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMinX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double WorkingAreaMinX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMinY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *WorkingAreaMinY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMinY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double WorkingAreaMinY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMaxX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *WorkingAreaMaxX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMaxX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double WorkingAreaMaxX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMaxY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *WorkingAreaMaxY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMaxY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double WorkingAreaMaxY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBackGroundColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *BackGroundColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBackGroundColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long BackGroundColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJumpColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *JumpColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJumpColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long JumpColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMarkColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *MarkColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMarkColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long MarkColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPolyAColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *PolyAColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPolyAColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long PolyAColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPolyBColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *PolyBColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPolyBColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long PolyBColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPolyCColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *PolyCColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPolyCColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long PolyCColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHomePositionX )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *HomePositionX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHomePositionX )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double HomePositionX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHomePositionY )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ double *HomePositionY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHomePositionY )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ double HomePositionY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOutputMode )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *OutputMode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOutputMode )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long OutputMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCheckMode )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *CheckMode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCheckMode )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long CheckMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *FieldColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long FieldColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *WorkingAreaColor);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaColor )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long WorkingAreaColor);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFieldTypeId )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *FieldTypeId);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFieldTypeId )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long FieldTypeId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHideOutputWindow )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *HideOutputWindow);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHideOutputWindow )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long HideOutputWindow);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAxisState )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *AxisState);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAxisState )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long AxisState);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowJumps )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *ShowJumps);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowJumps )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long ShowJumps);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowFlags )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowFlags )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableShowFlags )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableShowFlags )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long Enable);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOpticModule2d )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **OpticModule2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveProperties )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadProperties )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperties )( 
            SC_IOpticModule2DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToField )( 
            SC_IOpticModule2DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IOpticModule2DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOutputDevice )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *Device);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutputDevice )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ ScComStandardDeviceIdent Device);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStopBeep )( 
            SC_IOpticModule2DCtrl * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStopBeep )( 
            SC_IOpticModule2DCtrl * This,
            /* [in] */ long Enable);
        
        END_INTERFACE
    } SC_IOpticModule2DCtrlVtbl;

    interface SC_IOpticModule2DCtrl
    {
        CONST_VTBL struct SC_IOpticModule2DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IOpticModule2DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IOpticModule2DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IOpticModule2DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IOpticModule2DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IOpticModule2DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IOpticModule2DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IOpticModule2DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IOpticModule2DCtrl_get_ScSetupFileName(This,FileName)	\
    ( (This)->lpVtbl -> get_ScSetupFileName(This,FileName) ) 

#define SC_IOpticModule2DCtrl_put_ScSetupFileName(This,FileName)	\
    ( (This)->lpVtbl -> put_ScSetupFileName(This,FileName) ) 

#define SC_IOpticModule2DCtrl_get_ScOffsetX(This,OffsetX)	\
    ( (This)->lpVtbl -> get_ScOffsetX(This,OffsetX) ) 

#define SC_IOpticModule2DCtrl_put_ScOffsetX(This,OffsetX)	\
    ( (This)->lpVtbl -> put_ScOffsetX(This,OffsetX) ) 

#define SC_IOpticModule2DCtrl_get_ScOffsetY(This,OffsetY)	\
    ( (This)->lpVtbl -> get_ScOffsetY(This,OffsetY) ) 

#define SC_IOpticModule2DCtrl_put_ScOffsetY(This,OffsetY)	\
    ( (This)->lpVtbl -> put_ScOffsetY(This,OffsetY) ) 

#define SC_IOpticModule2DCtrl_get_ScGainX(This,GainX)	\
    ( (This)->lpVtbl -> get_ScGainX(This,GainX) ) 

#define SC_IOpticModule2DCtrl_put_ScGainX(This,GainX)	\
    ( (This)->lpVtbl -> put_ScGainX(This,GainX) ) 

#define SC_IOpticModule2DCtrl_get_ScGainY(This,GainY)	\
    ( (This)->lpVtbl -> get_ScGainY(This,GainY) ) 

#define SC_IOpticModule2DCtrl_put_ScGainY(This,GainY)	\
    ( (This)->lpVtbl -> put_ScGainY(This,GainY) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldMinX(This,FieldMinX)	\
    ( (This)->lpVtbl -> get_ScFieldMinX(This,FieldMinX) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldMinX(This,FieldMinX)	\
    ( (This)->lpVtbl -> put_ScFieldMinX(This,FieldMinX) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldMaxX(This,FieldMaxX)	\
    ( (This)->lpVtbl -> get_ScFieldMaxX(This,FieldMaxX) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldMaxX(This,FieldMaxX)	\
    ( (This)->lpVtbl -> put_ScFieldMaxX(This,FieldMaxX) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldMinY(This,FieldMinY)	\
    ( (This)->lpVtbl -> get_ScFieldMinY(This,FieldMinY) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldMinY(This,FieldMinY)	\
    ( (This)->lpVtbl -> put_ScFieldMinY(This,FieldMinY) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldMaxY(This,FieldMaxY)	\
    ( (This)->lpVtbl -> get_ScFieldMaxY(This,FieldMaxY) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldMaxY(This,FieldMaxY)	\
    ( (This)->lpVtbl -> put_ScFieldMaxY(This,FieldMaxY) ) 

#define SC_IOpticModule2DCtrl_get_ScWorkingAreaMinX(This,WorkingAreaMinX)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMinX(This,WorkingAreaMinX) ) 

#define SC_IOpticModule2DCtrl_put_ScWorkingAreaMinX(This,WorkingAreaMinX)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMinX(This,WorkingAreaMinX) ) 

#define SC_IOpticModule2DCtrl_get_ScWorkingAreaMinY(This,WorkingAreaMinY)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMinY(This,WorkingAreaMinY) ) 

#define SC_IOpticModule2DCtrl_put_ScWorkingAreaMinY(This,WorkingAreaMinY)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMinY(This,WorkingAreaMinY) ) 

#define SC_IOpticModule2DCtrl_get_ScWorkingAreaMaxX(This,WorkingAreaMaxX)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMaxX(This,WorkingAreaMaxX) ) 

#define SC_IOpticModule2DCtrl_put_ScWorkingAreaMaxX(This,WorkingAreaMaxX)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMaxX(This,WorkingAreaMaxX) ) 

#define SC_IOpticModule2DCtrl_get_ScWorkingAreaMaxY(This,WorkingAreaMaxY)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMaxY(This,WorkingAreaMaxY) ) 

#define SC_IOpticModule2DCtrl_put_ScWorkingAreaMaxY(This,WorkingAreaMaxY)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMaxY(This,WorkingAreaMaxY) ) 

#define SC_IOpticModule2DCtrl_get_ScBackGroundColor(This,BackGroundColor)	\
    ( (This)->lpVtbl -> get_ScBackGroundColor(This,BackGroundColor) ) 

#define SC_IOpticModule2DCtrl_put_ScBackGroundColor(This,BackGroundColor)	\
    ( (This)->lpVtbl -> put_ScBackGroundColor(This,BackGroundColor) ) 

#define SC_IOpticModule2DCtrl_get_ScJumpColor(This,JumpColor)	\
    ( (This)->lpVtbl -> get_ScJumpColor(This,JumpColor) ) 

#define SC_IOpticModule2DCtrl_put_ScJumpColor(This,JumpColor)	\
    ( (This)->lpVtbl -> put_ScJumpColor(This,JumpColor) ) 

#define SC_IOpticModule2DCtrl_get_ScMarkColor(This,MarkColor)	\
    ( (This)->lpVtbl -> get_ScMarkColor(This,MarkColor) ) 

#define SC_IOpticModule2DCtrl_put_ScMarkColor(This,MarkColor)	\
    ( (This)->lpVtbl -> put_ScMarkColor(This,MarkColor) ) 

#define SC_IOpticModule2DCtrl_get_ScPolyAColor(This,PolyAColor)	\
    ( (This)->lpVtbl -> get_ScPolyAColor(This,PolyAColor) ) 

#define SC_IOpticModule2DCtrl_put_ScPolyAColor(This,PolyAColor)	\
    ( (This)->lpVtbl -> put_ScPolyAColor(This,PolyAColor) ) 

#define SC_IOpticModule2DCtrl_get_ScPolyBColor(This,PolyBColor)	\
    ( (This)->lpVtbl -> get_ScPolyBColor(This,PolyBColor) ) 

#define SC_IOpticModule2DCtrl_put_ScPolyBColor(This,PolyBColor)	\
    ( (This)->lpVtbl -> put_ScPolyBColor(This,PolyBColor) ) 

#define SC_IOpticModule2DCtrl_get_ScPolyCColor(This,PolyCColor)	\
    ( (This)->lpVtbl -> get_ScPolyCColor(This,PolyCColor) ) 

#define SC_IOpticModule2DCtrl_put_ScPolyCColor(This,PolyCColor)	\
    ( (This)->lpVtbl -> put_ScPolyCColor(This,PolyCColor) ) 

#define SC_IOpticModule2DCtrl_get_ScHomePositionX(This,HomePositionX)	\
    ( (This)->lpVtbl -> get_ScHomePositionX(This,HomePositionX) ) 

#define SC_IOpticModule2DCtrl_put_ScHomePositionX(This,HomePositionX)	\
    ( (This)->lpVtbl -> put_ScHomePositionX(This,HomePositionX) ) 

#define SC_IOpticModule2DCtrl_get_ScHomePositionY(This,HomePositionY)	\
    ( (This)->lpVtbl -> get_ScHomePositionY(This,HomePositionY) ) 

#define SC_IOpticModule2DCtrl_put_ScHomePositionY(This,HomePositionY)	\
    ( (This)->lpVtbl -> put_ScHomePositionY(This,HomePositionY) ) 

#define SC_IOpticModule2DCtrl_get_ScOutputMode(This,OutputMode)	\
    ( (This)->lpVtbl -> get_ScOutputMode(This,OutputMode) ) 

#define SC_IOpticModule2DCtrl_put_ScOutputMode(This,OutputMode)	\
    ( (This)->lpVtbl -> put_ScOutputMode(This,OutputMode) ) 

#define SC_IOpticModule2DCtrl_get_ScCheckMode(This,CheckMode)	\
    ( (This)->lpVtbl -> get_ScCheckMode(This,CheckMode) ) 

#define SC_IOpticModule2DCtrl_put_ScCheckMode(This,CheckMode)	\
    ( (This)->lpVtbl -> put_ScCheckMode(This,CheckMode) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldColor(This,FieldColor)	\
    ( (This)->lpVtbl -> get_ScFieldColor(This,FieldColor) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldColor(This,FieldColor)	\
    ( (This)->lpVtbl -> put_ScFieldColor(This,FieldColor) ) 

#define SC_IOpticModule2DCtrl_get_ScWorkingAreaColor(This,WorkingAreaColor)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaColor(This,WorkingAreaColor) ) 

#define SC_IOpticModule2DCtrl_put_ScWorkingAreaColor(This,WorkingAreaColor)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaColor(This,WorkingAreaColor) ) 

#define SC_IOpticModule2DCtrl_get_ScFieldTypeId(This,FieldTypeId)	\
    ( (This)->lpVtbl -> get_ScFieldTypeId(This,FieldTypeId) ) 

#define SC_IOpticModule2DCtrl_put_ScFieldTypeId(This,FieldTypeId)	\
    ( (This)->lpVtbl -> put_ScFieldTypeId(This,FieldTypeId) ) 

#define SC_IOpticModule2DCtrl_get_ScHideOutputWindow(This,HideOutputWindow)	\
    ( (This)->lpVtbl -> get_ScHideOutputWindow(This,HideOutputWindow) ) 

#define SC_IOpticModule2DCtrl_put_ScHideOutputWindow(This,HideOutputWindow)	\
    ( (This)->lpVtbl -> put_ScHideOutputWindow(This,HideOutputWindow) ) 

#define SC_IOpticModule2DCtrl_get_ScAxisState(This,AxisState)	\
    ( (This)->lpVtbl -> get_ScAxisState(This,AxisState) ) 

#define SC_IOpticModule2DCtrl_put_ScAxisState(This,AxisState)	\
    ( (This)->lpVtbl -> put_ScAxisState(This,AxisState) ) 

#define SC_IOpticModule2DCtrl_get_ScShowJumps(This,ShowJumps)	\
    ( (This)->lpVtbl -> get_ScShowJumps(This,ShowJumps) ) 

#define SC_IOpticModule2DCtrl_put_ScShowJumps(This,ShowJumps)	\
    ( (This)->lpVtbl -> put_ScShowJumps(This,ShowJumps) ) 

#define SC_IOpticModule2DCtrl_get_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScShowFlags(This,Flags) ) 

#define SC_IOpticModule2DCtrl_put_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScShowFlags(This,Flags) ) 

#define SC_IOpticModule2DCtrl_get_ScEnableShowFlags(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableShowFlags(This,Enable) ) 

#define SC_IOpticModule2DCtrl_put_ScEnableShowFlags(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableShowFlags(This,Enable) ) 

#define SC_IOpticModule2DCtrl_ScGetOpticModule2d(This,OpticModule2D)	\
    ( (This)->lpVtbl -> ScGetOpticModule2d(This,OpticModule2D) ) 

#define SC_IOpticModule2DCtrl_ScSaveProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveProperties(This,FileName) ) 

#define SC_IOpticModule2DCtrl_ScLoadProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadProperties(This,FileName) ) 

#define SC_IOpticModule2DCtrl_ScEditProperties(This)	\
    ( (This)->lpVtbl -> ScEditProperties(This) ) 

#define SC_IOpticModule2DCtrl_ScFitToField(This)	\
    ( (This)->lpVtbl -> ScFitToField(This) ) 

#define SC_IOpticModule2DCtrl_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IOpticModule2DCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule2DCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModule2DCtrl_ScGetOutputDevice(This,Device)	\
    ( (This)->lpVtbl -> ScGetOutputDevice(This,Device) ) 

#define SC_IOpticModule2DCtrl_ScSetOutputDevice(This,Device)	\
    ( (This)->lpVtbl -> ScSetOutputDevice(This,Device) ) 

#define SC_IOpticModule2DCtrl_get_ScStopBeep(This,Enable)	\
    ( (This)->lpVtbl -> get_ScStopBeep(This,Enable) ) 

#define SC_IOpticModule2DCtrl_put_ScStopBeep(This,Enable)	\
    ( (This)->lpVtbl -> put_ScStopBeep(This,Enable) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IOpticModule2DCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_IOpticModule2DCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_IOpticModule2DCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IOpticModule2DCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IOpticModule2DCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("EEC215C5-996E-11D1-9767-008048EEE00C")
    SC_IOpticModule2DCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IOpticModule2DCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IOpticModule2DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IOpticModule2DCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IOpticModule2DCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IOpticModule2DCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IOpticModule2DCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IOpticModule2DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IOpticModule2DCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IOpticModule2DCtrlEventsVtbl;

    interface SC_IOpticModule2DCtrlEvents
    {
        CONST_VTBL struct SC_IOpticModule2DCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IOpticModule2DCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IOpticModule2DCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IOpticModule2DCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IOpticModule2DCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IOpticModule2DCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IOpticModule2DCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IOpticModule2DCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IOpticModule2DCtrlEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IOpticModuleCtrlStdDev_INTERFACE_DEFINED__
#define __SC_IOpticModuleCtrlStdDev_INTERFACE_DEFINED__

/* interface SC_IOpticModuleCtrlStdDev */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IOpticModuleCtrlStdDev;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9E920452-E486-11d3-9BAB-008048EEE00C")
    SC_IOpticModuleCtrlStdDev : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMoveAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScModulate( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStartExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStopExecution( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStreamInfo( 
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDownLoadObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetContinuousMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContinuousMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExposureEnd( 
            /* [retval][out] */ long *End) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReleaseObject( 
            /* [in] */ long ObjectId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTriggerControl( 
            /* [in] */ LPDISPATCH Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTriggerControl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetExternalTrigger( 
            /* [in] */ long Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExternalTrigger( 
            /* [retval][out] */ long *Trigger) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyleSet( 
            /* [in] */ long SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyleSet( 
            /* [retval][out] */ long *SetId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyleSet( 
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditGeneralSettings( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAdjustSpeed( 
            /* [in] */ double speed,
            /* [in] */ long style_set) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIdentString( 
            /* [retval][out] */ BSTR *IdString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsExecuting( 
            /* [retval][out] */ long *Executing) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyle( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitControl( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetControlCaps( 
            long Type,
            /* [retval][out] */ double *Caps) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOperationMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetOperationMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetSpeed( 
            /* [in] */ long SpeedId,
            /* [in] */ double Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSpeed( 
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetTimer( 
            /* [in] */ long TimerId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetTimer( 
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDelay( 
            /* [in] */ long DelayId,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDelay( 
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetFilePath( 
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFilePath( 
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetName( 
            /* [in] */ long NameId,
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetName( 
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPortValue( 
            /* [in] */ long PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPortValue( 
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPortDir( 
            /* [in] */ long PortId,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPortDir( 
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [in] */ long Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEnableFlags( 
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScJumpAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScMarkAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolySAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPolyEAbs( 
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCurrentPos( 
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScPrintInfo( 
            /* [in] */ BSTR Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixelLine( 
            /* [in] */ long Mode,
            /* [in] */ double Period,
            /* [in] */ double DX,
            /* [in] */ double DY,
            /* [in] */ long NumPixels) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPixel( 
            /* [in] */ double PulseWidth,
            /* [in] */ double DAValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExecutePixel( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IOpticModuleCtrlStdDevVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMoveAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScModulate )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStartExecution )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStopExecution )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStreamInfo )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ /* external definition not present */ sc_com_control_stream_info *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDownLoadObject )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetContinuousMode )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContinuousMode )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExposureEnd )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *End);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReleaseObject )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long ObjectId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTriggerControl )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ LPDISPATCH Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTriggerControl )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetExternalTrigger )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExternalTrigger )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *Trigger);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyleSet )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyleSet )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *SetId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyleSet )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long EditId,
            /* [retval][out] */ long *NewId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditGeneralSettings )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAdjustSpeed )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double speed,
            /* [in] */ long style_set);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIdentString )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ BSTR *IdString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsExecuting )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *Executing);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyle )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitControl )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetControlCaps )( 
            SC_IOpticModuleCtrlStdDev * This,
            long Type,
            /* [retval][out] */ double *Caps);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOperationMode )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetOperationMode )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetSpeed )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSpeed )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetTimer )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long TimerId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetTimer )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long TimerId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDelay )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long DelayId,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDelay )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long DelayId,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFilePath )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PathId,
            /* [in] */ BSTR PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFilePath )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PathId,
            /* [retval][out] */ BSTR *PathName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetName )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long NameId,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long NameId,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortValue )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortValue )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPortDir )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PortId,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPortDir )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long PortId,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEnableFlags )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long FlagsID,
            /* [in] */ long Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEnableFlags )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long FlagsID,
            /* [retval][out] */ long *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScJumpAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScMarkAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolySAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPolyEAbs )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCurrentPos )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double *X,
            /* [in] */ double *Y,
            /* [in] */ double *Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScPrintInfo )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ BSTR Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixelLine )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ long Mode,
            /* [in] */ double Period,
            /* [in] */ double DX,
            /* [in] */ double DY,
            /* [in] */ long NumPixels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPixel )( 
            SC_IOpticModuleCtrlStdDev * This,
            /* [in] */ double PulseWidth,
            /* [in] */ double DAValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecutePixel )( 
            SC_IOpticModuleCtrlStdDev * This);
        
        END_INTERFACE
    } SC_IOpticModuleCtrlStdDevVtbl;

    interface SC_IOpticModuleCtrlStdDev
    {
        CONST_VTBL struct SC_IOpticModuleCtrlStdDevVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IOpticModuleCtrlStdDev_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IOpticModuleCtrlStdDev_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IOpticModuleCtrlStdDev_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IOpticModuleCtrlStdDev_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IOpticModuleCtrlStdDev_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IOpticModuleCtrlStdDev_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IOpticModuleCtrlStdDev_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IOpticModuleCtrlStdDev_ScMoveAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMoveAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScModulate(This,OnOff)	\
    ( (This)->lpVtbl -> ScModulate(This,OnOff) ) 

#define SC_IOpticModuleCtrlStdDev_ScStartExecution(This)	\
    ( (This)->lpVtbl -> ScStartExecution(This) ) 

#define SC_IOpticModuleCtrlStdDev_ScStopExecution(This)	\
    ( (This)->lpVtbl -> ScStopExecution(This) ) 

#define SC_IOpticModuleCtrlStdDev_ScStreamInfo(This,Info)	\
    ( (This)->lpVtbl -> ScStreamInfo(This,Info) ) 

#define SC_IOpticModuleCtrlStdDev_ScDownLoadObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScDownLoadObject(This,ObjectId) ) 

#define SC_IOpticModuleCtrlStdDev_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModuleCtrlStdDev_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetContinuousMode(This,Mode) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetContinuousMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetContinuousMode(This,Mode) ) 

#define SC_IOpticModuleCtrlStdDev_ScIsExposureEnd(This,End)	\
    ( (This)->lpVtbl -> ScIsExposureEnd(This,End) ) 

#define SC_IOpticModuleCtrlStdDev_ScReleaseObject(This,ObjectId)	\
    ( (This)->lpVtbl -> ScReleaseObject(This,ObjectId) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScSetTriggerControl(This,Control) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetTriggerControl(This,Control)	\
    ( (This)->lpVtbl -> ScGetTriggerControl(This,Control) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScSetExternalTrigger(This,Trigger) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetExternalTrigger(This,Trigger)	\
    ( (This)->lpVtbl -> ScGetExternalTrigger(This,Trigger) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScSetStyleSet(This,SetId) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetStyleSet(This,SetId)	\
    ( (This)->lpVtbl -> ScGetStyleSet(This,SetId) ) 

#define SC_IOpticModuleCtrlStdDev_ScEditStyleSet(This,EditId,NewId)	\
    ( (This)->lpVtbl -> ScEditStyleSet(This,EditId,NewId) ) 

#define SC_IOpticModuleCtrlStdDev_ScEditGeneralSettings(This)	\
    ( (This)->lpVtbl -> ScEditGeneralSettings(This) ) 

#define SC_IOpticModuleCtrlStdDev_ScAdjustSpeed(This,speed,style_set)	\
    ( (This)->lpVtbl -> ScAdjustSpeed(This,speed,style_set) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetIdentString(This,IdString)	\
    ( (This)->lpVtbl -> ScGetIdentString(This,IdString) ) 

#define SC_IOpticModuleCtrlStdDev_ScIsExecuting(This,Executing)	\
    ( (This)->lpVtbl -> ScIsExecuting(This,Executing) ) 

#define SC_IOpticModuleCtrlStdDev_ScUpdateStyle(This)	\
    ( (This)->lpVtbl -> ScUpdateStyle(This) ) 

#define SC_IOpticModuleCtrlStdDev_ScInitControl(This)	\
    ( (This)->lpVtbl -> ScInitControl(This) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetControlCaps(This,Type,Caps)	\
    ( (This)->lpVtbl -> ScGetControlCaps(This,Type,Caps) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScSetOperationMode(This,Mode) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetOperationMode(This,Mode)	\
    ( (This)->lpVtbl -> ScGetOperationMode(This,Mode) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetSpeed(This,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetSpeed(This,SpeedId,Speed) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScSetTimer(This,TimerId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetTimer(This,TimerId,Value)	\
    ( (This)->lpVtbl -> ScGetTimer(This,TimerId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScSetDelay(This,DelayId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetDelay(This,DelayId,Value)	\
    ( (This)->lpVtbl -> ScGetDelay(This,DelayId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScSetFilePath(This,PathId,PathName) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetFilePath(This,PathId,PathName)	\
    ( (This)->lpVtbl -> ScGetFilePath(This,PathId,PathName) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScSetName(This,NameId,Name) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetName(This,NameId,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,NameId,Name) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortValue(This,PortId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetPortValue(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortValue(This,PortId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScSetPortDir(This,PortId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetPortDir(This,PortId,Value)	\
    ( (This)->lpVtbl -> ScGetPortDir(This,PortId,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScSetEnableFlags(This,FlagsID,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetEnableFlags(This,FlagsID,Value)	\
    ( (This)->lpVtbl -> ScGetEnableFlags(This,FlagsID,Value) ) 

#define SC_IOpticModuleCtrlStdDev_ScJumpAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScJumpAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScMarkAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScMarkAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScPolySAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolySAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScPolyAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScPolyEAbs(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScPolyEAbs(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScGetCurrentPos(This,X,Y,Z)	\
    ( (This)->lpVtbl -> ScGetCurrentPos(This,X,Y,Z) ) 

#define SC_IOpticModuleCtrlStdDev_ScPrintInfo(This,Info)	\
    ( (This)->lpVtbl -> ScPrintInfo(This,Info) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetPixelLine(This,Mode,Period,DX,DY,NumPixels)	\
    ( (This)->lpVtbl -> ScSetPixelLine(This,Mode,Period,DX,DY,NumPixels) ) 

#define SC_IOpticModuleCtrlStdDev_ScSetPixel(This,PulseWidth,DAValue)	\
    ( (This)->lpVtbl -> ScSetPixel(This,PulseWidth,DAValue) ) 

#define SC_IOpticModuleCtrlStdDev_ScExecutePixel(This)	\
    ( (This)->lpVtbl -> ScExecutePixel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IOpticModuleCtrlStdDev_INTERFACE_DEFINED__ */


#ifndef __SC_IMultiHeadSimDev_INTERFACE_DEFINED__
#define __SC_IMultiHeadSimDev_INTERFACE_DEFINED__

/* interface SC_IMultiHeadSimDev */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IMultiHeadSimDev;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("853FF202-54B9-11d4-9BF7-008048EEE00C")
    SC_IMultiHeadSimDev : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSimulationDevice( 
            /* [in] */ long HeadId,
            /* [retval][out] */ SC_IOpticModuleCtrlStdDev **Device) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IMultiHeadSimDevVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IMultiHeadSimDev * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IMultiHeadSimDev * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IMultiHeadSimDev * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IMultiHeadSimDev * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IMultiHeadSimDev * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IMultiHeadSimDev * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IMultiHeadSimDev * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSimulationDevice )( 
            SC_IMultiHeadSimDev * This,
            /* [in] */ long HeadId,
            /* [retval][out] */ SC_IOpticModuleCtrlStdDev **Device);
        
        END_INTERFACE
    } SC_IMultiHeadSimDevVtbl;

    interface SC_IMultiHeadSimDev
    {
        CONST_VTBL struct SC_IMultiHeadSimDevVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IMultiHeadSimDev_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IMultiHeadSimDev_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IMultiHeadSimDev_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IMultiHeadSimDev_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IMultiHeadSimDev_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IMultiHeadSimDev_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IMultiHeadSimDev_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IMultiHeadSimDev_ScGetSimulationDevice(This,HeadId,Device)	\
    ( (This)->lpVtbl -> ScGetSimulationDevice(This,HeadId,Device) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IMultiHeadSimDev_INTERFACE_DEFINED__ */



#ifndef __ScConstantsOpticModule2DCtrl_MODULE_DEFINED__
#define __ScConstantsOpticModule2DCtrl_MODULE_DEFINED__


/* module ScConstantsOpticModule2DCtrl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComOpticModule2DCtrlShowDeviceSelectBar	=	1;

/* [helpstring] */ const long scComOpticModule2DCtrlShowOutputWindow	=	2;

/* [helpstring] */ const long scComOpticModule2DCtrlShowCameraBar	=	4;

/* [helpstring] */ const long scComOpticModule2DCtrlShowJumps	=	8;

/* [helpstring] */ const long scComOpticModule2DCtrlShowDeviceSettingsBar	=	0x10;

/* [helpstring] */ const long scComOpticModule2DCtrlShowCommandListBar	=	0x20;

/* [helpstring] */ const long scComOpticModule2DCtrlShowDrawInfoBar	=	0x40;

/* [helpstring] */ const long scComOpticModule2DCtrlShowMof	=	0x80;

/* [helpstring] */ const long scComOpticModule2DCtrlShowContextMenu	=	0x100;

/* [helpstring] */ const long scComOpticModule2DCtrlShowBigToolbarIcons	=	0x200;

#endif /* __ScConstantsOpticModule2DCtrl_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScOpticModuleCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("EEC215C6-996E-11D1-9767-008048EEE00C")
ScOpticModuleCtrl;
#endif
#endif /* __ScapsSamOpticModule2DCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


