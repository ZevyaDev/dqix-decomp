#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

#if defined(jpn)
enum { Enum_ov003_0216039c_804 = 0x20c };
enum { Enum_ov003_0216039c_820 = 0x21c };
enum { Enum_ov003_0216039c_808 = 0x210 };
enum { Enum_ov003_0216039c_908 = 0x274 };
enum { Enum_ov003_0216039c_1120 = 0x288 };
enum { Enum_ov003_0216039c_916 = 0x27c };
enum { Enum_ov003_0216039c_1136 = 0x298 };
enum { Enum_ov003_0216039c_1124 = 0x28c };
enum { Enum_ov003_0216039c_1160 = 0x2b0 };
enum { Enum_ov003_0216039c_1140 = 0x29c };
#else
enum { Enum_ov003_0216039c_804 = 0x324 };
enum { Enum_ov003_0216039c_820 = 0x334 };
enum { Enum_ov003_0216039c_808 = 0x328 };
enum { Enum_ov003_0216039c_908 = 0x38c };
enum { Enum_ov003_0216039c_1120 = 0x460 };
enum { Enum_ov003_0216039c_916 = 0x394 };
enum { Enum_ov003_0216039c_1136 = 0x470 };
enum { Enum_ov003_0216039c_1124 = 0x464 };
enum { Enum_ov003_0216039c_1160 = 0x488 };
enum { Enum_ov003_0216039c_1140 = 0x474 };
#endif

struct MenuLayout_0207fdcc_2;
struct Struct_020e28dc;
struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;
struct SpriteAnimation_0205a254_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};

extern "C" unsigned char* FindMenuLayoutWindow_02081da8(MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" int func_020e28dc(Struct_020e28dc* arg0);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);
extern "C" void GetMenuLayoutTextPosition_020809c4(void* menuLayout, int windowId, int textId, short* outX, short* outY);
extern "C" void SetSpriteAnimationPosition_020e27ec(SpriteAnimationList_0205a254* animationList, int index, short x, short y);

struct Struct_ov003_0216039c {
    char unknown_0_[Enum_ov003_0216039c_804];
    MenuLayout_0207fdcc_2* unknown_324_;
    char unknown_328_[Enum_ov003_0216039c_820 - Enum_ov003_0216039c_808];
    char unknown_334_[Enum_ov003_0216039c_908 - Enum_ov003_0216039c_820];
    SpriteAnimationList_0205a254* unknown_38c_;
    Struct_020e28dc* unknown_390_;
    char unknown_394_[Enum_ov003_0216039c_1120 - Enum_ov003_0216039c_916];
    int unknown_460_;
    char unknown_464_[Enum_ov003_0216039c_1136 - Enum_ov003_0216039c_1124];
    short* unknown_470_;
    char unknown_474_[Enum_ov003_0216039c_1160 - Enum_ov003_0216039c_1140];
    short unknown_488_;
};

// USA: func_ov003_0216039c
extern "C" ARM void func_ov003_0216039c(Struct_ov003_0216039c* arg0) {
    if (arg0->unknown_470_ == NULL || arg0->unknown_488_ < 0 || arg0->unknown_324_ == NULL) {
        return;
    }
    unsigned char* var0 = FindMenuLayoutWindow_02081da8(arg0->unknown_324_, arg0->unknown_488_);
    if (var0 == NULL) {
        return;
    }
    if (arg0->unknown_390_ != NULL && func_020e28dc(arg0->unknown_390_) != 0) {
        ((OBJSpriteSet::List*)(arg0->unknown_38c_))->SetSpriteOBJIndex(0, 0);
        ((OBJSpriteSet*)(arg0->unknown_334_))->DrawAll();
        return;
    }
    if (IsTextWindowOpen_0204c7e0(var0) == 0) {
        return;
    }
    short var1;
    short var2;
    GetMenuLayoutTextPosition_020809c4(arg0->unknown_324_, arg0->unknown_488_, *arg0->unknown_470_, &var1, &var2);
    var1 -= 0x10;
    var2 -= 3;
    ((OBJSpriteSet::List*)(arg0->unknown_38c_))->PlaySpriteAnimation(0);
    SpriteAnimation_0205a254_2* var3 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(arg0->unknown_38c_))->GetSprite(0));
    if (var3 != NULL) {
        var3->unknown_15_ |= 8;
    }
    var3 = ((SpriteAnimation_0205a254_2*)((OBJSpriteSet::List*)(arg0->unknown_38c_))->GetSprite(1));
    if (var3 != NULL) {
        var3->unknown_15_ &= ~8;
    }
    ((OBJSpriteSet::List*)((SpriteAnimationList_0205a330*)arg0->unknown_38c_))->UpdateAll(arg0->unknown_460_);
    SetSpriteAnimationPosition_020e27ec(arg0->unknown_38c_, 0, var1, var2);
    ((OBJSpriteSet*)(arg0->unknown_334_))->DrawAll();
}
