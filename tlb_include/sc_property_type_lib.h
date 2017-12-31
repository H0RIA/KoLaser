

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:42 2017
 */
/* Compiler settings for d:\scaps\dll_source\property\com\include\sc_property_type_lib.idl:
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


#ifndef __sc_property_type_lib_h__
#define __sc_property_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IControlPropertyPage_FWD_DEFINED__
#define __SC_IControlPropertyPage_FWD_DEFINED__
typedef interface SC_IControlPropertyPage SC_IControlPropertyPage;
#endif 	/* __SC_IControlPropertyPage_FWD_DEFINED__ */


#ifndef __SC_IPropertyPage_FWD_DEFINED__
#define __SC_IPropertyPage_FWD_DEFINED__
typedef interface SC_IPropertyPage SC_IPropertyPage;
#endif 	/* __SC_IPropertyPage_FWD_DEFINED__ */


#ifndef __SC_IControlEntityProperty_FWD_DEFINED__
#define __SC_IControlEntityProperty_FWD_DEFINED__
typedef interface SC_IControlEntityProperty SC_IControlEntityProperty;
#endif 	/* __SC_IControlEntityProperty_FWD_DEFINED__ */


#ifndef __SC_IControlEntityPropertyEvents_FWD_DEFINED__
#define __SC_IControlEntityPropertyEvents_FWD_DEFINED__
typedef interface SC_IControlEntityPropertyEvents SC_IControlEntityPropertyEvents;
#endif 	/* __SC_IControlEntityPropertyEvents_FWD_DEFINED__ */


#ifndef __SC_IControlEntityExposure_FWD_DEFINED__
#define __SC_IControlEntityExposure_FWD_DEFINED__
typedef interface SC_IControlEntityExposure SC_IControlEntityExposure;
#endif 	/* __SC_IControlEntityExposure_FWD_DEFINED__ */


#ifndef ___DSC_StandardEntityCtrl_FWD_DEFINED__
#define ___DSC_StandardEntityCtrl_FWD_DEFINED__
typedef interface _DSC_StandardEntityCtrl _DSC_StandardEntityCtrl;
#endif 	/* ___DSC_StandardEntityCtrl_FWD_DEFINED__ */


#ifndef ___DSC_StandardEntityCtrlEvents_FWD_DEFINED__
#define ___DSC_StandardEntityCtrlEvents_FWD_DEFINED__
typedef interface _DSC_StandardEntityCtrlEvents _DSC_StandardEntityCtrlEvents;
#endif 	/* ___DSC_StandardEntityCtrlEvents_FWD_DEFINED__ */


#ifndef __SC_IStandardEntityCtrl_FWD_DEFINED__
#define __SC_IStandardEntityCtrl_FWD_DEFINED__
typedef interface SC_IStandardEntityCtrl SC_IStandardEntityCtrl;
#endif 	/* __SC_IStandardEntityCtrl_FWD_DEFINED__ */


#ifndef __ScStandardEntityCtrl_FWD_DEFINED__
#define __ScStandardEntityCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScStandardEntityCtrl ScStandardEntityCtrl;
#else
typedef struct ScStandardEntityCtrl ScStandardEntityCtrl;
#endif /* __cplusplus */

#endif 	/* __ScStandardEntityCtrl_FWD_DEFINED__ */


#ifndef ___DScPropertySheet_FWD_DEFINED__
#define ___DScPropertySheet_FWD_DEFINED__
typedef interface _DScPropertySheet _DScPropertySheet;
#endif 	/* ___DScPropertySheet_FWD_DEFINED__ */


#ifndef __SC_IPropertySheet_FWD_DEFINED__
#define __SC_IPropertySheet_FWD_DEFINED__
typedef interface SC_IPropertySheet SC_IPropertySheet;
#endif 	/* __SC_IPropertySheet_FWD_DEFINED__ */


#ifndef ___DScPropertySheetEvents_FWD_DEFINED__
#define ___DScPropertySheetEvents_FWD_DEFINED__
typedef interface _DScPropertySheetEvents _DScPropertySheetEvents;
#endif 	/* ___DScPropertySheetEvents_FWD_DEFINED__ */


