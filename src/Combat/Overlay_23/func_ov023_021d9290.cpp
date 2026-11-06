#if defined(jpn)
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_3;
struct Struct_ov023_021d9290_3 {
    char unknown_0_[8];
    char unknown_8_[0xc];
};

struct Struct_ov023_021d9290_2 {
    Struct_0201099c_3* unknown_0_;
    char unknown_4_[0xc0 - 4];
    short unknown_c0_;
    short unknown_c2_;
    char unknown_c4_[0xdc - 0xc4];
    int unknown_dc_[4];
    char unknown_ec_[0x119 - 0xec];
    unsigned char unknown_119_;
    char unknown_11a_[0x120 - 0x11a];
    Struct_ov023_021d9290_3* unknown_120_;
    unsigned char unknown_124_[4];
    unsigned char unknown_128_;
};

extern "C" char* FindStringInTable_020e0434(Struct_0201099c_3*, int);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" int func_020420e8(char*, int);
extern "C" int func_02041b00(char*, int);
extern "C" void __clear(void*, int);
extern "C" Struct_ov023_021d9290_3* func_ov023_021d994c(Struct_ov023_021d9290_2*, int);
extern "C" int AppendText_02042058(char*, const char*);
extern "C" void ClearMessageParams_02046380(int);
extern "C" void SetMessageString_02046574(int, int, void*);
extern "C" void SetMessageNumber_020465c0(int, int, int);
extern "C" void func_020474a8(int, int, char*, char*);

// JPN: func_ov023_021d9290
extern "C" ARM void func_ov023_021d9290(Struct_ov023_021d9290_2* arg0, char* arg1, unsigned char arg2) {
    if (!arg1) return;

    GameState::GetInstance();
    int var1 = GetMessageWindow_020421a0();

    AppendText_02042058(arg1, FindStringInTable_020e0434(arg0->unknown_0_, 0x75f8));

    int var8 = 0;
    int var5 = arg0->unknown_c2_;
    int var6 = arg0->unknown_119_;
    unsigned char* var4 = arg0->unknown_124_;
    int var7 = arg0->unknown_128_;
    signed char var9 = (signed char)(((var5 << 3) - (var6 * 10 + 0x1d)) / (var6 - 1));

    if (arg0->unknown_120_ == NULL) return;

    for (int var12 = 0; var12 < var7; var12++) {
        if (arg0->unknown_dc_[var12] != 0 && arg2 != 0) {
            Struct_ov023_021d9290_3* var14 = func_ov023_021d994c(arg0, var4[var12]);
            if (var14 != NULL) {
                char var15[0x100];
                __clear(var15, 0x100);
                if (var8 != 0) {
                    AppendText_02042058(arg1, FindStringInTable_020e0434(arg0->unknown_0_, 0));
                    func_02041b00(arg1, var9);
                }
                ClearMessageParams_02046380(var1);
                SetMessageString_02046574(var1, 0, var14->unknown_8_);
                int var16 = arg0->unknown_dc_[var12];
                int var17 = 0;
                do {
                    var16 /= 10;
                    var17++;
                } while (var16 != 0);
                SetMessageNumber_020465c0(var1, 0, 0xaa - (var17 * 8 + 10));
                SetMessageNumber_020465c0(var1, 1, arg0->unknown_dc_[var12]);
                func_020474a8(var1, 0xc, FindStringInTable_020e0434(arg0->unknown_0_, 0x75f9), var15);
                AppendText_02042058(arg1, var15);
                var8 = 1;
                arg2 = arg2 - 1;
            }
        }
    }

    if (var8 == 0) {
        func_020420e8(arg1, ((var5 << 3) - 0x1a) / 2 + 0x10);
        AppendText_02042058(arg1, FindStringInTable_020e0434(arg0->unknown_0_, 0x75fa));
    }
}
#else
struct Struct_0201099c_3;
struct Struct_ov023_021d9290_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    char unknown_8_[0x30];
};

struct Struct_ov023_021d9290_2 {
    Struct_0201099c_3* unknown_0_;
    char unknown_4_[0xc0 - 4];
    short unknown_c0_;
    short unknown_c2_;
    char unknown_c4_[0xdc - 0xc4];
    int unknown_dc_[4];
    char unknown_ec_[0x119 - 0xec];
    unsigned char unknown_119_;
    char unknown_11a_[0x120 - 0x11a];
    Struct_ov023_021d9290_3* unknown_120_;
    unsigned char unknown_124_[4];
    unsigned char unknown_128_;
};

