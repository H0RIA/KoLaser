

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:49 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\entity_prop_sheet\sc_entity_prop_sheet_ctrl_type_lib.idl:
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


#ifndef __sc_entity_prop_sheet_ctrl_type_lib_h__
#define __sc_entity_prop_sheet_ctrl_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DScEntityPropertySheet_FWD_DEFINED__
#define ___DScEntityPropertySheet_FWD_DEFINED__
typedef interface _DScEntityPropertySheet _DScEntityPropertySheet;
#endif 	/* ___DScEntityPropertySheet_FWD_DEFINED__ */


#ifndef __SC_IEntityPropertySheet_FWD_DEFINED__
#define __SC_IEntityPropertySheet_FWD_DEFINED__
typedef interface SC_IEntityPropertySheet SC_IEntityPropertySheet;
#endif 	/* __SC_IEntityPropertySheet_FWD_DEFINED__ */


#ifndef ___DScEntityPropertySheetEvents_FWD_DEFINED__
#define ___DScEntityPropertySheetEvents_FWD_DEFINED__
typedef interface _DScEntityPropertySheetEvents _DScEntityPropertySheetEvents;
#endif 	/* ___DScEntityPropertySheetEvents_FWD_DEFINED__ */


#ifndef __SC_IDevicePropertySheetCtrl_FWD_DEFINED__
#define __SC_IDevicePropertySheetCtrl_FWD_DEFINED__
typedef interface SC_IDevicePropertySheetCtrl SC_IDevicePropertySheetCtrl;
#endif 	/* __SC_IDevicePropertySheetCtrl_FWD_DEFINED__ */


#ifndef ___DDevicePropertySheetCtrl_FWD_DEFINED__
#define ___DDevicePropertySheetCtrl_FWD_DEFINED__
typedef interface _DDevicePropertySheetCtrl _DDevicePropertySheetCtrl;
#endif 	/* ___DDevicePropertySheetCtrl_FWD_DEFINED__ */


#ifndef __ScEntityPropertySheet_FWD_DEFINED__
#define __ScEntityPropertySheet_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScEntityPropertySheet ScEntityPropertySheet;
#else
typedef struct ScEntityPropertySheet ScEntityPropertySheet;
#endif /* __cplusplus */

#endif 	/* __ScEntityPropertySheet_FWD_DEFINED__ */


#ifndef __ScDevicePropertySheetCtrl_FWD_DEFINED__
#define __ScDevicePropertySheetCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDevicePropertySheetCtrl ScDevicePropertySheetCtrl;
#else
typedef struct ScDevicePropertySheetCtrl ScDevicePropertySheetCtrl;
#endif /* __cplusplus */

#endif 	/* __ScDevicePropertySheetCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_entity_prop_sheet_ctrl_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include"sc_property_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_entity_prop_sheet_ctrl_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_entity_prop_sheet_ctrl_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamEntityPropertySheetCtrl_LIBRARY_DEFINED__
#define __ScapsSamEntityPropertySheetCtrl_LIBRARY_DEFINED__

