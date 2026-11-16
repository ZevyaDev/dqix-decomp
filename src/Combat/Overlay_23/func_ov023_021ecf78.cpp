#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"


struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;

struct Struct_ov023_021ecf78 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 8];
    unsigned char unknown_15_;
};

struct Struct_ov023_021ecf78_2 {
    char unknown_0_[0x424];
    void* unknown_424_;
    char unknown_428_[0x42c - 0x428];
    struct SpriteAnimationList_0205a254* unknown_42c_;
    char unknown_430_[0x438 - 0x430];
    unsigned short unknown_438_;
    char unknown_43a_[0x448 - 0x43a];
    short unknown_448_;
};

// USA: func_ov023_021ecf78
extern "C" ARM void func_ov023_021ecf78(struct Struct_ov023_021ecf78_2* arg0) {
    if ((arg0->unknown_438_ & 0x80) == 0) {
        return;
    }

    GameState* var0 = GameState::GetInstance();
    ((OBJSpriteSet::List*)(arg0->unknown_42c_))->SetSpriteOBJIndex(0, 0x40);
    ((OBJSpriteSet::List*)(arg0->unknown_42c_))->PlaySpriteAnimation(0);

    struct Struct_ov023_021ecf78* var1 = ((Struct_ov023_021ecf78*)((OBJSpriteSet::List*)(arg0->unknown_42c_))->GetSprite(0));
    if (var1 != NULL) {
        var1->unknown_15_ |= 8;
    }

    unsigned int var2 = var0->GetTickCount();
    ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)arg0->unknown_42c_))->UpdateAll(var2);

    short var3 = arg0->unknown_448_;
    struct Struct_ov023_021ecf78* var4 = ((Struct_ov023_021ecf78*)((OBJSpriteSet::List*)(arg0->unknown_42c_))->GetSprite(0));
    if (var4 != NULL) {
        var4->unknown_4_ = var3;
        var4->unknown_6_ = 0x24;
    }

    ((OBJSpriteSet*)(arg0->unknown_424_))->DrawAll();
}