#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"


struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(Struct_0201099c_3*, int);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" int func_020420e8(void*, int);
extern "C" int AppendXPositionTag_02041a28(char*, int);
extern "C" int func_02041b00(char*, int);
extern "C" int func_02041fac(char*, int, int);
extern "C" void __clear(void*, int);
extern "C" void* func_ov023_021d994c(void*, int);
extern "C" int AppendText_02042058(char*, const char*);
extern "C" void ClearMessageParams_02046380(int);
extern "C" ARM void InitPartyMemberNoun_020e4bf4(void*, int);
extern "C" int func_020426a4(int, int);
struct MessageWindow_020465c0;
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0*, int, int);
extern "C" void func_02046608(int, int, void*, void*, int, int, int);
extern "C" int AppendPositionTag_02041a90(char*, int, int);
extern "C" int sprintf(char*, const char*, ...);

struct Struct_ov023_021d9290 {
    void* unknown_0_;
    void* unknown_4_;
    int unknown_8_;
};

// USA: func_ov023_021d9290
extern "C" ARM void func_ov023_021d9290(char* arg0, char* arg1, unsigned char arg2) {
    Struct_ov023_021d9290_2* var0 = (Struct_ov023_021d9290_2*)arg0;
    if (!arg1) return;

    GameState::GetInstance();
    int var1 = GetMessageWindow_020421a0();

    char* var2 = (char*)FindStringInTable_020e0434(var0->unknown_0_, 0x75f8);
    int var3 = func_020420e8(var2, 0);
    AppendXPositionTag_02041a28(arg1, (0xc0 - var3) >> 1);
    func_02041b00(arg1, 1);
    func_02041fac(arg1, (int)var2, 0x10);

    unsigned char* var4 = var0->unknown_124_;
    int var5 = var0->unknown_c2_;
    int var6 = var0->unknown_119_;
    int var7 = var0->unknown_128_;
    int var8 = 0;
    signed char var9 = (signed char)(((var5 << 3) - (var6 * 10 + 0x1d)) / (var6 - 1));
    int var10 = var5 << 3;

    if (var0->unknown_120_ == NULL) return;

    char* var11 = (char*)FindStringInTable_020e0434(var0->unknown_0_, 0x75f9);
    int var12;
    for (var12 = 0; var12 < var7; var12++) {
        if (var0->unknown_dc_[var12] != 0 && arg2 != 0) {
            int var13 = var4[var12];
            Struct_ov023_021d9290_3* var14 = (Struct_ov023_021d9290_3*)func_ov023_021d994c(arg0, var13);
            if (var14 != NULL) {
                char var15[0x100];
                char var16[0x100];
                __clear(var15, 0x100);
                __clear(var16, 0x100);
                if (var8 != 0) {
                    char* var17 = (char*)FindStringInTable_020e0434(var0->unknown_0_, 0);
                    AppendText_02042058(arg1, var17);
                    func_02041b00(arg1, var9);
                }
                ClearMessageParams_02046380(var1);
                struct Struct_ov023_021d9290 var18;
                InitPartyMemberNoun_020e4bf4(&var18, var13);
                void* var19 = var14->unknown_8_;
                var18.unknown_0_ = var19;
                var18.unknown_4_ = var19;
                *(void**)(var1 + 0x10) = &var18;
                int var20 = func_020426a4(8, var0->unknown_dc_[var12]);
                sprintf(var16, var11, 0x94 - var20);
                SetMessageNumber_020465c0((struct MessageWindow_020465c0*)var1, 1, var0->unknown_dc_[var12]);
                func_02046608(var1, 0xa, var16, var15, 0x100, 0, 0);
                AppendText_02042058(arg1, var15);
                var8 = 1;
                arg2 = arg2 - 1;
            }
        }
    }

    if (var8 == 0) {
        char* var21 = (char*)FindStringInTable_020e0434(var0->unknown_0_, 0x75fa);
        int var22 = func_020420e8(var21, 0);
        var22 = 0xc0 - var22;
        AppendPositionTag_02041a90(arg1, var22 >> 1, (var10 - 0x1a) / 2 + 0x10);
        AppendText_02042058(arg1, var21);
    }
}
#endif
