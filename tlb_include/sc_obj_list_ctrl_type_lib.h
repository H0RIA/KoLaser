

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:41 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\obj_list\sc_obj_list_ctrl_type_lib.idl:
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


#ifndef __sc_obj_list_ctrl_type_lib_h__
#define __sc_obj_list_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DEntity_list_FWD_DEFINED__
#define ___DEntity_list_FWD_DEFINED__
typedef interface _DEntity_list _DEntity_list;
#endif 	/* ___DEntity_list_FWD_DEFINED__ */


#ifndef ___DEntity_listEvents_FWD_DEFINED__
#define ___DEntity_listEvents_FWD_DEFINED__
typedef interface _DEntity_listEvents _DEntity_listEvents;
#endif 	/* ___DEntity_listEvents_FWD_DEFINED__ */


#ifndef __SC_IEntityListCtrl_FWD_DEFINED__
#define __SC_IEntityListCtrl_FWD_DEFINED__
typedef interface SC_IEntityListCtrl SC_IEntityListCtrl;
#endif 	/* __SC_IEntityListCtrl_FWD_DEFINED__ */


#ifndef __ScEntityListCtrl_FWD_DEFINED__
#define __ScEntityListCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntityListCtrl ScEntityListCtrl;
#else
typedef struct ScEntityListCtrl ScEntityListCtrl;
#endif /* __cplusplus */

#endif 	/* __ScEntityListCtrl_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_obj_list_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_gui_type_lib.h"
#include "sc_view2d_ctrl_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_obj_list_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_obj_list_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamEntityListCtrl_LIBRARY_DEFINED__
#define __ScapsSamEntityListCtrl_LIBRARY_DEFINED__

/* library ScapsSamEntityListCtrl */
/* [control][helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamEntityListCtrl;


#ifndef __ScConstantsEntityListCtrl_MODULE_DEFINED__
#define __ScConstantsEntityListCtrl_MODULE_DEFINED__


/* module ScConstantsEntityListCtrl */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scEntityListDisplayModeEntities	=	0x1;

/* [helpstring] */ const long scEntityListDisplayModeItems	=	0x2;

/* [helpstring] */ const long scEntityListDisplayModeHideWayUp	=	0x4;

/* [helpstring] */ const long scEntityListDisplayModeShowWayUp	=	0x8;

/* [helpstring] */ const long scEntityListDisplayModeShowReferencePoints	=	0x10;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideSortByName	=	0x20;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideBackgroundEntity	=	0x40;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideHiddenEntity	=	0x80;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideStartStopIndexing	=	0x100;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideNumberEntities	=	0x200;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideNumberEntitiesWithPostPrefix	=	0x400;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideNonMarkableEntity	=	0x800;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideNonEditableEntity	=	0x1000;

/* [helpstring] */ const long scEntityListDisplayModeContextMenuHideShowOnlySelectedEntities	=	0x2000;

/* [helpstring] */ const long scEntityListItemSelectFirst	=	0x1;

/* [helpstring] */ const long scEntityListItemSelectLast	=	0x2;

/* [helpstring] */ const long scEntityListItemSelectNext	=	0x3;

/* [helpstring] */ const long scEntityListItemSelectPrevious	=	0x4;

/* [helpstring] */ const long scEntityListItemEditSelected	=	0x5;

/* [helpstring] */ const long scEntityListItemUpdate	=	0x6;

/* [helpstring] */ const long scEntityListItemDeleteSelected	=	0x7;

/* [helpstring] */ const long scEntityListItemInsertBeforeSelected	=	0x8;

/* [helpstring] */ const long scEntityListItemSetStartPoint	=	0x9;

/* [helpstring] */ const long scEntityListSortByName	=	0x10;

/* [helpstring] */ const long scEntityListRebuildCurrentEntity	=	0x11;

/* [helpstring] */ const long scEntityListRebuildTopEntity	=	0x12;

/* [helpstring] */ const long scEntityListSplitPolyline	=	0x13;

/* [helpstring] */ const long scEntityListSplitPolylineAtPoint	=	0x14;

/* [helpstring] */ const long scEntityListMergePolylinePoints	=	0x15;

/* [helpstring] */ const long scEntityListNumberEntities	=	0x16;

