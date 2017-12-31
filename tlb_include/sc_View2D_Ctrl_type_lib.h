

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:40 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\view2d\sc_View2D_Ctrl_type_lib.idl:
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


#ifndef __sc_View2D_Ctrl_type_lib_h__
#define __sc_View2D_Ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_DispView2DCtrl_FWD_DEFINED__
#define __SC_DispView2DCtrl_FWD_DEFINED__
typedef interface SC_DispView2DCtrl SC_DispView2DCtrl;
#endif 	/* __SC_DispView2DCtrl_FWD_DEFINED__ */


#ifndef __SC_IView2DCtrl_FWD_DEFINED__
#define __SC_IView2DCtrl_FWD_DEFINED__
typedef interface SC_IView2DCtrl SC_IView2DCtrl;
#endif 	/* __SC_IView2DCtrl_FWD_DEFINED__ */


#ifndef __SC_IView2DCtrlEvents_FWD_DEFINED__
#define __SC_IView2DCtrlEvents_FWD_DEFINED__
typedef interface SC_IView2DCtrlEvents SC_IView2DCtrlEvents;
#endif 	/* __SC_IView2DCtrlEvents_FWD_DEFINED__ */


#ifndef __ScView2DCtrl_FWD_DEFINED__
#define __ScView2DCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScView2DCtrl ScView2DCtrl;
#else
typedef struct ScView2DCtrl ScView2DCtrl;
#endif /* __cplusplus */

#endif 	/* __ScView2DCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_View2D_Ctrl_type_lib_0000_0000 */
/* [local] */ 

#pragma once
#define	SC_COM_VIEW2D_CTRL_SHOW_COORDINATES	( 0x1 )

#define	SC_COM_VIEW2D_CTRL_SHOW_CAMERA_TOOLBAR	( 0x2 )

#define	SC_COM_VIEW2D_CTRL_SHOW_CTRL_HELP	( 0x4 )

#define	SC_COM_VIEW2D_CTRL_SHOW_TOOLS_TOOLBAR	( 0x8 )

#define	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA	( 0x10 )

#define	SC_COM_VIEW2D_CTRL_SHOW_VIEW_LEVEL_TOOLBAR	( 0x20 )

#define	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU	( 0x40 )

#define	SC_COM_VIEW2D_CTRL_SHOW_STATUS_BAR	( 0x80 )

#define	SC_COM_VIEW2D_CTRL_SHOW_SCALE_BAR	( 0x100 )

#define	SC_COM_VIEW2D_CTRL_SHOW_PROP_SHEET	( 0x200 )

#define	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU_POLYLINE	( 0x400 )

#define	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU_EDIT_ITEM	( 0x800 )

#define	SC_COM_VIEW2D_CTRL_SHOW_OBJECT_VIEW	( 0x1000 )

#define	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA_HEAD_0	( 0x2000 )

#define	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA_HEAD_1	( 0x4000 )

#define	SC_COM_VIEW2D_CTRL_SHOW_BIG_SYMBOLS	( 0x8000 )

#define	SC_COM_VIEW2D_CTRL_HIDE_VIEW2D	( 0x10000 )

#define	SC_COM_VIEW2D_CTRL_HIDE_SPLIT_TILE	( 0x20000 )

#define	SC_COM_VIEW2D_CTRL_STYLE_EDIT	( 0x40000 )

// SCAPS SAM Header File
// Version 2.8
#include "sc_gui_type_lib.h"
#include "sc_entity_groups_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_View2D_Ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_View2D_Ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamView2DCtrl_LIBRARY_DEFINED__
#define __ScapsSamView2DCtrl_LIBRARY_DEFINED__

/* library ScapsSamView2DCtrl */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamView2DCtrl;


#ifndef __ScConstantsView2DCtrl_MODULE_DEFINED__
#define __ScConstantsView2DCtrl_MODULE_DEFINED__


/* module ScConstantsView2DCtrl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComView2DCtrlExecCommandSelect	=	1;

/* [helpstring] */ const long scComView2DCtrlExecCommandLine	=	2;

/* [helpstring] */ const long scComView2DCtrlExecCommandCircle	=	3;

/* [helpstring] */ const long scComView2DCtrlExecCommandRectangle	=	4;

/* [helpstring] */ const long scComView2DCtrlExecCommandText	=	5;

/* [helpstring] */ const long scComView2DCtrlExecCommandCopy	=	6;

/* [helpstring] */ const long scComView2DCtrlExecCommandEntityProperties	=	7;

/* [helpstring] */ const long scComView2DCtrlExecCommandGraphicImport	=	8;

/* [helpstring] */ const long scComView2DCtrlExecCommandGraphicExport	=	9;

/* [helpstring] */ const long scComView2DCtrlExecCommandArchiveLoad	=	10;

/* [helpstring] */ const long scComView2DCtrlExecCommandArchiveSave	=	11;

/* [helpstring] */ const long scComView2DCtrlExecCommandArchiveSaveAs	=	12;

/* [helpstring] */ const long scComView2DCtrlExecCommandDelete	=	13;

/* [helpstring] */ const long scComView2DCtrlExecCommandNew	=	14;

/* [helpstring] */ const long scComView2DCtrlExecCommandBarcode	=	15;

/* [helpstring] */ const long scComView2DCtrlExecCommandPoint	=	16;

/* [helpstring] */ const long scComView2DCtrlExecCommandFlip	=	17;

/* [helpstring] */ const long scComView2DCtrlExecCommandTriangle	=	18;

/* [helpstring] */ const long scComView2DCtrlExecCommandPolyline	=	19;

/* [helpstring] */ const long scComView2DCtrlExecCommandItemSelect	=	20;

/* [helpstring] */ const long scComView2DCtrlExecCommandGroup	=	21;

/* [helpstring] */ const long scComView2DCtrlExecCommandUngroup	=	22;

/* [helpstring] */ const long scComView2DCtrlExecCommandUndo	=	23;

/* [helpstring] */ const long scComView2DCtrlExecCommandRedo	=	24;

/* [helpstring] */ const long scComView2DCtrlExecCommandOrderToTop	=	25;

/* [helpstring] */ const long scComView2DCtrlExecCommandEditItemPoint	=	26;

/* [helpstring] */ const long scComView2DCtrlExecCommandEditItemLine	=	27;

/* [helpstring] */ const long scComView2DCtrlExecCommandConvertToLayer	=	28;

/* [helpstring] */ const long scComView2DCtrlExecCommandFitAll	=	29;

