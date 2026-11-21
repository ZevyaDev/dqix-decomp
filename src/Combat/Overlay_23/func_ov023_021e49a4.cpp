#if !defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"
#include "Resource/GameResources.h"
#include "Resource/GameStrings.h"
#include "Resource/StringList.h"

struct MessageWindow_02045cac;
struct Struct_ov023_021e49a4_2 {
    unsigned char unknown_0_[0xc00];
    Struct_0201099c_3 unknown_c00_;
};
struct Struct_ov023_021e49a4_3 {
    unsigned char unknown_0_[0x1f8];
    Struct_ov023_021e49a4_2 unknown_1f8_;
};
struct Struct_ov023_021e49a4_4 {
    Struct_ov023_021e49a4_3* unknown_0_;
    unsigned char unknown_4_[0x500 - 4];
    unsigned short unknown_500_[4][16];
    int unknown_580_[4];
    unsigned short unknown_590_[4][10];
    unsigned short unknown_5e0_[8];
    unsigned short unknown_5f0_[4][8];
    unsigned char unknown_630_[0x10];
    char* unknown_640_[2];
};
struct Struct_02000c9c_70 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
};
static inline int inline_ov023_021e49a4(Struct_02000c9c_70* arg0) { return arg0->unknown_4_; }
struct Struct_ov023_021e49a4_5 {
    unsigned char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
    unsigned char unknown_49c_1_ : 7;
    unsigned char unknown_49d_[0x950 - 0x49d];
    int unknown_950_;
};
struct Struct_ov023_021e49a4 {
    unsigned char unknown_0_[0x130];
    Struct_02000c9c_70* unknown_130_;
    char* unknown_134_;
    unsigned char unknown_138_[0x18];
    Struct_ov023_021e49a4_5* unknown_150_;
};
extern "C" MessageWindow_02045cac* GetMessageWindow_020421a0();
extern "C" void ClearMessageGlyphs_02045cac(MessageWindow_02045cac*);
extern "C" int func_ov023_021e4250(char*);
extern const char data_ov023_021fdcd8[];
extern "C" {
void ConvertTextToMessageGlyphs_02045d14(MessageWindow_02045cac*, const char*, unsigned short*, int);
int func_020420e8(const char*, int);
int GetHaloObject_ov017_021bdbcc(GameResources*);
void __clear(void*, unsigned int);
int sprintf(char*, const char*, ...);
void UpdateMessageWindowGraphics_020439b0(MessageWindow_02045cac*, int);
}

// USA: func_ov023_021e49a4
extern "C" ARM void func_ov023_021e49a4(Struct_ov023_021e49a4_4* arg0) {
    Struct_ov023_021e49a4_2* var0;
    GameState* var1 = GameState::GetInstance();
    unsigned short (*var2)[8];
    unsigned short (*var3)[10];
    unsigned short (*var4)[16];
    MessageWindow_02045cac* var5 = GetMessageWindow_020421a0();
    for (int var6 = 0; var6 < 4; var6++) {
        for (int var7 = 0; var7 < 16; var7++) arg0->unknown_500_[var6][var7] = 0xffff;
        for (int var8 = 0; var8 < 10; var8++) arg0->unknown_590_[var6][var8] = 0xffff;
        for (int var9 = 0; var9 < 8; var9++) arg0->unknown_5f0_[var6][var9] = 0xffff;
        arg0->unknown_580_[var6] = 0;
    }
    for (int var10 = 0; var10 < 8; var10++) arg0->unknown_5e0_[var10] = 0xffff;
    ClearMessageGlyphs_02045cac(var5);
    var0 = &arg0->unknown_0_->unknown_1f8_;
    ConvertTextToMessageGlyphs_02045d14(var5, ((char*)GetGameString((eGameString)(0x3f3))), arg0->unknown_5e0_, 0);
    for (int var11 = 0; var11 < 4; var11++) {
        var4 = arg0->unknown_500_;
        var3 = arg0->unknown_590_;
        var2 = arg0->unknown_5f0_;
        Struct_ov023_021e49a4* var12 = (Struct_ov023_021e49a4*)GetPartyMemberBaseByIndex_0200ff1c(var1, var11);
        if (var12 != 0) {
            char* var13 = var12->unknown_134_;
            ConvertTextToMessageGlyphs_02045d14(var5, var13, var4[var11], 0);
            arg0->unknown_580_[var11] = 35 - func_020420e8(var13, 0) / 2;
            short var14 = var12->unknown_150_->unknown_950_ + 500;
            if (GetHaloObject_ov017_021bdbcc(GetGameResources())) var14 = 500;
            if (inline_ov023_021e49a4(var12->unknown_130_) <= 0) {
                ConvertTextToMessageGlyphs_02045d14(var5, arg0->unknown_640_[var12->unknown_150_->unknown_49c_0_], var3[var11], 0);
            } else {
                ConvertTextToMessageGlyphs_02045d14(var5, (const char*)((int)((StringList*)(&var0->unknown_c00_))->GetString(var14)), var3[var11], 0);
            }
            unsigned char var15 = func_ov023_021e4250((char*)var12);
            char var16[16];
            __clear(var16, 16);
            if (var15 != 0) {
                sprintf(var16, data_ov023_021fdcd8, func_ov023_021e4250((char*)var12));
            }
            ConvertTextToMessageGlyphs_02045d14(var5, var16, var2[var11], 0);
            UpdateMessageWindowGraphics_020439b0(var5, 0);
        }
    }
}
#endif
