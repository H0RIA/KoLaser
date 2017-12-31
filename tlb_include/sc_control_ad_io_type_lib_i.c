

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamControlAdIo,0xE7246634,0x5CCD,0x11d1,0x97,0x16,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IControlAdIo,0xE7246632,0x5CCD,0x11d1,0x97,0x16,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IControlMotion,0x322A9E2A,0x7B36,0x4e79,0xAF,0xE6,0x66,0x2F,0x9E,0x49,0x6C,0x8A);


MIDL_DEFINE_GUID(CLSID, CLSID_ScControlAdIo,0xE724663A,0x5CCD,0x11d1,0x97,0x16,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScControlMotion,0xAD454C75,0x23AF,0x4e87,0xB5,0x53,0x08,0x62,0x5E,0xD3,0x93,0x56);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