/* [helpstring] */ const long scComView2DCtrlExecCommandFitSelected	=	30;

/* [helpstring] */ const long scComView2DCtrlExecCommandFitWorkingArea	=	31;

/* [helpstring] */ const long scComView2DCtrlExecCommandZoom	=	32;

/* [helpstring] */ const long scComView2DCtrlExecCommandZoomMinus	=	33;

/* [helpstring] */ const long scComView2DCtrlExecCommandZoomPlus	=	34;

/* [helpstring] */ const long scComView2DCtrlExecCommandPrint	=	35;

/* [helpstring] */ const long scComView2DCtrlExecCommandPrintPreview	=	36;

/* [helpstring] */ const long scComView2DCtrlExecCommandPolylineCancel	=	37;

/* [helpstring] */ const long scComView2DCtrlExecCommandPolylineFinish	=	38;

/* [helpstring] */ const long scComView2DCtrlExecCommandPolylineCloseAndFinish	=	39;

/* [helpstring] */ const long scComView2DCtrlExecCommandClose	=	40;

/* [helpstring] */ const long scComView2DCtrlExecCommandViewLevelUp	=	41;

/* [helpstring] */ const long scComView2DCtrlExecCommandViewLevelDown	=	42;

/* [helpstring] */ const long scComView2DCtrlExecCommandArrayCopy	=	43;

/* [helpstring] */ const long scComView2DCtrlExecCommandMultiHeadSplit	=	45;

/* [helpstring] */ const long scComView2DCtrlExecCommandCenterSelection	=	46;

/* [helpstring] */ const long scComView2DCtrlExecCommandCenterHorizSelection	=	63;

/* [helpstring] */ const long scComView2DCtrlExecCommandCenterVertSelection	=	64;

/* [helpstring] */ const long scComView2DCtrlExecCommandCircleCenterRadius	=	47;

/* [helpstring] */ const long scComView2DCtrlExecCommandCircle3Points	=	48;

/* [helpstring] */ const long scComView2DCtrlExecCommandArcCenterRadiusAngle	=	49;

/* [helpstring] */ const long scComView2DCtrlExecCommandArc3Points	=	50;

/* [helpstring] */ const long scComView2DCtrlExecCommandBitmapConvertToVectors	=	51;

/* [helpstring] */ const long scComView2DCtrlExecCommandWaistedRectangle	=	61;

/* [helpstring] */ const long scComView2DCtrlExecCommandEightEdge	=	62;

/* [helpstring] */ const long scComView2DCtrlExecCommandSixEdge	=	71;

/* [helpstring] */ const long scComView2DCtrlExecCommandDateTime	=	72;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial1	=	73;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial1_1	=	74;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial2	=	75;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial2_1	=	77;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial3	=	76;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpecial3_1	=	78;

/* [helpstring] */ const long scComView2DCtrlExecCommandClipboardCut	=	53;

/* [helpstring] */ const long scComView2DCtrlExecCommandClipboardCopy	=	54;

/* [helpstring] */ const long scComView2DCtrlExecCommandClipboardPaste	=	55;

/* [helpstring] */ const long scComView2DCtrlExecCommandViewXY	=	56;

/* [helpstring] */ const long scComView2DCtrlExecCommandViewXZ	=	57;

/* [helpstring] */ const long scComView2DCtrlExecCommandViewYZ	=	58;

/* [helpstring] */ const long scComView2DCtrlExecCommandShowJobIn3DView	=	59;

/* [helpstring] */ const long scComView2DCtrlExecCommandFilterDialog	=	60;

/* [helpstring] */ const long scComView2DCtrlExecCommandConvertToPolyLines	=	65;

/* [helpstring] */ const long scComView2DCtrlExecCommandDataWizardDialog	=	66;

/* [helpstring] */ const long scComView2DCtrlExecCommandSpiral	=	68;

/* [helpstring] */ const long scComView2DCtrlExecCommandOrderToBottom	=	69;

/* [helpstring] */ const long scComView2DCtrlExecCommandPrintSettings	=	79;

/* [helpstring] */ const long scComView2DCtrlExecCommandDrag	=	80;

/* [helpstring] */ const long scComView2DCtrlExecCommandArrayCopyHard	=	81;

/* [helpstring] */ const long scComView2DCtrlExecCommandWizardOrder	=	82;

/* [helpstring] */ const long scComView2DCtrlExecCommandArrayPolarCopy	=	83;

/* [helpstring] */ const long scComView2DCtrlExecCommandCreateOneGroup	=	84;

/* [helpstring] */ const long scComView2DCtrlExecCommandCheckJobDirtyPenschanged	=	85;

/* [helpstring] */ const long scComView2DCtrlExecCommandImportToPenGroups	=	86;

/* [helpstring] */ const long scComView2DCtrlExecCommandDoBieloCheck	=	87;

/* [helpstring] */ const long scComView2DCtrlExecCommandRemoveBieloCheck	=	88;

/* [helpstring] */ const long scComView2DCtrlExecCommandMoveConnectedPolylinePoints	=	89;

/* [helpstring] */ const long scComView2DCtrlExecCommandSubgroupClosedPolylines	=	90;

/* [helpstring] */ const long scComView2DCtrlExecCommandResultError	=	0;

/* [helpstring] */ const long scComView2DCtrlExecCommandResultOK	=	1;

/* [helpstring] */ const long scComView2DCtrlExecCommandResultCancel	=	2;

/* [helpstring] */ const long scComView2DCtrlCheckCommandActive	=	1;

/* [helpstring] */ const long scComView2DCtrlCheckCommandEnabled	=	2;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsPolyLine2DLines	=	0x1;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsPolyLine2DPoints	=	0x2;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsLineArray2DLines	=	0x4;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsLineArray2DPoints	=	0x8;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsSingleLine2DLines	=	0x10;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsSingleLine2DPoints	=	0x20;

/* [helpstring] */ const long scComView2DCtrlDrawStyleFlagsPolyLine2DArrowsPointMode	=	0x40;

/* [helpstring] */ const long scComView2DCtrlShowCoordinates	=	SC_COM_VIEW2D_CTRL_SHOW_COORDINATES;

/* [helpstring] */ const long scComView2DCtrlShowCameraToolbar	=	SC_COM_VIEW2D_CTRL_SHOW_CAMERA_TOOLBAR;

/* [helpstring] */ const long scComView2DCtrlShowCtrlHelp	=	SC_COM_VIEW2D_CTRL_SHOW_CTRL_HELP;

