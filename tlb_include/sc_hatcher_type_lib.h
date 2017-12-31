

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:34 2017
 */
/* Compiler settings for d:\scaps\dll_source\hatcher\com\include\sc_hatcher_type_lib.idl:
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


#ifndef __sc_hatcher_type_lib_h__
#define __sc_hatcher_type_lib_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __SC_IHatcher_FWD_DEFINED__
#define __SC_IHatcher_FWD_DEFINED__
typedef interface SC_IHatcher SC_IHatcher;
#endif 	/* __SC_IHatcher_FWD_DEFINED__ */


#ifndef __ScHatcher_FWD_DEFINED__
#define __ScHatcher_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScHatcher ScHatcher;
#else
typedef struct ScHatcher ScHatcher;
#endif /* __cplusplus */

#endif 	/* __ScHatcher_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_sc_hatcher_type_lib_0000_0000 */
/* [local] */ 

// SCAPS SAM Header File
// Version 2.5
#include "sc_kernel_type_lib.h"
#include "sc_lines2d_type_lib.h"


extern RPC_IF_HANDLE __MIDL_itf_sc_hatcher_type_lib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sc_hatcher_type_lib_0000_0000_v0_0_s_ifspec;


#ifndef __ScapsSamHatcher_LIBRARY_DEFINED__
#define __ScapsSamHatcher_LIBRARY_DEFINED__

/* library ScapsSamHatcher */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_ScapsSamHatcher;

#ifndef __SC_IHatcher_INTERFACE_DEFINED__
#define __SC_IHatcher_INTERFACE_DEFINED__

/* interface SC_IHatcher */
/* [unique][dual][hidden][oleautomation][helpstring][uuid][object] */ 


