

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:28 2017
 */
/* Compiler settings for d:\scaps\dll_source\adio\com\include\sc_control_ad_io_type_lib.idl:
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


#ifndef __sc_control_ad_io_type_lib_h__
#define __sc_control_ad_io_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IControlAdIo_FWD_DEFINED__
#define __SC_IControlAdIo_FWD_DEFINED__
typedef interface SC_IControlAdIo SC_IControlAdIo;
#endif 	/* __SC_IControlAdIo_FWD_DEFINED__ */


#ifndef __SC_IControlMotion_FWD_DEFINED__
#define __SC_IControlMotion_FWD_DEFINED__
typedef interface SC_IControlMotion SC_IControlMotion;
#endif 	/* __SC_IControlMotion_FWD_DEFINED__ */


#ifndef __ScControlAdIo_FWD_DEFINED__
#define __ScControlAdIo_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlAdIo ScControlAdIo;
#else
typedef struct ScControlAdIo ScControlAdIo;
#endif /* __cplusplus */

#endif 	/* __ScControlAdIo_FWD_DEFINED__ */


#ifndef __ScControlMotion_FWD_DEFINED__
#define __ScControlMotion_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScControlMotion ScControlMotion;
#else
typedef struct ScControlMotion ScControlMotion;
#endif /* __cplusplus */

#endif 	/* __ScControlMotion_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_control_ad_io_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_control_ad_io_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_control_ad_io_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamControlAdIo_LIBRARY_DEFINED__
#define __ScapsSamControlAdIo_LIBRARY_DEFINED__

/* library ScapsSamControlAdIo */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamControlAdIo;

#ifndef __SC_IControlAdIo_INTERFACE_DEFINED__
#define __SC_IControlAdIo_INTERFACE_DEFINED__

