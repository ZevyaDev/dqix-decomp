#include <globaldefs.h>
#if defined(jpn)

#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

#if defined(jpn)
#define func_ov005_0215a720 func_ov005_0215bc6c
#endif

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0xea0, 0xea4)];
    char unknown_ea4_[LOW_REGION(0x3d34, 0x3dbc) - LOW_REGION(0xea0, 0xea4)];
    unsigned char unknown_3dbc_;
    char unknown_3dbd_[LOW_REGION(0x3d44, 0x3dcc) - LOW_REGION(0x3d35, 0x3dbd)];
    unsigned int unknown_3dcc_;
};

struct BGLayer_0204b010;
struct BGLayer_0204b8d0;

extern "C" void ClearBGScreenData_0204b010(BGLayer_0204b010* layer, void* screenData);
extern "C" void CopyBGScreenBlockRect_0204b8d0(BGLayer_0204b8d0* layer, unsigned int screenBlockIndex, int srcX, int srcY, short destX, short destY, short width, short height, unsigned short palette);
extern "C" void FlushBGScreenData_0204b04c(void* layer, int screenData);

// USA: func_ov005_0215a720
extern "C" ARM void func_ov005_0215a720(Struct_ov005_02153954* arg0) {
    if (!(arg0->unknown_3dcc_ & 0x100))
        return;
    ClearBGScreenData_0204b010((BGLayer_0204b010*)arg0->unknown_ea4_, 0);
    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)arg0->unknown_ea4_, 0, 0, 0, 0x10, 0, 0x10, 0x16, 0xffff);
    CopyBGScreenBlockRect_0204b8d0((BGLayer_0204b8d0*)arg0->unknown_ea4_, (unsigned char)(arg0->unknown_3dbc_ + 1), 0, 0, (short)(arg0->unknown_3dbc_ * 2 + 0xf), 0, 4, 3, 0xffff);
    FlushBGScreenData_0204b04c(arg0->unknown_ea4_, 0);
}
