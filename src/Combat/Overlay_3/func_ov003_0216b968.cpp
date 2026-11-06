#include <globaldefs.h>
#if defined(jpn)
#define REGION_LAYOUT(j,u) j
#define func_ov003_0216da90 func_ov003_0216d478
#else
#define REGION_LAYOUT(j,u) u
#endif

#include "GameState/GameState.h"
#include "NitroSDK/ColorEffects.h"
#include "Input/Input.h"

struct SpriteAnimationList_0205a330;
struct Struct_0205c570;
struct TextWindowManager_0205da38;
struct SoundEffectManager_02108760;
struct TextWindowManager_0205d6a0;

struct Struct_ov003_0216b968 {
    char unknown_0_[REGION_LAYOUT(0x230, 0x2e0)];
    struct SpriteAnimationList_0205a330* unknown_2e0_;
    char unknown_2e4_[REGION_LAYOUT(0x63c, 0x6bc)];
    int unknown_9a0_;
    char unknown_9a4_[REGION_LAYOUT(0xf6a, 0x100a)];
    unsigned char unknown_19ae_;
};

struct Struct_ov003_0216b968_2 {
    char unknown_0_[0x4];
    short unknown_4_;
    short unknown_6_;
    char unknown_8_[0x8];
    int unknown_10_;
    char unknown_14_[REGION_LAYOUT(0x113c, 0x12ac)];
    void* unknown_12c0_;
    char unknown_12c4_[0x126];
    unsigned char unknown_13ea_;
    char unknown_13eb_;
    unsigned char unknown_13ec_;
    char unknown_13ed_;
    unsigned char unknown_13ee_;
};

extern "C" Struct_ov003_0216b968* GetMessageWindow_020421a0(void);
extern "C" void func_0205d7a0(void* arg0, int arg1);
extern "C" void func_ov003_0216da90(Struct_ov003_0216b968_2* arg0);
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570* windowManager);
extern "C" void func_ov003_0216dc58(Struct_ov003_0216b968_2* arg0);
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);
extern "C" int func_0205d97c(void* arg0);
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0* windowManager, int isAll);

extern struct SoundEffectManager_02108760 gSoundEffectManager_02108760;

// USA: func_ov003_0216b968
extern "C" ARM void func_ov003_0216b968(Struct_ov003_0216b968_2* arg0) {
    Struct_ov003_0216b968* var0 = GetMessageWindow_020421a0();

    if (arg0->unknown_6_ == 0) {
        if (var0->unknown_9a0_ == 3) {
            arg0->unknown_13ea_ = 1;
            arg0->unknown_6_ = 1;
        }
    } else if (arg0->unknown_6_ == 1) {
        if (arg0->unknown_13ec_ & 1) {
            return;
        }
        func_0205d7a0(arg0->unknown_12c0_, 0);
        func_ov003_0216da90(arg0);
        ColorEffect_ConfigureAlphaBlend(0x04000050, 4, 1, 10, 6);
        arg0->unknown_6_ = 2;
    } else if (arg0->unknown_6_ == 2) {
        GameState* var1 = GameState::GetInstance();
        struct SpriteAnimationList_0205a330* var2 = var0->unknown_2e0_;
        AdvanceSpriteAnimations_0205a330(var2, var1->GetTickCount());
        var0->unknown_19ae_ = 0;
        arg0->unknown_13ee_ = 0;
        GetCursorIndex_0205d794((struct Struct_0205c570*)arg0->unknown_12c0_);
        if (arg0->unknown_10_ != 0) {
            func_ov003_0216dc58(arg0);
        }

        int var3 = -1;
        if (IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)arg0->unknown_12c0_, 0x14) != 0) {
            var3 = GetCursorIndex_0205d794((struct Struct_0205c570*)arg0->unknown_12c0_);
        } else if (g_keyManager.TestKeysPressed(0x401) != 0) {
            var3 = GetCursorIndex_0205d794((struct Struct_0205c570*)arg0->unknown_12c0_);
        } else if (g_keyManager.TestKeysPressed(2) != 0 || func_0205d97c(arg0->unknown_12c0_) == 2) {
            var3 = -2;
        }

#if defined(jpn)
        switch (var3) {
        case 0:
            arg0->unknown_4_ = 3;
            arg0->unknown_6_ = 0;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
            break;
        case 1:
            arg0->unknown_4_ = 5;
            arg0->unknown_6_ = 0;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
            break;
        case 2:
            arg0->unknown_4_ = 4;
            arg0->unknown_6_ = 0;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
            break;
        case 3:
            arg0->unknown_4_ = 6;
            arg0->unknown_6_ = 0;
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
            CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
            break;
        case -2:
            arg0->unknown_4_ = 6;
            arg0->unknown_6_ = 0;
            CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
            break;
        default:
            break;
        }
#else
        int var4;
        int var5 = 1;
        switch (var3) {
        case 0:
            var4 = 3;
            break;
        case 1:
            var4 = 5;
            break;
        case 2:
            var4 = 4;
            break;
        case 3:
            var4 = 6;
            break;
        case -2:
            var4 = 6;
            var5 = 0;
            break;
        default:
            return;
        }

        arg0->unknown_4_ = var4;
        arg0->unknown_6_ = 0;
        if (var5) {
            PlaySoundEffect_0205eaa0(&gSoundEffectManager_02108760, 1, 0);
        }
        CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)arg0->unknown_12c0_, 0);
#endif
    }
}
