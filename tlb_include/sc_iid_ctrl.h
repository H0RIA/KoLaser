#ifndef _sc_iid_ctrl_h_
#define _sc_iid_ctrl_h_

#ifdef __cplusplus
extern "C"{
#endif

#ifdef __cplusplus
    #define EXTERN_C    extern "C"
#else
    #define EXTERN_C    extern
#endif


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

const IID IID_SC_IView3DCtrl = {0x1AA93003,0x70F8,0x45cb,{ 0x93,0x93,0x21,0x8F,0xA0,0xA2,0x3D,0x52}};
//const IID IID_SC_IView3D = {0x67A88DB2,0x75F4,0x11d1,{ 0x8D,0x8C,0x00,0x80,0x48,0xE1,0xAD,0x3F}};

EXTERN_C const IID IID_DScEntityPropertySheet;


#ifdef __cplusplus
}
#endif

#endif
