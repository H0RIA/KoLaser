

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:39 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\view3d\sc_view3d_ctrl_type_lib.idl:
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


#ifndef __sc_view3d_ctrl_type_lib_h__
#define __sc_view3d_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_DispView3DCtrl_FWD_DEFINED__
#define __SC_DispView3DCtrl_FWD_DEFINED__
typedef interface SC_DispView3DCtrl SC_DispView3DCtrl;
#endif 	/* __SC_DispView3DCtrl_FWD_DEFINED__ */


#ifndef __SC_IView3DCtrl_FWD_DEFINED__
#define __SC_IView3DCtrl_FWD_DEFINED__
typedef interface SC_IView3DCtrl SC_IView3DCtrl;
#endif 	/* __SC_IView3DCtrl_FWD_DEFINED__ */


#ifndef __SC_IView3DCtrlEvents_FWD_DEFINED__
#define __SC_IView3DCtrlEvents_FWD_DEFINED__
typedef interface SC_IView3DCtrlEvents SC_IView3DCtrlEvents;
#endif 	/* __SC_IView3DCtrlEvents_FWD_DEFINED__ */


#ifndef __ScView3DCtrl_FWD_DEFINED__
#define __ScView3DCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScView3DCtrl ScView3DCtrl;
#else
typedef struct ScView3DCtrl ScView3DCtrl;
#endif /* __cplusplus */

#endif 	/* __ScView3DCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_view3d_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_data_base_type_lib.h"
#include "sc_tria_mesh_type_lib.h"
#include "sc_gui_type_lib.h"
#include "sc_entity_groups_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_view3d_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_view3d_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamView3DCtrl_LIBRARY_DEFINED__
#define __ScapsSamView3DCtrl_LIBRARY_DEFINED__

/* library ScapsSamView3DCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamView3DCtrl;


#ifndef __ScConstantsView3DCtrl_MODULE_DEFINED__
#define __ScConstantsView3DCtrl_MODULE_DEFINED__


/* module ScConstantsView3DCtrl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComView3DCtrlShowCameraToolbar	=	0x1;

/* [helpstring] */ const long scComView3DCtrlShowCtrlHelp	=	0x2;

/* [helpstring] */ const long scComView3DCtrlShowPropSheet	=	0x4;

/* [helpstring] */ const long scComView3DCtrlShowEntityList	=	0x8;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideContextMenu	=	0x10;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconSelectObjectMode	=	0x20;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconSelectCameraMode	=	0x40;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconFitWorkingRoom	=	0x80;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconFitSelected	=	0x100;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconObjectList	=	0x200;

/* [helpstring] */ const long scComView3DCtrlShowFlagHideIconPropPage	=	0x400;

/* [helpstring] */ const long scComView3DCtrlShowFlagDontUseHideFlags	=	0x800;

/* [helpstring] */ const long scComView3DCtrlExecCommandFitAll	=	1;

/* [helpstring] */ const long scComView3DCtrlExecCommandFitSelected	=	2;

/* [helpstring] */ const long scComView3DCtrlExecCommandFitBuildingRoom	=	3;

/* [helpstring] */ const long scComView3DCtrlExecCommandZoom	=	4;

/* [helpstring] */ const long scComView3DCtrlExecCommandZoomMinus	=	5;

/* [helpstring] */ const long scComView3DCtrlExecCommandZoomPlus	=	6;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewXPlus	=	7;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewXMinus	=	8;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewYPlus	=	9;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewYMinus	=	10;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewZPlus	=	11;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewZMinus	=	12;

/* [helpstring] */ const long scComView3DCtrlExecCommandViewISO	=	13;

/* [helpstring] */ const long scComView3DCtrlExecCommandSTLMergeExport	=	14;

/* [helpstring] */ const long scComView3DCtrlExecCommandDelete	=	15;

/* [helpstring] */ const long scComView3DCtrlExecCommandCenterXY	=	17;

/* [helpstring] */ const long scComView3DCtrlExecCommandGraphicExport	=	16;

/* [helpstring] */ const long scComView3DCtrlExecCommandArchiveLoad	=	25;

/* [helpstring] */ const long scComView3DCtrlExecCommandArchiveSave	=	26;

/* [helpstring] */ const long scComView3DCtrlExecCommandArchiveSaveAs	=	27;

/* [helpstring] */ const long scComView3DCtrlExecCommandClearJobName	=	28;

/* [helpstring] */ const long scComView3DCtrlExecCommandMultiHeadSplit	=	29;

/* [helpstring] */ const long scComView3DCtrlCheckCommandActive	=	1;