#ifndef __ScPropertySheet_FWD_DEFINED__
#define __ScPropertySheet_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPropertySheet ScPropertySheet;
#else
typedef struct ScPropertySheet ScPropertySheet;
#endif /* __cplusplus */

#endif 	/* __ScPropertySheet_FWD_DEFINED__ */


#ifndef __ScControlEntityProperty_FWD_DEFINED__
#define __ScControlEntityProperty_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlEntityProperty ScControlEntityProperty;
#else
typedef struct ScControlEntityProperty ScControlEntityProperty;
#endif /* __cplusplus */

#endif 	/* __ScControlEntityProperty_FWD_DEFINED__ */


#ifndef __ScControlPropertyPage_FWD_DEFINED__
#define __ScControlPropertyPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlPropertyPage ScControlPropertyPage;
#else
typedef struct ScControlPropertyPage ScControlPropertyPage;
#endif /* __cplusplus */

#endif 	/* __ScControlPropertyPage_FWD_DEFINED__ */


#ifndef __ScPropertyPage_FWD_DEFINED__
#define __ScPropertyPage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScPropertyPage ScPropertyPage;
#else
typedef struct ScPropertyPage ScPropertyPage;
#endif /* __cplusplus */

#endif 	/* __ScPropertyPage_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_property_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_optic_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_property_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_property_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamProperty_LIBRARY_DEFINED__
#define __ScapsSamProperty_LIBRARY_DEFINED__

/* library ScapsSamProperty */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamProperty;


#ifndef __ScConstantsProperty_MODULE_DEFINED__
#define __ScConstantsProperty_MODULE_DEFINED__


/* module ScConstantsProperty */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComPropertyPageFlagHideApply	=	0x1;

/* [helpstring] */ const long scComPropertyPageFlagHideScroll	=	0x2;

/* [helpstring] */ const long scComPropertyPageFlagHideOnNoCheck	=	0x4;

/* [helpstring] */ const long scComPropertyPageFlagDisableJobCheck	=	0x8;

/* [helpstring] */ const long scComPropertyTypePageFlagCreate	=	0x1;

/* [helpstring] */ const long scComPropertyTypePageFlagVisible	=	0x2;

/* [helpstring] */ const long scComPropertyTypePageFlagUser	=	0x4;

/* [helpstring] */ const long scComEntityExposurePriorityFirst	=	0x1;

/* [helpstring] */ const long scComEntityExposurePriorityNormal	=	0x2;

/* [helpstring] */ const long scComEntityExposurePriorityLast	=	0x4;

/* [helpstring] */ const long scComUserControlInfoIdType	=	0;

/* [helpstring] */ const long scComUserControlInfoIdIdent1	=	1;

/* [helpstring] */ const long scComUserControlInfoIdIdent2	=	2;

/* [helpstring] */ const long scComUserControlInfoIdIdent3	=	3;

/* [helpstring] */ const long scComUserControlInfoIdIdent4	=	4;

/* [helpstring] */ const long scComUserControlTypeExposureControl	=	1;

/* [helpstring] */ const long scComPropertySheetUpdateStyles	=	0x10000;

/* [helpstring] */ const long scComPropertySheetUpdateApply	=	0x20000;

/* [helpstring] */ const long scComPropertySheetUpdateResource	=	0x30000;

/* [helpstring] */ const long scComPropertySheetUpdatePages	=	0x40000;

#endif /* __ScConstantsProperty_MODULE_DEFINED__ */

#ifndef __SC_IControlPropertyPage_INTERFACE_DEFINED__
#define __SC_IControlPropertyPage_INTERFACE_DEFINED__