/* [helpstring] */ const long scComView2DCtrlShowToolsToolbar	=	SC_COM_VIEW2D_CTRL_SHOW_TOOLS_TOOLBAR;

/* [helpstring] */ const long scComView2DCtrlShowWorkingArea	=	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA;

/* [helpstring] */ const long scComView2DCtrlShowViewLevelToolbar	=	SC_COM_VIEW2D_CTRL_SHOW_VIEW_LEVEL_TOOLBAR;

/* [helpstring] */ const long scComView2DCtrlShowContextMenu	=	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU;

/* [helpstring] */ const long scComView2DCtrlShowStatusBar	=	SC_COM_VIEW2D_CTRL_SHOW_STATUS_BAR;

/* [helpstring] */ const long scComView2DCtrlShowScaleBar	=	SC_COM_VIEW2D_CTRL_SHOW_SCALE_BAR;

/* [helpstring] */ const long scComView2DCtrlShowPropSheet	=	SC_COM_VIEW2D_CTRL_SHOW_PROP_SHEET;

/* [helpstring] */ const long scComView2DCtrlShowContextMenuPolyline	=	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU_POLYLINE;

/* [helpstring] */ const long scComView2DCtrlShowContextMenuEditItem	=	SC_COM_VIEW2D_CTRL_SHOW_CONTEXT_MENU_EDIT_ITEM;

/* [helpstring] */ const long scComView2DCtrlShowEntityList	=	SC_COM_VIEW2D_CTRL_SHOW_OBJECT_VIEW;

/* [helpstring] */ const long scComView2DCtrlShowWorkingAreaHead0	=	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA_HEAD_0;

/* [helpstring] */ const long scComView2DCtrlShowWorkingAreaHead1	=	SC_COM_VIEW2D_CTRL_SHOW_WORKING_AREA_HEAD_1;

/* [helpstring] */ const long scComView2DCtrlShowBigSymbols	=	SC_COM_VIEW2D_CTRL_SHOW_BIG_SYMBOLS;

/* [helpstring] */ const long scComView2DCtrlHideView2D	=	SC_COM_VIEW2D_CTRL_HIDE_VIEW2D;

/* [helpstring] */ const long scComView2DCtrlHideSplitTile	=	SC_COM_VIEW2D_CTRL_HIDE_SPLIT_TILE;

/* [helpstring] */ const long scComView2DCtrlStyleEdit	=	SC_COM_VIEW2D_CTRL_STYLE_EDIT;

/* [helpstring] */ const long scComView2DCtrlPropertyChangedJobName	=	0x1;

/* [helpstring] */ const long scComView2DCtrlPropertyChangedViewLevel	=	0x2;

/* [helpstring] */ const long scComView2DCtrlEditControlFlagDontCreateLayer	=	0x1;

/* [helpstring] */ const long scComView2DCtrlEditControlFlagArrayCopyAutoNameMode	=	0x2;

/* [helpstring] */ const long scComView2DCtrlIODefaultLoadEntitiesActive	=	0x1;

/* [helpstring] */ const long scComView2DCtrlIODefaultLoadEntitiesNotActive	=	0x2;

/* [helpstring] */ const long scComView2DCtrlIODefaultOverwriteEntitiesActive	=	0x4;

/* [helpstring] */ const long scComView2DCtrlIODefaultOverwriteEntitiesNotActive	=	0x8;

/* [helpstring] */ const long scComView2DCtrlIODefaultLoadMaterialsActive	=	0x10;

/* [helpstring] */ const long scComView2DCtrlIODefaultLoadMaterialsNotActive	=	0x20;

/* [helpstring] */ const long scComView2DCtrlIODefaultSaveEntitiesActive	=	0x40;

/* [helpstring] */ const long scComView2DCtrlIODefaultSaveEntitiesNotActive	=	0x80;

/* [helpstring] */ const long scComView2DCtrlIODefaultSaveMaterialsActive	=	0x100;

/* [helpstring] */ const long scComView2DCtrlIODefaultSaveMaterialsNotActive	=	0x200;

/* [helpstring] */ const long scComView2DCtrlIOLoadEntitiesNotChangeable	=	0x400;

/* [helpstring] */ const long scComView2DCtrlIOLoadMaterialsNotChangeable	=	0x800;

/* [helpstring] */ const long scComView2DCtrlIOLoadOverwriteNotChangeable	=	0x1000;

/* [helpstring] */ const long scComView2DCtrlIOSaveEntitiesNotChangeable	=	0x2000;

/* [helpstring] */ const long scComView2DCtrlIOSaveMaterialsNotChangeable	=	0x4000;

/* [helpstring] */ const long scComView2DCtrlIOAutoBackupFiles	=	0x8000;

/* [helpstring] */ const long scComView2DCtrlIODxfFilterType	=	0x10000;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseMove	=	0x1;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseLDown	=	0x2;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseLUp	=	0x4;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseRDown	=	0x8;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseRUp	=	0x10;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseLDblClick	=	0x20;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseRDblClick	=	0x40;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseMoveInfo	=	0x80;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseLDownInfo	=	0x100;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseLUpInfo	=	0x200;

/* [helpstring] */ const long scComView2DCtrlEventDisableMouseMoveWheel	=	0x400;

/* [helpstring] */ const long scComView2DCtrlEventDisablePropertyChanged	=	0x800;

/* [helpstring] */ const long scComView2DCtrlEventDisableUpdateColors	=	0x1000;

/* [helpstring] */ const long scComView2DCtrlEventDisableUpdateView	=	0x2000;

/* [helpstring] */ const long scComView2DCtrlEventDisableEntityListEvent	=	0x4000;

/* [helpstring] */ const long scComView2DCtrlEventDisableEntityDeleting	=	0x8000;

#endif /* __ScConstantsView2DCtrl_MODULE_DEFINED__ */

#ifndef __SC_DispView2DCtrl_DISPINTERFACE_DEFINED__
#define __SC_DispView2DCtrl_DISPINTERFACE_DEFINED__

