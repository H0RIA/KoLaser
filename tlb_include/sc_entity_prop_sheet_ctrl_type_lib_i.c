

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:49 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\entity_prop_sheet\sc_entity_prop_sheet_ctrl_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamEntityPropertySheetCtrl,0x36101D53,0x43CD,0x11D2,0x8E,0x73,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, DIID__DScEntityPropertySheet,0x36101D54,0x43CD,0x11D2,0x8E,0x73,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, IID_SC_IEntityPropertySheet,0xF4D3CAA2,0xE548,0x11d2,0x9A,0xD6,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DScEntityPropertySheetEvents,0x36101D55,0x43CD,0x11D2,0x8E,0x73,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, IID_SC_IDevicePropertySheetCtrl,0x2F519F3F,0x2A3B,0x11d4,0x9B,0xDD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DDevicePropertySheetCtrl,0x2F519F43,0x2A3B,0x11d4,0x9B,0xDD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEntityPropertySheet,0x36101D56,0x43CD,0x11D2,0x8E,0x73,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDevicePropertySheetCtrl,0x2F519F41,0x2A3B,0x11d4,0x9B,0xDD,0x00,0x80,0x48,0xEE,0xE0,0x0C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



