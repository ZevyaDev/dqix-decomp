#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_ov004_02153e20 {
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
};

struct Struct_ov004_02166bd8 {
    char unknown_0_[0x3a];
    unsigned char unknown_3a_;
    char unknown_3b_[9];
    short unknown_44_;
    short unknown_46_;
};

struct Struct_02065990_3 {
    char unknown_0_[0xa8];
    unsigned char unknown_a8_[1];
};

struct Struct_ov004_02166bd8_2 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 1;
    unsigned short unknown_2_4_ : 1;
    unsigned short unknown_2_5_ : 11;
    char unknown_4_[4];
    Struct_ov004_02166bd8_2* unknown_8_;
};

struct Struct_ov004_02166bd8_3 {
    int unknown_0_;
    const char* unknown_4_;
};

struct Struct_0208bf78_5 {
    int unknown_0_[4];
};

struct Struct_ov004_02166bd8_4 {
    char unknown_0_[8];
    Struct_ov004_02166bd8_2* unknown_8_;
    Struct_0208bf78_5 unknown_c_;
};

struct Struct_ov004_0217101c_3 {
#if defined(jpn)
    char** unknown_0_;
    Struct_ov004_02166bd8_4* unknown_4_;
#else
    Struct_ov004_02166bd8_4* unknown_0_;
    char** unknown_4_;
#endif
};

extern "C" void* GetFlagManager_0205ec34();
extern "C" void func_ov004_02166608(void*);
extern "C" Struct_ov004_02153e20* func_ov023_021f6524(void*, int);
extern "C" Struct_02065990_3* func_02094d6c();
extern "C" void GetMessageWindow_020421a0();
extern "C" void func_ov023_021f65d4(void*, int, int);
extern "C" Struct_ov004_02166bd8_3* func_0208d994(Struct_0208bf78_5*, int);
extern "C" void func_ov023_021f9b30(Struct_ov004_02153e20*, unsigned short, unsigned int, unsigned int);
extern "C" Struct_ov004_02166bd8* func_ov004_02165ea4(void*, int, int);
struct Struct_02000c9c_8;
extern "C" int GetGameLanguage_0200fb08(Struct_02000c9c_8*);
extern "C" unsigned int func_020965ac(Struct_02065990_3*, unsigned char);
extern "C" int func_02096100(int, unsigned char*, int);
extern "C" const char* func_ov023_021f63ac(void*, int, int);
extern "C" void* memset(void*, int, unsigned int);
extern "C" void func_02041a28(char*, int);
extern "C" void AppendText_02042058(char*, const char*);
extern "C" void func_ov023_021f63f8(void*, int, char*, int);
extern "C" void func_ov023_021f6600(void*, int, int);
extern "C" void func_ov023_021f9d14(Struct_ov004_02153e20*, void*);
extern "C" void func_ov023_021f6630(int, int, short, short);

extern Struct_ov004_0217101c_3 data_ov004_0217101c;

#if defined(jpn)
struct Struct_ov004_0215de9c;
extern "C" void* GetMenuObjectList_ov011_021849c8(void*);
extern "C" Struct_ov004_0215de9c* FindMenuObjectById_ov023_021f6880(void*, int);
extern "C" int func_ov023_021f6f10(Struct_ov004_0215de9c*);
extern "C" void func_ov023_021fb27c(Struct_ov004_0215de9c*, int);
extern "C" void func_ov023_021fa62c(Struct_ov004_0215de9c*, int);
extern "C" void func_ov023_021fa634(Struct_ov004_0215de9c*, int);
extern "C" void func_ov023_021f645c(void*, int, unsigned short, unsigned char);
extern const char data_ov004_02170e59[];

struct Struct_ov004_0215de9c {
    Struct_ov004_0215de9c* inline_ov004_02166bd8_2(int arg0) {
        func_ov023_021fb27c(this, arg0);
        return this;
    }
};

static inline Struct_ov004_0215de9c* inline_ov004_02166bd8(Struct_ov004_0215de9c* arg0) {
    return (arg0 == NULL) ? NULL : (func_ov023_021f6f10(arg0) != 1) ? NULL : arg0;
}
#endif

