

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:23 2017
 */
/* Compiler settings for d:\scaps\dll_source\database\com\include\sc_data_base_type_lib.idl:
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


#ifndef __sc_data_base_type_lib_h__
#define __sc_data_base_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IDocStream_FWD_DEFINED__
#define __SC_IDocStream_FWD_DEFINED__
typedef interface SC_IDocStream SC_IDocStream;
#endif 	/* __SC_IDocStream_FWD_DEFINED__ */


#ifndef __SC_IDocStorage_FWD_DEFINED__
#define __SC_IDocStorage_FWD_DEFINED__
typedef interface SC_IDocStorage SC_IDocStorage;
#endif 	/* __SC_IDocStorage_FWD_DEFINED__ */


#ifndef __SC_IDocArchive_FWD_DEFINED__
#define __SC_IDocArchive_FWD_DEFINED__
typedef interface SC_IDocArchive SC_IDocArchive;
#endif 	/* __SC_IDocArchive_FWD_DEFINED__ */


#ifndef __ScDocArchive_FWD_DEFINED__
#define __ScDocArchive_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDocArchive ScDocArchive;
#else
typedef struct ScDocArchive ScDocArchive;
#endif /* __cplusplus */

#endif 	/* __ScDocArchive_FWD_DEFINED__ */


#ifndef __ScDocStream_FWD_DEFINED__
#define __ScDocStream_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDocStream ScDocStream;
#else
typedef struct ScDocStream ScDocStream;
#endif /* __cplusplus */

#endif 	/* __ScDocStream_FWD_DEFINED__ */


#ifndef __ScDocStorage_FWD_DEFINED__
#define __ScDocStorage_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScDocStorage ScDocStorage;
#else
typedef struct ScDocStorage ScDocStorage;
#endif /* __cplusplus */

#endif 	/* __ScDocStorage_FWD_DEFINED__ */


#ifndef __ScResourceManager_FWD_DEFINED__
#define __ScResourceManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScResourceManager ScResourceManager;
#else
typedef struct ScResourceManager ScResourceManager;
#endif /* __cplusplus */

#endif 	/* __ScResourceManager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_data_base_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_data_base_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_data_base_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamDataBase_LIBRARY_DEFINED__
#define __ScapsSamDataBase_LIBRARY_DEFINED__

/* library ScapsSamDataBase */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamDataBase;

#ifndef __SC_IDocStream_INTERFACE_DEFINED__
#define __SC_IDocStream_INTERFACE_DEFINED__

