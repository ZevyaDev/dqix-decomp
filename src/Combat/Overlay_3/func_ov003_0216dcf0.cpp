#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0216dcf0_704 = 0x150 };
enum { Enum_ov003_0216dcf0_680 = 0x138 };
enum { Enum_ov003_0216dcf0_4716 = 0x10fc };
#else
enum { Enum_ov003_0216dcf0_704 = 0x2c0 };
enum { Enum_ov003_0216dcf0_680 = 0x2a8 };
enum { Enum_ov003_0216dcf0_4716 = 0x126c };
#endif

struct TextWindow_0205d0e0 {
    char unknown_0_[0xac];
    short tileX_ac_;
    short tileY_ae_;
};

struct TextWindowManager_0205d81c;
extern "C" struct TextWindow_0205d0e0* GetCursorTextWindow_0205d8c4(struct TextWindowManager_0205d81c* windowManager);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);

struct Struct_0205c570;
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570* windowManager);

struct SpriteAnimationList_0205a254;
struct SpriteAnimation_0205a254_2;
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void func_020e27ec(struct SpriteAnimationList_0205a254* arg0, int arg1, short arg2, short arg3);

struct SpriteAnimationList_0205a330;
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);

extern "C" void DrawSpriteAnimations_0205ae8c(void* spriteSet);

// USA: func_ov003_0216dcf0
extern "C" ARM void func_ov003_0216dcf0(char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct TextWindow_0205d0e0* var1 = GetCursorTextWindow_0205d8c4(*(struct TextWindowManager_0205d81c**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_704));
    if (var1 != 0 && IsTextWindowOpen_0204c7e0((unsigned char*)var1) != 0) {
        short var2 = var1->tileY_ae_ << 3;
        short var3 = var1->tileX_ac_;
        short var4 = GetCursorIndex_0205d794(*(struct Struct_0205c570**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_704));
        short var5 = var2 + var4 * 12;
        struct SpriteAnimationList_0205a254* var6 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_680);
        if (var6 == 0) return;
        PlaySpriteAnimation_0205a370(var6, 0);
        struct SpriteAnimation_0205a254_2* var7 = FindSpriteAnimation_0205a3d0(var6, 0);
        if (var7 != 0) {
            *(unsigned char*)((char*)var7 + 0x15) |= 8;
        }
        AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)var6, var0->GetTickCount());
        func_020e27ec(var6, 0, (short)(var3 * 8) - 4, var5 + 2);
        DrawSpriteAnimations_0205ae8c(arg0 + Enum_ov003_0216dcf0_4716);
        return;
    }

    struct SpriteAnimationList_0205a254* var8 = *(struct SpriteAnimationList_0205a254**)(arg0 + 0x1000 + Enum_ov003_0216dcf0_680);
    if (var8 == 0) return;
    struct SpriteAnimation_0205a254_2* var9 = FindSpriteAnimation_0205a3d0(var8, 0);
    if (var9 != 0) {
        *(unsigned char*)((char*)var9 + 0x15) &= ~8;
    }
}