/* library ScapsSamEntityPropertySheetCtrl */
/* [helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamEntityPropertySheetCtrl;

#ifndef ___DScEntityPropertySheet_DISPINTERFACE_DEFINED__
#define ___DScEntityPropertySheet_DISPINTERFACE_DEFINED__

/* dispinterface _DScEntityPropertySheet */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DScEntityPropertySheet;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("36101D54-43CD-11D2-8E73-008048E1AD3F")
    _DScEntityPropertySheet : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScEntityPropertySheetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScEntityPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScEntityPropertySheet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScEntityPropertySheet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScEntityPropertySheet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScEntityPropertySheet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScEntityPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScEntityPropertySheet * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DScEntityPropertySheetVtbl;

    interface _DScEntityPropertySheet
    {
        CONST_VTBL struct _DScEntityPropertySheetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScEntityPropertySheet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScEntityPropertySheet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScEntityPropertySheet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScEntityPropertySheet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScEntityPropertySheet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScEntityPropertySheet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScEntityPropertySheet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScEntityPropertySheet_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IEntityPropertySheet_INTERFACE_DEFINED__
#define __SC_IEntityPropertySheet_INTERFACE_DEFINED__

/* interface SC_IEntityPropertySheet */
/* [dual][object][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_SC_IEntityPropertySheet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F4D3CAA2-E548-11d2-9AD6-008048EEE00C")
    SC_IEntityPropertySheet : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntity( 
            /* [in] */ IDispatch *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetActivePage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemovePage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetActivePage( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView( 
            /* [in] */ IDispatch *View,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ IDispatch *OpticModule,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsPageEnabled( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Enabled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ IDispatch *Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            IDispatch *Archive,
            BSTR Name,
            long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTabInto( 
            long Item,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHidePage( 
            BSTR Name,
            long Hide,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( 
            /* [in] */ long Option,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPageByIndex( 
            /* [in] */ long index,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemoveAllPages( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoTab( 
            /* [in] */ long Auto) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoTab( 
            /* [retval][out] */ long *Auto) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoLoad( 
            /* [in] */ long Auto) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoLoad( 
            /* [retval][out] */ long *Auto) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutputDevice( 
            /* [in] */ IDispatch *Device,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPropertyControl( 
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemovePropertyControl( 
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IEntityPropertySheetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IEntityPropertySheet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IEntityPropertySheet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IEntityPropertySheet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntity )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetActivePage )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPage )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePage )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetActivePage )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *View,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *OpticModule,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsPageEnabled )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Enabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IEntityPropertySheet * This,
            IDispatch *Archive,
            BSTR Name,
            long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPage )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_IEntityPropertySheet * This,
            long Item,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHidePage )( 
            SC_IEntityPropertySheet * This,
            BSTR Name,
            long Hide,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ long Option,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPageByIndex )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ long index,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemoveAllPages )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoTab )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoTab )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoLoad )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoLoad )( 
            SC_IEntityPropertySheet * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutputDevice )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *Device,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPropertyControl )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePropertyControl )( 
            SC_IEntityPropertySheet * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IEntityPropertySheetVtbl;

    interface SC_IEntityPropertySheet
    {
        CONST_VTBL struct SC_IEntityPropertySheetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IEntityPropertySheet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IEntityPropertySheet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IEntityPropertySheet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IEntityPropertySheet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IEntityPropertySheet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IEntityPropertySheet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IEntityPropertySheet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IEntityPropertySheet_ScSetEntity(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSetEntity(This,Entity,Result) ) 

#define SC_IEntityPropertySheet_ScSetActivePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScSetActivePage(This,Name,Result) ) 

#define SC_IEntityPropertySheet_ScAddPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScAddPage(This,Name,Page) ) 

#define SC_IEntityPropertySheet_ScRemovePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScRemovePage(This,Name,Result) ) 

#define SC_IEntityPropertySheet_ScGetActivePage(This,Name)	\
    ( (This)->lpVtbl -> ScGetActivePage(This,Name) ) 

#define SC_IEntityPropertySheet_ScSetView(This,View,Result)	\
    ( (This)->lpVtbl -> ScSetView(This,View,Result) ) 

#define SC_IEntityPropertySheet_ScSetOpticModule2D(This,OpticModule,Result)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule,Result) ) 

#define SC_IEntityPropertySheet_ScIsPageEnabled(This,Name,Enabled)	\
    ( (This)->lpVtbl -> ScIsPageEnabled(This,Name,Enabled) ) 

#define SC_IEntityPropertySheet_ScLoadFromArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IEntityPropertySheet_ScSaveToArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IEntityPropertySheet_ScGetPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScGetPage(This,Name,Page) ) 

#define SC_IEntityPropertySheet_ScTabInto(This,Item,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Item,Result) ) 

#define SC_IEntityPropertySheet_ScHidePage(This,Name,Hide,Result)	\
    ( (This)->lpVtbl -> ScHidePage(This,Name,Hide,Result) ) 

#define SC_IEntityPropertySheet_ScUpdate(This,Option,Result)	\
    ( (This)->lpVtbl -> ScUpdate(This,Option,Result) ) 

#define SC_IEntityPropertySheet_ScGetCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Count) ) 

#define SC_IEntityPropertySheet_ScGetPageByIndex(This,index,Page)	\
    ( (This)->lpVtbl -> ScGetPageByIndex(This,index,Page) ) 

#define SC_IEntityPropertySheet_ScIsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,Dirty) ) 

#define SC_IEntityPropertySheet_ScRemoveAllPages(This,Result)	\
    ( (This)->lpVtbl -> ScRemoveAllPages(This,Result) ) 

#define SC_IEntityPropertySheet_put_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoTab(This,Auto) ) 

#define SC_IEntityPropertySheet_get_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoTab(This,Auto) ) 

#define SC_IEntityPropertySheet_put_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoLoad(This,Auto) ) 

#define SC_IEntityPropertySheet_get_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoLoad(This,Auto) ) 

#define SC_IEntityPropertySheet_ScSetOutputDevice(This,Device,Result)	\
    ( (This)->lpVtbl -> ScSetOutputDevice(This,Device,Result) ) 

#define SC_IEntityPropertySheet_ScAddPropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScAddPropertyControl(This,Control,Result) ) 

#define SC_IEntityPropertySheet_ScRemovePropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScRemovePropertyControl(This,Control,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IEntityPropertySheet_INTERFACE_DEFINED__ */


#ifndef ___DScEntityPropertySheetEvents_DISPINTERFACE_DEFINED__
#define ___DScEntityPropertySheetEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DScEntityPropertySheetEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DScEntityPropertySheetEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("36101D55-43CD-11D2-8E73-008048E1AD3F")
    _DScEntityPropertySheetEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScEntityPropertySheetEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScEntityPropertySheetEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScEntityPropertySheetEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScEntityPropertySheetEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScEntityPropertySheetEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScEntityPropertySheetEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScEntityPropertySheetEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScEntityPropertySheetEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DScEntityPropertySheetEventsVtbl;

    interface _DScEntityPropertySheetEvents
    {
        CONST_VTBL struct _DScEntityPropertySheetEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScEntityPropertySheetEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScEntityPropertySheetEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScEntityPropertySheetEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScEntityPropertySheetEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScEntityPropertySheetEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScEntityPropertySheetEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScEntityPropertySheetEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScEntityPropertySheetEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IDevicePropertySheetCtrl_INTERFACE_DEFINED__
#define __SC_IDevicePropertySheetCtrl_INTERFACE_DEFINED__

/* interface SC_IDevicePropertySheetCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IDevicePropertySheetCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F519F3F-2A3B-11d4-9BDD-008048EEE00C")
    SC_IDevicePropertySheetCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetEntity( 
            /* [in] */ IDispatch *Entity,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetActivePage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemovePage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetActivePage( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView( 
            /* [in] */ IDispatch *View,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ IDispatch *OpticModule,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsPageEnabled( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Enabled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScLoadFromArchive( 
            /* [in] */ IDispatch *Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSaveToArchive( 
            IDispatch *Archive,
            BSTR Name,
            long Flags,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPage( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTabInto( 
            long Item,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHidePage( 
            BSTR Name,
            long Hide,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdate( 
            /* [in] */ long Option,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCount( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPageByIndex( 
            /* [in] */ long index,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsDirty( 
            /* [retval][out] */ long *Dirty) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemoveAllPages( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoTab( 
            /* [in] */ long Auto) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoTab( 
            /* [retval][out] */ long *Auto) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAutoLoad( 
            /* [in] */ long Auto) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAutoLoad( 
            /* [retval][out] */ long *Auto) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutputDevice( 
            /* [in] */ IDispatch *Device,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAddPropertyControl( 
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRemovePropertyControl( 
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IDevicePropertySheetCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IDevicePropertySheetCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IDevicePropertySheetCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntity )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetActivePage )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPage )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePage )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetActivePage )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *View,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *OpticModule,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsPageEnabled )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Enabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IDevicePropertySheetCtrl * This,
            IDispatch *Archive,
            BSTR Name,
            long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPage )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_IDevicePropertySheetCtrl * This,
            long Item,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHidePage )( 
            SC_IDevicePropertySheetCtrl * This,
            BSTR Name,
            long Hide,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ long Option,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPageByIndex )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ long index,
            /* [retval][out] */ /* external definition not present */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemoveAllPages )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoTab )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoTab )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoLoad )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoLoad )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutputDevice )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *Device,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPropertyControl )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePropertyControl )( 
            SC_IDevicePropertySheetCtrl * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IDevicePropertySheetCtrlVtbl;

    interface SC_IDevicePropertySheetCtrl
    {
        CONST_VTBL struct SC_IDevicePropertySheetCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IDevicePropertySheetCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IDevicePropertySheetCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IDevicePropertySheetCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IDevicePropertySheetCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IDevicePropertySheetCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IDevicePropertySheetCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IDevicePropertySheetCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IDevicePropertySheetCtrl_ScSetEntity(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSetEntity(This,Entity,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScSetActivePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScSetActivePage(This,Name,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScAddPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScAddPage(This,Name,Page) ) 

#define SC_IDevicePropertySheetCtrl_ScRemovePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScRemovePage(This,Name,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScGetActivePage(This,Name)	\
    ( (This)->lpVtbl -> ScGetActivePage(This,Name) ) 

#define SC_IDevicePropertySheetCtrl_ScSetView(This,View,Result)	\
    ( (This)->lpVtbl -> ScSetView(This,View,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScSetOpticModule2D(This,OpticModule,Result)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScIsPageEnabled(This,Name,Enabled)	\
    ( (This)->lpVtbl -> ScIsPageEnabled(This,Name,Enabled) ) 

#define SC_IDevicePropertySheetCtrl_ScLoadFromArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScSaveToArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScGetPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScGetPage(This,Name,Page) ) 

#define SC_IDevicePropertySheetCtrl_ScTabInto(This,Item,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Item,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScHidePage(This,Name,Hide,Result)	\
    ( (This)->lpVtbl -> ScHidePage(This,Name,Hide,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScUpdate(This,Option,Result)	\
    ( (This)->lpVtbl -> ScUpdate(This,Option,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScGetCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Count) ) 

#define SC_IDevicePropertySheetCtrl_ScGetPageByIndex(This,index,Page)	\
    ( (This)->lpVtbl -> ScGetPageByIndex(This,index,Page) ) 

#define SC_IDevicePropertySheetCtrl_ScIsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,Dirty) ) 

#define SC_IDevicePropertySheetCtrl_ScRemoveAllPages(This,Result)	\
    ( (This)->lpVtbl -> ScRemoveAllPages(This,Result) ) 

#define SC_IDevicePropertySheetCtrl_put_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoTab(This,Auto) ) 

#define SC_IDevicePropertySheetCtrl_get_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoTab(This,Auto) ) 

#define SC_IDevicePropertySheetCtrl_put_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoLoad(This,Auto) ) 

#define SC_IDevicePropertySheetCtrl_get_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoLoad(This,Auto) ) 

#define SC_IDevicePropertySheetCtrl_ScSetOutputDevice(This,Device,Result)	\
    ( (This)->lpVtbl -> ScSetOutputDevice(This,Device,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScAddPropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScAddPropertyControl(This,Control,Result) ) 

#define SC_IDevicePropertySheetCtrl_ScRemovePropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScRemovePropertyControl(This,Control,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IDevicePropertySheetCtrl_INTERFACE_DEFINED__ */


#ifndef ___DDevicePropertySheetCtrl_DISPINTERFACE_DEFINED__
#define ___DDevicePropertySheetCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DDevicePropertySheetCtrl */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DDevicePropertySheetCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F43-2A3B-11d4-9BDD-008048EEE00C")
    _DDevicePropertySheetCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DDevicePropertySheetCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DDevicePropertySheetCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DDevicePropertySheetCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DDevicePropertySheetCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DDevicePropertySheetCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DDevicePropertySheetCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DDevicePropertySheetCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DDevicePropertySheetCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DDevicePropertySheetCtrlVtbl;

    interface _DDevicePropertySheetCtrl
    {
        CONST_VTBL struct _DDevicePropertySheetCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DDevicePropertySheetCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DDevicePropertySheetCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DDevicePropertySheetCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DDevicePropertySheetCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DDevicePropertySheetCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DDevicePropertySheetCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DDevicePropertySheetCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DDevicePropertySheetCtrl_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScEntityPropertySheet;

#ifdef __cplusplus

class DECLSPEC_UUID("36101D56-43CD-11D2-8E73-008048E1AD3F")
ScEntityPropertySheet;
#endif

EXTERN_C const CLSID CLSID_ScDevicePropertySheetCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("2F519F41-2A3B-11d4-9BDD-008048EEE00C")
ScDevicePropertySheetCtrl;
#endif
#endif /* __ScapsSamEntityPropertySheetCtrl_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