/* dispinterface SC_DispView2DCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_DispView2DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("62CA3362-764A-11d1-8D8C-008048E1AD3F")
    SC_DispView2DCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_DispView2DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_DispView2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_DispView2DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_DispView2DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_DispView2DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_DispView2DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_DispView2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_DispView2DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_DispView2DCtrlVtbl;

    interface SC_DispView2DCtrl
    {
        CONST_VTBL struct SC_DispView2DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_DispView2DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_DispView2DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_DispView2DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_DispView2DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_DispView2DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_DispView2DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_DispView2DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_DispView2DCtrl_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IView2DCtrl_INTERFACE_DEFINED__
#define __SC_IView2DCtrl_INTERFACE_DEFINED__

/* interface SC_IView2DCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IView2DCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("666CB792-C731-11d2-84D6-00C0DFEA4A3A")
    SC_IView2DCtrl : public IDispatch
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
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowCameraToolbar( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowCameraToolbar( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowCtrlHelp( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowCtrlHelp( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowToolsToolbar( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowToolsToolbar( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMinX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMinX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMinY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMinY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMaxX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMaxX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScWorkingAreaMaxY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScWorkingAreaMaxY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowWorkingArea( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowWorkingArea( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHpglIOResolution( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHpglIOResolution( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowViewLevelToolbar( 
            /* [retval][out] */ long *Show) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowViewLevelToolbar( 
            /* [in] */ long Show) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHpglIOStyle( 
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHpglIOStyle( 
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorInnerPolyLines( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorInnerPolyLines( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorOuterPolyLines( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorOuterPolyLines( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorOtherLines( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorOtherLines( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorOtherPens( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorOtherPens( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen1( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen1( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen2( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen2( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen3( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen3( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen4( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen4( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen5( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen5( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen6( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen6( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen7( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen7( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen8( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen8( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen9( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen9( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen10( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen10( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen11( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen11( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen12( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen12( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen13( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen13( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen14( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen14( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen15( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen15( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen16( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen16( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen17( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen17( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen18( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen18( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen19( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen19( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorPen20( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorPen20( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPenDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPenDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorLinePoints( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorLinePoints( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDrawStyleFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDrawStyleFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewLevel( 
            /* [retval][out] */ long *Level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewLevel( 
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMaxViewLevel( 
            /* [retval][out] */ long *Level) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMaxViewLevel( 
            /* [in] */ long Level) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGridColor( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGridColor( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewMouseGridX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewMouseGridX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewMouseGridY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewMouseGridY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScShowFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScShowFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnableShowFlags( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnableShowFlags( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScJobFileName( 
            /* [retval][out] */ BSTR *FileName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScJobFileName( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorModifyBox( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorModifyBox( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorSelection( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorSelection( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetView2D( 
            /* [retval][out] */ /* external definition not present */ SC_IView2D **View2D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadProperties( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ LPDISPATCH OpticModule2D) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperties( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExecCommand( 
            /* [in] */ long CmdId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckCommand( 
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityPropertySheet( 
            /* [retval][out] */ LPDISPATCH *Sheet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntityPropertySheet( 
            /* [in] */ LPDISPATCH Sheet) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExecCommandId( 
            /* [in] */ BSTR PropertyPageName,
            /* [retval][out] */ long *CmdId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSelectedEntity( 
            /* [retval][out] */ LPDISPATCH *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScShowContextMenu( 
            /* [in] */ long ScreenX,
            /* [in] */ long ScreenY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetEntityListView( 
            /* [retval][out] */ LPDISPATCH *View) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntityListView( 
            /* [in] */ LPDISPATCH ListView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHeadUndefined( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHeadUndefined( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead0( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead0( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead1( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead1( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead2( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead2( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead3( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead3( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHeadDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHeadDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMultiHeadAutoSplitMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMultiHeadAutoSplitMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCopyOffsetX( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCopyOffsetX( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCopyOffsetY( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCopyOffsetY( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEditControlFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEditControlFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetNextPoint( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [retval][out] */ long *Error) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScriptEngine( 
            /* [retval][out] */ LPDISPATCH *Engine) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadScriptModules( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetExecCommandResult( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEnablePenColors( 
            /* [retval][out] */ long *Enable) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEnablePenColors( 
            /* [in] */ long Enable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScIOFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScIOFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCatchDistance( 
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCatchDistance( 
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPenColor( 
            /* [in] */ long pen,
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPenColor( 
            /* [in] */ long pen,
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateObject( 
            /* [in] */ BSTR objName,
            /* [retval][out] */ LPDISPATCH *Entity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorNeighbourPolyLines( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorNeighbourPolyLines( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead4( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead4( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScColorHead5( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScColorHead5( 
            /* [in] */ long Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetParameterValue( 
            /* [in] */ long param,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetParameterValue( 
            /* [in] */ long param,
            /* [in] */ double value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisableEvents( 
            /* [retval][out] */ long *events) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisableEvents( 
            /* [in] */ long events) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewGridLinesMajorX( 
            /* [retval][out] */ long *linesX) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewGridLinesMajorX( 
            /* [in] */ long linesX) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewGridLinesMajorY( 
            /* [retval][out] */ long *linesY) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewGridLinesMajorY( 
            /* [in] */ long linesY) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScGridColorMajor( 
            /* [retval][out] */ long *Color) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScGridColorMajor( 
            /* [in] */ long Color) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IView2DCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView2DCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView2DCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView2DCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView2DCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView2DCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView2DCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBackGroundColor )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBackGroundColor )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCoordinates )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCoordinates )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCameraToolbar )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCameraToolbar )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowCtrlHelp )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowCtrlHelp )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowToolsToolbar )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowToolsToolbar )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMinX )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMinX )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMinY )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMinY )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMaxX )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMaxX )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScWorkingAreaMaxY )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScWorkingAreaMaxY )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowWorkingArea )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowWorkingArea )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHpglIOResolution )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHpglIOResolution )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowViewLevelToolbar )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Show);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowViewLevelToolbar )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Show);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHpglIOStyle )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHpglIOStyle )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorInnerPolyLines )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorInnerPolyLines )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorOuterPolyLines )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorOuterPolyLines )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorOtherLines )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorOtherLines )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorOtherPens )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorOtherPens )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen1 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen1 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen2 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen2 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen3 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen3 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen4 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen4 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen5 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen5 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen6 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen6 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen7 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen7 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen8 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen8 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen9 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen9 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen10 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen10 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen11 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen11 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen12 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen12 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen13 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen13 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen14 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen14 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen15 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen15 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen16 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen16 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen17 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen17 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen18 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen18 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen19 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen19 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorPen20 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorPen20 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPenDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPenDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorLinePoints )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorLinePoints )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDrawStyleFlags )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDrawStyleFlags )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewLevel )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Level);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewLevel )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Level);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMaxViewLevel )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Level);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMaxViewLevel )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Level);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGridColor )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGridColor )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewMouseGridX )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewMouseGridX )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewMouseGridY )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewMouseGridY )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScShowFlags )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScShowFlags )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnableShowFlags )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnableShowFlags )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Enable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScJobFileName )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ BSTR *FileName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScJobFileName )( 
            SC_IView2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorModifyBox )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorModifyBox )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorSelection )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorSelection )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetView2D )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ /* external definition not present */ SC_IView2D **View2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveProperties )( 
            SC_IView2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadProperties )( 
            SC_IView2DCtrl * This,
            /* [in] */ BSTR FileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IView2DCtrl * This,
            /* [in] */ LPDISPATCH OpticModule2D);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperties )( 
            SC_IView2DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecCommand )( 
            SC_IView2DCtrl * This,
            /* [in] */ long CmdId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckCommand )( 
            SC_IView2DCtrl * This,
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IView2DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IView2DCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityPropertySheet )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ LPDISPATCH *Sheet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityPropertySheet )( 
            SC_IView2DCtrl * This,
            /* [in] */ LPDISPATCH Sheet);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExecCommandId )( 
            SC_IView2DCtrl * This,
            /* [in] */ BSTR PropertyPageName,
            /* [retval][out] */ long *CmdId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSelectedEntity )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ LPDISPATCH *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScShowContextMenu )( 
            SC_IView2DCtrl * This,
            /* [in] */ long ScreenX,
            /* [in] */ long ScreenY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetEntityListView )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ LPDISPATCH *View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityListView )( 
            SC_IView2DCtrl * This,
            /* [in] */ LPDISPATCH ListView);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHeadUndefined )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHeadUndefined )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead0 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead0 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead1 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead1 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead2 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead2 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead3 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead3 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHeadDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHeadDisplayMode )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMultiHeadAutoSplitMode )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMultiHeadAutoSplitMode )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCopyOffsetX )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCopyOffsetX )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCopyOffsetY )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCopyOffsetY )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEditControlFlags )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEditControlFlags )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetNextPoint )( 
            SC_IView2DCtrl * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScriptEngine )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ LPDISPATCH *Engine);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadScriptModules )( 
            SC_IView2DCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetExecCommandResult )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEnablePenColors )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Enable);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEnablePenColors )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Enable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScIOFlags )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScIOFlags )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCatchDistance )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCatchDistance )( 
            SC_IView2DCtrl * This,
            /* [in] */ double Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenColor )( 
            SC_IView2DCtrl * This,
            /* [in] */ long pen,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenColor )( 
            SC_IView2DCtrl * This,
            /* [in] */ long pen,
            /* [in] */ long Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateObject )( 
            SC_IView2DCtrl * This,
            /* [in] */ BSTR objName,
            /* [retval][out] */ LPDISPATCH *Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorNeighbourPolyLines )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorNeighbourPolyLines )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead4 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead4 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScColorHead5 )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScColorHead5 )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetParameterValue )( 
            SC_IView2DCtrl * This,
            /* [in] */ long param,
            /* [retval][out] */ double *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetParameterValue )( 
            SC_IView2DCtrl * This,
            /* [in] */ long param,
            /* [in] */ double value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisableEvents )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *events);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisableEvents )( 
            SC_IView2DCtrl * This,
            /* [in] */ long events);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewGridLinesMajorX )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *linesX);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewGridLinesMajorX )( 
            SC_IView2DCtrl * This,
            /* [in] */ long linesX);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewGridLinesMajorY )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *linesY);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewGridLinesMajorY )( 
            SC_IView2DCtrl * This,
            /* [in] */ long linesY);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScGridColorMajor )( 
            SC_IView2DCtrl * This,
            /* [retval][out] */ long *Color);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScGridColorMajor )( 
            SC_IView2DCtrl * This,
            /* [in] */ long Color);
        
        END_INTERFACE
    } SC_IView2DCtrlVtbl;

    interface SC_IView2DCtrl
    {
        CONST_VTBL struct SC_IView2DCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView2DCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView2DCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView2DCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView2DCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView2DCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView2DCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView2DCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IView2DCtrl_get_ScBackGroundColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScBackGroundColor(This,Color) ) 

