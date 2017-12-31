

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:45 2017
 */
/* Compiler settings for d:\scaps\dll_source\optic_devices\gsi\com\include\sc_gsi_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamGsiDevices,0x3C1C8922,0x9514,0x11d3,0x9B,0x58,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IGsiHc2DeviceStandard,0x4390D0A2,0xDC05,0x11d4,0xBE,0x86,0x00,0x50,0xBA,0xDB,0xC8,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_ScGsiHc2DeviceStandard,0x4390D0A1,0xDC05,0x11d4,0xBE,0x86,0x00,0x50,0xBA,0xDB,0xC8,0x6E);


MIDL_DEFINE_GUID(IID, IID_SC_IGsiHc3DeviceStandard,0x48B3DE42,0x4450,0x11d5,0xBE,0xF2,0x00,0x50,0xBA,0xDB,0xC8,0x6E);


MIDL_DEFINE_GUID(CLSID, CLSID_ScGsiHc3DeviceStandard,0x48B3DE43,0x4450,0x11d5,0xBE,0xF2,0x00,0x50,0xBA,0xDB,0xC8,0x6E);


MIDL_DEFINE_GUID(IID, IID_SC_IScapsInternalDeviceStandard,0x4178A872,0x8E19,0x11d4,0x93,0x86,0x00,0x60,0x67,0x3A,0xC7,0xA2);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



