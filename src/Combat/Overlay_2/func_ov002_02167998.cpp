#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Input/Input.h"

#if defined(jpn)
#define data_ov002_0216cc98 data_ov002_0216d2b0
#define RG(u, j) (j)
#define OBJ (arg0 + 0xe20)
#else
#define RG(u, j) (u)
#define OBJ (arg0 + 0x2c8 + 0xc00)
#endif

class GameState;
struct Struct_ov002_0215624c_11;
struct Struct_ov002_0215624c_15;
struct Struct_ov002_02155960_2;
struct Struct_ov002_02155960_3;
struct Struct_ov002_02155960_4;
struct Struct_ov002_02167998;
struct Struct_ov002_02167998_2;
struct Struct_ov002_02157d40_7;
struct Struct_ov002_02164748;

struct Struct_ov002_02167998_3 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_ov002_02167998_4 {
    unsigned int unknown_0_0_ : 30;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

extern "C" int GetProtagonistObjectIndex_020100a8(GameState *gameState);
extern "C" void SetTextWindowVisible_0205def8(struct Struct_ov002_02155960_3 *windowManager, int isVisible, int windowId);
extern "C" void SetNextTextWindowBGLayer_0205de24(struct Struct_ov002_0215624c_11 *windowManager, unsigned char isSubScreen,
                                                                        unsigned char bgIndex);
extern "C" struct Struct_ov002_02155960_4 *FindTextWindow_0205d81c(struct Struct_ov002_02155960_2 *windowManager, int windowId);
extern "C" void func_0204c610(struct Struct_ov002_02167998 *arg0, int arg1, short *arg2, short *arg3, short *arg4, short *arg5);
extern "C" void func_0204c654(Struct_ov002_02167998_2*, int, short, short, short, short);
extern "C" int GetCursorIndex_0205d794(struct Struct_ov002_0215624c_15 *windowManager);
extern "C" void func_0205d7a0(unsigned char *arg0, int arg1);
extern "C" int IsEntryTouchedAgain_0205da38(struct Struct_ov002_02164748 *windowManager, int arg1);
extern "C" void PlaySoundEffect_0205eaa0(struct Struct_ov002_02157d40_7 *manager, int soundEffectIndex, int handle);
extern "C" int IsCancelPressed_ov002_02161b48(char *menu, int isTouchCancelAllowed);
extern "C" unsigned char *GetPartyMemberData_02053c6c(unsigned char *gameObject);
extern "C" void ConfigureMenuCursors_ov002_02161cf0(void *menu);
extern "C" void func_ov002_0215f6a4(void *arg0);
extern "C" void func_ov002_02161a8c(void);
extern "C" void func_ov002_021619b4(int arg0, int arg1, int arg2);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);
extern "C" void func_ov002_02156e90(void *arg0);

extern unsigned char data_ov002_0216cc98[];
extern char gSoundEffectManager_02108760[];