/* [helpstring] */ const long scEntityListMoveToPrevious	=	0x17;

/* [helpstring] */ const long scEntityListMoveToNext	=	0x18;

/* [helpstring] */ const long scEntityListMoveToTop	=	0x19;

/* [helpstring] */ const long scEntityListMoveToBottom	=	0x20;

/* [helpstring] */ const long scComEntityListEventUnselect	=	1;

/* [helpstring] */ const long scComEntityListEventSelect	=	2;

/* [helpstring] */ const long scComEntityListEventLevelDown	=	3;

/* [helpstring] */ const long scComEntityListEventLevelUp	=	4;

/* [helpstring] */ const long scComEntityListEventItemMode	=	5;

/* [helpstring] */ const long scComEntityListEventEntityMode	=	6;

#endif /* __ScConstantsEntityListCtrl_MODULE_DEFINED__ */

#ifndef ___DEntity_list_DISPINTERFACE_DEFINED__
#define ___DEntity_list_DISPINTERFACE_DEFINED__

/* dispinterface _DEntity_list */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DEntity_list;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B6F97134-7206-11D1-9736-008048EEE00C")
    _DEntity_list : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DEntity_listVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DEntity_list * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DEntity_list * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DEntity_list * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DEntity_list * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DEntity_list * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DEntity_list * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DEntity_list * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DEntity_listVtbl;

    interface _DEntity_list
    {
        CONST_VTBL struct _DEntity_listVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DEntity_list_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DEntity_list_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DEntity_list_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DEntity_list_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DEntity_list_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DEntity_list_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DEntity_list_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DEntity_list_DISPINTERFACE_DEFINED__ */


#ifndef ___DEntity_listEvents_DISPINTERFACE_DEFINED__
#define ___DEntity_listEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DEntity_listEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DEntity_listEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B6F97135-7206-11D1-9736-008048EEE00C")
    _DEntity_listEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DEntity_listEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DEntity_listEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DEntity_listEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DEntity_listEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DEntity_listEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DEntity_listEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DEntity_listEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DEntity_listEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DEntity_listEventsVtbl;

    interface _DEntity_listEvents
    {
        CONST_VTBL struct _DEntity_listEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DEntity_listEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DEntity_listEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DEntity_listEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DEntity_listEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DEntity_listEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DEntity_listEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DEntity_listEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DEntity_listEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IEntityListCtrl_INTERFACE_DEFINED__
#define __SC_IEntityListCtrl_INTERFACE_DEFINED__

/* interface SC_IEntityListCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IEntityListCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E4F15A61-4196-11d5-9D4C-000000000000")
    SC_IEntityListCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayMode( 
            /* [retval][out] */ long *Mode) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayMode( 
            /* [in] */ long Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntityGroup( 
            /* [in] */ LPDISPATCH Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView( 
            /* [in] */ LPDISPATCH View) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView2DCtrl( 
            /* [in] */ LPDISPATCH ViewCtrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckCommand( 
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExecCommand( 
            /* [in] */ long CmdId,
            /* [in] */ long Param) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetFontSize( 
            /* [in] */ long Size) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemGetCount( 
            /* [in] */ long OnlySelected,
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemIsSelected( 
            /* [in] */ long Index,
            /* [retval][out] */ long *IsSel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemGetCoor( 
            /* [in] */ long Index,
            /* [in] */ long Coor,
            /* [retval][out] */ double *Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemSetCoor( 
            /* [in] */ long Index,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScItemSetSelected( 
            /* [in] */ long Index,
            /* [in] */ long Selected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCurrentFatherEntity( 
            /* [retval][out] */ LPDISPATCH *fatherEntity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetColumnWidth( 
            /* [in] */ long Index,
            /* [in] */ long Width) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEntityListCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntityListCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntityListCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntityListCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntityListCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntityListCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntityListCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntityListCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayMode )( 
            SC_IEntityListCtrl * This,
            /* [retval][out] */ long *Mode);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayMode )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntityGroup )( 
            SC_IEntityListCtrl * This,
            /* [in] */ LPDISPATCH Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntityListCtrl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_IEntityListCtrl * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntityListCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntityListCtrl * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView2DCtrl )( 
            SC_IEntityListCtrl * This,
            /* [in] */ LPDISPATCH ViewCtrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckCommand )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long CmdId,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Active);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExecCommand )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long CmdId,
            /* [in] */ long Param);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetFontSize )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Size);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemGetCount )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long OnlySelected,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemIsSelected )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *IsSel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemGetCoor )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Index,
            /* [in] */ long Coor,
            /* [retval][out] */ double *Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSetCoor )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Index,
            /* [in] */ double X,
            /* [in] */ double Y,
            /* [in] */ double Z);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScItemSetSelected )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Index,
            /* [in] */ long Selected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCurrentFatherEntity )( 
            SC_IEntityListCtrl * This,
            /* [retval][out] */ LPDISPATCH *fatherEntity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetColumnWidth )( 
            SC_IEntityListCtrl * This,
            /* [in] */ long Index,
            /* [in] */ long Width);
        
        END_INTERFACE
    } SC_IEntityListCtrlVtbl;

    interface SC_IEntityListCtrl
    {
        CONST_VTBL struct SC_IEntityListCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntityListCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntityListCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntityListCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntityListCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntityListCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntityListCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntityListCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntityListCtrl_get_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> get_ScDisplayMode(This,Mode) ) 

