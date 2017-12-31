

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:27 2017
 */
/* Compiler settings for d:\scaps\dll_source\lines3d\com\include\sc_lines3d_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamLines3D,0x3551CEEB,0x51F7,0x11d1,0x97,0x09,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IPolyLine3D,0x3551CEE6,0x51F7,0x11d1,0x97,0x09,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IPolyLines3D,0x3551CEE9,0x51F7,0x11d1,0x97,0x09,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ILineArray3D,0x7E45C7D4,0xA9FD,0x11d1,0x8C,0x46,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, IID_SC_ILineArrays3D,0x7E45C7D3,0xA9FD,0x11d1,0x8C,0x46,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, IID_SC_ILineBox3D,0x7E45C7D5,0xA9FD,0x11d1,0x8C,0x46,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, IID_SC_IPointCloud3D,0xFDCB12A4,0x1D7C,0x4c91,0x83,0x1D,0x85,0xD5,0xCE,0x3D,0xF9,0x58);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPolyLines3D,0x3551CEED,0x51F7,0x11d1,0x97,0x09,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPolyLine3D,0x3551CEEF,0x51F7,0x11d1,0x97,0x09,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLineArray3D,0x7E45C7D1,0xA9FD,0x11d1,0x8C,0x46,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLineArrays3D,0x7E45C7D2,0xA9FD,0x11d1,0x8C,0x46,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLineBox3D,0xD6CCF7DA,0x7E81,0x417f,0x84,0x53,0xD3,0x90,0x09,0x65,0x99,0x66);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPointCloud3D,0x28D59AA6,0x0278,0x47c7,0xB7,0xB3,0x54,0x21,0x85,0x3A,0x10,0x96);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



