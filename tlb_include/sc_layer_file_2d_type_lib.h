

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:43 2017
 */
/* Compiler settings for d:\scaps\dll_source\layer_file_2d\com\include\sc_layer_file_2d_type_lib.idl:
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


#ifndef __sc_layer_file_2d_type_lib_h__
#define __sc_layer_file_2d_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_ILayerFile2D_FWD_DEFINED__
#define __SC_ILayerFile2D_FWD_DEFINED__
typedef interface SC_ILayerFile2D SC_ILayerFile2D;
#endif 	/* __SC_ILayerFile2D_FWD_DEFINED__ */


#ifndef __ScLayerFile2D_FWD_DEFINED__
#define __ScLayerFile2D_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScLayerFile2D ScLayerFile2D;
#else
typedef struct ScLayerFile2D ScLayerFile2D;
#endif /* __cplusplus */

#endif 	/* __ScLayerFile2D_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_layer_file_2d_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"
#include "sc_optic_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_layer_file_2d_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_layer_file_2d_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamLayerFile2D_LIBRARY_DEFINED__
#define __ScapsSamLayerFile2D_LIBRARY_DEFINED__

/* library ScapsSamLayerFile2D */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamLayerFile2D;

#ifndef __SC_ILayerFile2D_INTERFACE_DEFINED__
#define __SC_ILayerFile2D_INTERFACE_DEFINED__

/* interface SC_ILayerFile2D */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_ILayerFile2D;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2EB8E15-D2F5-11d2-84DE-00C0DFEA4A3A")
    SC_ILayerFile2D : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScResolution( 
            /* [retval][out] */ double *Res) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScResolution( 
            /* [in] */ double Res) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStyle( 
            /* [retval][out] */ long *Style) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStyle( 
            /* [in] */ long Style) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScFileType( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScFileType( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileRead( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScOpenFileWrite( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScExport( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScImport( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumAvailableImportFileTypes( 
            /* [retval][out] */ long *NumFileTypes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAvailableImportFileType( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAvailableImportFileTypeInfo( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileTypeInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetNumAvailableExportFileTypes( 
            /* [retval][out] */ long *NumFileTypes) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAvailableExportFileType( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAvailableExportFileTypeInfo( 
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileTypeInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasImportResolution( 
            /* [retval][out] */ long *HasResolution) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasExportResolution( 
            /* [retval][out] */ long *HasResolution) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasImportStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *HasStyle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHasExportStyle( 
            /* [in] */ long Style,
            /* [retval][out] */ long *HasStyle) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScXOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScXOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScYOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScYOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScOpticModule2D( 
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **Module) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScOpticModule2D( 
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *Module) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScShowAdvancedStyles( 
            /* [in] */ long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReadSettings( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWriteSettings( 
            /* [in] */ BSTR Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPenColor( 
            /* [in] */ long index,
            /* [retval][out] */ long *color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetPenColor( 
            /* [in] */ long index,
            /* [in] */ long color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetPreviewImage( 
            /* [retval][out] */ VARIANT *bitmap) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_ILayerFile2DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_ILayerFile2D * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_ILayerFile2D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_ILayerFile2D * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_ILayerFile2D * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_ILayerFile2D * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_ILayerFile2D * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_ILayerFile2D * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScResolution )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ double *Res);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScResolution )( 
            SC_ILayerFile2D * This,
            /* [in] */ double Res);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStyle )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ long *Style);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStyle )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Style);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScFileType )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScFileType )( 
            SC_ILayerFile2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileRead )( 
            SC_ILayerFile2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScOpenFileWrite )( 
            SC_ILayerFile2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScClose )( 
            SC_ILayerFile2D * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScExport )( 
            SC_ILayerFile2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScImport )( 
            SC_ILayerFile2D * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumAvailableImportFileTypes )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ long *NumFileTypes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAvailableImportFileType )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAvailableImportFileTypeInfo )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileTypeInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetNumAvailableExportFileTypes )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ long *NumFileTypes);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAvailableExportFileType )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAvailableExportFileTypeInfo )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Index,
            /* [retval][out] */ BSTR *FileTypeInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasImportResolution )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ long *HasResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasExportResolution )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ long *HasResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasImportStyle )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *HasStyle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHasExportStyle )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Style,
            /* [retval][out] */ long *HasStyle);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScXOffset )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScXOffset )( 
            SC_ILayerFile2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScYOffset )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScYOffset )( 
            SC_ILayerFile2D * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScOpticModule2D )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ /* external definition not present */ SC_IOpticModule2D **Module);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScOpticModule2D )( 
            SC_ILayerFile2D * This,
            /* [in] */ /* external definition not present */ SC_IOpticModule2D *Module);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScShowAdvancedStyles )( 
            SC_ILayerFile2D * This,
            /* [in] */ long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReadSettings )( 
            SC_ILayerFile2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWriteSettings )( 
            SC_ILayerFile2D * This,
            /* [in] */ BSTR Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPenColor )( 
            SC_ILayerFile2D * This,
            /* [in] */ long index,
            /* [retval][out] */ long *color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetPenColor )( 
            SC_ILayerFile2D * This,
            /* [in] */ long index,
            /* [in] */ long color);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetPreviewImage )( 
            SC_ILayerFile2D * This,
            /* [retval][out] */ VARIANT *bitmap);
        
        END_INTERFACE
    } SC_ILayerFile2DVtbl;

    interface SC_ILayerFile2D
    {
        CONST_VTBL struct SC_ILayerFile2DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_ILayerFile2D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_ILayerFile2D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_ILayerFile2D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_ILayerFile2D_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_ILayerFile2D_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_ILayerFile2D_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_ILayerFile2D_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_ILayerFile2D_get_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> get_ScResolution(This,Res) ) 

