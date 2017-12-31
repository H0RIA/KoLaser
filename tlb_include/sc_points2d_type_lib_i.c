

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:25 2017
 */
/* Compiler settings for d:\scaps\dll_source\points2d\com\include\sc_points2d_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamPoints2D,0xB4D158A4,0x0366,0x11d2,0x8C,0x87,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, IID_SC_IPointCloud2D,0x3072880B,0x6F2B,0x47c7,0x93,0x9D,0x9C,0x72,0x92,0x7B,0xAF,0xAD);


MIDL_DEFINE_GUID(IID, IID_SC_IPointClouds2D,0xB16820C4,0xF2B1,0x4d36,0x9F,0x0F,0xEF,0xBC,0x3F,0x51,0xB3,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPointCloud2D,0xB4D158A2,0x0366,0x11d2,0x8C,0x87,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPointClouds2D,0x6E116515,0xBDA6,0x44f4,0x9D,0x61,0x05,0x2C,0xED,0x82,0x88,0x13);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



