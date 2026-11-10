#include "GameState/GameState.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"
#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#endif

struct TextWindowManager_0205de24_2;
struct Struct_0205c570;
struct TextWindowManager_0205def8;
struct TextWindowManager_0205da38;
struct SoundEffectManager_02108760;
struct PartyMember_0205faf4_11;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2 *windowManager, unsigned char isSubScreen,
                                                                        unsigned char bgIndex);
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570 *windowManager);
extern "C" void SetTextWindowVisible_0205def8(struct TextWindowManager_0205def8 *windowManager, int isVisible, int windowId);
extern "C" void func_020dc4d0(signed char *arg0, signed char *arg1);
extern "C" GameObject *GetPartyMemberBaseByIndex_0200ff1c(GameState *gameState, int index);
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11 *partyMember);
extern "C" int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1);
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760 *manager, int soundEffectIndex, int handle);
extern "C" int GetGlobalFlags_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int *globalFlags, unsigned int mask);
extern "C" int IsCancelPressed_ov002_02161b48(char *menu, int isTouchCancelAllowed);
extern "C" void func_ov002_0215b814(char *arg0);
extern "C" void ConfigureMenuCursors_ov002_02161cf0(char *menu);
extern "C" void func_ov002_0215e1d0(char *arg0);
extern "C" void func_ov002_02156e90(char *arg0);
extern "C" void func_020d79e0(char *arg0, int arg1);
extern "C" void GetZone3D_02012fe4(void);
extern "C" void func_02017c58(void);
extern "C" char gSoundEffectManager_02108760[];
extern "C" unsigned short data_ov002_0216cca4[];
extern "C" unsigned short data_ov002_0216cc86[];

#if defined(jpn)
#define OFF_STATE_02164d14 0x1a88
#define OFF_NEXT_02164d14 0x1a80
#define OFF_LIST_02164d14 0xe20
#define OFF_SEL_02164d14 0x1abe
#define OFF_FLAGS_02164d14 0x22ac
#define K_0E_02164d14 0xf
#define K_0F_02164d14 0x10
#define K_29_02164d14 0x2c
#define K_2B_02164d14 0x2e
#else
#define OFF_STATE_02164d14 (0x1000 + 0xbc0)
#define OFF_NEXT_02164d14 (0x1000 + 0xbb8)
#define OFF_LIST_02164d14 (0x2c8 + 0xc00)
#define OFF_SEL_02164d14 (0x1b00 + 0xf6)
#define OFF_FLAGS_02164d14 (0x2000 + 0x47c)
#define K_0E_02164d14 0xe
#define K_0F_02164d14 0xf
#define K_29_02164d14 0x29
#define K_2B_02164d14 0x2b
#endif