#define SC_IView2DCtrl_put_ScBackGroundColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScBackGroundColor(This,Color) ) 

#define SC_IView2DCtrl_get_ScShowCoordinates(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCoordinates(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowCoordinates(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCoordinates(This,Show) ) 

#define SC_IView2DCtrl_get_ScShowCameraToolbar(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCameraToolbar(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowCameraToolbar(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCameraToolbar(This,Show) ) 

#define SC_IView2DCtrl_get_ScShowCtrlHelp(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowCtrlHelp(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowCtrlHelp(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowCtrlHelp(This,Show) ) 

#define SC_IView2DCtrl_get_ScShowToolsToolbar(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowToolsToolbar(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowToolsToolbar(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowToolsToolbar(This,Show) ) 

#define SC_IView2DCtrl_get_ScWorkingAreaMinX(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMinX(This,Value) ) 

#define SC_IView2DCtrl_put_ScWorkingAreaMinX(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMinX(This,Value) ) 

#define SC_IView2DCtrl_get_ScWorkingAreaMinY(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMinY(This,Value) ) 

#define SC_IView2DCtrl_put_ScWorkingAreaMinY(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMinY(This,Value) ) 

#define SC_IView2DCtrl_get_ScWorkingAreaMaxX(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMaxX(This,Value) ) 

#define SC_IView2DCtrl_put_ScWorkingAreaMaxX(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMaxX(This,Value) ) 

#define SC_IView2DCtrl_get_ScWorkingAreaMaxY(This,Value)	\
    ( (This)->lpVtbl -> get_ScWorkingAreaMaxY(This,Value) ) 

#define SC_IView2DCtrl_put_ScWorkingAreaMaxY(This,Value)	\
    ( (This)->lpVtbl -> put_ScWorkingAreaMaxY(This,Value) ) 

#define SC_IView2DCtrl_get_ScShowWorkingArea(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowWorkingArea(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowWorkingArea(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowWorkingArea(This,Show) ) 

#define SC_IView2DCtrl_get_ScHpglIOResolution(This,Value)	\
    ( (This)->lpVtbl -> get_ScHpglIOResolution(This,Value) ) 

