#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct MenuLayout_0207fdcc_2;
struct TextWindow_0207fdcc;
extern "C" struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2*, int);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char*);
extern "C" void GetMenuLayoutTextPosition_020809c4(void*, int, int, short*, short*);

struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;

struct Struct_ov014_02186e2c {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 0x8];
    unsigned char unknown_15_;
};


struct Struct_ov014_02186e2c_2 {
    char unknown_0_[0xc0];
    void* unknown_c0_;
    char unknown_c4_[0xd0 - 0xc4];
    short* unknown_d0_;
    char unknown_d4_[0xd8 - 0xd4];
    struct SpriteAnimationList_0205a254* unknown_d8_;
    char unknown_dc_[0xf8 - 0xdc];
    char unknown_f8_[0x164 - 0xf8];
    int unknown_164_;
    char unknown_168_[0x170 - 0x168];
    short unknown_170_;
};

// USA: func_ov014_02186e2c
extern "C" ARM void func_ov014_02186e2c(struct Struct_ov014_02186e2c_2* arg0) {
    struct TextWindow_0207fdcc* var0;
    struct Struct_ov014_02186e2c* var1;
    short var2, var3;
    short var4, var5;

    if (arg0->unknown_d0_ == NULL) return;
    if (arg0->unknown_170_ < 0) return;
    var0 = FindMenuLayoutWindow_02081da8((struct MenuLayout_0207fdcc_2*)arg0->unknown_c0_, arg0->unknown_170_);
    if (var0 == NULL) return;
    if (IsTextWindowOpen_0204c7e0((unsigned char*)var0) == 0) return;

    GetMenuLayoutTextPosition_020809c4(arg0->unknown_c0_, arg0->unknown_170_, *arg0->unknown_d0_, &var2, &var3);
    var2 -= 0x10;
    var3 -= 3;

    ((OBJSpriteSet::List*)(arg0->unknown_d8_))->PlaySpriteAnimation(0);
    var1 = ((Struct_ov014_02186e2c*)((OBJSpriteSet::List*)(arg0->unknown_d8_))->GetSprite(0));
    if (var1 != NULL) {
        var1->unknown_15_ |= 8;
    }
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)arg0->unknown_d8_))->UpdateAll(arg0->unknown_164_);
    var5 = var3;
    var4 = var2;
    var1 = ((Struct_ov014_02186e2c*)((OBJSpriteSet::List*)(arg0->unknown_d8_))->GetSprite(0));
    if (var1 != NULL) {
        var1->unknown_4_ = var4;
        var1->unknown_6_ = var5;
    }
    ((OBJSpriteSet*)(&arg0->unknown_f8_))->DrawAll();
}