/* interface SC_IControlAdIo */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlAdIo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7246632-5CCD-11d1-9716-008048EEE00C")
    SC_IControlAdIo : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAnalogChannelOut( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAnalogChannelOut( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAnalogChannelIn( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAnalogChannelIn( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDigitalChannelOut( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDigitalChannelOut( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDigitalChannelIn( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDigitalChannelIn( 
            /* [in] */ long newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReadAnalog( 
            /* [retval][out] */ double *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScReadDigital( 
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWriteAnalog( 
            /* [in] */ double newVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScWriteDigital( 
            /* [in] */ long newVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlAdIoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlAdIo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlAdIo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlAdIo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlAdIo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlAdIo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlAdIo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlAdIo * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAnalogChannelOut )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAnalogChannelOut )( 
            SC_IControlAdIo * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAnalogChannelIn )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAnalogChannelIn )( 
            SC_IControlAdIo * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDigitalChannelOut )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDigitalChannelOut )( 
            SC_IControlAdIo * This,
            /* [in] */ long newVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDigitalChannelIn )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDigitalChannelIn )( 
            SC_IControlAdIo * This,
            /* [in] */ long newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReadAnalog )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ double *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScReadDigital )( 
            SC_IControlAdIo * This,
            /* [retval][out] */ long *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWriteAnalog )( 
            SC_IControlAdIo * This,
            /* [in] */ double newVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScWriteDigital )( 
            SC_IControlAdIo * This,
            /* [in] */ long newVal);
        
        END_INTERFACE
    } SC_IControlAdIoVtbl;

    interface SC_IControlAdIo
    {
        CONST_VTBL struct SC_IControlAdIoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlAdIo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlAdIo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlAdIo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlAdIo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlAdIo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlAdIo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlAdIo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlAdIo_get_ScAnalogChannelOut(This,pVal)	\
    ( (This)->lpVtbl -> get_ScAnalogChannelOut(This,pVal) ) 

#define SC_IControlAdIo_put_ScAnalogChannelOut(This,newVal)	\
    ( (This)->lpVtbl -> put_ScAnalogChannelOut(This,newVal) ) 

#define SC_IControlAdIo_get_ScAnalogChannelIn(This,pVal)	\
    ( (This)->lpVtbl -> get_ScAnalogChannelIn(This,pVal) ) 

#define SC_IControlAdIo_put_ScAnalogChannelIn(This,newVal)	\
    ( (This)->lpVtbl -> put_ScAnalogChannelIn(This,newVal) ) 

#define SC_IControlAdIo_get_ScDigitalChannelOut(This,pVal)	\
    ( (This)->lpVtbl -> get_ScDigitalChannelOut(This,pVal) ) 

#define SC_IControlAdIo_put_ScDigitalChannelOut(This,newVal)	\
    ( (This)->lpVtbl -> put_ScDigitalChannelOut(This,newVal) ) 

#define SC_IControlAdIo_get_ScDigitalChannelIn(This,pVal)	\
    ( (This)->lpVtbl -> get_ScDigitalChannelIn(This,pVal) ) 

#define SC_IControlAdIo_put_ScDigitalChannelIn(This,newVal)	\
    ( (This)->lpVtbl -> put_ScDigitalChannelIn(This,newVal) ) 

#define SC_IControlAdIo_ScReadAnalog(This,retval)	\
    ( (This)->lpVtbl -> ScReadAnalog(This,retval) ) 

#define SC_IControlAdIo_ScReadDigital(This,retval)	\
    ( (This)->lpVtbl -> ScReadDigital(This,retval) ) 

#define SC_IControlAdIo_ScWriteAnalog(This,newVal)	\
    ( (This)->lpVtbl -> ScWriteAnalog(This,newVal) ) 

#define SC_IControlAdIo_ScWriteDigital(This,newVal)	\
    ( (This)->lpVtbl -> ScWriteDigital(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlAdIo_INTERFACE_DEFINED__ */


#ifndef __SC_IControlMotion_INTERFACE_DEFINED__
#define __SC_IControlMotion_INTERFACE_DEFINED__

/* interface SC_IControlMotion */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IControlMotion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("322A9E2A-7B36-4e79-AFE6-662F9E496C8A")
    SC_IControlMotion : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScKernel( 
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel) = 0;
        
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
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisPosition( 
            /* [in] */ long Axis,
            /* [in] */ double Pos,
            /* [defaultvalue][optional][in] */ long Go = 0,
            /* [defaultvalue][optional][in] */ long WaitForEnd = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAxisPosition( 
            /* [in] */ long Axis,
            /* [retval][out] */ double *Pos) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisSpeed( 
            /* [in] */ long Axis,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAxisSpeed( 
            /* [in] */ long Axis,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisPosRelative( 
            /* [in] */ long Axis,
            /* [in] */ double Pos,
            /* [defaultvalue][optional][in] */ long Go = 0,
            /* [defaultvalue][optional][in] */ long WaitForEnd = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGo( 
            long WaitForEnd) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsMoving( 
            /* [in] */ long Axis,
            /* [retval][out] */ long *Moving) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScStop( 
            /* [in] */ long Axis) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScUpdateAxisPosition( 
            /* [in] */ long Axis) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAxisName( 
            /* [in] */ long Axis,
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHome( 
            /* [in] */ long Axis) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSendString( 
            /* [in] */ long Type,
            /* [in] */ BSTR Data) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisAngle( 
            /* [in] */ long Axis,
            /* [in] */ double Angle,
            /* [defaultvalue][optional][in] */ long Go = 0,
            /* [defaultvalue][optional][in] */ long WaitForEnd = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisAngleRelative( 
            /* [in] */ long Axis,
            /* [in] */ double Angle,
            /* [defaultvalue][optional][in] */ long Go = 0,
            /* [defaultvalue][optional][in] */ long WaitForEnd = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisValue( 
            /* [in] */ long Axis,
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisValueRelative( 
            /* [in] */ long Axis,
            /* [in] */ double val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAxisMode( 
            /* [in] */ long Axis,
            /* [retval][out] */ long *mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetAxisParam( 
            /* [in] */ long Axis,
            /* [in] */ long Id,
            /* [retval][out] */ double *Param) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScGetDriverNum( 
            /* [retval][out] */ long *Num) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisStepsRelative( 
            /* [in] */ long Axis,
            /* [in] */ long val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScSetAxisParam( 
            /* [in] */ long Axis,
            /* [in] */ long Id,
            /* [in] */ double val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IControlMotionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IControlMotion * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IControlMotion * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IControlMotion * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IControlMotion * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IControlMotion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IControlMotion * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IControlMotion * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScKernel )( 
            SC_IControlMotion * This,
            /* [retval][out] */ /* external definition not present */ SC_IKernel **Kernel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsTypeOf )( 
            SC_IControlMotion * This,
            /* [in] */ long type_id,
            /* [retval][out] */ long *is_type);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScTypeId )( 
            SC_IControlMotion * This,
            /* [retval][out] */ long *type_id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsDirty )( 
            SC_IControlMotion * This,
            /* [retval][out] */ long *is_dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetDirty )( 
            SC_IControlMotion * This,
            /* [in] */ long Dirty);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScObjectId )( 
            SC_IControlMotion * This,
            /* [retval][out] */ long *Id);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisPosition )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double Pos,
            /* [defaultvalue][optional][in] */ long Go,
            /* [defaultvalue][optional][in] */ long WaitForEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAxisPosition )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [retval][out] */ double *Pos);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisSpeed )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ long SpeedId,
            /* [in] */ double Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAxisSpeed )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ long SpeedId,
            /* [retval][out] */ double *Speed);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisPosRelative )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double Pos,
            /* [defaultvalue][optional][in] */ long Go,
            /* [defaultvalue][optional][in] */ long WaitForEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGo )( 
            SC_IControlMotion * This,
            long WaitForEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsMoving )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [retval][out] */ long *Moving);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScStop )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScUpdateAxisPosition )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAxisName )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHome )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSendString )( 
            SC_IControlMotion * This,
            /* [in] */ long Type,
            /* [in] */ BSTR Data);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisAngle )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double Angle,
            /* [defaultvalue][optional][in] */ long Go,
            /* [defaultvalue][optional][in] */ long WaitForEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisAngleRelative )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double Angle,
            /* [defaultvalue][optional][in] */ long Go,
            /* [defaultvalue][optional][in] */ long WaitForEnd);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisValue )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisValueRelative )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ double val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAxisMode )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [retval][out] */ long *mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetAxisParam )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ long Id,
            /* [retval][out] */ double *Param);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScGetDriverNum )( 
            SC_IControlMotion * This,
            /* [retval][out] */ long *Num);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisStepsRelative )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ long val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScSetAxisParam )( 
            SC_IControlMotion * This,
            /* [in] */ long Axis,
            /* [in] */ long Id,
            /* [in] */ double val);
        
        END_INTERFACE
    } SC_IControlMotionVtbl;

    interface SC_IControlMotion
    {
        CONST_VTBL struct SC_IControlMotionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IControlMotion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IControlMotion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IControlMotion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IControlMotion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IControlMotion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IControlMotion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IControlMotion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IControlMotion_ScKernel(This,Kernel)	\
    ( (This)->lpVtbl -> ScKernel(This,Kernel) ) 

#define SC_IControlMotion_ScIsTypeOf(This,type_id,is_type)	\
    ( (This)->lpVtbl -> ScIsTypeOf(This,type_id,is_type) ) 

#define SC_IControlMotion_ScTypeId(This,type_id)	\
    ( (This)->lpVtbl -> ScTypeId(This,type_id) ) 

#define SC_IControlMotion_ScIsDirty(This,is_dirty)	\
    ( (This)->lpVtbl -> ScIsDirty(This,is_dirty) ) 

#define SC_IControlMotion_ScSetDirty(This,Dirty)	\
    ( (This)->lpVtbl -> ScSetDirty(This,Dirty) ) 

#define SC_IControlMotion_ScObjectId(This,Id)	\
    ( (This)->lpVtbl -> ScObjectId(This,Id) ) 

#define SC_IControlMotion_ScSetAxisPosition(This,Axis,Pos,Go,WaitForEnd)	\
    ( (This)->lpVtbl -> ScSetAxisPosition(This,Axis,Pos,Go,WaitForEnd) ) 

#define SC_IControlMotion_ScGetAxisPosition(This,Axis,Pos)	\
    ( (This)->lpVtbl -> ScGetAxisPosition(This,Axis,Pos) ) 

#define SC_IControlMotion_ScSetAxisSpeed(This,Axis,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScSetAxisSpeed(This,Axis,SpeedId,Speed) ) 

#define SC_IControlMotion_ScGetAxisSpeed(This,Axis,SpeedId,Speed)	\
    ( (This)->lpVtbl -> ScGetAxisSpeed(This,Axis,SpeedId,Speed) ) 

#define SC_IControlMotion_ScSetAxisPosRelative(This,Axis,Pos,Go,WaitForEnd)	\
    ( (This)->lpVtbl -> ScSetAxisPosRelative(This,Axis,Pos,Go,WaitForEnd) ) 

#define SC_IControlMotion_ScGo(This,WaitForEnd)	\
    ( (This)->lpVtbl -> ScGo(This,WaitForEnd) ) 

#define SC_IControlMotion_ScIsMoving(This,Axis,Moving)	\
    ( (This)->lpVtbl -> ScIsMoving(This,Axis,Moving) ) 

#define SC_IControlMotion_ScStop(This,Axis)	\
    ( (This)->lpVtbl -> ScStop(This,Axis) ) 

#define SC_IControlMotion_ScUpdateAxisPosition(This,Axis)	\
    ( (This)->lpVtbl -> ScUpdateAxisPosition(This,Axis) ) 

#define SC_IControlMotion_ScGetAxisName(This,Axis,Name)	\
    ( (This)->lpVtbl -> ScGetAxisName(This,Axis,Name) ) 

#define SC_IControlMotion_ScHome(This,Axis)	\
    ( (This)->lpVtbl -> ScHome(This,Axis) ) 

#define SC_IControlMotion_ScSendString(This,Type,Data)	\
    ( (This)->lpVtbl -> ScSendString(This,Type,Data) ) 

#define SC_IControlMotion_ScSetAxisAngle(This,Axis,Angle,Go,WaitForEnd)	\
    ( (This)->lpVtbl -> ScSetAxisAngle(This,Axis,Angle,Go,WaitForEnd) ) 

#define SC_IControlMotion_ScSetAxisAngleRelative(This,Axis,Angle,Go,WaitForEnd)	\
    ( (This)->lpVtbl -> ScSetAxisAngleRelative(This,Axis,Angle,Go,WaitForEnd) ) 

#define SC_IControlMotion_ScSetAxisValue(This,Axis,val)	\
    ( (This)->lpVtbl -> ScSetAxisValue(This,Axis,val) ) 

#define SC_IControlMotion_ScSetAxisValueRelative(This,Axis,val)	\
    ( (This)->lpVtbl -> ScSetAxisValueRelative(This,Axis,val) ) 

#define SC_IControlMotion_ScGetAxisMode(This,Axis,mode)	\
    ( (This)->lpVtbl -> ScGetAxisMode(This,Axis,mode) ) 

#define SC_IControlMotion_ScGetAxisParam(This,Axis,Id,Param)	\
    ( (This)->lpVtbl -> ScGetAxisParam(This,Axis,Id,Param) ) 

#define SC_IControlMotion_ScGetDriverNum(This,Num)	\
    ( (This)->lpVtbl -> ScGetDriverNum(This,Num) ) 

#define SC_IControlMotion_ScSetAxisStepsRelative(This,Axis,val)	\
    ( (This)->lpVtbl -> ScSetAxisStepsRelative(This,Axis,val) ) 

#define SC_IControlMotion_ScSetAxisParam(This,Axis,Id,val)	\
    ( (This)->lpVtbl -> ScSetAxisParam(This,Axis,Id,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IControlMotion_INTERFACE_DEFINED__ */



#ifndef __ScConstantsControlIO_MODULE_DEFINED__
#define __ScConstantsControlIO_MODULE_DEFINED__


/* module ScConstantsControlIO */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectControlAdIo	=	( 0x2000 | ( ( 1 * 0x1000000 )  + 0x800000 )  ) ;

/* [helpstring] */ const long scComObjectControlMotion	=	( 0x2000 | ( ( 4 * 0x1000000 )  + 0x800000 )  ) ;

/* [helpstring] */ const long scComControlMotionSpeedMove	=	0;

/* [helpstring] */ const long scComControlMotionSpeedMin	=	1;

/* [helpstring] */ const long scComControlMotionSpeedMax	=	2;

/* [helpstring] */ const long scComControlMotionSpeedDefault	=	3;

#endif /* __ScConstantsControlIO_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScControlAdIo;

#ifdef __cplusplus

class DECLSPEC_UUID("E724663A-5CCD-11d1-9716-008048EEE00C")
ScControlAdIo;
#endif

EXTERN_C const CLSID CLSID_ScControlMotion;

#ifdef __cplusplus

class DECLSPEC_UUID("AD454C75-23AF-4e87-B553-08625ED39356")
ScControlMotion;
#endif
#endif /* __ScapsSamControlAdIo_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


