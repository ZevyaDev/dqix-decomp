#include <globaldefs.h>

#if defined(jpn)
extern unsigned char gFileScratchSpace_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Resource/ActionDataTables.h"
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "Combat/CombatantRecovery.h"

struct StringTable_0201099c_14 {
    unsigned char unknown_0_[0x18];
};

struct Struct_ov002_02162114 {
    char unknown_0_[8];
    char unknown_8_[0x1a00];
    char unknown_1a08_[4][0x18];
    char unknown_1a68_[0x1c];
    int unknown_1a84_;
    char unknown_1a88_[0x1c];
    char *unknown_1aa4_;
    char unknown_1aa8_[0x10];
    short unknown_1ab8_;
    char unknown_1aba_[0x26];
    short unknown_1ae0_;
    char unknown_1ae2_[6];
    signed char unknown_1ae8_;
    signed char unknown_1ae9_;
    short unknown_1aea_;
    short unknown_1aec_;
    short unknown_1aee_;
    short unknown_1af0_;
    short unknown_1af2_;
    char unknown_1af4_[0x7cc];
    int unknown_22c0_[2];
};

struct Struct_ov002_02162114_2 {
    unsigned char unknown_0_[0xf78];
    unsigned char unknown_f78_[4];
};

extern "C" char *FindStringInTable_020e0434(char *stringTable, int stringId);
extern "C" void *GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" void SetMessageString_02046574(void *window, int index, char *text);
extern "C" void SetMessageNumber_020465c0(void *window, int index, int number);
extern "C" char **FindActionData_02079e2c(ActionTables_02108e10 *actionTables, int actionId);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" void ConstructStringTable_020dfc2c(StringTable_0201099c_14 *stringTable);
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14 *stringTable);
extern "C" void func_020e038c(StringTable_0201099c_14 *arg0, void *arg1, unsigned int arg2);
extern "C" void func_020e207c(StringTable_0201099c_14 *arg0, char *arg1, int arg2);
extern "C" void func_020474a8(void *arg0, int arg1, char *arg2, char *arg3);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int GetStringLength_020d2ff0(const char *string);

extern "C" char data_ov002_0216da6e[];
extern "C" char data_ov002_0216da84[];
extern "C" char data_ov002_0216da8a[];

