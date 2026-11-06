#include <globaldefs.h>
#include <GameState/GameState.h>
#include <Memory/SafeAllocator.h>
#include <std_library_functions.h>
#if defined(jpn)
#include "Resource/Script.h"
#endif

struct Struct_ov031_02244ad0 {
#if defined(jpn)
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
#else
    unsigned char unknown_0_0_ : 3;
#endif
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};
#if defined(jpn)
struct Struct_ov031_02244ad0_4 {
    unsigned char unknown_0_[6];
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};
struct Struct_ov031_02244ad0_5 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_[6];
    unsigned char unknown_a_[0xc0 - 0xa];
};
struct Struct_ov031_02292a0c {
    unsigned short unknown_0_;
    unsigned char unknown_2_[6];
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    Struct_ov031_02244ad0_5* unknown_10_;
    unsigned char unknown_14_[0x14];
    Struct_ov031_02244ad0_5* unknown_28_;
    unsigned char unknown_2c_[4];
};
struct Struct_ov031_02244ad0_2 {
    unsigned char unknown_0_[0x7cdc];
    Struct_ov031_02244ad0_4 unknown_7cdc_[8];
    Struct_ov031_02244ad0 unknown_7d1c_;
};
#else
struct Struct_ov031_02244ad0_2 {
    unsigned char unknown_0_[0x7ff0];
    Struct_ov031_02244ad0 unknown_7ff0_;
};
#endif
struct Struct_ov031_02244ad0_3 {
    int unknown_0_;
    void* (*unknown_4_)(int, unsigned int);
    void (*unknown_8_)(int, void*);
    int unknown_c_;
    unsigned int unknown_10_[5];
    unsigned char unknown_24_[8];
    int unknown_2c_;
    int unknown_30_;
    unsigned char unknown_34_[0x58 - 0x34];
};
struct Struct_02245528 {
    unsigned char unknown_0_[0x34];
    unsigned char unknown_34_;
    unsigned char unknown_35_;
    unsigned char unknown_36_[0x391 - 0x36];
    unsigned char unknown_391_;
    unsigned char unknown_392_[0x3a8 - 0x392];
    unsigned long long unknown_3a8_;
    unsigned long long unknown_3b0_;
    unsigned char unknown_3b8_[0x3d4 - 0x3b8];
    Struct_ov031_02244ad0_3 unknown_3d4_;
};
struct Struct_ov031_022495d4 { unsigned int unknown_0_[31]; };
struct Struct_ov031_02245fb0 { unsigned char unknown_0_[6]; };
#if defined(jpn)
struct Struct_ov031_02244ad0_6 {
    unsigned char unknown_0_[0x388];
    const void* unknown_388_;
    unsigned int unknown_38c_;
};
#endif
#if defined(jpn)
static inline unsigned char& inline_ov031_02244ad0() {
    static unsigned char initialized;
    return initialized;
}
static unsigned char data_ov031_02292a0a;
static unsigned char data_ov031_02292a09;
static unsigned char data_ov031_02292a08;
static unsigned char data_ov031_02292a07;
static unsigned char data_ov031_02292a06;
static unsigned char data_ov031_02292a05;
static Struct_ov031_02292a0c data_ov031_02292a0c;
#endif
unsigned char data_ov031_02291e04;
#if defined(jpn)
#define data_ov031_022495d4 data_ov031_0224a1e8
#define data_ov031_02291ea8 data_ov031_02292aa8
#define data_ov031_0224957c data_ov031_0224a170
#endif
extern SafeAllocator data_ov031_02291e3c;
extern const Struct_ov031_022495d4 data_ov031_022495d4;
extern Struct_ov031_02245fb0 data_ov031_02245fb0;
extern Struct_ov031_022495d4 data_ov031_02291ea8;
extern const Struct_ov031_02245fb0 data_ov031_0224957c;
extern int data_ov031_0224e1c8;
extern "C" int func_ov031_0220d540();
extern "C" void func_ov031_02245858(int, unsigned char);
extern "C" void func_ov031_0224586c(int);
extern "C" void func_ov031_0224587c(Struct_ov031_022495d4*);
unsigned long long GetCurrentTimestamp();
extern "C" int func_ov031_0220f368(unsigned char*, unsigned char*);
extern "C" void func_ov031_0220eb88(int);
extern "C" unsigned int func_ov031_0224598c();
extern "C" void func_ov031_02245938();
extern "C" void VectorizedMemset(void*, int, unsigned int);
extern "C" void func_ov031_0220764c(Struct_ov031_02244ad0_3*);
extern "C" void func_ov031_022077c0();
extern "C" int func_ov031_02207500();
extern "C" void func_ov031_02245528(Struct_02245528*, int);
extern "C" void* func_ov031_02243450(int, unsigned int);
extern "C" void func_ov031_02243484(int, void*);
#if defined(jpn)
extern "C" unsigned char func_ov031_0220eb30();
extern "C" int CompareBytes_02001aec(void*, void*, int);
extern "C" void func_ov031_02246444(Struct_ov031_02244ad0_5*);
extern Script::OpcodeLookupEntry data_ov031_0224d4bc[];
extern Script::OpcodeLookupEntry data_ov031_0224c8dc[];
#endif