// USA: func_ov004_02166bd8
// JPN: func_ov004_02166bd8
extern "C" ARM int func_ov004_02166bd8(void* arg0) {
    GetFlagManager_0205ec34();
    func_ov004_02166608(arg0);
    short var0 = 0;
    short var1 = 1;
    Struct_ov004_02153e20* var2 = func_ov023_021f6524(arg0, 0x5b);
    if (var2) {
        var0 = var2->unknown_5c_;
        var1 = var2->unknown_5e_;
    }
    Struct_ov004_02166bd8_2* var3;
#if defined(jpn)
    Struct_ov004_02166bd8_4* var8 = data_ov004_0217101c.unknown_4_;
#endif
    int var4 = 0xbe;
    int var5 = 0xc8;
    int var6 = 0xd2;
    int var7 = 0xdc;
#if !defined(jpn)
    Struct_ov004_02166bd8_4* var8 = data_ov004_0217101c.unknown_0_;
#endif
    var3 = var8->unknown_8_;
    short var9 = var0 * 8;
    while (var3 && var9) {
        var9--;
        var3 = var3->unknown_8_;
    }
    Struct_02065990_3* var10 = func_02094d6c();
    GetMessageWindow_020421a0();
#if !defined(jpn)
    unsigned char* var11 = var10->unknown_a8_;
#endif
    for (short var12 = 0; var12 < 8; var4++, var5++, var6++, var7++, var12++) {
        int var13 = 0;
        func_ov023_021f65d4(arg0, var4, 8);
        func_ov023_021f65d4(arg0, var5, 8);
        func_ov023_021f65d4(arg0, var6, 8);
        func_ov023_021f65d4(arg0, var7, 8);
        if (var3) {
            Struct_ov004_02166bd8_3* var14 = func_0208d994(&var8->unknown_c_, var3->unknown_0_);
            if (var14) {
                var13 = 1;
                func_ov023_021f9b30(var2, var4, (unsigned short)var12, 0);
                int var15 = 0;
                if (!var3->unknown_2_4_) {
#if defined(jpn)
                    Struct_ov004_0215de9c* var25 = inline_ov004_02166bd8(FindMenuObjectById_ov023_021f6880(GetMenuObjectList_ov011_021849c8(arg0), var7));
                    Struct_ov004_0215de9c* var16 = (var25 == NULL) ? NULL : var25->inline_ov004_02166bd8_2(6);
                    func_ov023_021fa62c(var16, 0x40004000);
                    func_ov023_021fa634(var16, -1);
                    if (var12 >= 1 && var12 <= 3)
                        func_ov023_021fa634(var16, 0x4000);
#else
                    Struct_ov004_02166bd8* var16 = func_ov004_02165ea4(arg0, var7, 6);
                    var16->unknown_44_ = 4;
                    var16->unknown_46_ = 0;
                    var16->unknown_3a_ = (var12 != 0);
                    if (var12 >= 1 && var12 <= 3) {
                        int var17 = GetGameLanguage_0200fb08((Struct_02000c9c_8*)GameState::GetInstance());
                        int var18 = 2;
                        switch (var17) {
                        case 4:
                            var18 = 3;
                            break;
                        case 3:
                            var18 = 1;
                            break;
                        case 5:
                            var18 = 3;
                            break;
                        }
                        var16->unknown_46_ = var18;
                    }
#endif
                    var15 = 1;
                }
#if defined(jpn)
                unsigned short var21 = 5;
                unsigned short var24 = 0xf;
                unsigned int var19 = func_020965ac(var10, (unsigned char)var3->unknown_0_);
                int var20 = func_02096100((int)var10, var10->unknown_a8_ + 0x400, var19);
                if (var3->unknown_2_2_ && !var20)
                    var21 = 10;
                const char* var22 = var14->unknown_4_;
                switch (var3->unknown_2_0_) {
                case 0:
                case 1:
                    var21 = 5;
                    if (!var20)
                        var22 = data_ov004_02170e59;
                    break;
                case 2:
                    var21 = 6;
                    var24 = 0xd;
                    break;
                case 3:
                    var21 = 7;
                    var24 = 9;
                    break;
                }
#else
                unsigned int var19 = func_020965ac(var10, (unsigned char)var3->unknown_0_);
                int var20 = func_02096100((int)var10, var11 + 0x400, var19);
                int var21 = 10;
                const char* var22 = var14->unknown_4_;
                switch (var3->unknown_2_0_) {
                case 0:
                case 1:
                    if (!var20)
                        var22 = func_ov023_021f63ac(arg0, 3, 10);
                    break;
                case 2:
                    var21 = 11;
                    break;
                case 3:
                    var21 = 12;
                    break;
                }
#endif
#if defined(jpn)
                char* var23 = data_ov004_0217101c.unknown_0_[var12];
#else
                char* var23 = data_ov004_0217101c.unknown_4_[var12];
#endif
                memset(var23, 0, 0x80);
#if defined(jpn)
                AppendText_02042058(var23, var3->unknown_4_);
                func_02041a28(var23, 0x30);
#else
                func_02041a28(var23, 0x1c);
                AppendText_02042058(var23, var3->unknown_4_);
                func_02041a28(var23, 0x2e);
#endif
                if (var22)
                    AppendText_02042058(var23, var22);
                func_ov023_021f63f8(arg0, var4, var23, 0xf);
#if defined(jpn)
                func_ov023_021f645c(arg0, var6, var21, var24);
#else
                func_ov004_02165ea4(arg0, var6, var21)->unknown_3a_ = 0;
#endif
                func_ov023_021f6600(arg0, var4, 8);
                func_ov023_021f6600(arg0, var6, 8);
                if (var15)
                    func_ov023_021f6600(arg0, var7, 8);
            }
            var3 = var3->unknown_8_;
        }
        if (!var13)
            func_ov023_021f9b30(var2, 0, (unsigned short)var12, 0);
    }
    func_ov023_021f9d14(var2, arg0);
    func_ov023_021f6630((int)arg0, 0x17, var0, var1);
    return 0;
}