#define SC_IEntityListCtrl_put_ScDisplayMode(This,Mode)	\
    ( (This)->lpVtbl -> put_ScDisplayMode(This,Mode) ) 

#define SC_IEntityListCtrl_ScSetEntityGroup(This,Entity)	\
    ( (This)->lpVtbl -> ScSetEntityGroup(This,Entity) ) 

#define SC_IEntityListCtrl_ScUpdate(This)	\
    ( (This)->lpVtbl -> ScUpdate(This) ) 

#define SC_IEntityListCtrl_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define SC_IEntityListCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IEntityListCtrl_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IEntityListCtrl_ScSetView2DCtrl(This,ViewCtrl)	\
    ( (This)->lpVtbl -> ScSetView2DCtrl(This,ViewCtrl) ) 

#define SC_IEntityListCtrl_ScCheckCommand(This,CmdId,Flags,Active)	\
    ( (This)->lpVtbl -> ScCheckCommand(This,CmdId,Flags,Active) ) 

#define SC_IEntityListCtrl_ScExecCommand(This,CmdId,Param)	\
    ( (This)->lpVtbl -> ScExecCommand(This,CmdId,Param) ) 

#define SC_IEntityListCtrl_ScSetFontSize(This,Size)	\
    ( (This)->lpVtbl -> ScSetFontSize(This,Size) ) 

#define SC_IEntityListCtrl_ScItemGetCount(This,OnlySelected,Count)	\
    ( (This)->lpVtbl -> ScItemGetCount(This,OnlySelected,Count) ) 

#define SC_IEntityListCtrl_ScItemIsSelected(This,Index,IsSel)	\
    ( (This)->lpVtbl -> ScItemIsSelected(This,Index,IsSel) ) 

#define SC_IEntityListCtrl_ScItemGetCoor(This,Index,Coor,Value)	\
    ( (This)->lpVtbl -> ScItemGetCoor(This,Index,Coor,Value) ) 

#define SC_IEntityListCtrl_ScItemSetCoor(This,Index,X,Y,Z)	\
    ( (This)->lpVtbl -> ScItemSetCoor(This,Index,X,Y,Z) ) 

#define SC_IEntityListCtrl_ScItemSetSelected(This,Index,Selected)	\
    ( (This)->lpVtbl -> ScItemSetSelected(This,Index,Selected) ) 

#define SC_IEntityListCtrl_ScGetCurrentFatherEntity(This,fatherEntity)	\
    ( (This)->lpVtbl -> ScGetCurrentFatherEntity(This,fatherEntity) ) 

#define SC_IEntityListCtrl_ScSetColumnWidth(This,Index,Width)	\
    ( (This)->lpVtbl -> ScSetColumnWidth(This,Index,Width) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntityListCtrl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScEntityListCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("B6F97136-7206-11D1-9736-008048EEE00C")
ScEntityListCtrl;
#endif
#endif /* __ScapsSamEntityListCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