#if defined(jpn)
// JPN: func_ov031_02244ad0
extern "C" ARM void func_ov031_02244ad0(Struct_02245528* arg0) {
    GameState* var0 = GameState::GetInstance();
    Struct_ov031_02244ad0_2* var1 = (Struct_ov031_02244ad0_2*)var0;
    switch (arg0->unknown_35_) {
    case 0:
        switch (func_ov031_0220d540()) {
        case 0:
            if (!inline_ov031_02244ad0()) {
                int var2 = 22;
                if (var1->unknown_7d1c_.unknown_0_3_) var2 = var1->unknown_7d1c_.unknown_1_;
                func_ov031_02245858((int)data_ov031_02291e3c.Allocate(var2 * 208 + 0x230c), var2);
                Struct_ov031_022495d4 var3 = data_ov031_022495d4;
                memcpy(&data_ov031_02291ea8, &var3, sizeof(var3));
                func_ov031_0224586c(1);
                func_ov031_0224587c(&data_ov031_02291ea8);
                if (var1->unknown_7d1c_.unknown_0_4_)
                    arg0->unknown_3a8_ = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)var1->unknown_7d1c_.unknown_2_) >> 6);
                else arg0->unknown_3a8_ = GetCurrentTimestamp() + 2618281ULL;
                Struct_ov031_02245fb0 var4 = data_ov031_0224957c;
                func_ov031_0220f368(data_ov031_02245fb0.unknown_0_, var4.unknown_0_);
                arg0->unknown_3b0_ = GetCurrentTimestamp();
                inline_ov031_02244ad0() = 1;
            }
            break;
        case 6: {
            func_ov031_0220eb88(1);
            unsigned char var5 = func_ov031_0220eb30();
            if (func_ov031_0224598c() <= 1) {
                func_ov031_0220eb88(0);
                return;
            }
            if (var5 == 0) {
                func_ov031_0220eb88(0);
                break;
            }
            GetCurrentTimestamp();
            data_ov031_02292a08 = 0;
            data_ov031_02292a07 = 0;
            data_ov031_02291e04 = var5;
            data_ov031_02292a0c.unknown_28_ = (Struct_ov031_02244ad0_5*)((char*)arg0 + 0x43c);
            Script var6;
            var6.Initialize();
            var6.SetOpcodeLookup(data_ov031_0224d4bc);
            var6.Load(((Struct_ov031_02244ad0_6*)arg0)->unknown_388_, ((Struct_ov031_02244ad0_6*)arg0)->unknown_38c_);
            var6.Execute();
            if (data_ov031_02292a08) {
                Struct_ov031_02244ad0_5 var7[8];
                memcpy(var7, data_ov031_02292a0c.unknown_28_, data_ov031_02292a08 * 0xc0);
                int var10 = 0;
                int var8 = -1;
                data_ov031_02292a06 = 0;
                Struct_ov031_02244ad0_4* var9 = var1->unknown_7cdc_;
                for (; var10 < 8; var10++, var9++) {
                    if (var9->unknown_6_ == 0xff) {
                        Struct_ov031_02244ad0_5* var21 = var7;
                        for (int var22 = 0; var22 < data_ov031_02292a08; var22++, var21++) {
                            if (CompareBytes_02001aec(var9, var21->unknown_4_, 6) == 0) {
                                data_ov031_02292a06 = 1;
                                var8 = var22;
                                break;
                            }
                        }
                        break;
                    }
                }
                unsigned char var11[8];
                memset(var11, 0, 8);
                for (int var12 = 0; var12 < data_ov031_02292a08; var12++) {
                    int var13 = rand() % data_ov031_02292a08;
                    if (var12 == 0 && var8 >= 0) var13 = var8;
                    while (var11[var13] != 0) var13 = (var13 + 1) % data_ov031_02292a08;
                    var11[var13] = 1;
                    memcpy(&data_ov031_02292a0c.unknown_28_[var12], &var7[var13], 0xc0);
                }
                if (var1->unknown_7d1c_.unknown_0_1_) {
                    for (int var14 = 0; var14 < data_ov031_02292a08; var14++) {}
                }
                int var17;
                Struct_ov031_02244ad0_5* var15 = 0;
                unsigned char var16 = 0;
                data_ov031_02292a0c.unknown_10_ = data_ov031_02292a0c.unknown_28_;
                for (var17 = 0; var17 < data_ov031_02292a08; var17++) {
                    data_ov031_02292a0c.unknown_8_ = 0;
                    data_ov031_02292a0c.unknown_0_ = 0;
                    data_ov031_02292a09 = 0;
                    data_ov031_02292a0a = 0;
                    data_ov031_02292a05 = 0;
                    Script var18;
                    var18.Initialize();
                    var18.SetOpcodeLookup(data_ov031_0224c8dc);
                    var18.Load(((Struct_ov031_02244ad0_6*)arg0)->unknown_388_, ((Struct_ov031_02244ad0_6*)arg0)->unknown_38c_);
                    var18.Execute();
                    if (data_ov031_02292a07) break;
                    if (data_ov031_02292a05 && (!var15 || var16 > data_ov031_02292a0a)) {
                        var16 = data_ov031_02292a0a;
                        var15 = data_ov031_02292a0c.unknown_10_;
                    }
                    data_ov031_02292a0c.unknown_10_++;
                }
                if (!data_ov031_02292a07 && var15) {
                    data_ov031_02292a0c.unknown_10_ = var15;
                    data_ov031_02292a0c.unknown_8_ = 0;
                    data_ov031_02292a0c.unknown_0_ = 0;
                    data_ov031_02292a09 = 1;
                    Script var19;
                    var19.Initialize();
                    var19.SetOpcodeLookup(data_ov031_0224c8dc);
                    var19.Load(((Struct_ov031_02244ad0_6*)arg0)->unknown_388_, ((Struct_ov031_02244ad0_6*)arg0)->unknown_38c_);
                    var19.Execute();
                }
            }
            func_ov031_0220eb88(0);
            for (int var20 = 0; var20 < 8; var20++) {}
            if (data_ov031_02292a07) {
                GetCurrentTimestamp();
                func_ov031_02246444(data_ov031_02292a0c.unknown_10_);
                if (var1->unknown_7d1c_.unknown_0_4_)
                    arg0->unknown_3a8_ = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)var1->unknown_7d1c_.unknown_2_) >> 6);
                else arg0->unknown_3a8_ = GetCurrentTimestamp() + 2618281ULL;
            } else {
                arg0->unknown_35_ = 5;
            }
            break;
        }
        case 9:
            GetCurrentTimestamp();
            arg0->unknown_35_ = 3;
            break;
        }
        if (GetCurrentTimestamp() <= arg0->unknown_3a8_) return;
        if (var1->unknown_7d1c_.unknown_0_4_ && !var1->unknown_7d1c_.unknown_2_) return;
        func_ov031_02245938();
        arg0->unknown_35_ = 5;
        return;
    case 3:
        VectorizedMemset(&arg0->unknown_3d4_, 0, sizeof(arg0->unknown_3d4_));
        arg0->unknown_3d4_.unknown_c_ = 1;
        arg0->unknown_3d4_.unknown_4_ = func_ov031_02243450;
        arg0->unknown_3d4_.unknown_8_ = func_ov031_02243484;
        data_ov031_0224e1c8 = 0;
        func_ov031_0220764c(&arg0->unknown_3d4_);
        if (var1->unknown_7d1c_.unknown_0_4_)
            arg0->unknown_3a8_ = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)var1->unknown_7d1c_.unknown_2_) >> 6);
        else arg0->unknown_3a8_ = GetCurrentTimestamp() + 2618281ULL;
        arg0->unknown_35_ = 4;
        GetCurrentTimestamp();
        return;
    case 4:
        if (GetCurrentTimestamp() > arg0->unknown_3a8_) {
            if (var1->unknown_7d1c_.unknown_0_4_ && !var1->unknown_7d1c_.unknown_2_) goto checkProgress;
            func_ov031_022077c0();
            arg0->unknown_35_ = 5;
            return;
        }
