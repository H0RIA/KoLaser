

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:40 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\view2d\sc_View2D_Ctrl_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamView2DCtrl,0x62CA3361,0x764A,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, DIID_SC_DispView2DCtrl,0x62CA3362,0x764A,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(IID, IID_SC_IView2DCtrl,0x666CB792,0xC731,0x11d2,0x84,0xD6,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);


MIDL_DEFINE_GUID(IID, DIID_SC_IView2DCtrlEvents,0x62CA3363,0x764A,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_ScView2DCtrl,0x62CA3364,0x764A,0x11d1,0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