/* [helpstring] */ const long scComView3DCtrlCheckCommandEnabled	=	2;

#endif /* __ScConstantsView3DCtrl_MODULE_DEFINED__ */

#ifndef __SC_DispView3DCtrl_DISPINTERFACE_DEFINED__
#define __SC_DispView3DCtrl_DISPINTERFACE_DEFINED__

/* dispinterface SC_DispView3DCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DispView3DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E52635A0-40A0-11D1-96E6-008048EEE00C")
    SC_DispView3DCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DispView3DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DispView3DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DispView3DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DispView3DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DispView3DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DispView3DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DispView3DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DispView3DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DispView3DCtrlVtbl;

    interface SC_DispView3DCtrl
    {
        CONST_VTBL struct SC_DispView3DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DispView3DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DispView3DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DispView3DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DispView3DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DispView3DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DispView3DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DispView3DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DispView3DCtrl_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IView3DCtrl_INTERFACE_DEFINED__
#define __SC_IView3DCtrl_INTERFACE_DEFINED__

/* interface SC_IView3DCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IView3DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AA93003-70F8-45cb-9393-218FA0A23D52")
    SC_IView3DCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBackGroundColor( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBackGroundColor( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowCoordinates( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowCoordinates( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowCoorAxis( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowCoorAxis( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowWorkRoom( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowWorkRoom( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowToolbar( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowToolbar( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowCtrlHelp( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowCtrlHelp( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMinX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMinX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMinY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMinY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMinZ( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMinZ( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMaxX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMaxX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMaxY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMaxY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkRoomMaxZ( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkRoomMaxZ( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableShowFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableShowFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetView3D( 
            /* [retval][out] */ /* external definition not present */ SC_IView3D **View3D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityListView( 
            /* [retval][out] */ LPDISPATCH *View) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntityListView( 
            /* [in] */ LPDISPATCH ListView) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExecCommand( 
            /* [in] */ long CmdId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckCommand( 
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityPropertySheet( 
            /* [retval][out] */ LPDISPATCH *Sheet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ LPDISPATCH OpticModule2D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetCurrentSlice( 
            /* [in] */ long SliceNum) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScIOFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScIOFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetJobRoot( 
            /* [in] */ LPDISPATCH jobRoot) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IView3DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView3DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView3DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView3DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView3DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView3DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView3DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView3DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBackGroundColor )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBackGroundColor )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCoordinates )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCoordinates )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCoorAxis )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCoorAxis )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowWorkRoom )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowWorkRoom )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowToolbar )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowToolbar )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCtrlHelp )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCtrlHelp )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMinX )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMinX )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMinY )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMinY )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMinZ )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMinZ )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMaxX )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMaxX )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMaxY )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMaxY )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkRoomMaxZ )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkRoomMaxZ )( 
            SC_IView3DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowFlags )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowFlags )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableShowFlags )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableShowFlags )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetView3D )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IView3D **View3D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveProperties )( 
            SC_IView3DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadProperties )( 
            SC_IView3DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityListView )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ LPDISPATCH *View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityListView )( 
            SC_IView3DCtrl * This,
            /* [in] */ LPDISPATCH ListView);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IView3DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IView3DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecCommand )( 
            SC_IView3DCtrl * This,
            /* [in] */ long CmdId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckCommand )( 
            SC_IView3DCtrl * This,
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperties )( 
            SC_IView3DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityPropertySheet )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ LPDISPATCH *Sheet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IView3DCtrl * This,
            /* [in] */ LPDISPATCH OpticModule2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetCurrentSlice )( 
            SC_IView3DCtrl * This,
            /* [in] */ long SliceNum);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScIOFlags )( 
            SC_IView3DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScIOFlags )( 
            SC_IView3DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetJobRoot )( 
            SC_IView3DCtrl * This,
            /* [in] */ LPDISPATCH jobRoot);
        
        END_INTERFACE
    } SC_IView3DCtrlVtbl;

    interface SC_IView3DCtrl
    {
        CONST_VTBL struct SC_IView3DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView3DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView3DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView3DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView3DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView3DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView3DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView3DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IView3DCtrl_get_ScBackGroundColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScBackGroundColor(This,Color) ) 

#define SC_IView3DCtrl_put_ScBackGroundColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScBackGroundColor(This,Color) ) 

#define SC_IView3DCtrl_get_ScShowCoordinates(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCoordinates(This,Show) ) 

#define SC_IView3DCtrl_put_ScShowCoordinates(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCoordinates(This,Show) ) 

#define SC_IView3DCtrl_get_ScShowCoorAxis(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCoorAxis(This,Show) ) 

