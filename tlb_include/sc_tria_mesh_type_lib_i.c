

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:28 2017
 */
/* Compiler settings for d:\scaps\dll_source\triamesh3d\com\include\sc_tria_mesh_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamTriaMesh,0x12719843,0x3D8F,0x11d1,0x96,0xE0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaMesh3D,0x12719844,0x3D8F,0x11d1,0x96,0xE0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaSolid,0x44BDE4A2,0x4261,0x11d1,0x96,0xE8,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaBox,0x421724D2,0x4547,0x11d1,0x96,0xEE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaCone,0x421724D4,0x4547,0x11d1,0x96,0xEE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaSphere,0xAE7EF913,0x4629,0x11d1,0x96,0xF0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_ITriaCylinder,0x58D81462,0x8D24,0x11d2,0x8E,0xDA,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaMesh3D,0x44BDE4A1,0x4261,0x11d1,0x96,0xE8,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaSolid,0x0B7442E3,0x42E9,0x11d1,0x96,0xE9,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaBox,0x421724D3,0x4547,0x11d1,0x96,0xEE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaCone,0x421724D6,0x4547,0x11d1,0x96,0xEE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaSphere,0xAE7EF915,0x4629,0x11d1,0x96,0xF0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScTriaCylinder,0x58D81461,0x8D24,0x11d2,0x8E,0xDA,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



