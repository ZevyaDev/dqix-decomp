#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Graphics/SPRSprite.h"

struct Struct_0204719c;

extern int data_ov023_021fe3e4;

struct Struct_ov011_02185020_3 {
    void* unknown_0_;
    char unknown_4_[0x34 - 4];
};

// USA: func_ov011_02185110
extern "C" ARM Struct_ov011_02185020_3* func_ov011_02185110(Struct_ov011_02185020_3* arg0) {
    arg0->unknown_0_ = &data_ov023_021fe3e4;
    ((SPRSprite::Names*)((Struct_0204719c*)((char*)arg0 + 0x34)))->Reset();
    ((SPRSprite*)((char*)arg0 + 0x20))->Reset();
    return arg0;
}