#define SC_ILayerFile2D_put_ScResolution(This,Res)	\
    ( (This)->lpVtbl -> put_ScResolution(This,Res) ) 

#define SC_ILayerFile2D_get_ScStyle(This,Style)	\
    ( (This)->lpVtbl -> get_ScStyle(This,Style) ) 

#define SC_ILayerFile2D_put_ScStyle(This,Style)	\
    ( (This)->lpVtbl -> put_ScStyle(This,Style) ) 

#define SC_ILayerFile2D_get_ScFileType(This,Name)	\
    ( (This)->lpVtbl -> get_ScFileType(This,Name) ) 

#define SC_ILayerFile2D_put_ScFileType(This,Name)	\
    ( (This)->lpVtbl -> put_ScFileType(This,Name) ) 

#define SC_ILayerFile2D_ScOpenFileRead(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileRead(This,Name) ) 

#define SC_ILayerFile2D_ScOpenFileWrite(This,Name)	\
    ( (This)->lpVtbl -> ScOpenFileWrite(This,Name) ) 

#define SC_ILayerFile2D_ScClose(This)	\
    ( (This)->lpVtbl -> ScClose(This) ) 

#define SC_ILayerFile2D_ScExport(This,Entity)	\
    ( (This)->lpVtbl -> ScExport(This,Entity) ) 

#define SC_ILayerFile2D_ScImport(This,Entity)	\
    ( (This)->lpVtbl -> ScImport(This,Entity) ) 

#define SC_ILayerFile2D_ScGetNumAvailableImportFileTypes(This,NumFileTypes)	\
    ( (This)->lpVtbl -> ScGetNumAvailableImportFileTypes(This,NumFileTypes) ) 

#define SC_ILayerFile2D_ScGetAvailableImportFileType(This,Index,FileType)	\
    ( (This)->lpVtbl -> ScGetAvailableImportFileType(This,Index,FileType) ) 

#define SC_ILayerFile2D_ScGetAvailableImportFileTypeInfo(This,Index,FileTypeInfo)	\
    ( (This)->lpVtbl -> ScGetAvailableImportFileTypeInfo(This,Index,FileTypeInfo) ) 

#define SC_ILayerFile2D_ScGetNumAvailableExportFileTypes(This,NumFileTypes)	\
    ( (This)->lpVtbl -> ScGetNumAvailableExportFileTypes(This,NumFileTypes) ) 

#define SC_ILayerFile2D_ScGetAvailableExportFileType(This,Index,FileType)	\
    ( (This)->lpVtbl -> ScGetAvailableExportFileType(This,Index,FileType) ) 

#define SC_ILayerFile2D_ScGetAvailableExportFileTypeInfo(This,Index,FileTypeInfo)	\
    ( (This)->lpVtbl -> ScGetAvailableExportFileTypeInfo(This,Index,FileTypeInfo) ) 

#define SC_ILayerFile2D_ScHasImportResolution(This,HasResolution)	\
    ( (This)->lpVtbl -> ScHasImportResolution(This,HasResolution) ) 

#define SC_ILayerFile2D_ScHasExportResolution(This,HasResolution)	\
    ( (This)->lpVtbl -> ScHasExportResolution(This,HasResolution) ) 

