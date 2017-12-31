

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:24 2017
 */
/* Compiler settings for d:\scaps\dll_source\entity_groups\com\include\sc_entity_groups_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamEntityGroups,0xDEF0CFD2,0x6A2B,0x11d1,0x97,0x2B,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IEntities3D,0x04C676A2,0x2F38,0x11d1,0x96,0xC4,0xE5,0x67,0xE0,0xAC,0x21,0x49);


MIDL_DEFINE_GUID(IID, IID_SC_IEntities2D,0x604E5802,0x3D93,0x11d1,0x96,0xE0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IJobRoot,0xC0BDB2F6,0xFE61,0x11d3,0x9B,0xBD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IControl,0xADBD5373,0xAB83,0x4c79,0x94,0x99,0x7C,0x63,0x6A,0x39,0xE3,0x23);


MIDL_DEFINE_GUID(IID, IID_SC_IEvent,0x5E51EBD8,0x5288,0x44aa,0xAE,0x1A,0x9E,0xF9,0x7B,0xF5,0xFB,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEntities3D,0xDB875671,0x42E8,0x11d1,0x96,0xE9,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEntities2D,0x0B7442E2,0x42E9,0x11d1,0x96,0xE9,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScJobRoot,0xC0BDB2FC,0xFE61,0x11d3,0x9B,0xBD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScControl,0xB36EFE9A,0xEF01,0x43b1,0x8E,0x30,0x44,0xAA,0xB5,0x18,0x2C,0xDE);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEvent,0x8CAB9ABA,0x520F,0x4844,0xAA,0x44,0xAA,0xAE,0x3F,0x92,0x88,0x27);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



