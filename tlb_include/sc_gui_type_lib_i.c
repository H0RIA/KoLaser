

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:31 2017
 */
/* Compiler settings for d:\scaps\dll_source\gui\com\include\sc_gui_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamGui,0xAA589B71,0x409C,0x11d1,0x96,0xE6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IView,0xAA589B72,0x409C,0x11d1,0x96,0xE6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IView2D,0x67A88DB1,0x75F4,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, IID_SC_IView3D,0x67A88DB2,0x75F4,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, IID_SC_IControlButton,0x6FD65A52,0x850C,0x11d1,0x97,0x52,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IGuiMessageManager,0x6FD65A56,0x850C,0x11d1,0x97,0x52,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScView,0x4C0249B2,0x89BC,0x11d1,0x8C,0x25,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScView2D,0xE09F0551,0x7583,0x11d1,0x8D,0x8B,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_ScView3D,0x8F45A792,0x4599,0x11d1,0x96,0xEF,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScControlButton,0x6FD65A54,0x850C,0x11d1,0x97,0x52,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScGuiMessageManager,0x6FD65A58,0x850C,0x11d1,0x97,0x52,0x00,0x80,0x48,0xEE,0xE0,0x0C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



