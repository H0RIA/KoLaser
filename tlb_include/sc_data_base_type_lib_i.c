

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:23 2017
 */
/* Compiler settings for d:\scaps\dll_source\database\com\include\sc_data_base_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamDataBase,0x0965E464,0xD235,0x11D1,0x97,0xA8,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IDocStream,0xC9F2B103,0x8A95,0x11d2,0x9A,0xA5,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IDocStorage,0xC9F2B105,0x8A95,0x11d2,0x9A,0xA5,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IDocArchive,0xCADF98C2,0x4185,0x11d2,0x9A,0x59,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDocArchive,0xCADF98C4,0x4185,0x11d2,0x9A,0x59,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDocStream,0xC9F2B104,0x8A95,0x11d2,0x9A,0xA5,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDocStorage,0xC9F2B107,0x8A95,0x11d2,0x9A,0xA5,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScResourceManager,0x55141801,0x5964,0x11d3,0x85,0x48,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



