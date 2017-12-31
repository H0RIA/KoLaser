

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:31 2017
 */
/* Compiler settings for d:\scaps\dll_source\gui\com\include\sc_gui_type_lib.idl:
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


#ifndef __sc_gui_type_lib_h__
#define __sc_gui_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IView_FWD_DEFINED__
#define __SC_IView_FWD_DEFINED__
typedef interface SC_IView SC_IView;
#endif 	/* __SC_IView_FWD_DEFINED__ */


#ifndef __SC_IView2D_FWD_DEFINED__
#define __SC_IView2D_FWD_DEFINED__
typedef interface SC_IView2D SC_IView2D;
#endif 	/* __SC_IView2D_FWD_DEFINED__ */


#ifndef __SC_IView3D_FWD_DEFINED__
#define __SC_IView3D_FWD_DEFINED__
typedef interface SC_IView3D SC_IView3D;
#endif 	/* __SC_IView3D_FWD_DEFINED__ */


#ifndef __SC_IControlButton_FWD_DEFINED__
#define __SC_IControlButton_FWD_DEFINED__
typedef interface SC_IControlButton SC_IControlButton;
#endif 	/* __SC_IControlButton_FWD_DEFINED__ */


#ifndef __SC_IGuiMessageManager_FWD_DEFINED__
#define __SC_IGuiMessageManager_FWD_DEFINED__
typedef interface SC_IGuiMessageManager SC_IGuiMessageManager;
#endif 	/* __SC_IGuiMessageManager_FWD_DEFINED__ */


#ifndef __ScView_FWD_DEFINED__
#define __ScView_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScView ScView;
#else
typedef struct ScView ScView;
#endif /* __cplusplus */

#endif 	/* __ScView_FWD_DEFINED__ */


#ifndef __ScView2D_FWD_DEFINED__
#define __ScView2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScView2D ScView2D;
#else
typedef struct ScView2D ScView2D;
#endif /* __cplusplus */

#endif 	/* __ScView2D_FWD_DEFINED__ */


#ifndef __ScView3D_FWD_DEFINED__
#define __ScView3D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScView3D ScView3D;
#else
typedef struct ScView3D ScView3D;
#endif /* __cplusplus */

#endif 	/* __ScView3D_FWD_DEFINED__ */


#ifndef __ScControlButton_FWD_DEFINED__
#define __ScControlButton_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlButton ScControlButton;
#else
typedef struct ScControlButton ScControlButton;
#endif /* __cplusplus */

#endif 	/* __ScControlButton_FWD_DEFINED__ */


#ifndef __ScGuiMessageManager_FWD_DEFINED__
#define __ScGuiMessageManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScGuiMessageManager ScGuiMessageManager;
#else
typedef struct ScGuiMessageManager ScGuiMessageManager;
#endif /* __cplusplus */

#endif 	/* __ScGuiMessageManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_gui_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_entity_groups_type_lib.h"



extern RPC_IF_HANDLE __MIDL_itf_sc_gui_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_gui_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamGui_LIBRARY_DEFINED__
#define __ScapsSamGui_LIBRARY_DEFINED__

/* library ScapsSamGui */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 1)
typedef struct sc_com_view_info_tag
    {
    SC_IView *View;
    /* external definition not present */ SC_IEntity *Entity;
    /* external definition not present */ SC_IEntity *Element;
    /* external definition not present */ SC_IEntity *EntityPicked;
    long Item;
    long ItemPicked;
    long Type;
    long Flags;
    long Modify;
    double XWorld;
    double YWorld;
    double ZWorld;
    long XScreen;
    long YScreen;
    } 	sc_com_view_info;


#pragma pack(pop)
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("9B111B06-868B-43ea-BD2E-612C16031838") 
enum ScComViewVisualFlags
    {	ScComViewVisualFlagEnable	= 1,
	ScComViewVisualFlagLineThicknessFieldUnits	= 2
    } 	ScComViewVisualFlags;


EXTERN_C const IID LIBID_ScapsSamGui;

#ifndef __SC_IView_INTERFACE_DEFINED__
#define __SC_IView_INTERFACE_DEFINED__