EXTERN_C const IID IID_SC_IHatcher;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2D413988-68AB-11d1-972A-008048EEE00C")
    SC_IHatcher : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDistance( 
            /* [retval][out] */ double *Dist) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDistance( 
            /* [in] */ double Dist) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScAngle( 
            /* [retval][out] */ double *Angle) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScAngle( 
            /* [in] */ double Angle) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHatch( 
            /* [in] */ /* external definition not present */ SC_IPolyLines2D *PolyLines,
            /* [in] */ /* external definition not present */ SC_ILineArray2D *Hatches) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScHatchEntity2D( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScDeleteHatches( 
            /* [retval][out] */ long *Delete) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScDeleteHatches( 
            /* [in] */ long Delete) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScUseProperty( 
            /* [retval][out] */ long *Use) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScUseProperty( 
            /* [in] */ long Use) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMinDistance( 
            /* [retval][out] */ double *Distance) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMinDistance( 
            /* [in] */ double Distance) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScMaxDistance( 
            /* [retval][out] */ double *Distance) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScMaxDistance( 
            /* [in] */ double Distance) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScLineReduction( 
            /* [retval][out] */ double *Reduction) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScLineReduction( 
            /* [in] */ double Reduction) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScStartOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScStartOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScEndOffset( 
            /* [retval][out] */ double *Offset) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScEndOffset( 
            /* [in] */ double Offset) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHatchOpenPolyLines( 
            /* [retval][out] */ long *Hatch) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHatchOpenPolyLines( 
            /* [in] */ long Hatch) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScHatchAllLines( 
            /* [retval][out] */ long *Hatch) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScHatchAllLines( 
            /* [in] */ long Hatch) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScBeamCompensation( 
            /* [retval][out] */ double *Compensation) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScBeamCompensation( 
            /* [in] */ double Compensation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScIsRadialModeAllowed( 
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Allowed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct SC_IHatcherVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SC_IHatcher * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SC_IHatcher * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SC_IHatcher * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SC_IHatcher * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SC_IHatcher * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SC_IHatcher * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SC_IHatcher * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDistance )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Dist);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDistance )( 
            SC_IHatcher * This,
            /* [in] */ double Dist);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScAngle )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Angle);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScAngle )( 
            SC_IHatcher * This,
            /* [in] */ double Angle);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHatch )( 
            SC_IHatcher * This,
            /* [in] */ /* external definition not present */ SC_IPolyLines2D *PolyLines,
            /* [in] */ /* external definition not present */ SC_ILineArray2D *Hatches);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScHatchEntity2D )( 
            SC_IHatcher * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScDeleteHatches )( 
            SC_IHatcher * This,
            /* [retval][out] */ long *Delete);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScDeleteHatches )( 
            SC_IHatcher * This,
            /* [in] */ long Delete);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScUseProperty )( 
            SC_IHatcher * This,
            /* [retval][out] */ long *Use);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScUseProperty )( 
            SC_IHatcher * This,
            /* [in] */ long Use);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMinDistance )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Distance);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMinDistance )( 
            SC_IHatcher * This,
            /* [in] */ double Distance);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScMaxDistance )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Distance);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScMaxDistance )( 
            SC_IHatcher * This,
            /* [in] */ double Distance);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScLineReduction )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Reduction);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScLineReduction )( 
            SC_IHatcher * This,
            /* [in] */ double Reduction);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScStartOffset )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScStartOffset )( 
            SC_IHatcher * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScEndOffset )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Offset);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScEndOffset )( 
            SC_IHatcher * This,
            /* [in] */ double Offset);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchOpenPolyLines )( 
            SC_IHatcher * This,
            /* [retval][out] */ long *Hatch);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchOpenPolyLines )( 
            SC_IHatcher * This,
            /* [in] */ long Hatch);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScHatchAllLines )( 
            SC_IHatcher * This,
            /* [retval][out] */ long *Hatch);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScHatchAllLines )( 
            SC_IHatcher * This,
            /* [in] */ long Hatch);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScBeamCompensation )( 
            SC_IHatcher * This,
            /* [retval][out] */ double *Compensation);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScBeamCompensation )( 
            SC_IHatcher * This,
            /* [in] */ double Compensation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScIsRadialModeAllowed )( 
            SC_IHatcher * This,
            /* [in] */ /* external definition not present */ SC_IEntity2D *Entity,
            /* [retval][out] */ long *Allowed);
        
        END_INTERFACE
    } SC_IHatcherVtbl;

    interface SC_IHatcher
    {
        CONST_VTBL struct SC_IHatcherVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SC_IHatcher_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SC_IHatcher_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SC_IHatcher_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SC_IHatcher_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SC_IHatcher_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SC_IHatcher_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SC_IHatcher_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SC_IHatcher_get_ScDistance(This,Dist)	\
    ( (This)->lpVtbl -> get_ScDistance(This,Dist) ) 

#define SC_IHatcher_put_ScDistance(This,Dist)	\
    ( (This)->lpVtbl -> put_ScDistance(This,Dist) ) 

#define SC_IHatcher_get_ScAngle(This,Angle)	\
    ( (This)->lpVtbl -> get_ScAngle(This,Angle) ) 

#define SC_IHatcher_put_ScAngle(This,Angle)	\
    ( (This)->lpVtbl -> put_ScAngle(This,Angle) ) 

#define SC_IHatcher_ScHatch(This,PolyLines,Hatches)	\
    ( (This)->lpVtbl -> ScHatch(This,PolyLines,Hatches) ) 

#define SC_IHatcher_ScHatchEntity2D(This,Entity)	\
    ( (This)->lpVtbl -> ScHatchEntity2D(This,Entity) ) 

#define SC_IHatcher_get_ScDeleteHatches(This,Delete)	\
    ( (This)->lpVtbl -> get_ScDeleteHatches(This,Delete) ) 

#define SC_IHatcher_put_ScDeleteHatches(This,Delete)	\
    ( (This)->lpVtbl -> put_ScDeleteHatches(This,Delete) ) 

#define SC_IHatcher_get_ScUseProperty(This,Use)	\
    ( (This)->lpVtbl -> get_ScUseProperty(This,Use) ) 

#define SC_IHatcher_put_ScUseProperty(This,Use)	\
    ( (This)->lpVtbl -> put_ScUseProperty(This,Use) ) 

#define SC_IHatcher_get_ScMinDistance(This,Distance)	\
    ( (This)->lpVtbl -> get_ScMinDistance(This,Distance) ) 

#define SC_IHatcher_put_ScMinDistance(This,Distance)	\
    ( (This)->lpVtbl -> put_ScMinDistance(This,Distance) ) 

#define SC_IHatcher_get_ScMaxDistance(This,Distance)	\
    ( (This)->lpVtbl -> get_ScMaxDistance(This,Distance) ) 

#define SC_IHatcher_put_ScMaxDistance(This,Distance)	\
    ( (This)->lpVtbl -> put_ScMaxDistance(This,Distance) ) 

#define SC_IHatcher_get_ScLineReduction(This,Reduction)	\
    ( (This)->lpVtbl -> get_ScLineReduction(This,Reduction) ) 

#define SC_IHatcher_put_ScLineReduction(This,Reduction)	\
    ( (This)->lpVtbl -> put_ScLineReduction(This,Reduction) ) 

#define SC_IHatcher_get_ScStartOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScStartOffset(This,Offset) ) 

#define SC_IHatcher_put_ScStartOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScStartOffset(This,Offset) ) 

#define SC_IHatcher_get_ScEndOffset(This,Offset)	\
    ( (This)->lpVtbl -> get_ScEndOffset(This,Offset) ) 

#define SC_IHatcher_put_ScEndOffset(This,Offset)	\
    ( (This)->lpVtbl -> put_ScEndOffset(This,Offset) ) 

#define SC_IHatcher_get_ScHatchOpenPolyLines(This,Hatch)	\
    ( (This)->lpVtbl -> get_ScHatchOpenPolyLines(This,Hatch) ) 

#define SC_IHatcher_put_ScHatchOpenPolyLines(This,Hatch)	\
    ( (This)->lpVtbl -> put_ScHatchOpenPolyLines(This,Hatch) ) 

#define SC_IHatcher_get_ScHatchAllLines(This,Hatch)	\
    ( (This)->lpVtbl -> get_ScHatchAllLines(This,Hatch) ) 

#define SC_IHatcher_put_ScHatchAllLines(This,Hatch)	\
    ( (This)->lpVtbl -> put_ScHatchAllLines(This,Hatch) ) 

#define SC_IHatcher_get_ScBeamCompensation(This,Compensation)	\
    ( (This)->lpVtbl -> get_ScBeamCompensation(This,Compensation) ) 

#define SC_IHatcher_put_ScBeamCompensation(This,Compensation)	\
    ( (This)->lpVtbl -> put_ScBeamCompensation(This,Compensation) ) 

#define SC_IHatcher_ScIsRadialModeAllowed(This,Entity,Allowed)	\
    ( (This)->lpVtbl -> ScIsRadialModeAllowed(This,Entity,Allowed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SC_IHatcher_INTERFACE_DEFINED__ */



#ifndef __ScConstantsHatcher_MODULE_DEFINED__
#define __ScConstantsHatcher_MODULE_DEFINED__


/* module ScConstantsHatcher */
/* [helpstring][uuid] */ 

/* [helpstring] */ const long scComObjectHatcher	=	( 0x2000 | ( ( 11 * 0x1000000 )  + 0x4000 )  ) ;

/* [helpstring] */ const long scComHatcherStyleHatch	=	0x1;

/* [helpstring] */ const long scComHatcherStyleFlip	=	0x2;

/* [helpstring] */ const long scComHatcherStyleDirVert	=	0x4;

/* [helpstring] */ const long scComHatcherStyleDirHorz	=	0x8;

/* [helpstring] */ const long scComHatcherStyleDirVertFlip	=	0x10;

/* [helpstring] */ const long scComHatcherStyleRadial	=	0x20;

/* [helpstring] */ const long scComHatcherStyleNoJump	=	0x40;

/* [helpstring] */ const long scComHatcherStyleNoMarkAsJump	=	0x80;

/* [helpstring] */ const long scComHatcherStyleNoSort	=	0x100;

/* [helpstring] */ const long scComHatcherStyleNoHatchOpenPolyLines	=	0x200;

/* [helpstring] */ const long scComHatcherStyleHatchAllLines	=	0x400;

/* [helpstring] */ const long scComHatcherStyleHatchBeamComp	=	0x800;

/* [helpstring] */ const long scComHatcherStyleHatchAddPolyLineBeamComp	=	0x2000;

/* [helpstring] */ const long scComHatcherStyleHatchBeamCompDontFillRest	=	0x4000;

/* [helpstring] */ const long scComHatcherStyleHatchAddPolyLineUseBeamComp	=	0x40000;

/* [helpstring] */ const long scComHatcherStyleKeepAngle	=	0x80000;

/* [helpstring] */ const long scComHatcherStyleCheckPolylineOrientation	=	0x100000;

/* [helpstring] */ const long scComHatcherStyleSinglePolyLine	=	0x200000;

/* [helpstring] */ const long scComHatcherStyleHatchBeamCompCreateSeparateObject	=	0x4000000;

/* [helpstring] */ const long scComHatcherStyleEqualizeDistance	=	0x1000000;

/* [helpstring] */ const long scComHatcherStyleHatchBeamCompLoopReverseOrder	=	0x2000000;

#endif /* __ScConstantsHatcher_MODULE_DEFINED__ */

EXTERN_C const CLSID CLSID_ScHatcher;

#ifdef __cplusplus

class DECLSPEC_UUID("2D41398C-68AB-11d1-972A-008048EEE00C")
ScHatcher;
#endif
#endif /* __ScapsSamHatcher_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