struct Struct_ov002_02164d14 {
    char unknown_0_[0x60];
    int unknown_60_;
};
// USA: func_ov002_02164d14
extern "C" ARM void func_ov002_02164d14(char *arg0) {
    int var0 = *(int *) (arg0 + OFF_STATE_02164d14);
    if (var0 == 0) {
        func_ov002_0215b814(arg0);
        SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2 *) (arg0 + OFF_LIST_02164d14), 0, 2);
        ConfigureMenuCursors_ov002_02161cf0(arg0);
        func_ov002_0215e1d0(arg0);
        *(int *) (arg0 + OFF_STATE_02164d14) += 1;
    } else if (var0 == 1) {
        GameState *var1 = GameState::GetInstance();
        if (*(short *) (arg0 + OFF_SEL_02164d14) != 0) {
            SetTextWindowVisible_0205def8((struct TextWindowManager_0205def8 *) (arg0 + OFF_LIST_02164d14), 1, 1);
            SetTextWindowVisible_0205def8((struct TextWindowManager_0205def8 *) (arg0 + OFF_LIST_02164d14), 1, K_0E_02164d14);
            SetTextWindowVisible_0205def8((struct TextWindowManager_0205def8 *) (arg0 + OFF_LIST_02164d14), 1,
                                                                    K_29_02164d14);
        }
        *(unsigned int *) (arg0 + OFF_FLAGS_02164d14) |= 4;
        short var2 = *(short *) (arg0 + OFF_SEL_02164d14);
        *(short *) (arg0 + OFF_SEL_02164d14) =
            GetCursorIndex_0205d794((struct Struct_0205c570 *) (arg0 + OFF_LIST_02164d14));
        signed char var3[7];
        signed char var4;
        Struct_ov002_02164d14 *var5 = (Struct_ov002_02164d14 *) (arg0 + OFF_LIST_02164d14) + 1;
        int var6         = 0;
        func_020dc4d0(var3, &var4);
        int var7 = var6;
        for (int var8 = 0; var8 < var4; var8++) {
            GameObject *var9 = GetPartyMemberBaseByIndex_0200ff1c(var1, var3[var8]);
            if (var9 != NULL && IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11 *) var9)) var7++;
        }
        var4 -= var7;
        if (var4 + 1 != (var5 - 1)->unknown_60_) var6 = 1;
        if ((var5 - 1)->unknown_60_ <= *(short *) (arg0 + OFF_SEL_02164d14)) var6 = 1;
        if (var6) {
            *(unsigned int *) (arg0 + OFF_FLAGS_02164d14) &= ~4;
            *(short *) (arg0 + OFF_SEL_02164d14) = -1;
            func_ov002_02156e90(arg0);
            *(int *) (arg0 + OFF_NEXT_02164d14) = K_0E_02164d14;
            *(int *) (arg0 + OFF_STATE_02164d14) = 0;
            return;
        }
        if (var2 != *(short *) (arg0 + OFF_SEL_02164d14)) return;
        int var10 = g_keyManager.TestKeysPressed(0x601);
        int var11 = IsEntryTouchedAgain_0205da38((struct TextWindowManager_0205da38*)(arg0 + OFF_LIST_02164d14), 0x14);
        if ((var10 | var11) ? 1 : 0) {
            if (*(unsigned int *) (arg0 + OFF_FLAGS_02164d14) & 2) return;
            if (*(short *) (arg0 + OFF_SEL_02164d14) == var4) {
                *(unsigned int *) (arg0 + OFF_FLAGS_02164d14) &= ~4;
                PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760 *) gSoundEffectManager_02108760, 1, 0);
                *(int *) (arg0 + OFF_NEXT_02164d14) = K_0F_02164d14;
                *(int *) (arg0 + OFF_STATE_02164d14) = 0;
                for (int var12 = 0; var12 < 4; var12++) {
                    unsigned short var13 = data_ov002_0216cca4[var12] * 0x20;
                    DC_FlushRange(data_ov002_0216cc86, 2);
                    LoadToMainBGStandardPalette(data_ov002_0216cc86, (unsigned short) (var13 + 2), 2);
                    CleanCacheRange(data_ov002_0216cc86, 2);
                }
                return;
            }
            if (var3[*(short *) (arg0 + OFF_SEL_02164d14)] < 0) return;
            SetGlobalFlags_020466e4((unsigned int *) GetGlobalFlags_020d6c00(), 1);
            if (IsNPCCompanion_02061bd8(
                    (struct PartyMember_0205faf4_11 *) GetPartyMemberBaseByIndex_0200ff1c(var1, var3[*(short *) (arg0 + OFF_SEL_02164d14)])))
            {
                for (int var14 = 0; var14 < 4; var14++) {
                    short *var15 = (short *) (arg0 + OFF_SEL_02164d14);
                    (*var15)++;
                    *var15          = *var15 % 4;
                    GameObject *var16 = GetPartyMemberBaseByIndex_0200ff1c(var1, var3[*(short *) (arg0 + OFF_SEL_02164d14)]);
                    if (var16 != NULL && !IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11 *) var16)) break;
                }
            }
            func_020d79e0(arg0, var3[*(short *) (arg0 + OFF_SEL_02164d14)]);
            *(int *) (arg0 + OFF_NEXT_02164d14) = K_2B_02164d14;
            *(int *) (arg0 + OFF_STATE_02164d14) = 0;
            GetZone3D_02012fe4();
            func_02017c58();
        } else if (IsCancelPressed_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + OFF_SEL_02164d14) = -1;
            func_ov002_02156e90(arg0);
        }
    }
}
