#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(TextWindowManager_0205de24_2*, unsigned char, unsigned char);
extern "C" void ConfigureMenuCursors_ov002_02161cf0(char *menu);
extern "C" void func_ov002_0215dae0(unsigned char *arg0);
struct Struct_0205c570;
extern "C" int GetCursorIndex_0205d794(Struct_0205c570*);
extern "C" int func_ov002_021573f8(void *arg0, int arg1);
struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(TextWindowManager_0205d81c*, int, int);
extern "C" void func_ov002_0215b9a4(char *arg0, unsigned char arg1, int arg2);
struct TextWindowManager_0205def8;
extern "C" void SetTextWindowVisible_0205def8(TextWindowManager_0205def8*, int, int);
extern "C" void * FindTextWindow_0205d81c(TextWindowManager_0205d81c*, int);
struct TextWindowManager_0205da38;
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);
struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760*, int, int);
extern "C" int IsCancelPressed_ov002_02161b48(char *menu, int isTouchCancelAllowed);
extern "C" void func_ov002_02156e90(char *arg0);
struct TextWindowManager_0205dee8;
extern "C" void SetCursorTextWindow_0205dee8(TextWindowManager_0205dee8*, int);

extern int gSoundEffectManager_02108760;

// USA: func_ov002_021644a8
#if defined(jpn)
extern "C" ARM void func_ov002_021644a8(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        *(short *) (arg0 + 0x1ab8) = 0;
        SetNextTextWindowBGLayer_0205de24((TextWindowManager_0205de24_2*)(arg0 + 0xe20), 0, 2);
        ConfigureMenuCursors_ov002_02161cf0(arg0);
        func_ov002_0215dae0((unsigned char *) arg0);
        (*(int *) (arg0 + 0x1a88))++;
    } else if (var0 == 1) {
        *(int *) (arg0 + 0x22ac) |= 4;
        short var1 = *(short *) (arg0 + 0x1ab8);
        *(short *) (arg0 + 0x1ab8) = GetCursorIndex_0205d794((Struct_0205c570*)(arg0 + 0xe20));
        *(char *) (arg0 + 0x1ae8) = func_ov002_021573f8(arg0, *(short *) (arg0 + 0x1ab8));
        signed char var2 = *(signed char *) (arg0 + 0x1ae8);
        *(char *) (arg0 + 0x1ae9) = var2;
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)(arg0 + 0xe20), 0xe, 1);
        if (*(short *) (arg0 + 0x1ab8) != 0) {
            func_ov002_0215b9a4(arg0, 0xe, 0);
            SetTextWindowVisible_0205def8((TextWindowManager_0205def8*)(arg0 + 0xe20), 1, 0xe);
            unsigned char *var3 = (unsigned char *) FindTextWindow_0205d81c((TextWindowManager_0205d81c*)(arg0 + 0xe20), 0xc);
            unsigned char *var4 = (unsigned char *) FindTextWindow_0205d81c((TextWindowManager_0205d81c*)(arg0 + 0xe20), 0xe);
            if (var3 != 0 && var4 != 0) {
                short var5 = *(short *) (var3 + 0xac);
                short var6 = *(short *) (var3 + 0xa8);
                *(short *) (var4 + 0xac) = var5 + var6;
                *(short *) (var4 + 0xae) = 1;
            }
        } else {
            SetTextWindowVisible_0205def8((TextWindowManager_0205def8*)(arg0 + 0xe20), 0, 0xe);
        }
        if (var1 != *(short *) (arg0 + 0x1ab8)) {
            return;
        }
        int var7 = g_keyManager.TestKeysPressed(0x601);
        int var8 = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 + 0xe20), 0x14);
        int var9 = (var7 | var8) != 0;
        if (var9 != 0) {
            *(char *) (arg0 + 0x1afa) = 0;
            *(char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1a80);
            *(int *) (arg0 + 0x22ac) &= ~4;
            SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)(arg0 + 0xe20), 0xc, 1);
            PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
            *(short *) (arg0 + 0x1ada) = 0;
            *(short *) (arg0 + 0x1af0) = 0x238d;
            *(short *) (arg0 + 0x1af2) = -1;
            *(int *) (arg0 + 0x1a80) = 0x29;
            *(int *) (arg0 + 0x1a84) = 0xc;
            *(int *) (arg0 + 0x1a88) = 0;
            *(char *) (arg0 + 0x1af6) = 1;
        } else {
            if (IsCancelPressed_ov002_02161b48(arg0, 1) == 0) {
                return;
            }
            func_ov002_02156e90(arg0);
            *(short *) (arg0 + 0x1ab8) = -1;
            *(char *) (arg0 + 0x1ae8) = -1;
            *(char *) (arg0 + 0x1ae9) = -1;
            SetCursorTextWindow_0205dee8((TextWindowManager_0205dee8*)(arg0 + 0xe20), (*(int *) (arg0 + 0x1a80) = 4));
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1a80), 0);
            ConfigureMenuCursors_ov002_02161cf0(arg0);
        }
    }
}
#else
extern "C" ARM void func_ov002_021644a8(char *arg0) {
    int var10 = *(int *) (arg0 + 0x1bc0);
    if (var10 == 0) {
        *(short *) (arg0 + 0x1bf0) = 0;
        SetNextTextWindowBGLayer_0205de24((TextWindowManager_0205de24_2*)(arg0 + 0xec8), 0, 2);
        ConfigureMenuCursors_ov002_02161cf0(arg0);
        func_ov002_0215dae0((unsigned char *) arg0);
        (*(int *) (arg0 + 0x1bc0))++;
    } else if (var10 == 1) {
        *(int *) (arg0 + 0x247c) |= 4;
        short var11 = *(short *) (arg0 + 0x1bf0);
        *(short *) (arg0 + 0x1bf0) = GetCursorIndex_0205d794((Struct_0205c570*)(arg0 + 0xec8));
        *(char *) (arg0 + 0x1c20) = func_ov002_021573f8(arg0, *(short *) (arg0 + 0x1bf0));
        signed char var12 = *(signed char *) (arg0 + 0x1c20);
        *(char *) (arg0 + 0x1c21) = var12;
        SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)(arg0 + 0xec8), 0xd, 1);
        if (*(short *) (arg0 + 0x1bf0) != 0) {
            func_ov002_0215b9a4(arg0, 0xd, 0);
            SetTextWindowVisible_0205def8((TextWindowManager_0205def8*)(arg0 + 0xec8), 1, 0xd);
            unsigned char *var13 = (unsigned char *) FindTextWindow_0205d81c((TextWindowManager_0205d81c*)(arg0 + 0xec8), 0xb);
            unsigned char *var14 = (unsigned char *) FindTextWindow_0205d81c((TextWindowManager_0205d81c*)(arg0 + 0xec8), 0xd);
            if (var13 != 0 && var14 != 0) {
                short var15 = *(short *) (var13 + 0xac);
                short var16 = *(short *) (var13 + 0xa8);
                *(short *) (var14 + 0xac) = var15 + var16;
                *(short *) (var14 + 0xae) = 1;
            }
        } else {
            SetTextWindowVisible_0205def8((TextWindowManager_0205def8*)(arg0 + 0xec8), 0, 0xd);
        }
        if (var11 != *(short *) (arg0 + 0x1bf0)) {
            return;
        }
        int var17 = g_keyManager.TestKeysPressed(0x601);
        int var18 = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 + 0xec8), 0x14);
        int var19 = (var17 | var18) != 0;
        if (var19 != 0) {
            *(char *) (arg0 + 0x1c32) = 0;
            *(char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1bb8);
            *(int *) (arg0 + 0x247c) &= ~4;
            SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)(arg0 + 0xec8), 0xb, 1);
            PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
            *(short *) (arg0 + 0x1c12) = 0;
            *(short *) (arg0 + 0x1c28) = 0x238d;
            *(short *) (arg0 + 0x1c2a) = -1;
            *(int *) (arg0 + 0x1bb8) = 0x26;
            *(int *) (arg0 + 0x1bbc) = 0xb;
            *(int *) (arg0 + 0x1bc0) = 0;
            *(char *) (arg0 + 0x1c2e) = 1;
        } else {
            if (IsCancelPressed_ov002_02161b48(arg0, 1) == 0) {
                return;
            }
            func_ov002_02156e90(arg0);
            *(short *) (arg0 + 0x1bf0) = -1;
            *(char *) (arg0 + 0x1c20) = -1;
            *(char *) (arg0 + 0x1c21) = -1;
            SetCursorTextWindow_0205dee8((TextWindowManager_0205dee8*)(arg0 + 0x2c8 + 0xc00), (*(int *) (arg0 + 0x1bb8) = 4));
            func_ov002_0215b9a4(arg0, *(int *) (arg0 + 0x1bb8), 0);
            ConfigureMenuCursors_ov002_02161cf0(arg0);
        }
    }
}
#endif