#define SC_IView2DCtrl_put_ScHpglIOResolution(This,Value)	\
    ( (This)->lpVtbl -> put_ScHpglIOResolution(This,Value) ) 

#define SC_IView2DCtrl_get_ScShowViewLevelToolbar(This,Show)	\
    ( (This)->lpVtbl -> get_ScShowViewLevelToolbar(This,Show) ) 

#define SC_IView2DCtrl_put_ScShowViewLevelToolbar(This,Show)	\
    ( (This)->lpVtbl -> put_ScShowViewLevelToolbar(This,Show) ) 

#define SC_IView2DCtrl_get_ScHpglIOStyle(This,Style)	\
    ( (This)->lpVtbl -> get_ScHpglIOStyle(This,Style) ) 

#define SC_IView2DCtrl_put_ScHpglIOStyle(This,Style)	\
    ( (This)->lpVtbl -> put_ScHpglIOStyle(This,Style) ) 

#define SC_IView2DCtrl_get_ScColorInnerPolyLines(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorInnerPolyLines(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorInnerPolyLines(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorInnerPolyLines(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorOuterPolyLines(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorOuterPolyLines(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorOuterPolyLines(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorOuterPolyLines(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorOtherLines(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorOtherLines(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorOtherLines(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorOtherLines(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorOtherPens(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorOtherPens(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorOtherPens(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorOtherPens(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen1(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen1(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen1(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen1(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen2(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen2(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen2(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen2(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen3(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen3(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen3(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen3(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen4(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen4(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen4(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen4(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen5(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen5(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen5(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen5(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen6(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen6(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen6(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen6(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen7(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen7(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen7(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen7(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen8(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen8(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen8(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen8(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen9(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen9(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen9(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen9(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen10(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen10(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen10(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen10(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen11(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen11(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen11(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen11(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen12(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen12(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen12(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen12(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen13(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen13(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen13(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen13(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen14(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen14(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen14(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen14(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen15(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen15(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen15(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen15(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen16(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen16(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen16(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen16(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen17(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen17(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen17(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen17(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen18(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen18(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen18(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen18(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen19(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen19(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen19(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen19(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorPen20(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorPen20(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorPen20(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorPen20(This,Color) ) 

#define SC_IView2DCtrl_get_ScPenDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScPenDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_put_ScPenDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScPenDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_get_ScColorLinePoints(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorLinePoints(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorLinePoints(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorLinePoints(This,Color) ) 

#define SC_IView2DCtrl_get_ScDrawStyleFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDrawStyleFlags(This,Flags) ) 

#define SC_IView2DCtrl_put_ScDrawStyleFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDrawStyleFlags(This,Flags) ) 

#define SC_IView2DCtrl_get_ScViewLevel(This,Level)	\
    ( (This)->lpVtbl -> get_ScViewLevel(This,Level) ) 

#define SC_IView2DCtrl_put_ScViewLevel(This,Level)	\
    ( (This)->lpVtbl -> put_ScViewLevel(This,Level) ) 

#define SC_IView2DCtrl_get_ScMaxViewLevel(This,Level)	\
    ( (This)->lpVtbl -> get_ScMaxViewLevel(This,Level) ) 

#define SC_IView2DCtrl_put_ScMaxViewLevel(This,Level)	\
    ( (This)->lpVtbl -> put_ScMaxViewLevel(This,Level) ) 

#define SC_IView2DCtrl_get_ScGridColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScGridColor(This,Color) ) 

#define SC_IView2DCtrl_put_ScGridColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScGridColor(This,Color) ) 

#define SC_IView2DCtrl_get_ScViewDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScViewDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_put_ScViewDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScViewDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_get_ScViewMouseGridX(This,Value)	\
    ( (This)->lpVtbl -> get_ScViewMouseGridX(This,Value) ) 

#define SC_IView2DCtrl_put_ScViewMouseGridX(This,Value)	\
    ( (This)->lpVtbl -> put_ScViewMouseGridX(This,Value) ) 

#define SC_IView2DCtrl_get_ScViewMouseGridY(This,Value)	\
    ( (This)->lpVtbl -> get_ScViewMouseGridY(This,Value) ) 

#define SC_IView2DCtrl_put_ScViewMouseGridY(This,Value)	\
    ( (This)->lpVtbl -> put_ScViewMouseGridY(This,Value) ) 

#define SC_IView2DCtrl_get_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScShowFlags(This,Flags) ) 

#define SC_IView2DCtrl_put_ScShowFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScShowFlags(This,Flags) ) 

#define SC_IView2DCtrl_get_ScEnableShowFlags(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnableShowFlags(This,Enable) ) 

#define SC_IView2DCtrl_put_ScEnableShowFlags(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnableShowFlags(This,Enable) ) 

#define SC_IView2DCtrl_get_ScJobFileName(This,FileName)	\
    ( (This)->lpVtbl -> get_ScJobFileName(This,FileName) ) 

#define SC_IView2DCtrl_put_ScJobFileName(This,FileName)	\
    ( (This)->lpVtbl -> put_ScJobFileName(This,FileName) ) 

#define SC_IView2DCtrl_get_ScColorModifyBox(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorModifyBox(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorModifyBox(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorModifyBox(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorSelection(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorSelection(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorSelection(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorSelection(This,Color) ) 

#define SC_IView2DCtrl_ScGetView2D(This,View2D)	\
    ( (This)->lpVtbl -> ScGetView2D(This,View2D) ) 

#define SC_IView2DCtrl_ScSaveProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScSaveProperties(This,FileName) ) 

#define SC_IView2DCtrl_ScLoadProperties(This,FileName)	\
    ( (This)->lpVtbl -> ScLoadProperties(This,FileName) ) 

#define SC_IView2DCtrl_ScSetOpticModule2D(This,OpticModule2D)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule2D) ) 

#define SC_IView2DCtrl_ScEditProperties(This)	\
    ( (This)->lpVtbl -> ScEditProperties(This) ) 

#define SC_IView2DCtrl_ScExecCommand(This,CmdId)	\
    ( (This)->lpVtbl -> ScExecCommand(This,CmdId) ) 

#define SC_IView2DCtrl_ScCheckCommand(This,CmdId,Flags,Active)	\
    ( (This)->lpVtbl -> ScCheckCommand(This,CmdId,Flags,Active) ) 

#define SC_IView2DCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IView2DCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IView2DCtrl_ScGetEntityPropertySheet(This,Sheet)	\
    ( (This)->lpVtbl -> ScGetEntityPropertySheet(This,Sheet) ) 