/* interface SC_IControlPropertyPage */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlPropertyPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CEDB6C4-AFA3-11d2-9AB8-008048EEE00C")
    SC_IControlPropertyPage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetType( 
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPicture( 
            /* [retval][out] */ LPPICTUREDISP *Picture) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDisplayFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDisplayFlags( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCursor( 
            /* [retval][out] */ LPPICTUREDISP *Cursor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrlInfo( 
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlPropertyPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlPropertyPage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlPropertyPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlPropertyPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlPropertyPage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlPropertyPage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlPropertyPage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlPropertyPage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetType )( 
            SC_IControlPropertyPage * This,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPicture )( 
            SC_IControlPropertyPage * This,
            /* [retval][out] */ LPPICTUREDISP *Picture);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDisplayFlags )( 
            SC_IControlPropertyPage * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDisplayFlags )( 
            SC_IControlPropertyPage * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCursor )( 
            SC_IControlPropertyPage * This,
            /* [retval][out] */ LPPICTUREDISP *Cursor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrl )( 
            SC_IControlPropertyPage * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrlInfo )( 
            SC_IControlPropertyPage * This,
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info);
        
        END_INTERFACE
    } SC_IControlPropertyPageVtbl;

    interface SC_IControlPropertyPage
    {
        CONST_VTBL struct SC_IControlPropertyPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlPropertyPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlPropertyPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlPropertyPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlPropertyPage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlPropertyPage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlPropertyPage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlPropertyPage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlPropertyPage_ScGetType(This,Type)	\
    ( (This)->lpVtbl -> ScGetType(This,Type) ) 

#define SC_IControlPropertyPage_ScGetPicture(This,Picture)	\
    ( (This)->lpVtbl -> ScGetPicture(This,Picture) ) 

#define SC_IControlPropertyPage_get_ScDisplayFlags(This,Flags)	\
    ( (This)->lpVtbl -> get_ScDisplayFlags(This,Flags) ) 

#define SC_IControlPropertyPage_put_ScDisplayFlags(This,Flags)	\
    ( (This)->lpVtbl -> put_ScDisplayFlags(This,Flags) ) 

#define SC_IControlPropertyPage_ScGetCursor(This,Cursor)	\
    ( (This)->lpVtbl -> ScGetCursor(This,Cursor) ) 

#define SC_IControlPropertyPage_ScGetContainedUserCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrl(This,Control) ) 

#define SC_IControlPropertyPage_ScGetContainedUserCtrlInfo(This,InfoId,Info)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrlInfo(This,InfoId,Info) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlPropertyPage_INTERFACE_DEFINED__ */


#ifndef __SC_IPropertyPage_INTERFACE_DEFINED__
#define __SC_IPropertyPage_INTERFACE_DEFINED__

/* interface SC_IPropertyPage */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IPropertyPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CEDB6C2-AFA3-11d2-9AB8-008048EEE00C")
    SC_IPropertyPage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedCtrl( 
            /* [retval][out] */ SC_IControlPropertyPage **Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrl( 
            /* [retval][out] */ LPDISPATCH *Control) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetContainedUserCtrlInfo( 
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IPropertyPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPropertyPage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPropertyPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPropertyPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPropertyPage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPropertyPage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPropertyPage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPropertyPage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedCtrl )( 
            SC_IPropertyPage * This,
            /* [retval][out] */ SC_IControlPropertyPage **Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetName )( 
            SC_IPropertyPage * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrl )( 
            SC_IPropertyPage * This,
            /* [retval][out] */ LPDISPATCH *Control);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetContainedUserCtrlInfo )( 
            SC_IPropertyPage * This,
            /* [in] */ long InfoId,
            /* [retval][out] */ long *Info);
        
        END_INTERFACE
    } SC_IPropertyPageVtbl;

    interface SC_IPropertyPage
    {
        CONST_VTBL struct SC_IPropertyPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPropertyPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPropertyPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPropertyPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPropertyPage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPropertyPage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPropertyPage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPropertyPage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPropertyPage_ScGetContainedCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetContainedCtrl(This,Control) ) 

#define SC_IPropertyPage_ScGetName(This,Name)	\
    ( (This)->lpVtbl -> ScGetName(This,Name) ) 

#define SC_IPropertyPage_ScGetContainedUserCtrl(This,Control)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrl(This,Control) ) 

#define SC_IPropertyPage_ScGetContainedUserCtrlInfo(This,InfoId,Info)	\
    ( (This)->lpVtbl -> ScGetContainedUserCtrlInfo(This,InfoId,Info) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IPropertyPage_INTERFACE_DEFINED__ */


#ifndef __SC_IControlEntityProperty_INTERFACE_DEFINED__
#define __SC_IControlEntityProperty_INTERFACE_DEFINED__

/* interface SC_IControlEntityProperty */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlEntityProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68C8EAB2-CBEF-11d1-8C6C-008048EEDCB8")
    SC_IControlEntityProperty : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckEntity( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperty( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPropertyName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScApplyProperty( 
            /* [retval][out] */ long *Apply) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetView( 
            /* [in] */ LPDISPATCH View) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScTabInto( 
            /* [in] */ long Param,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateEntity( 
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditResource( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateResource( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlEntityPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlEntityProperty * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlEntityProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlEntityProperty * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlEntityProperty * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlEntityProperty * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlEntityProperty * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlEntityProperty * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckEntity )( 
            SC_IControlEntityProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Check);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperty )( 
            SC_IControlEntityProperty * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPropertyName )( 
            SC_IControlEntityProperty * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScApplyProperty )( 
            SC_IControlEntityProperty * This,
            /* [retval][out] */ long *Apply);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_IControlEntityProperty * This,
            /* [in] */ LPDISPATCH View);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IControlEntityProperty * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IControlEntityProperty * This,
            /* [in] */ LPDISPATCH Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Error);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_IControlEntityProperty * This,
            /* [in] */ long Param,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateEntity )( 
            SC_IControlEntityProperty * This,
            /* [retval][out] */ /* external definition not present */ SC_IEntity **Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditResource )( 
            SC_IControlEntityProperty * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateResource )( 
            SC_IControlEntityProperty * This);
        
        END_INTERFACE
    } SC_IControlEntityPropertyVtbl;

    interface SC_IControlEntityProperty
    {
        CONST_VTBL struct SC_IControlEntityPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlEntityProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlEntityProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlEntityProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlEntityProperty_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlEntityProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlEntityProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlEntityProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlEntityProperty_ScCheckEntity(This,Entity,Check)	\
    ( (This)->lpVtbl -> ScCheckEntity(This,Entity,Check) ) 

#define SC_IControlEntityProperty_ScEditProperty(This,Entity)	\
    ( (This)->lpVtbl -> ScEditProperty(This,Entity) ) 

#define SC_IControlEntityProperty_ScGetPropertyName(This,Name)	\
    ( (This)->lpVtbl -> ScGetPropertyName(This,Name) ) 

#define SC_IControlEntityProperty_ScApplyProperty(This,Apply)	\
    ( (This)->lpVtbl -> ScApplyProperty(This,Apply) ) 

#define SC_IControlEntityProperty_ScSetView(This,View)	\
    ( (This)->lpVtbl -> ScSetView(This,View) ) 

#define SC_IControlEntityProperty_ScLoadFromArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlEntityProperty_ScSaveToArchive(This,Archive,Name,Flags,Error)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Error) ) 

#define SC_IControlEntityProperty_ScTabInto(This,Param,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Param,Result) ) 

#define SC_IControlEntityProperty_ScCreateEntity(This,Entity)	\
    ( (This)->lpVtbl -> ScCreateEntity(This,Entity) ) 

#define SC_IControlEntityProperty_ScEditResource(This)	\
    ( (This)->lpVtbl -> ScEditResource(This) ) 

#define SC_IControlEntityProperty_ScUpdateResource(This)	\
    ( (This)->lpVtbl -> ScUpdateResource(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlEntityProperty_INTERFACE_DEFINED__ */


#ifndef __SC_IControlEntityPropertyEvents_DISPINTERFACE_DEFINED__
#define __SC_IControlEntityPropertyEvents_DISPINTERFACE_DEFINED__

/* dispinterface SC_IControlEntityPropertyEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID_SC_IControlEntityPropertyEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("68C8EAB4-CBEF-11d1-8C6C-008048EEDCB8")
    SC_IControlEntityPropertyEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlEntityPropertyEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlEntityPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlEntityPropertyEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlEntityPropertyEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlEntityPropertyEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlEntityPropertyEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlEntityPropertyEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlEntityPropertyEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } SC_IControlEntityPropertyEventsVtbl;

    interface SC_IControlEntityPropertyEvents
    {
        CONST_VTBL struct SC_IControlEntityPropertyEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlEntityPropertyEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlEntityPropertyEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlEntityPropertyEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlEntityPropertyEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlEntityPropertyEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlEntityPropertyEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlEntityPropertyEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __SC_IControlEntityPropertyEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IControlEntityExposure_INTERFACE_DEFINED__
#define __SC_IControlEntityExposure_INTERFACE_DEFINED__

/* interface SC_IControlEntityExposure */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlEntityExposure;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("484A2852-D2F2-11d1-8C6F-008048EEDCB8")
    SC_IControlEntityExposure : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOpticModule2D( 
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetOutput2D( 
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOnExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScInitExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEndExposure( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSelectStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExposureInfo( 
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateStyles( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFunctionFlags( 
            /* [retval][out] */ long *Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPriority( 
            /* [retval][out] */ long *Priority) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditPowerMap( 
            /* [in] */ long HeadId,
            /* [in] */ long Flags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlEntityExposureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlEntityExposure * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlEntityExposure * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlEntityExposure * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlEntityExposure * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlEntityExposure * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlEntityExposure * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlEntityExposure * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IControlEntityExposure * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *OpticModule);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutput2D )( 
            SC_IControlEntityExposure * This,
            /* [in] */ /* external definition not present */ SC_IControlGalvoModLaser2D *Output);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOnExposure )( 
            SC_IControlEntityExposure * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScInitExposure )( 
            SC_IControlEntityExposure * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEndExposure )( 
            SC_IControlEntityExposure * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSelectStyle )( 
            SC_IControlEntityExposure * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExposureInfo )( 
            SC_IControlEntityExposure * This,
            /* [in] */ long Info,
            /* [retval][out] */ long *Exposure);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateStyles )( 
            SC_IControlEntityExposure * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFunctionFlags )( 
            SC_IControlEntityExposure * This,
            /* [retval][out] */ long *Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPriority )( 
            SC_IControlEntityExposure * This,
            /* [retval][out] */ long *Priority);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditStyle )( 
            SC_IControlEntityExposure * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *NewStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditPowerMap )( 
            SC_IControlEntityExposure * This,
            /* [in] */ long HeadId,
            /* [in] */ long Flags);
        
        END_INTERFACE
    } SC_IControlEntityExposureVtbl;

    interface SC_IControlEntityExposure
    {
        CONST_VTBL struct SC_IControlEntityExposureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlEntityExposure_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlEntityExposure_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlEntityExposure_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlEntityExposure_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlEntityExposure_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlEntityExposure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlEntityExposure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlEntityExposure_ScSetOpticModule2D(This,OpticModule)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule) ) 

#define SC_IControlEntityExposure_ScSetOutput2D(This,Output)	\
    ( (This)->lpVtbl -> ScSetOutput2D(This,Output) ) 

#define SC_IControlEntityExposure_ScOnExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScOnExposure(This,Entity,Exposure) ) 

#define SC_IControlEntityExposure_ScInitExposure(This,Entity,Exposure)	\
    ( (This)->lpVtbl -> ScInitExposure(This,Entity,Exposure) ) 

#define SC_IControlEntityExposure_ScEndExposure(This,Entity)	\
    ( (This)->lpVtbl -> ScEndExposure(This,Entity) ) 

#define SC_IControlEntityExposure_ScSelectStyle(This,Style,Exposure)	\
    ( (This)->lpVtbl -> ScSelectStyle(This,Style,Exposure) ) 

#define SC_IControlEntityExposure_ScExposureInfo(This,Info,Exposure)	\
    ( (This)->lpVtbl -> ScExposureInfo(This,Info,Exposure) ) 

#define SC_IControlEntityExposure_ScUpdateStyles(This)	\
    ( (This)->lpVtbl -> ScUpdateStyles(This) ) 

#define SC_IControlEntityExposure_ScGetFunctionFlags(This,Flags)	\
    ( (This)->lpVtbl -> ScGetFunctionFlags(This,Flags) ) 

#define SC_IControlEntityExposure_ScGetPriority(This,Priority)	\
    ( (This)->lpVtbl -> ScGetPriority(This,Priority) ) 

#define SC_IControlEntityExposure_ScEditStyle(This,Style,NewStyle)	\
    ( (This)->lpVtbl -> ScEditStyle(This,Style,NewStyle) ) 

#define SC_IControlEntityExposure_ScEditPowerMap(This,HeadId,Flags)	\
    ( (This)->lpVtbl -> ScEditPowerMap(This,HeadId,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlEntityExposure_INTERFACE_DEFINED__ */


#ifndef ___DSC_StandardEntityCtrl_DISPINTERFACE_DEFINED__
#define ___DSC_StandardEntityCtrl_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_StandardEntityCtrl */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_StandardEntityCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("ED1FA1E6-8664-47D5-A609-1502415B45A4")
    _DSC_StandardEntityCtrl : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_StandardEntityCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_StandardEntityCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_StandardEntityCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_StandardEntityCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_StandardEntityCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_StandardEntityCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_StandardEntityCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_StandardEntityCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_StandardEntityCtrlVtbl;

    interface _DSC_StandardEntityCtrl
    {
        CONST_VTBL struct _DSC_StandardEntityCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_StandardEntityCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_StandardEntityCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_StandardEntityCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_StandardEntityCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_StandardEntityCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_StandardEntityCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_StandardEntityCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_StandardEntityCtrl_DISPINTERFACE_DEFINED__ */


#ifndef ___DSC_StandardEntityCtrlEvents_DISPINTERFACE_DEFINED__
#define ___DSC_StandardEntityCtrlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSC_StandardEntityCtrlEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DSC_StandardEntityCtrlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("25ABB2D4-DC20-4027-8072-086C49762D94")
    _DSC_StandardEntityCtrlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSC_StandardEntityCtrlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSC_StandardEntityCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSC_StandardEntityCtrlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSC_StandardEntityCtrlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSC_StandardEntityCtrlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSC_StandardEntityCtrlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSC_StandardEntityCtrlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSC_StandardEntityCtrlEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSC_StandardEntityCtrlEventsVtbl;

    interface _DSC_StandardEntityCtrlEvents
    {
        CONST_VTBL struct _DSC_StandardEntityCtrlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSC_StandardEntityCtrlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSC_StandardEntityCtrlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSC_StandardEntityCtrlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSC_StandardEntityCtrlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSC_StandardEntityCtrlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSC_StandardEntityCtrlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSC_StandardEntityCtrlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSC_StandardEntityCtrlEvents_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IStandardEntityCtrl_INTERFACE_DEFINED__
#define __SC_IStandardEntityCtrl_INTERFACE_DEFINED__

/* interface SC_IStandardEntityCtrl */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IStandardEntityCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5BAE2A95-A124-49b2-85B5-98A9925DB78F")
    SC_IStandardEntityCtrl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCheckEntity( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScEditProperty( 
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Result) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IStandardEntityCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IStandardEntityCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IStandardEntityCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IStandardEntityCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCheckEntity )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScEditProperty )( 
            SC_IStandardEntityCtrl * This,
            /* [in] */ /* external definition not present */ SC_IEntity *Entity,
            /* [in] */ long Mode,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IStandardEntityCtrlVtbl;

    interface SC_IStandardEntityCtrl
    {
        CONST_VTBL struct SC_IStandardEntityCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IStandardEntityCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IStandardEntityCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IStandardEntityCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IStandardEntityCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IStandardEntityCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IStandardEntityCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IStandardEntityCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IStandardEntityCtrl_ScCheckEntity(This,Entity,Mode,Result)	\
    ( (This)->lpVtbl -> ScCheckEntity(This,Entity,Mode,Result) ) 

#define SC_IStandardEntityCtrl_ScEditProperty(This,Entity,Mode,Result)	\
    ( (This)->lpVtbl -> ScEditProperty(This,Entity,Mode,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IStandardEntityCtrl_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScStandardEntityCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("526FDED5-4368-4bcc-8D19-A0A98596C0D3")
ScStandardEntityCtrl;
#endif

#ifndef ___DScPropertySheet_DISPINTERFACE_DEFINED__
#define ___DScPropertySheet_DISPINTERFACE_DEFINED__

/* dispinterface _DScPropertySheet */
/* [hidden][helpstring][uuid] */ 


EXTERN_C const IID DIID__DScPropertySheet;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F37-2A3B-11d4-9BDD-008048EEE00C")
    _DScPropertySheet : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScPropertySheetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScPropertySheet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScPropertySheet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScPropertySheet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScPropertySheet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScPropertySheet * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DScPropertySheetVtbl;

    interface _DScPropertySheet
    {
        CONST_VTBL struct _DScPropertySheetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScPropertySheet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScPropertySheet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScPropertySheet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScPropertySheet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScPropertySheet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScPropertySheet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScPropertySheet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScPropertySheet_DISPINTERFACE_DEFINED__ */


#ifndef __SC_IPropertySheet_INTERFACE_DEFINED__
#define __SC_IPropertySheet_INTERFACE_DEFINED__

/* interface SC_IPropertySheet */
/* [dual][object][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_SC_IPropertySheet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F519F39-2A3B-11d4-9BDD-008048EEE00C")
    SC_IPropertySheet : public IDispatch
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
            /* [retval][out] */ SC_IPropertyPage **Page) = 0;
        
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
            /* [retval][out] */ SC_IPropertyPage **Page) = 0;
        
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
            /* [retval][out] */ SC_IPropertyPage **Page) = 0;
        
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

    typedef struct SC_IPropertySheetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IPropertySheet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IPropertySheet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IPropertySheet * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IPropertySheet * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IPropertySheet * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IPropertySheet * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetEntity )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *Entity,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetActivePage )( 
            SC_IPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPage )( 
            SC_IPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePage )( 
            SC_IPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetActivePage )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetView )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *View,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOpticModule2D )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *OpticModule,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsPageEnabled )( 
            SC_IPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Enabled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScLoadFromArchive )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *Archive,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSaveToArchive )( 
            SC_IPropertySheet * This,
            IDispatch *Archive,
            BSTR Name,
            long Flags,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPage )( 
            SC_IPropertySheet * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTabInto )( 
            SC_IPropertySheet * This,
            long Item,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHidePage )( 
            SC_IPropertySheet * This,
            BSTR Name,
            long Hide,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdate )( 
            SC_IPropertySheet * This,
            /* [in] */ long Option,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCount )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ long *Count);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPageByIndex )( 
            SC_IPropertySheet * This,
            /* [in] */ long index,
            /* [retval][out] */ SC_IPropertyPage **Page);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ long *Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemoveAllPages )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoTab )( 
            SC_IPropertySheet * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoTab )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAutoLoad )( 
            SC_IPropertySheet * This,
            /* [in] */ long Auto);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAutoLoad )( 
            SC_IPropertySheet * This,
            /* [retval][out] */ long *Auto);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetOutputDevice )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *Device,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAddPropertyControl )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRemovePropertyControl )( 
            SC_IPropertySheet * This,
            /* [in] */ IDispatch *Control,
            /* [retval][out] */ long *Result);
        
        END_INTERFACE
    } SC_IPropertySheetVtbl;

    interface SC_IPropertySheet
    {
        CONST_VTBL struct SC_IPropertySheetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IPropertySheet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IPropertySheet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IPropertySheet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IPropertySheet_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IPropertySheet_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IPropertySheet_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IPropertySheet_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IPropertySheet_ScSetEntity(This,Entity,Result)	\
    ( (This)->lpVtbl -> ScSetEntity(This,Entity,Result) ) 

#define SC_IPropertySheet_ScSetActivePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScSetActivePage(This,Name,Result) ) 

#define SC_IPropertySheet_ScAddPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScAddPage(This,Name,Page) ) 

#define SC_IPropertySheet_ScRemovePage(This,Name,Result)	\
    ( (This)->lpVtbl -> ScRemovePage(This,Name,Result) ) 

#define SC_IPropertySheet_ScGetActivePage(This,Name)	\
    ( (This)->lpVtbl -> ScGetActivePage(This,Name) ) 

#define SC_IPropertySheet_ScSetView(This,View,Result)	\
    ( (This)->lpVtbl -> ScSetView(This,View,Result) ) 

#define SC_IPropertySheet_ScSetOpticModule2D(This,OpticModule,Result)	\
    ( (This)->lpVtbl -> ScSetOpticModule2D(This,OpticModule,Result) ) 

#define SC_IPropertySheet_ScIsPageEnabled(This,Name,Enabled)	\
    ( (This)->lpVtbl -> ScIsPageEnabled(This,Name,Enabled) ) 

#define SC_IPropertySheet_ScLoadFromArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScLoadFromArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IPropertySheet_ScSaveToArchive(This,Archive,Name,Flags,Result)	\
    ( (This)->lpVtbl -> ScSaveToArchive(This,Archive,Name,Flags,Result) ) 

#define SC_IPropertySheet_ScGetPage(This,Name,Page)	\
    ( (This)->lpVtbl -> ScGetPage(This,Name,Page) ) 

#define SC_IPropertySheet_ScTabInto(This,Item,Result)	\
    ( (This)->lpVtbl -> ScTabInto(This,Item,Result) ) 

#define SC_IPropertySheet_ScHidePage(This,Name,Hide,Result)	\
    ( (This)->lpVtbl -> ScHidePage(This,Name,Hide,Result) ) 

#define SC_IPropertySheet_ScUpdate(This,Option,Result)	\
    ( (This)->lpVtbl -> ScUpdate(This,Option,Result) ) 

#define SC_IPropertySheet_ScGetCount(This,Count)	\
    ( (This)->lpVtbl -> ScGetCount(This,Count) ) 

#define SC_IPropertySheet_ScGetPageByIndex(This,index,Page)	\
    ( (This)->lpVtbl -> ScGetPageByIndex(This,index,Page) ) 

#define SC_IPropertySheet_ScIsDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,Dirty) ) 

#define SC_IPropertySheet_ScRemoveAllPages(This,Result)	\
    ( (This)->lpVtbl -> ScRemoveAllPages(This,Result) ) 

#define SC_IPropertySheet_put_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoTab(This,Auto) ) 

#define SC_IPropertySheet_get_ScAutoTab(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoTab(This,Auto) ) 

#define SC_IPropertySheet_put_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> put_ScAutoLoad(This,Auto) ) 

#define SC_IPropertySheet_get_ScAutoLoad(This,Auto)	\
    ( (This)->lpVtbl -> get_ScAutoLoad(This,Auto) ) 

#define SC_IPropertySheet_ScSetOutputDevice(This,Device,Result)	\
    ( (This)->lpVtbl -> ScSetOutputDevice(This,Device,Result) ) 

#define SC_IPropertySheet_ScAddPropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScAddPropertyControl(This,Control,Result) ) 

#define SC_IPropertySheet_ScRemovePropertyControl(This,Control,Result)	\
    ( (This)->lpVtbl -> ScRemovePropertyControl(This,Control,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IPropertySheet_INTERFACE_DEFINED__ */


#ifndef ___DScPropertySheetEvents_DISPINTERFACE_DEFINED__
#define ___DScPropertySheetEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DScPropertySheetEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DScPropertySheetEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2F519F3B-2A3B-11d4-9BDD-008048EEE00C")
    _DScPropertySheetEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DScPropertySheetEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DScPropertySheetEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DScPropertySheetEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DScPropertySheetEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DScPropertySheetEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DScPropertySheetEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DScPropertySheetEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DScPropertySheetEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DScPropertySheetEventsVtbl;

    interface _DScPropertySheetEvents
    {
        CONST_VTBL struct _DScPropertySheetEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DScPropertySheetEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DScPropertySheetEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DScPropertySheetEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DScPropertySheetEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DScPropertySheetEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DScPropertySheetEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DScPropertySheetEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DScPropertySheetEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScPropertySheet;

#ifdef __cplusplus

class DECLSPEC_UUID("2F519F3D-2A3B-11d4-9BDD-008048EEE00C")
ScPropertySheet;
#endif

EXTERN_C const CLSID CLSID_ScControlEntityProperty;

#ifdef __cplusplus

class DECLSPEC_UUID("1D72BE22-CC90-11d1-8C6C-008048EEDCB8")
ScControlEntityProperty;
#endif

EXTERN_C const CLSID CLSID_ScControlPropertyPage;

#ifdef __cplusplus

class DECLSPEC_UUID("5CEDB6C6-AFA3-11d2-9AB8-008048EEE00C")
ScControlPropertyPage;
#endif

EXTERN_C const CLSID CLSID_ScPropertyPage;

#ifdef __cplusplus

class DECLSPEC_UUID("5CEDB6C8-AFA3-11d2-9AB8-008048EEE00C")
ScPropertyPage;
#endif
#endif /* __ScapsSamProperty_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


