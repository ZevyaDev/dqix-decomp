#include <globaldefs.h>
#if defined(jpn)
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"
#include "Resource/GameResources.h"

struct Struct_02045cac;
struct Struct_ov023_021e4bc8_3 {
    unsigned char unknown_0_[0xdf8];
    Struct_0201099c_3 unknown_df8_;
};
struct Struct_ov023_021e4bc8_4 {
    Struct_ov023_021e4bc8_3* unknown_0_;
    unsigned char unknown_4_[0x4fc - 4];
    unsigned short unknown_4fc_[4][6];
    int unknown_52c_[4];
    unsigned short unknown_53c_[4][3];
    unsigned short unknown_554_[2];
    unsigned short unknown_558_[4][2];
};
struct Struct_02000c9c_70 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};
static inline int inline_ov023_021e4bc8(Struct_02000c9c_70* arg0) { return arg0->unknown_4_; }
struct Struct_ov023_021e4bc8_5 {
    unsigned char unknown_0_[0x8b8];
    int unknown_8b8_;
};
struct Struct_ov023_021e4bc8 {
    unsigned char unknown_0_[0x130];
    Struct_02000c9c_70* unknown_130_;
    char* unknown_134_;
    unsigned char unknown_138_[0xc];
    Struct_ov023_021e4bc8_5* unknown_144_;
};
extern "C" Struct_02045cac* GetMessageWindow_020421a0();
extern "C" void func_02045cac(Struct_02045cac*);
extern "C" int FindStringInTable_020e0434(Struct_0201099c_3*, int);
extern "C" int func_ov023_021e4250(char*);
extern "C" {
void func_020469b0(Struct_02045cac*, const char*, unsigned short*, int);
int func_ov017_021bdbcc(GameResources*);
void func_020439b0(Struct_02045cac*, int);
}

// JPN: func_ov023_021e4bc8
extern "C" ARM void func_ov023_021e4bc8(Struct_ov023_021e4bc8_4* arg0) {
    Struct_0201099c_3* var0;
    GameState* var1 = GameState::GetInstance();
    Struct_02045cac* var2 = GetMessageWindow_020421a0();
    for (int var3 = 0; var3 < 4; var3++) {
        for (int var4 = 0; var4 < 6; var4++) arg0->unknown_4fc_[var3][var4] = 0xffff;
        for (int var5 = 0; var5 < 3; var5++) arg0->unknown_53c_[var3][var5] = 0xffff;
        for (int var6 = 0; var6 < 2; var6++) arg0->unknown_558_[var3][var6] = 0xffff;
        arg0->unknown_52c_[var3] = 0;
    }
    for (int var7 = 0; var7 < 2; var7++) arg0->unknown_554_[var7] = 0xffff;
    func_02045cac(var2);
    var0 = &arg0->unknown_0_->unknown_df8_;
    func_020469b0(var2, (const char*)FindStringInTable_020e0434(var0, 0x258), arg0->unknown_554_, 10);
    for (int var8 = 0; var8 < 4; var8++) {
        Struct_ov023_021e4bc8* var9 = (Struct_ov023_021e4bc8*)GetPartyMemberBaseByIndex_0200ff1c(var1, var8);
        if (var9 != 0) {
            func_020469b0(var2, var9->unknown_134_, arg0->unknown_4fc_[var8], 10);
            for (int var10 = 0; var10 < 6; var10++) {
                if (arg0->unknown_4fc_[var8][var10] == 0xff01) {
                    arg0->unknown_52c_[var8] = 35 - var10 * 5;
                    break;
                }
            }
            short var11 = var9->unknown_144_->unknown_8b8_ + 500;
            if (func_ov017_021bdbcc(GetGameResources())) var11 = 500;
            if (inline_ov023_021e4bc8(var9->unknown_130_) <= 0) var11 = 0x226;
            func_020469b0(var2, (const char*)FindStringInTable_020e0434(var0, var11), arg0->unknown_53c_[var8], 10);
            char var12[3];
            var12[0] = -24;
            var12[1] = func_ov023_021e4250((char*)var9) + 0x3f;
            var12[2] = 0;
            func_020469b0(var2, var12, arg0->unknown_558_[var8], 10);
            func_020439b0(var2, 0);
        }
    }
}
#endif
