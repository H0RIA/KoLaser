

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:49 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\light_ctrls\sc_light_ctrls_type_lib.idl:
    Oicf, W1, Zp1, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ScSamLightCtrls,0xD696C6F4,0xE53E,0x11D2,0x9A,0xD6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_LightExposureCtrl,0xD696C6F5,0xE53E,0x11D2,0x9A,0xD6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_LightExposureCtrlEvents,0xD696C6F6,0xE53E,0x11D2,0x9A,0xD6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ILightExposureCtrl,0x5EFEFA82,0xE554,0x11d2,0x9A,0xD7,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ILightExposureCtrlPP,0x81B6ED22,0x7E91,0x11d4,0x9C,0x1A,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_LightFlashCtrl,0xEB34D7CF,0xE241,0x4038,0xB9,0xAF,0x61,0x4D,0xAF,0x9C,0x37,0x5B);


MIDL_DEFINE_GUID(IID, DIID__DSC_LightFlashCtrlEvents,0x8DBDE5D1,0x9AE7,0x4fca,0xB1,0x50,0xBE,0x16,0xD5,0xD2,0xB6,0x3E);


MIDL_DEFINE_GUID(IID, IID_SC_ILightFlashCtrl,0x946F8CB6,0xE325,0x4e74,0xA4,0xC6,0x7A,0xCB,0x40,0xA2,0xDB,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_SC_LightExposureCtrl,0xD696C6F7,0xE53E,0x11D2,0x9A,0xD6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLightExposureCtrlPropertyPage,0x7FBC3792,0x7E8A,0x11d4,0x9C,0x1A,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLightFlashCtrl,0x5F10107F,0x7499,0x4C4D,0x97,0x12,0x88,0x91,0xB5,0xB5,0xAE,0xC9);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