/* interface SC_IView */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA589B72-409C-11d1-96E6-008048EEE00C")
    SC_IView : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoView( 
            /* [in] */ long AutoView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoView( 
            /* [retval][out] */ long *AutoView) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewMode( 
            /* [in] */ long ViewMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewMode( 
            /* [retval][out] */ long *ViewMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *TypeId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNewVisual( 
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateCamera( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleCamera( 
            double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToEntity( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToVisible( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( 
            long All) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowBreak( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasVisual( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToSelected( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMouseGrid( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMouseGrid( 
            double *X,
            double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScModifyBoxColor( 
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScModifyBoxColor( 
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHWnd( 
            /* [retval][out] */ HWND *Hwnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetView2DCtrl( 
            /* [retval][out] */ LPDISPATCH *disp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoView )( 
            SC_IView * This,
            /* [in] */ long AutoView);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoView )( 
            SC_IView * This,
            /* [retval][out] */ long *AutoView);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewMode )( 
            SC_IView * This,
            /* [in] */ long ViewMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewMode )( 
            SC_IView * This,
            /* [retval][out] */ long *ViewMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColor )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetColor )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyle )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyle )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDisplay )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDisplay )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVisible )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetVisible )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IView * This,
            /* [retval][out] */ long *TypeId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IView * This,
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNewVisual )( 
            SC_IView * This,
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateCamera )( 
            SC_IView * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleCamera )( 
            SC_IView * This,
            double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToEntity )( 
            SC_IView * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToVisible )( 
            SC_IView * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IView * This,
            long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowStart )( 
            SC_IView * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowBreak )( 
            SC_IView * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasVisual )( 
            SC_IView * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToSelected )( 
            SC_IView * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayMode )( 
            SC_IView * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayMode )( 
            SC_IView * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMouseGrid )( 
            SC_IView * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMouseGrid )( 
            SC_IView * This,
            double *X,
            double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScModifyBoxColor )( 
            SC_IView * This,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScModifyBoxColor )( 
            SC_IView * This,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHWnd )( 
            SC_IView * This,
            /* [retval][out] */ HWND *Hwnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetView2DCtrl )( 
            SC_IView * This,
            /* [retval][out] */ LPDISPATCH *disp);
        
        END_INTERFACE
    } SC_IViewVtbl;

    interface SC_IView
    {
        CONST_VTBL struct SC_IViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IView_put_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> put_ScAutoView(This,AutoView) ) 

#define SC_IView_get_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> get_ScAutoView(This,AutoView) ) 

#define SC_IView_put_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> put_ScViewMode(This,ViewMode) ) 

#define SC_IView_get_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> get_ScViewMode(This,ViewMode) ) 

#define SC_IView_ScSetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScSetColor(This,entity,color_id,Color) ) 

#define SC_IView_ScGetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScGetColor(This,entity,color_id,Color) ) 

#define SC_IView_ScSetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScSetStyle(This,entity,style_id,Style) ) 

#define SC_IView_ScGetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScGetStyle(This,entity,style_id,Style) ) 

#define SC_IView_ScSetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScSetDisplay(This,entity,display_id,Display) ) 

#define SC_IView_ScGetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScGetDisplay(This,entity,display_id,Display) ) 

#define SC_IView_ScSetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScSetVisible(This,entity,Visible) ) 

#define SC_IView_ScGetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScGetVisible(This,entity,Visible) ) 

#define SC_IView_ScTypeId(This,TypeId)	\
    ( (This)->lpVtbl -> ScTypeId(This,TypeId) ) 

#define SC_IView_ScIsTypeOf(This,TypeId,IsType)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,TypeId,IsType) ) 

#define SC_IView_ScNewVisual(This,Entity,Overwrite)	\
    ( (This)->lpVtbl -> ScNewVisual(This,Entity,Overwrite) ) 

#define SC_IView_ScTranslateCamera(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslateCamera(This,X,Y) ) 

#define SC_IView_ScScaleCamera(This,Scale)	\
    ( (This)->lpVtbl -> ScScaleCamera(This,Scale) ) 

#define SC_IView_ScFitToEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScFitToEntity(This,Entity) ) 

#define SC_IView_ScFitToVisible(This)	\
    ( (This)->lpVtbl -> ScFitToVisible(This) ) 

#define SC_IView_ScUpdate(This,All)	\
    ( (This)->lpVtbl -> ScUpdate(This,All) ) 

#define SC_IView_ScZoomMouseWindowStart(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowStart(This) ) 

#define SC_IView_ScZoomMouseWindowBreak(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowBreak(This) ) 

#define SC_IView_ScHasVisual(This,entity,Visual)	\
    ( (This)->lpVtbl -> ScHasVisual(This,entity,Visual) ) 

#define SC_IView_ScFitToSelected(This)	\
    ( (This)->lpVtbl -> ScFitToSelected(This) ) 

#define SC_IView_put_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScDisplayMode(This,Mode) ) 

#define SC_IView_get_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScDisplayMode(This,Mode) ) 

#define SC_IView_ScSetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScSetMouseGrid(This,X,Y) ) 

#define SC_IView_ScGetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetMouseGrid(This,X,Y) ) 

#define SC_IView_put_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScModifyBoxColor(This,Color) ) 

#define SC_IView_get_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScModifyBoxColor(This,Color) ) 

#define SC_IView_ScGetHWnd(This,Hwnd)	\
    ( (This)->lpVtbl -> ScGetHWnd(This,Hwnd) ) 

#define SC_IView_ScGetView2DCtrl(This,disp)	\
    ( (This)->lpVtbl -> ScGetView2DCtrl(This,disp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IView_INTERFACE_DEFINED__ */


#ifndef __SC_IView2D_INTERFACE_DEFINED__
#define __SC_IView2D_INTERFACE_DEFINED__

/* interface SC_IView2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IView2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67A88DB1-75F4-11d1-8D8C-008048E1AD3F")
    SC_IView2D : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoView( 
            /* [in] */ long AutoView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoView( 
            /* [retval][out] */ long *AutoView) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewMode( 
            /* [in] */ long ViewMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewMode( 
            /* [retval][out] */ long *ViewMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *TypeId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNewVisual( 
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateCamera( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleCamera( 
            double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToEntity( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToVisible( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( 
            long All) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowBreak( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasVisual( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToSelected( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMouseMoveMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMouseMoveMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEntityGroup( 
            /* [in] */ /* external definition not present */ SC_IEntities2D *Entities) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEntityGroup( 
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **Entities) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToBox( 
            double X1,
            double Y1,
            double X2,
            double Y2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScreenPosCursor( 
            long *X,
            long *Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScreenPosPicked( 
            long *X,
            long *Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorldPosCursor( 
            double *X,
            double *Y,
            long *XValid,
            long *YValid,
            long *OnEntity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorldPosPicked( 
            double *X,
            double *Y,
            long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSystemGroup( 
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScModifyBoxFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScModifyBoxFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMouseGrid( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMouseGrid( 
            double *X,
            double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScModifyBoxColor( 
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScModifyBoxColor( 
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHWnd( 
            /* [retval][out] */ HWND *Hwnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScreenToWorld( 
            /* [in] */ long ScreenX,
            /* [in] */ long ScreenY,
            /* [in] */ double *WorldX,
            /* [in] */ double *WorldY,
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWorldToScreen( 
            /* [in] */ double WorldX,
            /* [in] */ double WorldY,
            /* [in] */ long *ScreenX,
            /* [in] */ long *ScreenY,
            /* [retval][out] */ long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetUseJobRoot( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetUseJobRoot( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetView2DCtrl( 
            /* [retval][out] */ LPDISPATCH *disp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IView2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoView )( 
            SC_IView2D * This,
            /* [in] */ long AutoView);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoView )( 
            SC_IView2D * This,
            /* [retval][out] */ long *AutoView);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewMode )( 
            SC_IView2D * This,
            /* [in] */ long ViewMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewMode )( 
            SC_IView2D * This,
            /* [retval][out] */ long *ViewMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColor )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetColor )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyle )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyle )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDisplay )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDisplay )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVisible )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetVisible )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IView2D * This,
            /* [retval][out] */ long *TypeId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IView2D * This,
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNewVisual )( 
            SC_IView2D * This,
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateCamera )( 
            SC_IView2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleCamera )( 
            SC_IView2D * This,
            double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToEntity )( 
            SC_IView2D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToVisible )( 
            SC_IView2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IView2D * This,
            long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowStart )( 
            SC_IView2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowBreak )( 
            SC_IView2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasVisual )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToSelected )( 
            SC_IView2D * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMouseMoveMode )( 
            SC_IView2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMouseMoveMode )( 
            SC_IView2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntityGroup )( 
            SC_IView2D * This,
            /* [in] */ /* external definition not present */ SC_IEntities2D *Entities);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntityGroup )( 
            SC_IView2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **Entities);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToBox )( 
            SC_IView2D * This,
            double X1,
            double Y1,
            double X2,
            double Y2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScreenPosCursor )( 
            SC_IView2D * This,
            long *X,
            long *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScreenPosPicked )( 
            SC_IView2D * This,
            long *X,
            long *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorldPosCursor )( 
            SC_IView2D * This,
            double *X,
            double *Y,
            long *XValid,
            long *YValid,
            long *OnEntity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorldPosPicked )( 
            SC_IView2D * This,
            double *X,
            double *Y,
            long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSystemGroup )( 
            SC_IView2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntities2D **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScModifyBoxFlags )( 
            SC_IView2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScModifyBoxFlags )( 
            SC_IView2D * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayMode )( 
            SC_IView2D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayMode )( 
            SC_IView2D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMouseGrid )( 
            SC_IView2D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMouseGrid )( 
            SC_IView2D * This,
            double *X,
            double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScModifyBoxColor )( 
            SC_IView2D * This,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScModifyBoxColor )( 
            SC_IView2D * This,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHWnd )( 
            SC_IView2D * This,
            /* [retval][out] */ HWND *Hwnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScreenToWorld )( 
            SC_IView2D * This,
            /* [in] */ long ScreenX,
            /* [in] */ long ScreenY,
            /* [in] */ double *WorldX,
            /* [in] */ double *WorldY,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWorldToScreen )( 
            SC_IView2D * This,
            /* [in] */ double WorldX,
            /* [in] */ double WorldY,
            /* [in] */ long *ScreenX,
            /* [in] */ long *ScreenY,
            /* [retval][out] */ long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetUseJobRoot )( 
            SC_IView2D * This,
            /* [in] */ long Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetUseJobRoot )( 
            SC_IView2D * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetView2DCtrl )( 
            SC_IView2D * This,
            /* [retval][out] */ LPDISPATCH *disp);
        
        END_INTERFACE
    } SC_IView2DVtbl;

    interface SC_IView2D
    {
        CONST_VTBL struct SC_IView2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IView2D_put_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> put_ScAutoView(This,AutoView) ) 

#define SC_IView2D_get_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> get_ScAutoView(This,AutoView) ) 

#define SC_IView2D_put_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> put_ScViewMode(This,ViewMode) ) 

#define SC_IView2D_get_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> get_ScViewMode(This,ViewMode) ) 

#define SC_IView2D_ScSetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScSetColor(This,entity,color_id,Color) ) 

#define SC_IView2D_ScGetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScGetColor(This,entity,color_id,Color) ) 

#define SC_IView2D_ScSetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScSetStyle(This,entity,style_id,Style) ) 

#define SC_IView2D_ScGetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScGetStyle(This,entity,style_id,Style) ) 

#define SC_IView2D_ScSetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScSetDisplay(This,entity,display_id,Display) ) 

#define SC_IView2D_ScGetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScGetDisplay(This,entity,display_id,Display) ) 

#define SC_IView2D_ScSetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScSetVisible(This,entity,Visible) ) 

#define SC_IView2D_ScGetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScGetVisible(This,entity,Visible) ) 

#define SC_IView2D_ScTypeId(This,TypeId)	\
    ( (This)->lpVtbl -> ScTypeId(This,TypeId) ) 

#define SC_IView2D_ScIsTypeOf(This,TypeId,IsType)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,TypeId,IsType) ) 

#define SC_IView2D_ScNewVisual(This,Entity,Overwrite)	\
    ( (This)->lpVtbl -> ScNewVisual(This,Entity,Overwrite) ) 

#define SC_IView2D_ScTranslateCamera(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslateCamera(This,X,Y) ) 

#define SC_IView2D_ScScaleCamera(This,Scale)	\
    ( (This)->lpVtbl -> ScScaleCamera(This,Scale) ) 

#define SC_IView2D_ScFitToEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScFitToEntity(This,Entity) ) 

#define SC_IView2D_ScFitToVisible(This)	\
    ( (This)->lpVtbl -> ScFitToVisible(This) ) 

#define SC_IView2D_ScUpdate(This,All)	\
    ( (This)->lpVtbl -> ScUpdate(This,All) ) 

#define SC_IView2D_ScZoomMouseWindowStart(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowStart(This) ) 

#define SC_IView2D_ScZoomMouseWindowBreak(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowBreak(This) ) 

#define SC_IView2D_ScHasVisual(This,entity,Visual)	\
    ( (This)->lpVtbl -> ScHasVisual(This,entity,Visual) ) 

#define SC_IView2D_ScFitToSelected(This)	\
    ( (This)->lpVtbl -> ScFitToSelected(This) ) 

#define SC_IView2D_put_ScMouseMoveMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScMouseMoveMode(This,Mode) ) 

#define SC_IView2D_get_ScMouseMoveMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScMouseMoveMode(This,Mode) ) 

#define SC_IView2D_put_ScEntityGroup(This,Entities)	\
    ( (This)->lpVtbl -> put_ScEntityGroup(This,Entities) ) 

#define SC_IView2D_get_ScEntityGroup(This,Entities)	\
    ( (This)->lpVtbl -> get_ScEntityGroup(This,Entities) ) 

#define SC_IView2D_ScFitToBox(This,X1,Y1,X2,Y2)	\
    ( (This)->lpVtbl -> ScFitToBox(This,X1,Y1,X2,Y2) ) 

#define SC_IView2D_ScGetScreenPosCursor(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetScreenPosCursor(This,X,Y) ) 

#define SC_IView2D_ScGetScreenPosPicked(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetScreenPosPicked(This,X,Y) ) 

#define SC_IView2D_ScGetWorldPosCursor(This,X,Y,XValid,YValid,OnEntity)	\
    ( (This)->lpVtbl -> ScGetWorldPosCursor(This,X,Y,XValid,YValid,OnEntity) ) 

#define SC_IView2D_ScGetWorldPosPicked(This,X,Y,Valid)	\
    ( (This)->lpVtbl -> ScGetWorldPosPicked(This,X,Y,Valid) ) 

#define SC_IView2D_ScGetSystemGroup(This,retval)	\
    ( (This)->lpVtbl -> ScGetSystemGroup(This,retval) ) 

#define SC_IView2D_put_ScModifyBoxFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScModifyBoxFlags(This,Flags) ) 

#define SC_IView2D_get_ScModifyBoxFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScModifyBoxFlags(This,Flags) ) 

#define SC_IView2D_put_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScDisplayMode(This,Mode) ) 

#define SC_IView2D_get_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScDisplayMode(This,Mode) ) 

#define SC_IView2D_ScSetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScSetMouseGrid(This,X,Y) ) 

#define SC_IView2D_ScGetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetMouseGrid(This,X,Y) ) 

#define SC_IView2D_put_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScModifyBoxColor(This,Color) ) 

#define SC_IView2D_get_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScModifyBoxColor(This,Color) ) 

#define SC_IView2D_ScGetHWnd(This,Hwnd)	\
    ( (This)->lpVtbl -> ScGetHWnd(This,Hwnd) ) 

#define SC_IView2D_ScScreenToWorld(This,ScreenX,ScreenY,WorldX,WorldY,Valid)	\
    ( (This)->lpVtbl -> ScScreenToWorld(This,ScreenX,ScreenY,WorldX,WorldY,Valid) ) 

#define SC_IView2D_ScWorldToScreen(This,WorldX,WorldY,ScreenX,ScreenY,Valid)	\
    ( (This)->lpVtbl -> ScWorldToScreen(This,WorldX,WorldY,ScreenX,ScreenY,Valid) ) 

#define SC_IView2D_ScSetUseJobRoot(This,Use)	\
    ( (This)->lpVtbl -> ScSetUseJobRoot(This,Use) ) 

#define SC_IView2D_ScGetUseJobRoot(This,Use)	\
    ( (This)->lpVtbl -> ScGetUseJobRoot(This,Use) ) 

#define SC_IView2D_ScGetView2DCtrl(This,disp)	\
    ( (This)->lpVtbl -> ScGetView2DCtrl(This,disp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IView2D_INTERFACE_DEFINED__ */


#ifndef __SC_IView3D_INTERFACE_DEFINED__
#define __SC_IView3D_INTERFACE_DEFINED__

/* interface SC_IView3D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IView3D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67A88DB2-75F4-11d1-8D8C-008048E1AD3F")
    SC_IView3D : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoView( 
            /* [in] */ long AutoView) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoView( 
            /* [retval][out] */ long *AutoView) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScViewMode( 
            /* [in] */ long ViewMode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScViewMode( 
            /* [retval][out] */ long *ViewMode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetColor( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetStyle( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDisplay( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetVisible( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTypeId( 
            /* [retval][out] */ long *TypeId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsTypeOf( 
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScNewVisual( 
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTranslateCamera( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScScaleCamera( 
            double Scale) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToEntity( 
            /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToVisible( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( 
            long All) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowStart( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScZoomMouseWindowBreak( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasVisual( 
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToSelected( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMouseMoveMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMouseMoveMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCameraStandardView( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCameraStandardView( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEntityGroup( 
            /* [in] */ /* external definition not present */ SC_IEntities3D *Entities) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEntityGroup( 
            /* [retval][out] */ /* external definition not present */ SC_IEntities3D **Entities) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRotateCamera( 
            double Alpha,
            double Beta,
            double Gamma) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFitToBox( 
            double X1,
            double Y1,
            double Z1,
            double X2,
            double Y2,
            double Z2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScreenPosCursor( 
            long *X,
            long *Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetScreenPosPicked( 
            long *X,
            long *Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorldPosCursor( 
            double *X,
            double *Y,
            double *Z,
            long *XValid,
            long *YValid,
            long *ZValid,
            long *OnEntity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetWorldPosPicked( 
            double *X,
            double *Y,
            double *Z,
            long *Valid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetSystemGroup( 
            /* [retval][out] */ /* external definition not present */ SC_IEntities3D **retval) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetMouseGrid( 
            double X,
            double Y) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetMouseGrid( 
            double *X,
            double *Y) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScModifyBoxColor( 
            /* [in] */ OLE_COLOR Color) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScModifyBoxColor( 
            /* [retval][out] */ OLE_COLOR *Color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetHWnd( 
            /* [retval][out] */ HWND *Hwnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetView2DCtrl( 
            /* [retval][out] */ LPDISPATCH *disp) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IView3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IView3D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IView3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IView3D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IView3D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IView3D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IView3D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IView3D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoView )( 
            SC_IView3D * This,
            /* [in] */ long AutoView);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoView )( 
            SC_IView3D * This,
            /* [retval][out] */ long *AutoView);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScViewMode )( 
            SC_IView3D * This,
            /* [in] */ long ViewMode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScViewMode )( 
            SC_IView3D * This,
            /* [retval][out] */ long *ViewMode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColor )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetColor )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long color_id,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetStyle )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [in] */ long Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetStyle )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long style_id,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDisplay )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [in] */ long Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDisplay )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long display_id,
            /* [retval][out] */ long *Display);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetVisible )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [in] */ long Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetVisible )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visible);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IView3D * This,
            /* [retval][out] */ long *TypeId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IView3D * This,
            /* [in] */ long TypeId,
            /* [retval][out] */ long *IsType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScNewVisual )( 
            SC_IView3D * This,
            /* external definition not present */ SC_IEntity *Entity,
            long Overwrite);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTranslateCamera )( 
            SC_IView3D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScScaleCamera )( 
            SC_IView3D * This,
            double Scale);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToEntity )( 
            SC_IView3D * This,
            /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToVisible )( 
            SC_IView3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IView3D * This,
            long All);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowStart )( 
            SC_IView3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScZoomMouseWindowBreak )( 
            SC_IView3D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasVisual )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntity *entity,
            /* [retval][out] */ long *Visual);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToSelected )( 
            SC_IView3D * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMouseMoveMode )( 
            SC_IView3D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMouseMoveMode )( 
            SC_IView3D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCameraStandardView )( 
            SC_IView3D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCameraStandardView )( 
            SC_IView3D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEntityGroup )( 
            SC_IView3D * This,
            /* [in] */ /* external definition not present */ SC_IEntities3D *Entities);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEntityGroup )( 
            SC_IView3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntities3D **Entities);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRotateCamera )( 
            SC_IView3D * This,
            double Alpha,
            double Beta,
            double Gamma);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFitToBox )( 
            SC_IView3D * This,
            double X1,
            double Y1,
            double Z1,
            double X2,
            double Y2,
            double Z2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScreenPosCursor )( 
            SC_IView3D * This,
            long *X,
            long *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetScreenPosPicked )( 
            SC_IView3D * This,
            long *X,
            long *Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorldPosCursor )( 
            SC_IView3D * This,
            double *X,
            double *Y,
            double *Z,
            long *XValid,
            long *YValid,
            long *ZValid,
            long *OnEntity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetWorldPosPicked )( 
            SC_IView3D * This,
            double *X,
            double *Y,
            double *Z,
            long *Valid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetSystemGroup )( 
            SC_IView3D * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntities3D **retval);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayMode )( 
            SC_IView3D * This,
            /* [in] */ long Mode);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayMode )( 
            SC_IView3D * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetMouseGrid )( 
            SC_IView3D * This,
            double X,
            double Y);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetMouseGrid )( 
            SC_IView3D * This,
            double *X,
            double *Y);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScModifyBoxColor )( 
            SC_IView3D * This,
            /* [in] */ OLE_COLOR Color);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScModifyBoxColor )( 
            SC_IView3D * This,
            /* [retval][out] */ OLE_COLOR *Color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetHWnd )( 
            SC_IView3D * This,
            /* [retval][out] */ HWND *Hwnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetView2DCtrl )( 
            SC_IView3D * This,
            /* [retval][out] */ LPDISPATCH *disp);
        
        END_INTERFACE
    } SC_IView3DVtbl;

    interface SC_IView3D
    {
        CONST_VTBL struct SC_IView3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IView3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IView3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IView3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IView3D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IView3D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IView3D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IView3D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IView3D_put_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> put_ScAutoView(This,AutoView) ) 

#define SC_IView3D_get_ScAutoView(This,AutoView)	\
    ( (This)->lpVtbl -> get_ScAutoView(This,AutoView) ) 

#define SC_IView3D_put_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> put_ScViewMode(This,ViewMode) ) 

#define SC_IView3D_get_ScViewMode(This,ViewMode)	\
    ( (This)->lpVtbl -> get_ScViewMode(This,ViewMode) ) 

#define SC_IView3D_ScSetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScSetColor(This,entity,color_id,Color) ) 

#define SC_IView3D_ScGetColor(This,entity,color_id,Color)	\
    ( (This)->lpVtbl -> ScGetColor(This,entity,color_id,Color) ) 

#define SC_IView3D_ScSetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScSetStyle(This,entity,style_id,Style) ) 

#define SC_IView3D_ScGetStyle(This,entity,style_id,Style)	\
    ( (This)->lpVtbl -> ScGetStyle(This,entity,style_id,Style) ) 

#define SC_IView3D_ScSetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScSetDisplay(This,entity,display_id,Display) ) 

#define SC_IView3D_ScGetDisplay(This,entity,display_id,Display)	\
    ( (This)->lpVtbl -> ScGetDisplay(This,entity,display_id,Display) ) 

#define SC_IView3D_ScSetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScSetVisible(This,entity,Visible) ) 

#define SC_IView3D_ScGetVisible(This,entity,Visible)	\
    ( (This)->lpVtbl -> ScGetVisible(This,entity,Visible) ) 

#define SC_IView3D_ScTypeId(This,TypeId)	\
    ( (This)->lpVtbl -> ScTypeId(This,TypeId) ) 

#define SC_IView3D_ScIsTypeOf(This,TypeId,IsType)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,TypeId,IsType) ) 

#define SC_IView3D_ScNewVisual(This,Entity,Overwrite)	\
    ( (This)->lpVtbl -> ScNewVisual(This,Entity,Overwrite) ) 

#define SC_IView3D_ScTranslateCamera(This,X,Y)	\
    ( (This)->lpVtbl -> ScTranslateCamera(This,X,Y) ) 

#define SC_IView3D_ScScaleCamera(This,Scale)	\
    ( (This)->lpVtbl -> ScScaleCamera(This,Scale) ) 

#define SC_IView3D_ScFitToEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScFitToEntity(This,Entity) ) 

#define SC_IView3D_ScFitToVisible(This)	\
    ( (This)->lpVtbl -> ScFitToVisible(This) ) 

#define SC_IView3D_ScUpdate(This,All)	\
    ( (This)->lpVtbl -> ScUpdate(This,All) ) 

#define SC_IView3D_ScZoomMouseWindowStart(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowStart(This) ) 

#define SC_IView3D_ScZoomMouseWindowBreak(This)	\
    ( (This)->lpVtbl -> ScZoomMouseWindowBreak(This) ) 

#define SC_IView3D_ScHasVisual(This,entity,Visual)	\
    ( (This)->lpVtbl -> ScHasVisual(This,entity,Visual) ) 

#define SC_IView3D_ScFitToSelected(This)	\
    ( (This)->lpVtbl -> ScFitToSelected(This) ) 

#define SC_IView3D_put_ScMouseMoveMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScMouseMoveMode(This,Mode) ) 

#define SC_IView3D_get_ScMouseMoveMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScMouseMoveMode(This,Mode) ) 

#define SC_IView3D_put_ScCameraStandardView(This,Mode)	\
    ( (This)->lpVtbl -> put_ScCameraStandardView(This,Mode) ) 

#define SC_IView3D_get_ScCameraStandardView(This,Mode)	\
    ( (This)->lpVtbl -> get_ScCameraStandardView(This,Mode) ) 

#define SC_IView3D_put_ScEntityGroup(This,Entities)	\
    ( (This)->lpVtbl -> put_ScEntityGroup(This,Entities) ) 

#define SC_IView3D_get_ScEntityGroup(This,Entities)	\
    ( (This)->lpVtbl -> get_ScEntityGroup(This,Entities) ) 

#define SC_IView3D_ScRotateCamera(This,Alpha,Beta,Gamma)	\
    ( (This)->lpVtbl -> ScRotateCamera(This,Alpha,Beta,Gamma) ) 

#define SC_IView3D_ScFitToBox(This,X1,Y1,Z1,X2,Y2,Z2)	\
    ( (This)->lpVtbl -> ScFitToBox(This,X1,Y1,Z1,X2,Y2,Z2) ) 

#define SC_IView3D_ScGetScreenPosCursor(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetScreenPosCursor(This,X,Y) ) 

#define SC_IView3D_ScGetScreenPosPicked(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetScreenPosPicked(This,X,Y) ) 

#define SC_IView3D_ScGetWorldPosCursor(This,X,Y,Z,XValid,YValid,ZValid,OnEntity)	\
    ( (This)->lpVtbl -> ScGetWorldPosCursor(This,X,Y,Z,XValid,YValid,ZValid,OnEntity) ) 

#define SC_IView3D_ScGetWorldPosPicked(This,X,Y,Z,Valid)	\
    ( (This)->lpVtbl -> ScGetWorldPosPicked(This,X,Y,Z,Valid) ) 

#define SC_IView3D_ScGetSystemGroup(This,retval)	\
    ( (This)->lpVtbl -> ScGetSystemGroup(This,retval) ) 

#define SC_IView3D_put_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScDisplayMode(This,Mode) ) 

#define SC_IView3D_get_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScDisplayMode(This,Mode) ) 

#define SC_IView3D_ScSetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScSetMouseGrid(This,X,Y) ) 

#define SC_IView3D_ScGetMouseGrid(This,X,Y)	\
    ( (This)->lpVtbl -> ScGetMouseGrid(This,X,Y) ) 

#define SC_IView3D_put_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> put_ScModifyBoxColor(This,Color) ) 

#define SC_IView3D_get_ScModifyBoxColor(This,Color)	\
    ( (This)->lpVtbl -> get_ScModifyBoxColor(This,Color) ) 

#define SC_IView3D_ScGetHWnd(This,Hwnd)	\
    ( (This)->lpVtbl -> ScGetHWnd(This,Hwnd) ) 

#define SC_IView3D_ScGetView2DCtrl(This,disp)	\
    ( (This)->lpVtbl -> ScGetView2DCtrl(This,disp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IView3D_INTERFACE_DEFINED__ */


#ifndef __SC_IControlButton_INTERFACE_DEFINED__
#define __SC_IControlButton_INTERFACE_DEFINED__

/* interface SC_IControlButton */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6FD65A52-850C-11d1-9752-008048EEE00C")
    SC_IControlButton : public IDispatch
    {
    public:
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScButtonString( 
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScButtonString( 
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetButtonId( 
            /* [retval][out] */ long *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetButtonType( 
            /* [retval][out] */ long *Type) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlButtonVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlButton * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlButton * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlButton * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlButton * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlButton * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlButton * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlButton * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScButtonString )( 
            SC_IControlButton * This,
            /* [in] */ BSTR String);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScButtonString )( 
            SC_IControlButton * This,
            /* [retval][out] */ BSTR *String);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetButtonId )( 
            SC_IControlButton * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetButtonType )( 
            SC_IControlButton * This,
            /* [retval][out] */ long *Type);
        
        END_INTERFACE
    } SC_IControlButtonVtbl;

    interface SC_IControlButton
    {
        CONST_VTBL struct SC_IControlButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlButton_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlButton_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlButton_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlButton_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlButton_put_ScButtonString(This,String)	\
    ( (This)->lpVtbl -> put_ScButtonString(This,String) ) 

#define SC_IControlButton_get_ScButtonString(This,String)	\
    ( (This)->lpVtbl -> get_ScButtonString(This,String) ) 

#define SC_IControlButton_ScGetButtonId(This,Id)	\
    ( (This)->lpVtbl -> ScGetButtonId(This,Id) ) 

#define SC_IControlButton_ScGetButtonType(This,Type)	\
    ( (This)->lpVtbl -> ScGetButtonType(This,Type) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlButton_INTERFACE_DEFINED__ */


#ifndef __SC_IGuiMessageManager_INTERFACE_DEFINED__
#define __SC_IGuiMessageManager_INTERFACE_DEFINED__

/* interface SC_IGuiMessageManager */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IGuiMessageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6FD65A56-850C-11d1-9752-008048EEE00C")
    SC_IGuiMessageManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNextButtonInfo( 
            long *Result,
            BSTR *Name,
            unsigned short *Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOnCommand( 
            long Id,
            long Flags,
            long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IGuiMessageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IGuiMessageManager * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IGuiMessageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IGuiMessageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IGuiMessageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IGuiMessageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IGuiMessageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IGuiMessageManager * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextButtonInfo )( 
            SC_IGuiMessageManager * This,
            long *Result,
            BSTR *Name,
            unsigned short *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnCommand )( 
            SC_IGuiMessageManager * This,
            long Id,
            long Flags,
            long *Result);
        
        END_INTERFACE
    } SC_IGuiMessageManagerVtbl;

    interface SC_IGuiMessageManager
    {
        CONST_VTBL struct SC_IGuiMessageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IGuiMessageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IGuiMessageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IGuiMessageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IGuiMessageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IGuiMessageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IGuiMessageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IGuiMessageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IGuiMessageManager_ScGetNextButtonInfo(This,Result,Name,Id)	\
    ( (This)->lpVtbl -> ScGetNextButtonInfo(This,Result,Name,Id) ) 

#define SC_IGuiMessageManager_ScOnCommand(This,Id,Flags,Result)	\
    ( (This)->lpVtbl -> ScOnCommand(This,Id,Flags,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IGuiMessageManager_INTERFACE_DEFINED__ */



#ifndef __ScConstantsView_MODULE_DEFINED__
#define __ScConstantsView_MODULE_DEFINED__


/* module ScConstantsView */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectView	=	( 0x2000 | ( ( 7 * 0x1000000 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComObjectView2D	=	( 0x2000 | ( ( 8 * 0x1000000 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComObjectView3D	=	( 0x2000 | ( ( 9 * 0x1000000 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComObjectEditGroup2D	=	( 0x2000 | ( ( ( ( 1 * 0x1000000 )  + (( 0x8000 + 0x40000 ) ) )  + 1 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComObjectEditGroup3D	=	( 0x2000 | ( ( ( ( 1 * 0x1000000 )  + (( 0x8000 + 0x20000 ) ) )  + 1 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComViewModeObject	=	1;

/* [helpstring] */ const long scComViewModeCamera	=	2;

/* [helpstring] */ const long scComViewDisplayModeGridOn	=	0x1;

/* [helpstring] */ const long scComViewDisplayModeGridEnable	=	0x2;

/* [helpstring] */ const long scComViewDisplayModeGridShow	=	0x4;

/* [helpstring] */ const long scComViewDisplayModeChangeColorOnSelection	=	0x10000;

/* [helpstring] */ const long scComViewDisplayModeCatch	=	0x40;

/* [helpstring] */ const long scComViewDisplayModeGridLines	=	0x80;

/* [helpstring] */ const long scComView2DMouseMoveModeDoNothing	=	1;

/* [helpstring] */ const long scComView2DMouseMoveModeRotate	=	2;

/* [helpstring] */ const long scComView2DMouseMoveModeMove	=	3;

/* [helpstring] */ const long scComView2DMouseMoveModeScale	=	4;

/* [helpstring] */ const long scComView3DMouseMoveModeDoNothing	=	1;

/* [helpstring] */ const long scComView3DMouseMoveModeRotate	=	2;

/* [helpstring] */ const long scComView3DMouseMoveModeRotateZ	=	3;

/* [helpstring] */ const long scComView3DMouseMoveModeMove	=	4;

/* [helpstring] */ const long scComView3DMouseMoveModeScale	=	5;

/* [helpstring] */ const long scComView3DCameraStandardViewNone	=	0;

/* [helpstring] */ const long scComView3DCameraStandardViewXPos	=	1;

/* [helpstring] */ const long scComView3DCameraStandardViewXNeg	=	2;

/* [helpstring] */ const long scComView3DCameraStandardViewYPos	=	3;

/* [helpstring] */ const long scComView3DCameraStandardViewYNeg	=	4;

/* [helpstring] */ const long scComView3DCameraStandardViewZPos	=	5;

/* [helpstring] */ const long scComView3DCameraStandardViewZNeg	=	6;

/* [helpstring] */ const long scComView3DCameraStandardViewIso	=	7;

/* [helpstring] */ const long scComMatPolyLine2DInternal	=	0;

/* [helpstring] */ const long scComMatPolyLine2DInternalSelected	=	1;

/* [helpstring] */ const long scComMatPolyLine2DExternal	=	2;

/* [helpstring] */ const long scComMatPolyLine2DExternalSelected	=	3;

/* [helpstring] */ const long scComMatPolyLine2DOpen	=	4;

/* [helpstring] */ const long scComMatPolyLine2DOpenSelected	=	5;

/* [helpstring] */ const long scComMatPolyLine2DBox	=	6;

/* [helpstring] */ const long scComMatPolyLine2DBoxSelected	=	7;

/* [helpstring] */ const long scComMatPolyLine2DPoint	=	8;

/* [helpstring] */ const long scComMatPolyLine2DPointSelected	=	9;

/* [helpstring] */ const long scComMatPolyLine2DHasNeighbour	=	10;

/* [helpstring] */ const long scComMatPolyLine2DHasNeighbourSelected	=	11;

/* [helpstring] */ const long scComMatLineArray2D	=	0;

/* [helpstring] */ const long scComMatLineArray2DSelected	=	1;

/* [helpstring] */ const long scComMatLineArray2DBox	=	2;

/* [helpstring] */ const long scComMatLineArray2DBoxSelected	=	3;

/* [helpstring] */ const long scComMatLineArray2DPoint	=	4;

/* [helpstring] */ const long scComMatLineArray2DPointSelected	=	5;

/* [helpstring] */ const long scComMatSingleLine2D	=	0;

/* [helpstring] */ const long scComMatSingleLine2DSelected	=	1;

/* [helpstring] */ const long scComMatSingleLine2DBox	=	2;

/* [helpstring] */ const long scComMatSingleLine2DBoxSelected	=	3;

/* [helpstring] */ const long scComMatSingleLine2DPoint	=	4;

/* [helpstring] */ const long scComMatSingleLine2DPointSelected	=	5;

/* [helpstring] */ const long scComMatPointCloud2D	=	0;

/* [helpstring] */ const long scComMatPointCloud2DSelected	=	1;

/* [helpstring] */ const long scComMatPointCloud2DBox	=	2;

/* [helpstring] */ const long scComMatPointCloud2DBoxSelected	=	3;

/* [helpstring] */ const long scComMatLayerBox	=	0;

/* [helpstring] */ const long scComMatLayerBoxSelected	=	1;

/* [helpstring] */ const long scComMatGroup2DBox	=	0;

/* [helpstring] */ const long scComMatGroup2DBoxSelected	=	1;

/* [helpstring] */ const long scComMatTriaMesh	=	0;

/* [helpstring] */ const long scComMatTriaMeshSelected	=	1;

/* [helpstring] */ const long scComMatTriaMeshTriaError	=	4;

/* [helpstring] */ const long scComMatTriaMeshBox	=	11;

/* [helpstring] */ const long scComMatTriaMeshBoxSelected	=	12;

/* [helpstring] */ const long scComMatLayerSolidInternal	=	0;

/* [helpstring] */ const long scComMatLayerSolidInternalSelected	=	1;

/* [helpstring] */ const long scComMatLayerSolidExternal	=	2;

/* [helpstring] */ const long scComMatLayerSolidExternalSelected	=	3;

/* [helpstring] */ const long scComMatLayerSolidOpen	=	4;

/* [helpstring] */ const long scComMatLayerSolidOpenSelected	=	5;

/* [helpstring] */ const long scComMatLayerSolidBox	=	6;

/* [helpstring] */ const long scComMatLayerSolidBoxSelected	=	7;

/* [helpstring] */ const long scComMatGroup3DBox	=	0;

/* [helpstring] */ const long scComMatGroup3DBoxSelected	=	1;

/* [helpstring] */ const long scComMatLineArray3D	=	0;

/* [helpstring] */ const long scComMatLineArray3DSelected	=	1;

/* [helpstring] */ const long scComMatLineArray3DBox	=	2;

/* [helpstring] */ const long scComMatLineArray3DBoxSelected	=	3;

/* [helpstring] */ const long scComMatLineColor	=	1;

/* [helpstring] */ const long scComMatLineColorSelected	=	2;

/* [helpstring] */ const long scComMatPointColor	=	3;

/* [helpstring] */ const long scComMatPointColorSelected	=	4;

/* [helpstring] */ const long scComControlButtonPopUp	=	2;

/* [helpstring] */ const long scComControlButtonMenu	=	1;

/* [helpstring] */ const long scComControlButtonAddToPopUp	=	4;

/* [helpstring] */ const long scComControlButtonCommand	=	1;

/* [helpstring] */ const long scComControlButtonUpdateUI	=	2;

/* [helpstring] */ const long scComControlButtonEnable	=	1;

/* [helpstring] */ const long scComControlButtonCheck	=	2;

/* [helpstring] */ const long scComModifyFlagTranslate	=	0x1;

/* [helpstring] */ const long scComModifyFlagScale	=	0x2;

/* [helpstring] */ const long scComModifyFlagRotate	=	0x4;

/* [helpstring] */ const long scComModifyFlagSlant	=	0x8;

/* [helpstring] */ const long scComViewInfoFlagControl	=	0x8;

/* [helpstring] */ const long scComViewInfoFlagLButton	=	0x1;

/* [helpstring] */ const long scComViewInfoFlagRButton	=	0x2;

/* [helpstring] */ const long scComViewInfoFlagShift	=	0x4;

/* [helpstring] */ const long scComViewInfoFlagMButton	=	0x10;

#endif /* __ScConstantsView_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScView;

#ifdef __cplusplus

class DECLSPEC_UUID("4C0249B2-89BC-11d1-8C25-008048EEDCB8")
ScView;
#endif

EXTERN_C const CLSID CLSID_ScView2D;

#ifdef __cplusplus

class DECLSPEC_UUID("E09F0551-7583-11d1-8D8B-008048E1AD3F")
ScView2D;
#endif

EXTERN_C const CLSID CLSID_ScView3D;

#ifdef __cplusplus

class DECLSPEC_UUID("8F45A792-4599-11d1-96EF-008048EEE00C")
ScView3D;
#endif

EXTERN_C const CLSID CLSID_ScControlButton;

#ifdef __cplusplus

class DECLSPEC_UUID("6FD65A54-850C-11d1-9752-008048EEE00C")
ScControlButton;
#endif

EXTERN_C const CLSID CLSID_ScGuiMessageManager;

#ifdef __cplusplus

class DECLSPEC_UUID("6FD65A58-850C-11d1-9752-008048EEE00C")
ScGuiMessageManager;
#endif
#endif /* __ScapsSamGui_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


