#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

struct TextWindowManager_0205de24_2;
struct Struct_0205c570;
struct TextWindowManager_0205d81c;
struct TextWindowManager_0205d5d0;
struct SoundEffectManager_02108760;
struct TimedMessageQueue_020d7aa0_2;

extern "C" int func_ov002_0215edc8(unsigned char *arg0);
extern "C" void func_ov002_02157174(char *arg0, int arg1);
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2 *windowManager, unsigned char isSubScreen,
                                                                        unsigned char bgIndex);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215e900(char *arg0);
extern "C" void *memset(void *arg0, int arg1, unsigned int arg2);
extern "C" void func_ov002_0215ece4(void *arg0, char *arg1, int arg2, int arg3, int arg4);
extern "C" char *FindTextWindow_0205d81c(struct TextWindowManager_0205d81c *windowManager, int windowId);
extern "C" void func_ov002_0216574c(void *arg0, int arg1);
extern "C" int SetTextWindowText_0205d5d0(struct TextWindowManager_0205d5d0 *, int, int, int, unsigned char);
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570 *windowManager);
struct TextWindowManager_0205da38;
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);
extern "C" int func_0205df38(void *arg0, int arg1);
extern "C" TimedMessageQueue_020d7aa0_2 *func_020d7a50();
extern "C" void ClearTimedMessageQueue_020d7aa0(TimedMessageQueue_020d7aa0_2 *queue);
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760 *manager, int soundEffectIndex, int handle);
extern "C" int func_ov002_0216364c(void *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
extern "C" void func_ov002_02156e90(void *arg0);

extern "C" char gSoundEffectManager_02108760;

// USA: func_ov002_02165378
#if defined(jpn)
extern "C" void func_ov002_0215fe54(void *arg0, char *arg1, int arg2, int arg3, int arg4);
#define func_ov002_0215ece4 func_ov002_0215fe54
extern "C" ARM void func_ov002_02165378(char *arg0) {
    int var0 = *(int *) (arg0 + 0x1a88);
    if (var0 == 0) {
        if (!func_ov002_0215edc8((unsigned char *) arg0)) {
            return;
        }
        *(short *) (arg0 + 0x1aee) = -1;
        *(short *) (arg0 + 0x1ac0) = 0;
        func_ov002_02157174(arg0, *(signed char *) (arg0 + *(short *) (arg0 + 0x1ac0) + 0x1b32));
        SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2 *) (arg0 + 0xe20), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215e900(arg0);
        *(short *) (arg0 + 0x1ac2)         = 0;
        *(short *) (arg0 + 0x1ac0)         = 0;
        *(unsigned char *) (arg0 + 0x1ae8) = *(signed char *) (arg0 + *(short *) (arg0 + 0x1ac0) + 0x1b32);
        memset(*(void **) (arg0 + 0x1a98), 0, 0x800);
        func_ov002_0215ece4(arg0, *(char **) (arg0 + 0x1a98), *(signed char *) (arg0 + 0x1ae8), 0, 8);
        int var1 = 0;
        if ((short) ((*(unsigned char *) (arg0 + 0x2350) + 7) / 8) > 1) {
            var1 = 1;
        }
        char *var2 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (arg0 + 0xe20), 0x12);
        if (var2 != 0) {
            func_ov002_0216574c(var2, var1);
        }
        ((int (*)(struct TextWindowManager_0205d5d0*, int, int, int))SetTextWindowText_0205d5d0)((struct TextWindowManager_0205d5d0 *) (arg0 + 0xe20), 0x12,
                                                             *(int *) (arg0 + 0x1a98), 1);
        *(int *) (arg0 + 0x1a88) += 1;
        return;
    }
    if (var0 != 1) {
        return;
    }
    *(unsigned int *) (arg0 + 0x22ac) |= 4;
    short var3 = *(short *) (arg0 + 0x1ac0);
    *(short *) (arg0 + 0x1ac0) =
        GetCursorIndex_0205d794((struct Struct_0205c570 *) (arg0 + 0xe20));
    *(unsigned char *) (arg0 + 0x1ae8) = *(signed char *) (arg0 + *(short *) (arg0 + 0x1ac0) + 0x1b32);
    if (var3 != *(short *) (arg0 + 0x1ac0)) {
        func_ov002_02157174(arg0, *(signed char *) (arg0 + 0x1ae8));
        memset(*(void **) (arg0 + 0x1a98), 0, 0x800);
        func_ov002_0215ece4(arg0, *(char **) (arg0 + 0x1a98), *(signed char *) (arg0 + 0x1ae8), 0, 8);
        int var4 = 0;
        if ((short) ((*(unsigned char *) (arg0 + 0x2350) + 7) / 8) > 1) {
            var4 = 1;
        }
        char *var5 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (arg0 + 0xe20), 0x12);
        if (var5 != 0) {
            func_ov002_0216574c(var5, var4);
        }
        ((int (*)(struct TextWindowManager_0205d5d0*, int, int, int))SetTextWindowText_0205d5d0)((struct TextWindowManager_0205d5d0 *) (arg0 + 0xe20), 0x12,
                                                             *(int *) (arg0 + 0x1a98), 1);
        return;
    }
    int var6  = g_keyManager.TestKeysPressed(0x601);
    int var7  = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 + 0xe20), 0x14);
    int var8 = (var6 | var7) ? 1 : 0;
    if (var8 || func_0205df38(arg0 + 0xe20, 0x12) != 0) {
        if (*(unsigned int *) (arg0 + 0x22ac) & 2) {
            return;
        }
        ClearTimedMessageQueue_020d7aa0(func_020d7a50());
        *(unsigned char *) (arg0 + 0xed8) = *(int *) (arg0 + 0x1a80);
        *(unsigned int *) (arg0 + 0x22ac) &= ~4;
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760 *) &gSoundEffectManager_02108760, 1, 0);
        *(int *) (arg0 + 0x1a80) = 0x12;
        *(int *) (arg0 + 0x1a88) = 0;
        if (func_ov002_0216364c(
                GameState::GetInstance()->GetPartyMemberByIndex(*(signed char *) (arg0 + 0x1ae8))))
        {
            *(short *) (arg0 + 0x1af0) = 0x2332;
            *(short *) (arg0 + 0x1af2) = -1;
            *(int *) (arg0 + 0x1a80)   = 0x29;
            *(int *) (arg0 + 0x1a84)   = 0x11;
            return;
        }
        if (*(unsigned char *) (arg0 + 0x2350) != 0) {
            *(int *) (arg0 + 0x1a80) = 0x12;
            return;
        }
        *(short *) (arg0 + 0x1af0) = 0x232e;
        *(short *) (arg0 + 0x1af2) = -1;
        *(int *) (arg0 + 0x1a80)   = 0x29;
        *(int *) (arg0 + 0x1a84)   = 0x11;
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(short *) (arg0 + 0x1ac0)       = -1;
        *(signed char *) (arg0 + 0x1ae8) = -1;
        func_ov002_02156e90(arg0);
    }
}
#else
extern "C" ARM void func_ov002_02165378(char *arg0) {
    int var9 = *(int *) (arg0 + 0x1bc0);
    if (var9 == 0) {
        if (!func_ov002_0215edc8((unsigned char *) arg0)) {
            return;
        }
        *(short *) (arg0 + 0x1c26) = -1;
        *(short *) (arg0 + 0x1bf8) = 0;
        func_ov002_02157174(arg0, *(signed char *) (arg0 + *(short *) (arg0 + 0x1bf8) + 0x1c6e));
        SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2 *) (arg0 + 0x2c8 + 0xc00), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215e900(arg0);
        *(short *) (arg0 + 0x1bfa)         = 0;
        *(short *) (arg0 + 0x1bf8)         = 0;
        *(unsigned char *) (arg0 + 0x1c20) = *(signed char *) (arg0 + *(short *) (arg0 + 0x1bf8) + 0x1c6e);
        memset(*(void **) (arg0 + 0x1bd0), 0, 0x960);
        func_ov002_0215ece4(arg0, *(char **) (arg0 + 0x1bd0), *(signed char *) (arg0 + 0x1c20), 0, 8);
        int var10 = 0;
        if ((short) ((*(unsigned char *) (arg0 + 0x2520) + 7) / 8) > 1) {
            var10 = 1;
        }
        char *var11 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (arg0 + 0x2c8 + 0xc00), 0x11);
        if (var11 != 0) {
            func_ov002_0216574c(var11, var10);
        }
        SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0 *) (arg0 + 0x2c8 + 0xc00), 0x11,
                                                             *(int *) (arg0 + 0x1bd0), 1, 0);
        *(int *) (arg0 + 0x1bc0) += 1;
        return;
    }
    if (var9 != 1) {
        return;
    }
    *(unsigned int *) (arg0 + 0x247c) |= 4;
    short var12 = *(short *) (arg0 + 0x1bf8);
    *(short *) (arg0 + 0x1bf8) =
        GetCursorIndex_0205d794((struct Struct_0205c570 *) (arg0 + 0x2c8 + 0xc00));
    *(unsigned char *) (arg0 + 0x1c20) = *(signed char *) (arg0 + *(short *) (arg0 + 0x1bf8) + 0x1c6e);
    if (var12 != *(short *) (arg0 + 0x1bf8)) {
        func_ov002_02157174(arg0, *(signed char *) (arg0 + 0x1c20));
        memset(*(void **) (arg0 + 0x1bd0), 0, 0x960);
        func_ov002_0215ece4(arg0, *(char **) (arg0 + 0x1bd0), *(signed char *) (arg0 + 0x1c20), 0, 8);
        int var13 = 0;
        if ((short) ((*(unsigned char *) (arg0 + 0x2520) + 7) / 8) > 1) {
            var13 = 1;
        }
        char *var14 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c *) (arg0 + 0x2c8 + 0xc00), 0x11);
        if (var14 != 0) {
            func_ov002_0216574c(var14, var13);
        }
        SetTextWindowText_0205d5d0((struct TextWindowManager_0205d5d0 *) (arg0 + 0x2c8 + 0xc00), 0x11,
                                                             *(int *) (arg0 + 0x1bd0), 1, 0);
        return;
    }
    int var15  = g_keyManager.TestKeysPressed(0x601);
    int var16  = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 + 0x2c8 + 0xc00), 0x14);
    int var17 = (var15 | var16) ? 1 : 0;
    if (var17 || func_0205df38(arg0 + 0x2c8 + 0xc00, 0x11) != 0) {
        if (*(unsigned int *) (arg0 + 0x247c) & 2) {
            return;
        }
        ClearTimedMessageQueue_020d7aa0(func_020d7a50());
        *(unsigned char *) (arg0 + 0xf80) = *(int *) (arg0 + 0x1bb8);
        *(unsigned int *) (arg0 + 0x247c) &= ~4;
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760 *) &gSoundEffectManager_02108760, 1, 0);
        *(int *) (arg0 + 0x1bb8) = 0x11;
        *(int *) (arg0 + 0x1bc0) = 0;
        if (func_ov002_0216364c(
                GameState::GetInstance()->GetPartyMemberByIndex(*(signed char *) (arg0 + 0x1c20))))
        {
            *(short *) (arg0 + 0x1c28) = 0x2332;
            *(short *) (arg0 + 0x1c2a) = -1;
            *(int *) (arg0 + 0x1bb8)   = 0x26;
            *(int *) (arg0 + 0x1bbc)   = 0x10;
            return;
        }
        if (*(unsigned char *) (arg0 + 0x2520) != 0) {
            *(int *) (arg0 + 0x1bb8) = 0x11;
            return;
        }
        *(short *) (arg0 + 0x1c28) = 0x232e;
        *(short *) (arg0 + 0x1c2a) = -1;
        *(int *) (arg0 + 0x1bb8)   = 0x26;
        *(int *) (arg0 + 0x1bbc)   = 0x10;
        return;
    }
    if (func_ov002_02161b48(arg0, 1)) {
        *(short *) (arg0 + 0x1bf8)       = -1;
        *(signed char *) (arg0 + 0x1c20) = -1;
        func_ov002_02156e90(arg0);
    }
}
#endif