checkProgress:
        if (func_ov031_02207500()) {
            GetCurrentTimestamp();
            func_ov031_02245528(arg0, 6);
        }
        return;
    case 5:
        func_ov031_02245938();
        arg0->unknown_35_ = 6;
        return;
    case 6:
        if (!func_ov031_0220d540()) {
            func_ov031_02245528(arg0, 0);
            arg0->unknown_391_ = 1;
        }
        return;
    default:
        return;
    }
}
#else
// USA: func_ov031_02244ad0
extern "C" ARM void func_ov031_02244ad0(Struct_02245528* arg0) {
    static unsigned char initialized = 0;
    GameState* var0 = GameState::GetInstance();
    Struct_ov031_02244ad0_2* var1 = (Struct_ov031_02244ad0_2*)var0;
    switch (arg0->unknown_35_) {
    case 0:
        switch (func_ov031_0220d540()) {
        case 0:
            if (!initialized) {
                int var2 = 22;
                if (var1->unknown_7ff0_.unknown_0_3_) var2 = var1->unknown_7ff0_.unknown_1_;
                func_ov031_02245858((int)data_ov031_02291e3c.Allocate(var2 * 208 + 0x230c), var2);
                Struct_ov031_022495d4 var3 = data_ov031_022495d4;
                memcpy(&data_ov031_02291ea8, &var3, sizeof(var3));
                func_ov031_0224586c(1);
                func_ov031_0224587c(&data_ov031_02291ea8);
                if (var1->unknown_7ff0_.unknown_0_4_)
                    arg0->unknown_3a8_ = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)var1->unknown_7ff0_.unknown_2_) >> 6);
                else arg0->unknown_3a8_ = GetCurrentTimestamp() + 2618281ULL;
                Struct_ov031_02245fb0 var4 = data_ov031_0224957c;
                func_ov031_0220f368(data_ov031_02245fb0.unknown_0_, var4.unknown_0_);
                arg0->unknown_3b0_ = GetCurrentTimestamp();
                initialized = 1;
            }
            break;
        case 6:
            func_ov031_0220eb88(1);
            if (func_ov031_0224598c() <= 1) {
                func_ov031_0220eb88(0);
                return;
            }
            func_ov031_0220eb88(0);
            break;
        case 9:
            GetCurrentTimestamp();
            arg0->unknown_35_ = 3;
            break;
        }
        if (GetCurrentTimestamp() <= arg0->unknown_3a8_) return;
        if (var1->unknown_7ff0_.unknown_0_4_ && !var1->unknown_7ff0_.unknown_2_) return;
        func_ov031_02245938();
        arg0->unknown_35_ = 5;
        return;
    case 3:
        VectorizedMemset(&arg0->unknown_3d4_, 0, sizeof(arg0->unknown_3d4_));
        arg0->unknown_3d4_.unknown_c_ = 1;
        arg0->unknown_3d4_.unknown_4_ = func_ov031_02243450;
        arg0->unknown_3d4_.unknown_8_ = func_ov031_02243484;
        data_ov031_0224e1c8 = 0;
        func_ov031_0220764c(&arg0->unknown_3d4_);
        if (var1->unknown_7ff0_.unknown_0_4_)
            arg0->unknown_3a8_ = GetCurrentTimestamp() + ((33514000ULL * (unsigned int)var1->unknown_7ff0_.unknown_2_) >> 6);
        else arg0->unknown_3a8_ = GetCurrentTimestamp() + 2618281ULL;
        arg0->unknown_35_ = 4;
        GetCurrentTimestamp();
        return;
    case 4:
        if (GetCurrentTimestamp() > arg0->unknown_3a8_) {
            if (var1->unknown_7ff0_.unknown_0_4_ && !var1->unknown_7ff0_.unknown_2_) goto checkProgress;
            func_ov031_022077c0();
            arg0->unknown_35_ = 5;
            return;
        }
checkProgress:
        if (func_ov031_02207500()) {
            GetCurrentTimestamp();
            func_ov031_02245528(arg0, 6);
        }
        return;
    case 5:
        func_ov031_02245938();
        arg0->unknown_35_ = 6;
        return;
    case 6:
        if (!func_ov031_0220d540()) {
            func_ov031_02245528(arg0, 0);
            arg0->unknown_391_ = 1;
        }
        return;
    default:
        return;
    }
}
#endif