#define SC_IView2DCtrl_ScSetEntityPropertySheet(This,Sheet)	\
    ( (This)->lpVtbl -> ScSetEntityPropertySheet(This,Sheet) ) 

#define SC_IView2DCtrl_ScGetExecCommandId(This,PropertyPageName,CmdId)	\
    ( (This)->lpVtbl -> ScGetExecCommandId(This,PropertyPageName,CmdId) ) 

#define SC_IView2DCtrl_ScGetSelectedEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScGetSelectedEntity(This,Entity) ) 

#define SC_IView2DCtrl_ScShowContextMenu(This,ScreenX,ScreenY)	\
    ( (This)->lpVtbl -> ScShowContextMenu(This,ScreenX,ScreenY) ) 

#define SC_IView2DCtrl_ScGetEntityListView(This,View)	\
    ( (This)->lpVtbl -> ScGetEntityListView(This,View) ) 

#define SC_IView2DCtrl_ScSetEntityListView(This,ListView)	\
    ( (This)->lpVtbl -> ScSetEntityListView(This,ListView) ) 

#define SC_IView2DCtrl_get_ScColorHeadUndefined(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHeadUndefined(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHeadUndefined(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHeadUndefined(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead0(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead0(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead0(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead0(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead1(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead1(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead1(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead1(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead2(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead2(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead2(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead2(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead3(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead3(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead3(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead3(This,Color) ) 

#define SC_IView2DCtrl_get_ScHeadDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScHeadDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_put_ScHeadDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScHeadDisplayMode(This,Mode) ) 

#define SC_IView2DCtrl_get_ScMultiHeadAutoSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScMultiHeadAutoSplitMode(This,Mode) ) 

#define SC_IView2DCtrl_put_ScMultiHeadAutoSplitMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScMultiHeadAutoSplitMode(This,Mode) ) 

#define SC_IView2DCtrl_get_ScCopyOffsetX(This,Value)	\
    ( (This)->lpVtbl -> get_ScCopyOffsetX(This,Value) ) 

#define SC_IView2DCtrl_put_ScCopyOffsetX(This,Value)	\
    ( (This)->lpVtbl -> put_ScCopyOffsetX(This,Value) ) 

#define SC_IView2DCtrl_get_ScCopyOffsetY(This,Value)	\
    ( (This)->lpVtbl -> get_ScCopyOffsetY(This,Value) ) 

#define SC_IView2DCtrl_put_ScCopyOffsetY(This,Value)	\
    ( (This)->lpVtbl -> put_ScCopyOffsetY(This,Value) ) 

#define SC_IView2DCtrl_get_ScEditControlFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScEditControlFlags(This,Flags) ) 

#define SC_IView2DCtrl_put_ScEditControlFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScEditControlFlags(This,Flags) ) 

#define SC_IView2DCtrl_ScSetNextPoint(This,x,y,z,Error)	\
    ( (This)->lpVtbl -> ScSetNextPoint(This,x,y,z,Error) ) 

#define SC_IView2DCtrl_ScGetScriptEngine(This,Engine)	\
    ( (This)->lpVtbl -> ScGetScriptEngine(This,Engine) ) 

#define SC_IView2DCtrl_ScLoadScriptModules(This)	\
    ( (This)->lpVtbl -> ScLoadScriptModules(This) ) 

#define SC_IView2DCtrl_ScGetExecCommandResult(This,Result)	\
    ( (This)->lpVtbl -> ScGetExecCommandResult(This,Result) ) 

#define SC_IView2DCtrl_get_ScEnablePenColors(This,Enable)	\
    ( (This)->lpVtbl -> get_ScEnablePenColors(This,Enable) ) 

#define SC_IView2DCtrl_put_ScEnablePenColors(This,Enable)	\
    ( (This)->lpVtbl -> put_ScEnablePenColors(This,Enable) ) 

#define SC_IView2DCtrl_get_ScIOFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScIOFlags(This,Flags) ) 

#define SC_IView2DCtrl_put_ScIOFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScIOFlags(This,Flags) ) 

#define SC_IView2DCtrl_get_ScCatchDistance(This,Value)	\
    ( (This)->lpVtbl -> get_ScCatchDistance(This,Value) ) 

#define SC_IView2DCtrl_put_ScCatchDistance(This,Value)	\
    ( (This)->lpVtbl -> put_ScCatchDistance(This,Value) ) 

#define SC_IView2DCtrl_ScGetPenColor(This,pen,Color)	\
    ( (This)->lpVtbl -> ScGetPenColor(This,pen,Color) ) 

#define SC_IView2DCtrl_ScSetPenColor(This,pen,Color)	\
    ( (This)->lpVtbl -> ScSetPenColor(This,pen,Color) ) 

#define SC_IView2DCtrl_ScCreateObject(This,objName,Entity)	\
    ( (This)->lpVtbl -> ScCreateObject(This,objName,Entity) ) 

#define SC_IView2DCtrl_get_ScColorNeighbourPolyLines(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorNeighbourPolyLines(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorNeighbourPolyLines(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorNeighbourPolyLines(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead4(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead4(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead4(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead4(This,Color) ) 

#define SC_IView2DCtrl_get_ScColorHead5(This,Color)	\
    ( (This)->lpVtbl -> get_ScColorHead5(This,Color) ) 

#define SC_IView2DCtrl_put_ScColorHead5(This,Color)	\
    ( (This)->lpVtbl -> put_ScColorHead5(This,Color) ) 

#define SC_IView2DCtrl_ScGetParameterValue(This,param,value)	\
    ( (This)->lpVtbl -> ScGetParameterValue(This,param,value) ) 

#define SC_IView2DCtrl_ScSetParameterValue(This,param,value)	\
    ( (This)->lpVtbl -> ScSetParameterValue(This,param,value) ) 

#define SC_IView2DCtrl_get_ScDisableEvents(This,events)	\
    ( (This)->lpVtbl -> get_ScDisableEvents(This,events) ) 

#define SC_IView2DCtrl_put_ScDisableEvents(This,events)	\
    ( (This)->lpVtbl -> put_ScDisableEvents(This,events) ) 

#define SC_IView2DCtrl_get_ScViewGridLinesMajorX(This,linesX)	\
    ( (This)->lpVtbl -> get_ScViewGridLinesMajorX(This,linesX) ) 