/* interface SC_IDocStream */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IDocStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9F2B103-8A95-11d2-9AA5-008048EEE00C")
    SC_IDocStream : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWrite( 
            /* [in] */ VARIANT Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScRead( 
            /* [retval][out] */ VARIANT *Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScFlush( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScPosition( 
            /* [in] */ long Pos) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScPosition( 
            /* [retval][out] */ long *Pos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetIStream( 
            /* [retval][out] */ IUnknown **Stream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWrite2( 
            /* [in] */ VARIANT *Data) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IDocStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IDocStream * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IDocStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IDocStream * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IDocStream * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IDocStream * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IDocStream * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IDocStream * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWrite )( 
            SC_IDocStream * This,
            /* [in] */ VARIANT Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScRead )( 
            SC_IDocStream * This,
            /* [retval][out] */ VARIANT *Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScFlush )( 
            SC_IDocStream * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScPosition )( 
            SC_IDocStream * This,
            /* [in] */ long Pos);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScPosition )( 
            SC_IDocStream * This,
            /* [retval][out] */ long *Pos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetIStream )( 
            SC_IDocStream * This,
            /* [retval][out] */ IUnknown **Stream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWrite2 )( 
            SC_IDocStream * This,
            /* [in] */ VARIANT *Data);
        
        END_INTERFACE
    } SC_IDocStreamVtbl;

    interface SC_IDocStream
    {
        CONST_VTBL struct SC_IDocStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IDocStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IDocStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IDocStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IDocStream_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IDocStream_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IDocStream_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IDocStream_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IDocStream_ScWrite(This,Data)	\
    ( (This)->lpVtbl -> ScWrite(This,Data) ) 

#define SC_IDocStream_ScRead(This,Data)	\
    ( (This)->lpVtbl -> ScRead(This,Data) ) 

#define SC_IDocStream_ScFlush(This)	\
    ( (This)->lpVtbl -> ScFlush(This) ) 

#define SC_IDocStream_put_ScPosition(This,Pos)	\
    ( (This)->lpVtbl -> put_ScPosition(This,Pos) ) 

#define SC_IDocStream_get_ScPosition(This,Pos)	\
    ( (This)->lpVtbl -> get_ScPosition(This,Pos) ) 

#define SC_IDocStream_ScGetIStream(This,Stream)	\
    ( (This)->lpVtbl -> ScGetIStream(This,Stream) ) 

#define SC_IDocStream_ScWrite2(This,Data)	\
    ( (This)->lpVtbl -> ScWrite2(This,Data) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IDocStream_INTERFACE_DEFINED__ */


#ifndef __SC_IDocStorage_INTERFACE_DEFINED__
#define __SC_IDocStorage_INTERFACE_DEFINED__

/* interface SC_IDocStorage */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IDocStorage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9F2B105-8A95-11d2-9AA5-008048EEE00C")
    SC_IDocStorage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateStream( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStream **Stream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenStream( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStream **Stream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScAttach( 
            /* [in] */ LPUNKNOWN storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetFirstName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNextName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetType( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Type) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCloseStream( 
            BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetClsid( 
            /* [in] */ long ID0,
            /* [in] */ long ID1,
            /* [in] */ long ID2,
            /* [in] */ long ID3) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetClsid( 
            /* [in] */ long Index,
            /* [retval][out] */ long *ID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScDestroy( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPreviewImage( 
            /* [retval][out] */ VARIANT *bitmap) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IDocStorageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IDocStorage * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IDocStorage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IDocStorage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IDocStorage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IDocStorage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IDocStorage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IDocStorage * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateStream )( 
            SC_IDocStorage * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStream **Stream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenStream )( 
            SC_IDocStorage * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStream **Stream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScAttach )( 
            SC_IDocStorage * This,
            /* [in] */ LPUNKNOWN storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetFirstName )( 
            SC_IDocStorage * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNextName )( 
            SC_IDocStorage * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetType )( 
            SC_IDocStorage * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ long *Type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCloseStream )( 
            SC_IDocStorage * This,
            BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetClsid )( 
            SC_IDocStorage * This,
            /* [in] */ long ID0,
            /* [in] */ long ID1,
            /* [in] */ long ID2,
            /* [in] */ long ID3);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetClsid )( 
            SC_IDocStorage * This,
            /* [in] */ long Index,
            /* [retval][out] */ long *ID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScDestroy )( 
            SC_IDocStorage * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPreviewImage )( 
            SC_IDocStorage * This,
            /* [retval][out] */ VARIANT *bitmap);
        
        END_INTERFACE
    } SC_IDocStorageVtbl;

    interface SC_IDocStorage
    {
        CONST_VTBL struct SC_IDocStorageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IDocStorage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IDocStorage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IDocStorage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IDocStorage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IDocStorage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IDocStorage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IDocStorage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IDocStorage_ScCreateStream(This,Name,Stream)	\
    ( (This)->lpVtbl -> ScCreateStream(This,Name,Stream) ) 

#define SC_IDocStorage_ScOpenStream(This,Name,Stream)	\
    ( (This)->lpVtbl -> ScOpenStream(This,Name,Stream) ) 

#define SC_IDocStorage_ScAttach(This,storage)	\
    ( (This)->lpVtbl -> ScAttach(This,storage) ) 

#define SC_IDocStorage_ScGetFirstName(This,Name)	\
    ( (This)->lpVtbl -> ScGetFirstName(This,Name) ) 

#define SC_IDocStorage_ScGetNextName(This,Name)	\
    ( (This)->lpVtbl -> ScGetNextName(This,Name) ) 

#define SC_IDocStorage_ScGetType(This,Name,Type)	\
    ( (This)->lpVtbl -> ScGetType(This,Name,Type) ) 

#define SC_IDocStorage_ScCloseStream(This,Name)	\
    ( (This)->lpVtbl -> ScCloseStream(This,Name) ) 

#define SC_IDocStorage_ScSetClsid(This,ID0,ID1,ID2,ID3)	\
    ( (This)->lpVtbl -> ScSetClsid(This,ID0,ID1,ID2,ID3) ) 

#define SC_IDocStorage_ScGetClsid(This,Index,ID)	\
    ( (This)->lpVtbl -> ScGetClsid(This,Index,ID) ) 

#define SC_IDocStorage_ScDestroy(This,Name)	\
    ( (This)->lpVtbl -> ScDestroy(This,Name) ) 

#define SC_IDocStorage_ScGetPreviewImage(This,bitmap)	\
    ( (This)->lpVtbl -> ScGetPreviewImage(This,bitmap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IDocStorage_INTERFACE_DEFINED__ */


#ifndef __SC_IDocArchive_INTERFACE_DEFINED__
#define __SC_IDocArchive_INTERFACE_DEFINED__

/* interface SC_IDocArchive */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IDocArchive;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CADF98C2-4185-11d2-9A59-008048EEE00C")
    SC_IDocArchive : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCloseStorage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetCurrentStorage( 
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenScapsStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCloseCurrentStorage( void) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScCompressed( 
            /* [in] */ long OnOff) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScCompressed( 
            /* [retval][out] */ long *OnOff) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetArchiveInfo( 
            /* [in] */ BSTR FileName,
            /* [in] */ long InfoID,
            /* [retval][out] */ BSTR *Info) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenLensStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenLaserStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateLensStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCreateLaserStorage( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenImportExportStream( 
            /* [in] */ BSTR StorageName,
            /* [in] */ long ReadOnly) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScCloseStorageUntilRoot( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenStorageEx( 
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ CLSID *puuid,
            /* [in] */ long create,
            /* [retval][out] */ SC_IDocStorage **Storage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IDocArchiveVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IDocArchive * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IDocArchive * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IDocArchive * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IDocArchive * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IDocArchive * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IDocArchive * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IDocArchive * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCloseStorage )( 
            SC_IDocArchive * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetCurrentStorage )( 
            SC_IDocArchive * This,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenScapsStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCloseCurrentStorage )( 
            SC_IDocArchive * This);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScCompressed )( 
            SC_IDocArchive * This,
            /* [in] */ long OnOff);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScCompressed )( 
            SC_IDocArchive * This,
            /* [retval][out] */ long *OnOff);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetArchiveInfo )( 
            SC_IDocArchive * This,
            /* [in] */ BSTR FileName,
            /* [in] */ long InfoID,
            /* [retval][out] */ BSTR *Info);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenLensStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenLaserStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateLensStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCreateLaserStorage )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ long Flags,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenImportExportStream )( 
            SC_IDocArchive * This,
            /* [in] */ BSTR StorageName,
            /* [in] */ long ReadOnly);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScCloseStorageUntilRoot )( 
            SC_IDocArchive * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenStorageEx )( 
            SC_IDocArchive * This,
            /* [in] */ SC_IDocStorage *ParentStorage,
            /* [in] */ BSTR Name,
            /* [in] */ CLSID *puuid,
            /* [in] */ long create,
            /* [retval][out] */ SC_IDocStorage **Storage);
        
        END_INTERFACE
    } SC_IDocArchiveVtbl;

    interface SC_IDocArchive
    {
        CONST_VTBL struct SC_IDocArchiveVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IDocArchive_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IDocArchive_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IDocArchive_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IDocArchive_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IDocArchive_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IDocArchive_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IDocArchive_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IDocArchive_ScCreateStorage(This,ParentStorage,Name,Storage)	\
    ( (This)->lpVtbl -> ScCreateStorage(This,ParentStorage,Name,Storage) ) 

#define SC_IDocArchive_ScOpenStorage(This,ParentStorage,Name,Storage)	\
    ( (This)->lpVtbl -> ScOpenStorage(This,ParentStorage,Name,Storage) ) 

#define SC_IDocArchive_ScCloseStorage(This)	\
    ( (This)->lpVtbl -> ScCloseStorage(This) ) 

#define SC_IDocArchive_ScGetCurrentStorage(This,Storage)	\
    ( (This)->lpVtbl -> ScGetCurrentStorage(This,Storage) ) 

#define SC_IDocArchive_ScOpenScapsStorage(This,ParentStorage,Name,Storage)	\
    ( (This)->lpVtbl -> ScOpenScapsStorage(This,ParentStorage,Name,Storage) ) 

#define SC_IDocArchive_ScCloseCurrentStorage(This)	\
    ( (This)->lpVtbl -> ScCloseCurrentStorage(This) ) 

#define SC_IDocArchive_put_ScCompressed(This,OnOff)	\
    ( (This)->lpVtbl -> put_ScCompressed(This,OnOff) ) 

#define SC_IDocArchive_get_ScCompressed(This,OnOff)	\
    ( (This)->lpVtbl -> get_ScCompressed(This,OnOff) ) 

#define SC_IDocArchive_ScGetArchiveInfo(This,FileName,InfoID,Info)	\
    ( (This)->lpVtbl -> ScGetArchiveInfo(This,FileName,InfoID,Info) ) 

#define SC_IDocArchive_ScOpenLensStorage(This,ParentStorage,Name,Flags,Storage)	\
    ( (This)->lpVtbl -> ScOpenLensStorage(This,ParentStorage,Name,Flags,Storage) ) 

#define SC_IDocArchive_ScOpenLaserStorage(This,ParentStorage,Name,Flags,Storage)	\
    ( (This)->lpVtbl -> ScOpenLaserStorage(This,ParentStorage,Name,Flags,Storage) ) 

#define SC_IDocArchive_ScCreateLensStorage(This,ParentStorage,Name,Flags,Storage)	\
    ( (This)->lpVtbl -> ScCreateLensStorage(This,ParentStorage,Name,Flags,Storage) ) 

#define SC_IDocArchive_ScCreateLaserStorage(This,ParentStorage,Name,Flags,Storage)	\
    ( (This)->lpVtbl -> ScCreateLaserStorage(This,ParentStorage,Name,Flags,Storage) ) 

#define SC_IDocArchive_ScOpenImportExportStream(This,StorageName,ReadOnly)	\
    ( (This)->lpVtbl -> ScOpenImportExportStream(This,StorageName,ReadOnly) ) 

#define SC_IDocArchive_ScCloseStorageUntilRoot(This)	\
    ( (This)->lpVtbl -> ScCloseStorageUntilRoot(This) ) 

#define SC_IDocArchive_ScOpenStorageEx(This,ParentStorage,Name,puuid,create,Storage)	\
    ( (This)->lpVtbl -> ScOpenStorageEx(This,ParentStorage,Name,puuid,create,Storage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IDocArchive_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ScDocArchive;

#ifdef __cplusplus

class DECLSPEC_UUID("CADF98C4-4185-11d2-9A59-008048EEE00C")
ScDocArchive;
#endif

EXTERN_C const CLSID CLSID_ScDocStream;

#ifdef __cplusplus

class DECLSPEC_UUID("C9F2B104-8A95-11d2-9AA5-008048EEE00C")
ScDocStream;
#endif

EXTERN_C const CLSID CLSID_ScDocStorage;

#ifdef __cplusplus

class DECLSPEC_UUID("C9F2B107-8A95-11d2-9AA5-008048EEE00C")
ScDocStorage;
#endif

EXTERN_C const CLSID CLSID_ScResourceManager;

#ifdef __cplusplus

class DECLSPEC_UUID("55141801-5964-11d3-8548-00C0DFEA4A3A")
ScResourceManager;
#endif
#endif /* __ScapsSamDataBase_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


