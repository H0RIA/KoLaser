

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0500 */
/* at Mon Jul 10 13:50:48 2017
 */
/* Compiler settings for d:\scaps\ctrl_projects\standard_prop\sc_standard_prop_ctrl_type_lib.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_ScapsSamStdProperty,0x00113F72,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_Text2DProperty,0x00113F74,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_Text2DPropertyEvents,0x00113F75,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScText2DProperty,0x00113F76,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_BarCodeProperty,0xC9601B61,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_BarCodePropertyEvents,0xC9601B62,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScBarCodeProperty,0xC9601B63,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_BarCodePropertyEx,0x2B012F43,0x861D,0x11d2,0x9A,0xA1,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_BarCodePropertyExEvents,0x2B012F45,0x861D,0x11d2,0x9A,0xA1,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScBarCodePropertyEx,0x2B012F47,0x861D,0x11d2,0x9A,0xA1,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_BitMapProperty,0xC9601B6B,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_BitMapPropertyEvents,0xC9601B69,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScBitMapProperty,0xC9601B67,0xEEF7,0x11d1,0x97,0xC0,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_HatchProperty,0x71AB7484,0xEFE8,0x11d1,0x8C,0x7D,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_HatchPropertyEvents,0x71AB7483,0xEFE8,0x11d1,0x8C,0x7D,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScHatchProperty,0x71AB7482,0xEFE8,0x11d1,0x8C,0x7D,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_EntityInfoProperty,0x7440F315,0xF321,0x11d1,0x8C,0x7F,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_EntityInfoPropertyEvents,0x7440F313,0xF321,0x11d1,0x8C,0x7F,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEntityInfoProperty,0x7440F312,0xF321,0x11d1,0x8C,0x7F,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_StyleProperty,0xE455004C,0xFBF3,0x44bf,0x8F,0x8D,0xA2,0xAD,0x9E,0xF5,0x53,0x31);


MIDL_DEFINE_GUID(IID, DIID__DSC_StylePropertyEvents,0xE455004A,0xFBF3,0x44bf,0x8F,0x8D,0xA2,0xAD,0x9E,0xF5,0x53,0x31);


MIDL_DEFINE_GUID(CLSID, CLSID_ScStyleProperty,0xE4550049,0xFBF3,0x44bf,0x8F,0x8D,0xA2,0xAD,0x9E,0xF5,0x53,0x31);


MIDL_DEFINE_GUID(IID, DIID__DSC_VarEntityProperty,0x61F30A55,0xD30F,0x11d2,0x9A,0xCD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_VarEntityPropertyEvents,0x61F30A57,0xD30F,0x11d2,0x9A,0xCD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScVarEntityProperty,0x61F30A59,0xD30F,0x11d2,0x9A,0xCD,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_DateTimeProperty,0xB5F95CD3,0x057D,0x41a3,0xB1,0x3E,0x9B,0xBE,0x14,0xFF,0xE6,0xE1);


MIDL_DEFINE_GUID(IID, DIID__DSC_DateTimePropertyEvents,0xEE0D0D83,0x02F0,0x46ac,0xAE,0x26,0x83,0x71,0x2D,0x74,0x11,0xAF);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDateTimeProperty,0x03BEBF8A,0x5014,0x464c,0xAE,0x38,0xC0,0x3C,0x5A,0x04,0xA9,0xF1);


MIDL_DEFINE_GUID(IID, DIID__DSC_MacroProperty,0xB79C4835,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_MacroPropertyEvents,0xB79C4837,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScMacroProperty,0xB79C4839,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_UserProperty,0xB79C483C,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, DIID__DSC_UserPropertyEvents,0xB79C483E,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_ScUserProperty,0xB79C4840,0x9742,0x11d2,0x9A,0xAE,0x00,0x80,0x48,0xEE,0xE0,0x0C);


MIDL_DEFINE_GUID(IID, IID__DSC_ExposureProperty,0x00113F78,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_ExposurePropertyEvents,0x00113F79,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScExposureProperty,0x00113F7A,0xCC82,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_LayerProperty,0xA741B874,0xCD4D,0x11D1,0x8C,0x6C,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_DimensionPropertyCtrl,0x3D13A6F5,0xD79E,0x11d1,0x8C,0x71,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_DimensionPropertyEvents,0x3D13A6F4,0xD79E,0x11d1,0x8C,0x71,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_ScDimensionProperty,0x3D13A6F3,0xD79E,0x11d1,0x8C,0x71,0x00,0x80,0x48,0xEE,0xDC,0xB8);


MIDL_DEFINE_GUID(IID, DIID__DSC_3DDimensionPropertyCtrl,0x1337F851,0x4770,0x4621,0x9B,0xEC,0xA6,0x48,0x54,0xFB,0x56,0xBC);


MIDL_DEFINE_GUID(IID, DIID__DSC_3DDimensionPropertyEvents,0xFF4EFAF1,0xDDE1,0x46ec,0x88,0xEF,0x05,0x12,0xF1,0xB5,0x81,0xC8);


MIDL_DEFINE_GUID(CLSID, CLSID_Sc3DDimensionProperty,0xBF6FC1DB,0x32C8,0x42d6,0x93,0x6D,0xE4,0x10,0x9D,0xF4,0x56,0xCE);


MIDL_DEFINE_GUID(IID, DIID__DSC_ZDimensionPropertyCtrl,0xB6891306,0x6CCA,0x4869,0xB0,0x47,0xF6,0x60,0xB9,0x7B,0x47,0xE7);


MIDL_DEFINE_GUID(IID, DIID__DSC_ZDimensionPropertyEvents,0x0DADE2E4,0xF0CD,0x486e,0x96,0x59,0x0F,0xE9,0x95,0xDE,0x8B,0xE1);


MIDL_DEFINE_GUID(CLSID, CLSID_ScZDimensionProperty,0xDFA567D1,0x5F34,0x4a38,0x80,0x52,0x57,0x6C,0x42,0x2D,0xA7,0x04);


MIDL_DEFINE_GUID(IID, DIID__DSC_GeometryPropertyCtrl,0x7C381021,0x7309,0x11d2,0x8E,0xC1,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);


MIDL_DEFINE_GUID(IID, DIID__DSC_GeometryPropertyEvents,0x7C381022,0x7309,0x11d2,0x8E,0xC1,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);


MIDL_DEFINE_GUID(CLSID, CLSID_ScGeometryProperty,0x7C381023,0x7309,0x11d2,0x8E,0xC1,0x00,0xC0,0xDF,0xEA,0x4A,0x3A);


MIDL_DEFINE_GUID(IID, DIID__DSC_LineStylePropertyCtrl,0x931505BD,0x4295,0x4349,0xA9,0xB2,0x5D,0xA8,0x82,0x8D,0x31,0x2C);


MIDL_DEFINE_GUID(IID, DIID__DSC_LineStylePropertyEvents,0x46ABA33F,0x5A54,0x4abe,0x86,0x99,0x98,0x70,0x44,0xB4,0x39,0x75);


MIDL_DEFINE_GUID(CLSID, CLSID_ScLineStyleProperty,0xA77BE2E5,0x8433,0x4cd5,0xAA,0x97,0x26,0x8B,0xE7,0x79,0xC5,0xC3);


MIDL_DEFINE_GUID(IID, DIID__DSC_EventPropertyCtrl,0x8C4EA3E3,0x981F,0x4a02,0xA6,0x78,0x59,0x03,0x4C,0x4E,0xD3,0xED);


MIDL_DEFINE_GUID(IID, DIID__DSC_EventPropertyEvents,0x01C60E40,0x2647,0x48e0,0x9E,0xAB,0x03,0x23,0x9F,0xB6,0x21,0x0B);


MIDL_DEFINE_GUID(CLSID, CLSID_ScEventProperty,0x2EBF996E,0x4CBC,0x4fee,0xB9,0xCB,0x25,0x5D,0xB4,0x77,0x3D,0x65);


MIDL_DEFINE_GUID(IID, DIID__DSC_SpecialGeometryPropertyCtrl,0x87B985E6,0x1F85,0x40a9,0x9E,0x7D,0x46,0x5B,0x9D,0x51,0xCE,0x66);


MIDL_DEFINE_GUID(IID, DIID__DSC_SpecialGeometryPropertyEvents,0x2249FE96,0xBAAA,0x4201,0x88,0xB6,0x5C,0x97,0xD7,0xD2,0xFC,0x9D);


MIDL_DEFINE_GUID(CLSID, CLSID_ScSpecialGeometryProperty,0xAACB708A,0xC2F7,0x4507,0x8B,0x82,0x3A,0x42,0x50,0xAE,0x58,0x99);


MIDL_DEFINE_GUID(IID, DIID__DSC_UIIPropertyCtrl,0xCC61d444,0xB59B,0x40EB,0xAF,0xDF,0xEB,0x5D,0x84,0x1B,0xA3,0x5F);


MIDL_DEFINE_GUID(IID, DIID__DSC_UIIPropertyEvents,0xCC61D445,0xB59B,0x40EB,0xAF,0xDF,0xEB,0x5D,0x84,0x1B,0xA3,0x5F);


MIDL_DEFINE_GUID(CLSID, CLSID_ScUIIProperty,0x6CE92933,0xEE69,0x41B8,0x90,0x4E,0x23,0x56,0xFD,0x9D,0x6C,0xDC);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