#define SC_IView2DCtrl_put_ScViewGridLinesMajorX(This,linesX)	\
    ( (This)->lpVtbl -> put_ScViewGridLinesMajorX(This,linesX) ) 

#define SC_IView2DCtrl_get_ScViewGridLinesMajorY(This,linesY)	\
    ( (This)->lpVtbl -> get_ScViewGridLinesMajorY(This,linesY) ) 

#define SC_IView2DCtrl_put_ScViewGridLinesMajorY(This,linesY)	\
    ( (This)->lpVtbl -> put_ScViewGridLinesMajorY(This,linesY) ) 

#define SC_IView2DCtrl_get_ScGridColorMajor(This,Color)	\
    ( (This)->lpVtbl -> get_ScGridColorMajor(This,Color) ) 

#define SC_IView2DCtrl_put_ScGridColorMajor(This,Color)	\
    ( (This)->lpVtbl -> put_ScGridColorMajor(This,Color) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead0_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead0_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorHead1_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorHead1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead1_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorHead2_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorHead2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead2_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorHead3_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorHead3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead3_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead3_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScHeadDisplayMode_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IView2DCtrl_get_ScHeadDisplayMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScHeadDisplayMode_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IView2DCtrl_put_ScHeadDisplayMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScMultiHeadAutoSplitMode_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Mode);


void __RPC_STUB SC_IView2DCtrl_get_ScMultiHeadAutoSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScMultiHeadAutoSplitMode_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Mode);


void __RPC_STUB SC_IView2DCtrl_put_ScMultiHeadAutoSplitMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScCopyOffsetX_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IView2DCtrl_get_ScCopyOffsetX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScCopyOffsetX_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ double Value);


void __RPC_STUB SC_IView2DCtrl_put_ScCopyOffsetX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScCopyOffsetY_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IView2DCtrl_get_ScCopyOffsetY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScCopyOffsetY_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ double Value);


void __RPC_STUB SC_IView2DCtrl_put_ScCopyOffsetY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScEditControlFlags_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IView2DCtrl_get_ScEditControlFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScEditControlFlags_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IView2DCtrl_put_ScEditControlFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScSetNextPoint_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ double x,
    /* [in] */ double y,
    /* [in] */ double z,
    /* [retval][out] */ long *Error);


void __RPC_STUB SC_IView2DCtrl_ScSetNextPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScGetScriptEngine_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ LPDISPATCH *Engine);


void __RPC_STUB SC_IView2DCtrl_ScGetScriptEngine_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScLoadScriptModules_Proxy( 
    SC_IView2DCtrl * This);


void __RPC_STUB SC_IView2DCtrl_ScLoadScriptModules_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScGetExecCommandResult_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Result);


void __RPC_STUB SC_IView2DCtrl_ScGetExecCommandResult_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScEnablePenColors_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Enable);


void __RPC_STUB SC_IView2DCtrl_get_ScEnablePenColors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScEnablePenColors_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Enable);


void __RPC_STUB SC_IView2DCtrl_put_ScEnablePenColors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScIOFlags_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Flags);


void __RPC_STUB SC_IView2DCtrl_get_ScIOFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScIOFlags_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Flags);


void __RPC_STUB SC_IView2DCtrl_put_ScIOFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScCatchDistance_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ double *Value);


void __RPC_STUB SC_IView2DCtrl_get_ScCatchDistance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScCatchDistance_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ double Value);


void __RPC_STUB SC_IView2DCtrl_put_ScCatchDistance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScGetPenColor_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long pen,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_ScGetPenColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScSetPenColor_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long pen,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_ScSetPenColor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScCreateObject_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ BSTR objName,
    /* [retval][out] */ LPDISPATCH *Entity);


void __RPC_STUB SC_IView2DCtrl_ScCreateObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorNeighbourPolyLines_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorNeighbourPolyLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorNeighbourPolyLines_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorNeighbourPolyLines_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorHead4_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorHead4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead4_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead4_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScColorHead5_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScColorHead5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScColorHead5_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScColorHead5_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScGetParameterValue_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long param,
    /* [retval][out] */ double *value);


void __RPC_STUB SC_IView2DCtrl_ScGetParameterValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_ScSetParameterValue_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long param,
    /* [in] */ double value);


void __RPC_STUB SC_IView2DCtrl_ScSetParameterValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScDisableEvents_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *events);


void __RPC_STUB SC_IView2DCtrl_get_ScDisableEvents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScDisableEvents_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long events);


void __RPC_STUB SC_IView2DCtrl_put_ScDisableEvents_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScViewGridLinesMajorX_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *linesX);


void __RPC_STUB SC_IView2DCtrl_get_ScViewGridLinesMajorX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScViewGridLinesMajorX_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long linesX);


void __RPC_STUB SC_IView2DCtrl_put_ScViewGridLinesMajorX_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScViewGridLinesMajorY_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *linesY);


void __RPC_STUB SC_IView2DCtrl_get_ScViewGridLinesMajorY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScViewGridLinesMajorY_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long linesY);


void __RPC_STUB SC_IView2DCtrl_put_ScViewGridLinesMajorY_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_get_ScGridColorMajor_Proxy( 
    SC_IView2DCtrl * This,
    /* [retval][out] */ long *Color);


void __RPC_STUB SC_IView2DCtrl_get_ScGridColorMajor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE SC_IView2DCtrl_put_ScGridColorMajor_Proxy( 
    SC_IView2DCtrl * This,
    /* [in] */ long Color);


void __RPC_STUB SC_IView2DCtrl_put_ScGridColorMajor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __SC_IView2DCtrl_INTERFACE_DEFINED__ */


#ifndef __SC_IView2DCtrlEvents_DISPINTERFACE_DEFINED__
#define __SC_IView2DCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IView2DCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IView2DCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("62CA3363-764A-11d1-8D8C-008048E1AD3F")
    SC_IView2DCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IView2DCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView2DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView2DCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView2DCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView2DCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView2DCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView2DCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView2DCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IView2DCtrlEventsVtbl;

    interface SC_IView2DCtrlEvents
    {
        CONST_VTBL struct SC_IView2DCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView2DCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView2DCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView2DCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView2DCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView2DCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView2DCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView2DCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IView2DCtrlEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScView2DCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("62CA3364-764A-11d1-8D8C-008048E1AD3F")
ScView2DCtrl;
#endif
#endif /* __ScapsSamView2DCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


