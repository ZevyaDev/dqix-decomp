#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov019_0218c178_76 = 0x3c, Enum_ov019_0218c178_84 = 0x44 };
#else
enum { Enum_ov019_0218c178_76 = 0x4c, Enum_ov019_0218c178_84 = 0x54 };
#endif

#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;

struct Struct_0205c96c {
    char unknown_0_[4];
    unsigned short drawX_4_;
    unsigned short drawY_6_;
    char unknown_8_[0xd];
    unsigned char flags_15_;
};

struct Struct_ov019_0218c178 {
    char unknown_0_[Enum_ov019_0218c178_76];
    int unknown_4c_;
    char unknown_50_[0x40];
    struct SpriteAnimationList_0205a254* unknown_90_;
};


// USA: func_ov019_0218c178
extern "C" ARM void func_ov019_0218c178(struct Struct_ov019_0218c178* arg0) {
    GameState* var0 = GameState::GetInstance();
    if (arg0->unknown_4c_ & 1) {
        struct SpriteAnimationList_0205a254* var1 = arg0->unknown_90_;
        if (var1 != NULL) {
            struct Struct_0205c96c* var2;
            ((OBJSpriteSet::List*)(var1))->PlaySpriteAnimation(1);
            var2 = ((Struct_0205c96c*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
            if (var2 != NULL) {
                var2->flags_15_ = var2->flags_15_ | 8;
            }
            ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)var1))->UpdateAll(var0->GetTickCount());
            var2 = ((Struct_0205c96c*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
            if (var2 != NULL) {
                var2->drawX_4_ = 0xd7;
                var2->drawY_6_ = 0x96;
            }
            ((OBJSpriteSet::List*)(var1))->SetSpriteOBJIndex(1, 0x24);
        }
        ((OBJSpriteSet*)((char*)arg0 + Enum_ov019_0218c178_84))->DrawAll();
    } else {
        struct SpriteAnimationList_0205a254* var3 = arg0->unknown_90_;
        if (var3 != NULL) {
            struct Struct_0205c96c* var4 = ((Struct_0205c96c*)((OBJSpriteSet::List*)(var3))->GetSprite(1));
            if (var4 != NULL) {
                var4->flags_15_ = var4->flags_15_ & ~8;
            }
        }
    }
}
