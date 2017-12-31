

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:25 2017
 */
/* Compiler settings for d:\scaps\dll_source\pixel2d\com\include\sc_pixel2d_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamPixel2D,0xB9218932,0x9346,0x11d1,0x97,0x62,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IPixelArray2D,0xB9218931,0x9346,0x11d1,0x97,0x62,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID_SC_IPixelArrays2D,0xE515C3B2,0x1596,0x11d2,0x8C,0xA7,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, IID_SC_IScannerPixelArray2D,0x9C8FBBC3,0xF3EF,0x11d1,0x8E,0x17,0x00,0x80,0x48,0xE1,0xAD,0x3F);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPixelArray2D,0xB9218934,0x9346,0x11d1,0x97,0x62,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScPixelArrays2D,0xE515C3B3,0x1596,0x11d2,0x8C,0xA7,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScScannerPixelArray2D,0x9C8FBBC2,0xF3EF,0x11d1,0x8E,0x17,0x00,0x80,0x48,0xE1,0xAD,0x3F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