#define SC_ILayerFile2D_ScHasImportStyle(This,Style,HasStyle)	\
    ( (This)->lpVtbl -> ScHasImportStyle(This,Style,HasStyle) ) 

#define SC_ILayerFile2D_ScHasExportStyle(This,Style,HasStyle)	\
    ( (This)->lpVtbl -> ScHasExportStyle(This,Style,HasStyle) ) 

#define SC_ILayerFile2D_get_ScXOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScXOffset(This,Offset) ) 

#define SC_ILayerFile2D_put_ScXOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScXOffset(This,Offset) ) 

#define SC_ILayerFile2D_get_ScYOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScYOffset(This,Offset) ) 

#define SC_ILayerFile2D_put_ScYOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScYOffset(This,Offset) ) 

#define SC_ILayerFile2D_get_ScOpticModule2D(This,Module)	\
    ( (This)->lpVtbl -> get_ScOpticModule2D(This,Module) ) 

#define SC_ILayerFile2D_put_ScOpticModule2D(This,Module)	\
    ( (This)->lpVtbl -> put_ScOpticModule2D(This,Module) ) 

#define SC_ILayerFile2D_ScShowAdvancedStyles(This,Flags)	\
    ( (This)->lpVtbl -> ScShowAdvancedStyles(This,Flags) ) 

#define SC_ILayerFile2D_ScReadSettings(This,Name)	\
    ( (This)->lpVtbl -> ScReadSettings(This,Name) ) 

#define SC_ILayerFile2D_ScWriteSettings(This,Name)	\
    ( (This)->lpVtbl -> ScWriteSettings(This,Name) ) 

#define SC_ILayerFile2D_ScGetPenColor(This,index,color)	\
    ( (This)->lpVtbl -> ScGetPenColor(This,index,color) ) 

#define SC_ILayerFile2D_ScSetPenColor(This,index,color)	\
    ( (This)->lpVtbl -> ScSetPenColor(This,index,color) ) 

#define SC_ILayerFile2D_ScGetPreviewImage(This,bitmap)	\
    ( (This)->lpVtbl -> ScGetPreviewImage(This,bitmap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_ILayerFile2D_INTERFACE_DEFINED__ */



#ifndef __ScConstantsLayerFile2D_MODULE_DEFINED__
#define __ScConstantsLayerFile2D_MODULE_DEFINED__


/* module ScConstantsLayerFile2D */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectLayerFile2D	=	( 0x2000 | ( ( 10 * 0x1000000 )  + 0x200000 )  ) ;

/* [helpstring] */ const long scComLayerFile2DStyleImportPolyLines	=	0x1;

/* [helpstring] */ const long scComLayerFile2DStyleImportLineArrays	=	0x2;

/* [helpstring] */ const long scComLayerFile2DStyleImportAllToLineArrays	=	0x8;

/* [helpstring] */ const long scComLayerFile2DStyleExportPolyLines	=	0x10;

/* [helpstring] */ const long scComLayerFile2DStyleExportLineArrays	=	0x20;

/* [helpstring] */ const long scComLayerFile2DStyleCheckOrientation	=	0x40;

/* [helpstring] */ const long scComLayerFile2DStyleReadPens	=	0x80;

/* [helpstring] */ const long scComLayerFile2DStyleWritePens	=	0x100;

/* [helpstring] */ const long scComLayerFile2DStyleImportOpenPolyLines	=	0x200;

/* [helpstring] */ const long scComLayerFile2DStyleExportOnlySelected	=	0x400;

/* [helpstring] */ const long scComLayerFile2DStyleImportToLayer	=	0x800;

/* [helpstring] */ const long scComLayerFile2DStyleImportToEntities2D	=	0x1000;

/* [helpstring] */ const long scComLayerFile2DStyleImportSetupBitmapDefaultValues	=	0x100000;

/* [helpstring] */ const long scComLayerFile2DStyleWritePreview	=	0x2000;

/* [helpstring] */ const long scComLayerFile2DStylePointCloud	=	0x4000;

/* [helpstring] */ const long scComLayerFile2DStyleHasAdvancedStyles	=	0x8000;

/* [helpstring] */ const long scComLayerFile2DStyleImportIsBitmap	=	0x400000;

/* [helpstring] */ const long scComLayerFile2DStyleCreateOneGroup	=	0x2000000;

#endif /* __ScConstantsLayerFile2D_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScLayerFile2D;

#ifdef __cplusplus

class DECLSPEC_UUID("D2EB8E12-D2F5-11d2-84DE-00C0DFEA4A3A")
ScLayerFile2D;
#endif
#endif /* __ScapsSamLayerFile2D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