static inline int inline_ov002_02162114(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// JPN: func_ov002_02162114
extern "C" ARM void func_ov002_02162114(Struct_ov002_02162114 *arg0, char *arg1) {
    char var0[0x40];
    StringTable_0201099c_14 var1;
    char var2[0x40];
    unsigned int var3;
    if (arg1 == 0) {
        return;
    }
    FindStringInTable_020e0434(arg0->unknown_8_, 0x270e);
    GameState *var4 = GameState::GetInstance();
    void *var5      = GetMessageWindow_020421a0();
    GetGameResources();
    ClearMessageParams_02046380(var5);
    char *var6;
    short var7       = arg0->unknown_1af0_;
    GameObject *var8 = var4->GetUnknownGameObject();
    if (var8 != 0) {
        SetMessageString_02046574(var5, 4, var8->baseStats_->unk);
    }
    int var9  = arg0->unknown_1ae8_;
    int var10 = arg0->unknown_1ae9_;
    if (inline_ov002_02162114(var10)) {
        int var11 = arg0->unknown_1ae8_;
        if (var11 == 4) {
            var11 = 9;
        }
        SetMessageNumber_020465c0(var5, 9, (var11 + 1) * 10 + var10);
    }
    if (arg0->unknown_1aee_ != -1) {
        if (inline_ov002_02162114(var9)) {
            var6              = (char *) GetGameResources() + 0x413c + var9 * 0xc;
            GameObject *var12 = var4->GetPartyMemberByIndex(var9);
            if (var12 != 0) {
                var6 = var12->baseStats_->unk;
            }
            SetMessageString_02046574(var5, 0, var6);
        }
        char **var13 = FindActionData_02079e2c(GetActionTables_020797dc(), arg0->unknown_1aee_);
        if (*var13 != 0) {
            var6 = *var13;
        }
        SetMessageString_02046574(var5, 1, var6);
        if (inline_ov002_02162114(var10)) {
            SetMessageString_02046574(var5, 2, arg0->unknown_1a08_[var10]);
        }
        for (int var14 = 0; var14 < 2; var14++) {
            SetMessageNumber_020465c0(var5, var14, arg0->unknown_22c0_[var14]);
        }
    } else {
        if (inline_ov002_02162114(var9)) {
            var6              = (char *) GetGameResources() + 0x413c + var9 * 0xc;
            GameObject *var15 = var4->GetPartyMemberByIndex(var9);
            if (var15 != 0) {
                var6 = var15->baseStats_->unk;
            }
            SetMessageString_02046574(var5, 0, var6);
        } else if (arg0->unknown_1ae8_ == 4) {
            if (arg0->unknown_1ab8_ == 0) {
                var6 = FindStringInTable_020e0434(arg0->unknown_8_, 0x76d);
            } else {
                Struct_ov002_02162114_2 *var16 = (Struct_ov002_02162114_2 *) GetParty_02010828(var4);
                for (int var17 = 0; var17 < 4; var17++) {
                    GameObject *var18 = GetPartyMemberBaseByIndex_0200ff1c(var4, var16->unknown_f78_[var17]);
                    if (var18 != 0 && (int) var18->unknown_ac_.unknown_84_->unknown_4_ > 0) {
                        var6 = var18->baseStats_->unk;
                        break;
                    }
                }
            }
            SetMessageString_02046574(var5, 0, var6);
        }
        BackgroundLoader::AddLockGlobal();
        void *var19 = LoadFileIntoMemory(data_ov002_0216da6e, gFileScratchSpace_0211e33c, &var3);
        __clear(var0, 0x40);
        ConstructStringTable_020dfc2c(&var1);
        InitStringTable_020dfc40(&var1);
        func_020e038c(&var1, var19, var3);
        func_020e207c(&var1, var0, arg0->unknown_1aea_);
        SetMessageString_02046574(var5, 1, var0);
        if (inline_ov002_02162114(var10)) {
            SetMessageString_02046574(var5, 2, arg0->unknown_1a08_[var10]);
        } else if (var10 == 4) {
            Struct_ov002_02162114_2 *var20 = (Struct_ov002_02162114_2 *) GetParty_02010828(var4);
            for (int var21 = 0; var21 < 4; var21++) {
                GameObject *var22 = GetPartyMemberBaseByIndex_0200ff1c(var4, var20->unknown_f78_[var21]);
                if (var22 != 0 && (int) var22->unknown_ac_.unknown_84_->unknown_4_ > 0) {
                    SetMessageString_02046574(var5, 2, var22->baseStats_->unk);
                    break;
                }
            }
        }
        __clear(var2, 0x40);
        func_020e207c(&var1, var2, arg0->unknown_1aec_);
        SetMessageString_02046574(var5, 3, var2);
        BackgroundLoader::RemoveLockGlobal();
    }
    func_020474a8(var5, 0xc, FindStringInTable_020e0434(arg0->unknown_8_, arg0->unknown_1af0_), arg1);
    AppendText_02042058(arg1, arg0->unknown_1aa4_);
    int var23   = GetStringLength_020d2ff0(arg1);
    short var24 = arg0->unknown_1af2_;
    char *var25 = FindStringInTable_020e0434(arg0->unknown_8_, var24);
    if (var25 != 0) {
        func_020474a8(var5, 0xc, var25, arg1 + var23);
    }
    arg0->unknown_1ae0_ = GetStringLength_020d2ff0(arg1);
    int var26           = 1;
    if (arg0->unknown_1a84_ == 0x12 && var7 == 0x232b) {
        var26 = 0;
    }
    if (arg0->unknown_1a84_ == 0x18) {
        AppendText_02042058(arg1, data_ov002_0216da84);
        return;
    }
    if (var26 && (var7 == 0x2367 || var7 == 0x2365 || var7 == 0x236f || var7 == 0x2372 || var7 == 0x238d || var7 == 0x125c ||
                  var7 == 0x125d || var7 == 0x125e || var7 == 0x232b || var7 == 0x797c || var7 == 0x2371))
    {
        if (arg0->unknown_1aee_ == 0xd5 && var7 == 0x232b) {
            AppendText_02042058(arg1, data_ov002_0216da8a);
        } else {
            AppendText_02042058(arg1, data_ov002_0216da84);
        }
    } else {
        AppendText_02042058(arg1, data_ov002_0216da8a);
    }
}
#endif
