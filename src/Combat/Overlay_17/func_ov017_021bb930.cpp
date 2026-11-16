#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/OBJSpriteSet.h"

extern "C" void func_0208be8c(void);

struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;

struct Struct_ov017_021bb930 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    char unknown_8_[0x15 - 0x8];
    unsigned char unknown_15_;
};


struct Struct_ov017_021bb930_2 {
    char unknown_0_[0x3c];
    struct SpriteAnimationList_0205a254* unknown_3c_;
};

struct Struct_ov017_021bb930_3 {
#if defined(jpn)
    char unknown_0_[0xfa];
#else
    char unknown1_0_[0xfe];
#endif
    unsigned char unknown_fe_;
    char unknown_ff_[0x120 - 0xff];
    void* unknown_120_;
    char unknown_124_[0x168 - 0x124];
    struct Struct_ov017_021bb930_2* unknown_168_;
};

// USA: func_ov017_021bb930
extern "C" ARM void func_ov017_021bb930(struct Struct_ov017_021bb930_3* arg0) {
    if (arg0->unknown_fe_ != 0 && arg0->unknown_168_ != NULL) {
        GameState* var0 = GameState::GetInstance();
        struct SpriteAnimationList_0205a254* var1 = arg0->unknown_168_->unknown_3c_;
        if (var1 != NULL) {
            struct Struct_ov017_021bb930* var2;
            unsigned int var3;
            ((OBJSpriteSet::List*)(var1))->PlaySpriteAnimation(1);
            var2 = ((Struct_ov017_021bb930*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
            if (var2 != NULL) {
                var2->unknown_15_ |= 0x8;
            }
            var3 = var0->GetTickCount();
            ((OBJSpriteSet::List*)((struct SpriteAnimationList_0205a330*)var1))->UpdateAll(var3);
            var2 = ((Struct_ov017_021bb930*)((OBJSpriteSet::List*)(var1))->GetSprite(1));
            if (var2 != NULL) {
                var2->unknown_4_ = 0xd8;
                var2->unknown_6_ = 0x98;
            }
            ((OBJSpriteSet::List*)(var1))->SetSpriteOBJIndex(1, 6);
        }
        ((OBJSpriteSet*)(arg0->unknown_168_))->DrawAll();
    }
    if (arg0->unknown_120_ != 0) {
        func_0208be8c();
    }
}
