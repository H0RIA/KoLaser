

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:21 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\samlight_client\sc_samlight_client_ctrl_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_SAMLIGHT_CLIENT_CTRL_OCXLib,0x22C1DCFD,0x1974,0x40fb,0x91,0x93,0x1D,0x29,0x9C,0x09,0x90,0x3C);


MIDL_DEFINE_GUID(IID, IID_SC_IConnectionToolCtrl,0x7EB1D711,0x5F08,0x4708,0xB3,0x7C,0xBA,0x0E,0xC0,0xA7,0x2F,0x65);


MIDL_DEFINE_GUID(IID, DIID_SC_DConnectionToolEvents,0x9B5B5103,0xC107,0x4cd7,0x9D,0x58,0xAA,0x11,0x40,0x80,0x37,0xA3);


MIDL_DEFINE_GUID(IID, DIID__DSamlight_client_ctrl_ocx,0x05D31AA6,0x1306,0x4da0,0x9A,0xE2,0xA8,0x77,0x1F,0xF6,0xFA,0x94);


MIDL_DEFINE_GUID(IID, DIID__DSamlight_client_ctrl_ocxEvents,0x5F3246AD,0x5086,0x45e1,0xA3,0xDA,0xCB,0x9B,0x0B,0xA2,0x34,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_ScSamlightClientCtrl,0x5BBCB419,0x0B12,0x4f87,0x85,0xAF,0xC0,0xB6,0x6A,0x73,0xDE,0xCB);


MIDL_DEFINE_GUID(CLSID, CLSID_ScConnectionToolCtrl,0x27B1C6DC,0x6EBD,0x44ea,0x8A,0x68,0x27,0x5F,0x9D,0xDF,0xC8,0xEE);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



