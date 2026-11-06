#include <globaldefs.h>

#if defined(jpn)
#include "GameState/GameState.h"
#include "Combat/CombatantRecovery.h"

struct Struct_ov002_02160d14 {
    char unknown_0_[8];
    char unknown_8_[0x1a9c];
    const char *unknown_1aa4_;
    char unknown_1aa8_[0x40];
    signed char unknown_1ae8_;
};

struct Struct_ov002_02160d14_2 {
    char unknown_0_[0x8b8];
    int unknown_8b8_;
};

struct Struct_ov002_02160d14_3 {
    char unknown_0_[0x144];
    Struct_ov002_02160d14_2 *unknown_144_;
};

struct Struct_ov002_0216d088 {
    int unknown_0_[5];
};

extern "C" const char *func_020e0434(char *arg0, int arg1);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_02042638(char *arg0, const char *arg1, int arg2);
extern "C" void *GetMessageWindow_020421a0();
extern "C" void func_020465c0(void *arg0, int arg1, int arg2);
extern "C" void func_020465f0(void *arg0, int arg1, unsigned char arg2);
extern "C" void func_020465d8(void *arg0, int arg1, unsigned char arg2);
extern "C" void func_02046380(void *arg0);
extern "C" unsigned short func_0202053c(GameObject *arg0);
extern "C" int func_ov017_021bdbcc(GameResources *arg0);
extern "C" unsigned char func_ov002_02160fd8(GameObject *arg0);
extern "C" int sprintf(char *arg0, const char *arg1, ...);
extern "C" char data_ov002_0216d94c[];
extern "C" char data_ov002_0216d9be[];
extern "C" char data_ov002_0216da1c[];
extern "C" Struct_ov002_0216d088 data_ov002_0216d088;

// JPN: func_ov002_02160d14
extern "C" ARM void func_ov002_02160d14(Struct_ov002_02160d14 *arg0, char *arg1) {
    if (arg1 == NULL) return;
    GameObject *var2;
    GameState *var13 = GameState::GetInstance();
    short var0 = 0x10fe;
    short var1 = 0x1112;
    var2 = var13->GetPartyMemberByIndex(arg0->unknown_1ae8_);
    if (var2 == NULL) return;
    const char *var3;
    switch (func_ov017_021bdbcc(GetGameResources())) {
    default:
        var3 = func_020e0434(arg0->unknown_8_, 0x898);
        break;
    case 0: {
        Struct_ov002_02160d14_2 *var4 = ((Struct_ov002_02160d14_3 *) var2)->unknown_144_;
        var3 = func_020e0434(arg0->unknown_8_, (short) (var4->unknown_8b8_ + 0x898));
        break;
    }
    }
    int var5 = strlen(var2->baseStats_->unk) + 6;
    if (func_ov002_02160fd8(var2)) var5++;
    if (func_0202053c(var2) >= 10) var5++;
    int var15 = 50 - (int) (10.0f * ((float) var5 / 4.0f));
    if (func_ov002_02160fd8(var2)) {
        short var16 = func_ov002_02160fd8(var2) + 0x8fc;
        const char *var6 = func_020e0434(arg0->unknown_8_, var16);
        char *var14 = var2->baseStats_->unk;
        sprintf(arg1, data_ov002_0216d94c, var15, var14, var3, var6, func_0202053c(var2));
    } else {
        char *var14 = var2->baseStats_->unk;
        sprintf(arg1, data_ov002_0216d9be, var15, var14, var3, func_0202053c(var2));
    }
    func_02042638(arg1, data_ov002_0216da1c, 0x10);
    void *var7 = GetMessageWindow_020421a0();
    func_02046380(var7);
    Struct_ov002_0216d088 var8 = data_ov002_0216d088;
    Struct_020200c0 *var9 = var2->unknown_ac_.unknown_84_;
    int var10[7] = {
        var9->unknown_4_,
        var2->baseStats_->primaryStats.maxHP,
        var9->unknown_6_,
        var2->baseStats_->primaryStats.maxMP,
        var2->baseStats_->primaryStats.attack,
        var2->baseStats_->primaryStats.defense,
        var2->baseStats_->primaryStats.agility,
    };
    for (int var11 = 0; var11 < 7; var11++) {
        func_020465d8(var7, var11, 1);
        func_020465f0(var7, var11, 3);
        func_020465c0(var7, var11, var10[var11]);
    }
    for (int var12 = 0; var12 < 5; var12++) {
        func_02042058(arg1, func_020e0434(arg0->unknown_8_, var0++));
        func_02041a28(arg1, var8.unknown_0_[var12]);
        func_02042058(arg1, func_020e0434(arg0->unknown_8_, var1++));
        if (var12 != 4) {
            func_02042058(arg1, arg0->unknown_1aa4_);
        }
    }
}
#endif