// USA: func_ov002_02167998
extern "C" ARM void func_ov002_02167998(char *arg0) {
    unsigned char *var0 = (unsigned char *) OBJ;
    int var1;
    short var2;
    int var3;
    int var4;
    GameState *var5 = GameState::GetInstance();
    int var6     = *(int *) (arg0 + RG(0x1bc0, 0x1a88));
    if (var6 == 0) {
#if !defined(jpn)
        arg0[0x1c34] = 0;
#endif
        for (int var7 = 0; var7 < 5; var7++) {
            SetTextWindowVisible_0205def8((struct Struct_ov002_02155960_3 *) var0, 0, data_ov002_0216cc98[var7]);
        }
        arg0[RG(0x1c20, 0x1ae8)]               = GetProtagonistObjectIndex_020100a8(var5);
        *(short *) (arg0 + RG(0x1c02, 0x1aca)) = 0;
        SetNextTextWindowBGLayer_0205de24((struct Struct_ov002_0215624c_11 *) var0, 0, 2);
        ConfigureMenuCursors_ov002_02161cf0(arg0);
        func_ov002_0215f6a4(arg0);
        (*(int *) (arg0 + RG(0x1bc0, 0x1a88)))++;
        func_ov002_02161a8c();
#if !defined(jpn)
        func_ov002_021619b4(*(signed char *) (arg0 + 0x1c20), *(int *) (arg0 + 0x1a68), *(int *) (arg0 + 0x1bd8));
#endif
        return;
    }
    if (var6 != 1) return;
    *(int *) (arg0 + RG(0x247c, 0x22ac)) |= 4;
    struct Struct_ov002_02155960_4 *var8 = FindTextWindow_0205d81c((struct Struct_ov002_02155960_2 *) var0, RG(0x18, 0x19));
    if (var8 != 0) {
        short var9 = *(signed char *) (arg0 + RG(0x1c73, 0x1b37));
        short var10, var11, var12, var13;
        func_0204c610((struct Struct_ov002_02167998 *) var8, var9, &var10, &var11, &var12, &var13);
        var9 += *(signed char *) (arg0 + RG(0x1c73, 0x1b37)) + 1;
        func_0204c654((struct Struct_ov002_02167998_2 *) var8, var9, var10, var11, var12, var13);
        var9 += *(signed char *) (arg0 + RG(0x1c73, 0x1b37)) + 1;
        func_0204c654((struct Struct_ov002_02167998_2 *) var8, var9, var10, var11, var12, var13);
    }
    int var14;
    int var15;
    short var16 = *(short *) (arg0 + RG(0x1c02, 0x1aca));
    var1         = var16 % (*(signed char *) (arg0 + RG(0x1c73, 0x1b37)) + 1);
    Struct_ov002_02167998_3 *var17 = (Struct_ov002_02167998_3 *) (var0 + 0x6c);
    var14        = var17->unknown_0_;
    var15         = var17->unknown_4_;
    *(short *) (arg0 + RG(0x1c02, 0x1aca)) = GetCursorIndex_0205d794((struct Struct_ov002_0215624c_15 *) var0);
    if (var16 != *(short *) (arg0 + RG(0x1c02, 0x1aca))) {
        if (var1 == var15 && var15 == *(signed char *) (arg0 + RG(0x1c73, 0x1b37)) && g_touchInput.pressed_ == 0) {
            var15--;
            var2 = var14 * (*(signed char *) (arg0 + RG(0x1c73, 0x1b37)) + 1) + var15;
            func_0205d7a0(var0, var2);
            *(short *) (arg0 + RG(0x1c02, 0x1aca)) = var2;
        }
        arg0[RG(0x1c20, 0x1ae8)] = -1;
        if (var15 < *(signed char *) (arg0 + RG(0x1c73, 0x1b37))) {
            arg0[RG(0x1c20, 0x1ae8)] = *(signed char *) (arg0 + var15 + RG(0x1c6e, 0x1b32));
        }
#if defined(jpn)
        func_ov002_0215b9a4(arg0, 0x1b, 0);
        func_ov002_0215b9a4(arg0, 0x1c, 0);
#else
        arg0[0x1c34] = 1;
#endif
    }
    var3  = var15 == *(signed char *) (arg0 + RG(0x1c73, 0x1b37));
    var4 = !var3;
    SetTextWindowVisible_0205def8((struct Struct_ov002_02155960_3 *) var0, var4, RG(0x1a, 0x1b));
    SetTextWindowVisible_0205def8((struct Struct_ov002_02155960_3 *) var0, var4, RG(0x1b, 0x1c));
    if (var16 != *(short *) (arg0 + RG(0x1c02, 0x1aca))) return;
    int var18 = g_keyManager.TestKeysPressed(0x601);
    int var19 = (var18 | IsEntryTouchedAgain_0205da38((struct Struct_ov002_02164748 *) OBJ, 0x14)) ? 1 : 0;
    if (var19) {
        if (var15 == *(signed char *) (arg0 + RG(0x1c73, 0x1b37))) {
            PlaySoundEffect_0205eaa0((struct Struct_ov002_02157d40_7 *) gSoundEffectManager_02108760, 1, 0);
            for (int var20 = 0; var20 < 5; var20++) {
                SetTextWindowVisible_0205def8((struct Struct_ov002_02155960_3 *) var0, 1, data_ov002_0216cc98[var20]);
            }
            *(short *) (arg0 + RG(0x1c02, 0x1aca)) = -1;
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            func_ov002_02156e90(arg0);
            return;
        }
        int var21       = *(signed char *) (arg0 + RG(0x1c20, 0x1ae8));
        unsigned char *var22 = (unsigned char *)var5->GetPartyMemberByIndex(var21);
        if (var22 == 0) return;
        switch (var14) {
        case 0:
            if (var21 == GetProtagonistObjectIndex_020100a8(var5)) return;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + RG(0x1bb8, 0x1a80)) & 0xff, 1);
            PlaySoundEffect_0205eaa0((struct Struct_ov002_02157d40_7 *) gSoundEffectManager_02108760, 1, 0);
            *(int *) (arg0 + RG(0x1bb8, 0x1a80))   = RG(0x19, 0x1a);
            *(int *) (arg0 + RG(0x1bc0, 0x1a88))   = 0;
            *(short *) (arg0 + RG(0x1c04, 0x1acc)) = (signed char) *(int *) (GetPartyMemberData_02053c6c(var22) + RG(0x94c, 0x8b4));
            break;
        case 1: {
            struct Struct_ov002_02167998_4 *var23 = (struct Struct_ov002_02167998_4 *) (*(unsigned char **) (var22 + 0x134) + 0x3c);
            unsigned short var24 = var23->unknown_3_6_;
            var24++;
            var24 %= 2;
            var23->unknown_3_6_ = var24;
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + RG(0x1bb8, 0x1a80)) & 0xff, 0);
            PlaySoundEffect_0205eaa0((struct Struct_ov002_02157d40_7 *) gSoundEffectManager_02108760, 1, 0);
            break;
        }
        case 2: {
            unsigned char *var25 = GetPartyMemberData_02053c6c(var22);
            var0[0xb8]        = *(int *) (arg0 + RG(0x1bb8, 0x1a80));
            *(int *) (arg0 + RG(0x247c, 0x22ac)) &= ~4;
            PlaySoundEffect_0205eaa0((struct Struct_ov002_02157d40_7 *) gSoundEffectManager_02108760, 1, 0);
            *(int *) (arg0 + RG(0x1bb8, 0x1a80))   = RG(0x1c, 0x1d);
            *(int *) (arg0 + RG(0x1bc0, 0x1a88))   = 0;
            *(short *) (arg0 + RG(0x1c06, 0x1ace)) = var25[0x56a];
            break;
        }
        }
        return;
    }
    if (IsCancelPressed_ov002_02161b48(arg0, 1)) {
        for (int var26 = 0; var26 < 5; var26++) {
            SetTextWindowVisible_0205def8((struct Struct_ov002_02155960_3 *) var0, 1, data_ov002_0216cc98[var26]);
        }
        *(short *) (arg0 + RG(0x1c02, 0x1aca)) = -1;
        func_ov002_02156e90(arg0);
        func_ov002_02156e90(arg0);
        func_ov002_02156e90(arg0);
    }
}