#define SC_IView3DCtrl_put_ScShowCoorAxis(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCoorAxis(This,Show) ) 

#define SC_IView3DCtrl_get_ScShowWorkRoom(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowWorkRoom(This,Show) ) 

#define SC_IView3DCtrl_put_ScShowWorkRoom(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowWorkRoom(This,Show) ) 

#define SC_IView3DCtrl_get_ScShowToolbar(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowToolbar(This,Show) ) 

#define SC_IView3DCtrl_put_ScShowToolbar(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowToolbar(This,Show) ) 

#define SC_IView3DCtrl_get_ScShowCtrlHelp(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCtrlHelp(This,Show) ) 

#define SC_IView3DCtrl_put_ScShowCtrlHelp(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCtrlHelp(This,Show) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMinX(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMinX(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMinX(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMinX(This,Value) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMinY(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMinY(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMinY(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMinY(This,Value) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMinZ(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMinZ(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMinZ(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMinZ(This,Value) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMaxX(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMaxX(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMaxX(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMaxX(This,Value) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMaxY(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMaxY(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMaxY(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMaxY(This,Value) ) 

#define SC_IView3DCtrl_get_ScWorkRoomMaxZ(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkRoomMaxZ(This,Value) ) 

#define SC_IView3DCtrl_put_ScWorkRoomMaxZ(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkRoomMaxZ(This,Value) ) 

#define SC_IView3DCtrl_get_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScShowFlags(This,Flags) ) 

#define SC_IView3DCtrl_put_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScShowFlags(This,Flags) ) 

#define SC_IView3DCtrl_get_ScEnableShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScEnableShowFlags(This,Flags) ) 

#define SC_IView3DCtrl_put_ScEnableShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScEnableShowFlags(This,Flags) ) 

#define SC_IView3DCtrl_ScGetView3D(This,View3D)	\
    ( (This)->lpVtbl -> ScGetView3D(This,View3D) ) 

#define SC_IView3DCtrl_ScSaveProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveProperties(This,FileName) ) 

#define SC_IView3DCtrl_ScLoadProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadProperties(This,FileName) ) 

#define SC_IView3DCtrl_ScGetEntityListView(This,View)	\
    ( (This)->lpVtbl -> ScGetEntityListView(This,View) ) 

#define SC_IView3DCtrl_ScSetEntityListView(This,ListView)	\
    ( (This)->lpVtbl -> ScSetEntityListView(This,ListView) ) 

#define SC_IView3DCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IView3DCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IView3DCtrl_ScExecCommand(This,CmdId)	\
    ( (This)->lpVtbl -> ScExecCommand(This,CmdId) ) 

#define SC_IView3DCtrl_ScCheckCommand(This,CmdId,Flags,Active)	\
    ( (This)->lpVtbl -> ScCheckCommand(This,CmdId,Flags,Active) ) 

#define SC_IView3DCtrl_ScEditProperties(This)	\
    ( (This)->lpVtbl -> ScEditProperties(This) ) 

#define SC_IView3DCtrl_ScGetEntityPropertySheet(This,Sheet)	\
    ( (This)->lpVtbl -> ScGetEntityPropertySheet(This,Sheet) ) 

#define SC_IView3DCtrl_ScSetOpticModule2D(This,OpticModule2D)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule2D) ) 

#define SC_IView3DCtrl_ScSetCurrentSlice(This,SliceNum)	\
    ( (This)->lpVtbl -> ScSetCurrentSlice(This,SliceNum) ) 

#define SC_IView3DCtrl_get_ScIOFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScIOFlags(This,Flags) ) 

#define SC_IView3DCtrl_put_ScIOFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScIOFlags(This,Flags) ) 

#define SC_IView3DCtrl_ScSetJobRoot(This,jobRoot)	\
    ( (This)->lpVtbl -> ScSetJobRoot(This,jobRoot) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IView3DCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_IView3DCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_IView3DCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IView3DCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IView3DCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("E52635A1-40A0-11D1-96E6-008048EEE00C")
    SC_IView3DCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IView3DCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView3DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView3DCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView3DCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView3DCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView3DCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView3DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView3DCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IView3DCtrlEventsVtbl;

    interface SC_IView3DCtrlEvents
    {
        CONST_VTBL struct SC_IView3DCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView3DCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView3DCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView3DCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView3DCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView3DCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView3DCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView3DCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IView3DCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScView3DCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("E52635A2-40A0-11D1-96E6-008048EEE00C")
ScView3DCtrl;
#endif
#endif /* __ScapsSamView3DCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


