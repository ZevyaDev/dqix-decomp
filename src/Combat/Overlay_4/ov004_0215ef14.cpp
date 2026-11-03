#include <globaldefs.h>
#include "GameState/GameState.h"
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"
#include "NitroSDK/Matrix.h"
#include "Resource/GameResources.h"

extern "C" unsigned short func_ov004_0215eb20(void* arg0, int arg1);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);

struct Struct_ov004_0215f770 {
    unsigned int unknown_0_0_ : 7;
    unsigned int unknown_0_7_ : 4;
    unsigned int unknown_1_3_ : 21;
};

struct Struct_ov004_0215f770_2 {
    struct Struct_ov004_0215f770* unknown_0_;
    void* unknown_4_;
    char unknown_8_[0x10];
    short unknown_18_;
    char unknown_1a_[6];
};

struct Struct_ov004_0215f0c0_10 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x22 - 0xd];
    unsigned short unknown_22_;
    unsigned short unknown_24_;
};

struct Struct_0200fb08;
struct Struct_ov004_0215f770_3;
struct Struct_ov004_0215f770_4;

#if defined(jpn)
struct Struct_ov004_021707e8 {
    unsigned char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_[0x19];
    int unknown_1c_;
};

extern struct Struct_ov004_021707e8 data_ov004_021707e8;
#else
void* data_ov004_021707f4;
unsigned char data_ov004_02170814[4];
int data_ov004_021707f8;
int data_ov004_021707fc;
char* data_ov004_02170800;
int data_ov004_02170804;
int data_ov004_02170808;
int data_ov004_0217080c;
char* data_ov004_02170810;
unsigned char data_ov004_021707e8;
unsigned char data_ov004_021707f2;
signed char data_ov004_021707f3;
unsigned char data_ov004_021707ec;
signed char data_ov004_021707ed;
unsigned char data_ov004_021707ea;
signed char data_ov004_021707f1;
unsigned char data_ov004_021707e9;
unsigned char data_ov004_021707f0;
unsigned char data_ov004_021707eb;
unsigned char data_ov004_021707ef;
signed char data_ov004_021707ee;
short data_ov004_02170818[4];
unsigned char data_ov004_02170820[12];
unsigned char data_ov004_0217082c[12];
unsigned char data_ov004_02170845[13];
unsigned char data_ov004_02170838[13];
int data_ov004_02170854[13];
short data_ov004_02170888[8][4];
extern int data_ov004_0216fe5c[13];
extern unsigned char data_ov004_0216fdf4[8];
extern int data_ov004_0216fe1c[8];
extern char* data_ov004_021704a4[8][4];
extern char data_ov004_021708c8[];
#endif

#if !defined(jpn)
// USA: func_ov004_0215ef14
extern "C" ARM void func_ov004_0215ef14() {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), data_ov004_02170804);
    int var1 = 0;
    for (int var2 = 1; var2 < 13; var2++) {
        if (func_ov004_0215eb20(var0, data_ov004_02170854[var2])) {
            data_ov004_021707f1++;
            data_ov004_02170820[data_ov004_02170854[var2] - 1] = var1;
            data_ov004_021707ed++;
            var1++;
        }
    }
}
#endif

struct Struct_ov000_02179cdc_2 {
    unsigned char unknown_0_[0x15];
    unsigned char unknown_15_;
};

struct Struct_ov004_02170b90_2 {
    struct Struct_ov000_02179cdc_2 unknown_0_[26];
    unsigned char unknown_23c_;
    unsigned char unknown_23d_;
    unsigned char unknown_23e_;
    unsigned char unknown_23f_;
};

extern struct Struct_ov004_02170b90_2 data_ov004_02170b90[];
extern int data_ov004_0216fe90[] __attribute__((aligned(4)));

// USA: func_ov004_0215ef9c
extern "C" ARM void func_ov004_0215ef9c(int arg0) {
    struct Struct_ov004_02170b90_2* var0 = &data_ov004_02170b90[arg0 ? 0 : 1];
    if (var0->unknown_23f_ <= 1) {
        var0->unknown_23c_ = 0;
        return;
    }
    int var1 = var0->unknown_23c_;
    int var2 = 0;
    if (var1 >= 26) {
        var2 = 3;
    } else {
        int var3 = 0;
        while (var3 < 4) {
            if (--var1 < 0) {
                break;
            }
            if (var0->unknown_0_[data_ov004_0216fe90[var1] - 1].unknown_15_) {
                var3++;
            }
        }
        if (var1 < 0) {
            var2 = 1;
        }
    }
    if (var2 >= 1) {
        int var4 = 0;
        for (int var5 = 0; var5 < 26; var5++) {
            if (var0->unknown_0_[data_ov004_0216fe90[var5] - 1].unknown_15_) {
                var4++;
                if (var4 & 1) {
                    var1 = var5;
                }
            }
        }
        int var6 = 0;
        while (var6 < var2 - 1) {
            if (--var1 < 0) {
                break;
            }
            if (var0->unknown_0_[data_ov004_0216fe90[var1] - 1].unknown_15_) {
                var6++;
            }
        }
        if (var1 < 0) {
            var1 = 0;
        }
    }
    var0->unknown_23c_ = var1;
}

class Struct_ov004_0215f0c0_5 {
public:
    virtual void inline_ov004_0215f0c0_25(); virtual void inline_ov004_0215f0c0_26(); virtual void inline_ov004_0215f0c0_27(); virtual void inline_ov004_0215f0c0_28();
    virtual void inline_ov004_0215f0c0_29(); virtual void inline_ov004_0215f0c0_30(); virtual void inline_ov004_0215f0c0_31();
    virtual void inline_ov004_0215f0c0_32(Vector3i* arg0);
    virtual Vector3i inline_ov004_0215f0c0_33();
    virtual void inline_ov004_0215f0c0_34(); virtual void inline_ov004_0215f0c0_35(); virtual void inline_ov004_0215f0c0_36(); virtual void inline_ov004_0215f0c0_37();
    virtual void inline_ov004_0215f0c0_38(); virtual void inline_ov004_0215f0c0_39(); virtual void inline_ov004_0215f0c0_40(); virtual void inline_ov004_0215f0c0_41();
    virtual void inline_ov004_0215f0c0_42(); virtual void inline_ov004_0215f0c0_43(); virtual void inline_ov004_0215f0c0_44(); virtual void inline_ov004_0215f0c0_45();
    virtual void inline_ov004_0215f0c0_46(); virtual void inline_ov004_0215f0c0_47(); virtual void inline_ov004_0215f0c0_48(); virtual void inline_ov004_0215f0c0_49();
    virtual void inline_ov004_0215f0c0_50(); virtual void inline_ov004_0215f0c0_51(); virtual void inline_ov004_0215f0c0_52(); virtual void inline_ov004_0215f0c0_53();
    virtual void inline_ov004_0215f0c0_54(); virtual void inline_ov004_0215f0c0_55(); virtual void inline_ov004_0215f0c0_56(); virtual void inline_ov004_0215f0c0_57();
    virtual void inline_ov004_0215f0c0(); virtual void inline_ov004_0215f0c0_2(); virtual void inline_ov004_0215f0c0_3(); virtual void inline_ov004_0215f0c0_4();
    virtual void inline_ov004_0215f0c0_5(); virtual void inline_ov004_0215f0c0_6(); virtual void inline_ov004_0215f0c0_7(); virtual void inline_ov004_0215f0c0_8();
    virtual void inline_ov004_0215f0c0_9(); virtual void inline_ov004_0215f0c0_10(); virtual void inline_ov004_0215f0c0_11(); virtual void inline_ov004_0215f0c0_12();
    virtual void inline_ov004_0215f0c0_13(); virtual void inline_ov004_0215f0c0_14(); virtual void inline_ov004_0215f0c0_15(); virtual void inline_ov004_0215f0c0_16();
    virtual void inline_ov004_0215f0c0_17(); virtual void inline_ov004_0215f0c0_18(); virtual void inline_ov004_0215f0c0_19(); virtual void inline_ov004_0215f0c0_20();
    virtual void inline_ov004_0215f0c0_21();
    virtual void inline_ov004_0215f0c0_22(int arg0);
    virtual void inline_ov004_0215f0c0_23();
    virtual void inline_ov004_0215f0c0_24(unsigned short arg0);
    virtual void inline_ov004_0215f770();
    virtual struct Struct_0200fb08* inline_ov004_0215f770_2();

    unsigned char unknown_4_[8];
    unsigned char unknown_c_;
    unsigned char unknown_d_[0x13];
    void* unknown_20_;
    unsigned char unknown_24_[0x14];
    short unknown_38_;
    unsigned char unknown_3a_[0xa];
    unsigned char unknown_44_0_ : 4;
};

struct Struct_ov004_0215f0c0 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
};

struct Struct_ov004_0215f0c0_2 {
    unsigned char unknown_0_[0x130];
    struct Struct_ov004_0215f0c0* unknown_130_;
    void* unknown_134_;
};

struct Struct_ov004_0215f0c0_3 {
    unsigned char unknown_0_[0x950];
    int unknown_950_;
};

struct Struct_ov004_0215f0c0_4 {
    unsigned char unknown_0_[0x150];
    struct Struct_ov004_0215f0c0_3* unknown_150_;
};

struct Struct_ov004_0215f0c0_6 {
    unsigned char unknown_0_[0x16c];
    unsigned short unknown_16c_[13];
    unsigned char unknown_186_[1];
};

struct Struct_ov004_0215f0c0_7 {
    unsigned char unknown_0_[4];
    unsigned short unknown_4_;
};

struct Struct_ov004_0215f0c0_8 {
    unsigned char unknown_0_[8];
    struct Struct_ov004_0215f0c0_7* unknown_8_;
};

struct Struct_ov004_0215f0c0_9 {
    int unknown_0_[3];
};

struct Struct_02000c9c_8;
struct Struct_02072a68_2;

extern "C" int func_020d2ff0(const char*);
extern "C" unsigned char* func_02053c6c(unsigned char* arg0);
extern "C" struct Struct_ov004_0215f0c0_10* func_ov004_0215e47c(void* arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" struct Struct_ov004_0215f0c0_8* func_ov004_0215e438(void* arg0, int arg1);
extern "C" int func_ov017_021bdbcc(void* arg0);
extern "C" void* func_020421b0(int arg0);
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov004_0215f0c0_5* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(Struct_ov004_0215f0c0_5* arg0);
extern "C" int func_02042190(int arg0);
extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int func_020e51cc(int arg0);
extern "C" int func_ov004_0215e460(void);
extern "C" void func_ov004_0215e49c(void*, int, int);
extern "C" struct Struct_02072a68_2* func_ov023_021fa598(Struct_ov004_0215f0c0_5* arg0);
extern "C" void func_020e4bf4(void* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void func_02046380(void* arg0);
extern "C" void* func_02072a68(struct Struct_02072a68_2* arg0, int arg1);
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" void* func_ov004_0215e4c0(void* arg0, int arg1);
extern "C" void func_ov023_021f809c(void* arg0, void* arg1);

extern int data_ov004_0216fe04[];
extern unsigned short data_ov004_0216fdd0[];

// JPN: func_ov004_0215f0c0 (0215fbc8)
// USA: func_ov004_0215f0c0
extern "C" ARM void func_ov004_0215f0c0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
#if defined(jpn)
    struct Struct_ov004_0215f0c0_2* var1 = (struct Struct_ov004_0215f0c0_2*)func_0200ff1c(var0, data_ov004_021707e8.unknown_1c_);
#else
    struct Struct_ov004_0215f0c0_2* var1 = (struct Struct_ov004_0215f0c0_2*)func_0200ff1c(var0, data_ov004_02170804);
#endif
    struct Struct_ov004_0215f0c0_6* var2 = (struct Struct_ov004_0215f0c0_6*)func_02053c6c((unsigned char*)var1);
    int var3 = 0;
    int var4 = 0xf;
    if ((int)var1->unknown_130_->unknown_4_ <= 0) {
        var3 = 1;
    }
    if (var3) {
        var4 = 9;
    }
#if !defined(jpn)
    struct Struct_ov004_0215f0c0_10* var5 = func_ov004_0215e47c(arg0, 0x1f5);
    if (!var3) {
        void* var6 = func_ov004_0215e47c(arg0, 0x1f4);
        if (var6 != 0) {
            int var7;
            void* var8 = func_ov023_021fad18(var6);
            int var9 = data_ov004_02170804;
            if (var9 >= 0) {
                struct Struct_ov004_0215f0c0_4* var10 = (struct Struct_ov004_0215f0c0_4*)GameState::GetInstance()->GetPartyMemberByIndex(var9);
                if (var8 != 0 && var10 != 0) {
                    struct Struct_ov004_0215f0c0_8* var11 = func_ov004_0215e438(var8, 0);
                    struct Struct_ov004_0215f0c0_7* var12;
                    if (var11 != 0 && (var12 = var11->unknown_8_) != 0) {
                        var7 = var10->unknown_150_->unknown_950_;
                        int var13 = func_ov017_021bdbcc(GetGameResources());
                        if (var13 != 0) {
                            var7 = 0;
                        }
                        int var14;
                        unsigned int var15;
                        unsigned char var16 = var7 * 4 + 0x28;
                        var15 = (unsigned short)(var12->unknown_4_ & 0x3ff) << 5;
                        for (var14 = 0; var14 < 4; var14++, var16++) {
                            void* var17 = func_020421b0(var16);
                            DC_FlushRange(var17, 0x20);
                            LoadToMainObjVRAM(var17, var15, 0x20);
                            CleanCacheRange(var17, 0x20);
                            var15 += 0x20;
                        }
                    }
                }
            }
        }
        if (var5 != 0) {
            var5->unknown_c_ &= ~8;
        }
    } else {
        if (var5 != 0) {
            var5->unknown_c_ |= 8;
        }
    }

    unsigned char var18 = func_0200fb08((struct Struct_02000c9c_8*)var0);
#endif
    void* var19 = func_ov011_021849c8(arg0);
    Struct_ov004_0215f0c0_5* var20 = func_ov023_021f6880(var19, 0x7f);
    if (var20 == 0) {
        return;
    }
#if defined(jpn)
    var20->inline_ov004_0215f0c0_24(var2->unknown_16c_[data_ov004_021707e8.unknown_2_]);
#else
    var20->inline_ov004_0215f0c0_24(var2->unknown_16c_[data_ov004_021707ea]);
#endif

    {
        Struct_ov004_0215f0c0_5* var21 = func_ov023_021f6880(var19, 0x7b);
        if (func_ov023_021f6f10(var21) == 8) {
            void* var22 = var21->unknown_20_ = var1->unknown_134_;
            int var23 = 0;
            if (var22 != 0) {
#if defined(jpn)
                var23 = func_020d2ff0((const char*)var22);
                var23 = (var23 * var21->unknown_44_0_) >> 1;
#else
                var23 = func_020420e8(var22, func_02042190(var21->unknown_44_0_));
#endif
            }
            Vector3i var24;
            var24 = var21->inline_ov004_0215f0c0_33();
            var24.x = (0x23 - (var23 >> 1)) << 12;
#if !defined(jpn)
            var24.y = 0x2000;
#endif
            var21->inline_ov004_0215f0c0_32(&var24);
            var21->inline_ov004_0215f0c0_22(var4);
        }
    }
#if defined(jpn)
    int var25 = var2->unknown_186_[data_ov004_021707e8.unknown_2_];
#else
    int var25 = var2->unknown_186_[data_ov004_021707ea];
#endif
    if (var25 != 0) {
        var20 = func_ov023_021f6880(var19, 0x7e);
        if (var20 == 0) {
            return;
        }
        if (func_ov023_021f6f10(var20) == 8) {
            var20->unknown_38_ = var25 + 0x1d3;
#if defined(jpn)
            Vector3i var26;
            var26 = var20->inline_ov004_0215f0c0_33();
#endif
            if (var25 == 10) {
                var20->inline_ov004_0215f0c0_22(0xd);
#if defined(jpn)
                var26.y = 0x6000;
#endif
            } else {
                var20->inline_ov004_0215f0c0_22(5);
#if defined(jpn)
                var26.y = 0x7000;
#endif
            }
#if defined(jpn)
            var20->inline_ov004_0215f0c0_32(&var26);
#endif
        }
#if defined(jpn)
        var20 = func_ov023_021f6880(var19, 0x7c);
        if (var20 != 0) {
            Vector3i var27;
            var27 = var20->inline_ov004_0215f0c0_33();
            var27.x = 0x42000;
            var20->inline_ov004_0215f0c0_32(&var27);
        }
        var20 = func_ov023_021f6880(var19, 0x7d);
        if (var20 != 0) {
            Vector3i var28;
            var28 = var20->inline_ov004_0215f0c0_33();
            var28.x = 0x5f000;
            var20->inline_ov004_0215f0c0_32(&var28);
        }
        var20 = func_ov023_021f6880(var19, 0x7f);
        if (var20 != 0) {
            Vector3i var29;
            var29 = var20->inline_ov004_0215f0c0_33();
            var29.x = 0x68000;
            var20->inline_ov004_0215f0c0_32(&var29);
        }
#else
        var20 = func_ov023_021f6880(var19, 0x7f);
        if (var20 != 0) {
            Vector3i var30;
            var30 = var20->inline_ov004_0215f0c0_33();
            var30.x = (data_ov004_0216fe04[var18] + 0x72) << 12;
            var20->inline_ov004_0215f0c0_32(&var30);
        }
        var20 = func_ov023_021f6880(var19, 0x7d);
        if (var20 != 0) {
            var20->unknown_20_ = (void*)func_020e51cc(0x3f3);
        }
#endif
    } else {
        var20 = func_ov023_021f6880(var19, 0x7e);
        if (var20 != 0) {
            if (func_ov023_021f6f10(var20) == 8) {
                var20->unknown_38_ = 0x3a;
            }
        }
#if defined(jpn)
        var20 = func_ov023_021f6880(var19, 0x7c);
        if (var20 != 0) {
            Vector3i var31;
            var31 = var20->inline_ov004_0215f0c0_33();
            var31.x = 0x46000;
            var20->inline_ov004_0215f0c0_32(&var31);
        }
        var20 = func_ov023_021f6880(var19, 0x7d);
        if (var20 != 0) {
            Vector3i var32;
            var32 = var20->inline_ov004_0215f0c0_33();
            var32.x = 0x5c000;
            var20->inline_ov004_0215f0c0_32(&var32);
        }
        var20 = func_ov023_021f6880(var19, 0x7f);
        if (var20 != 0) {
            Vector3i var33;
            var33 = var20->inline_ov004_0215f0c0_33();
            var33.x = 0x65000;
            var20->inline_ov004_0215f0c0_32(&var33);
        }
#else
        var20 = func_ov023_021f6880(var19, 0x7f);
        if (var20 != 0) {
            Vector3i var34;
            var34 = var20->inline_ov004_0215f0c0_33();
            var34.x = (data_ov004_0216fe04[var18] + 0x72) << 12;
            var20->inline_ov004_0215f0c0_32(&var34);
        }
        var20 = func_ov023_021f6880(var19, 0x7d);
        if (var20 != 0) {
            var20->unknown_20_ = (void*)func_020e51cc(0x3f3);
        }
#endif
    }

    if (func_ov004_0215e460() != 0) {
        func_ov004_0215e49c(arg0, 0x7c, 0x201);
    } else {
#if defined(jpn)
        func_ov004_0215e49c(arg0, 0x7c, data_ov004_021707e8.unknown_2_ + 0x1e4);
#else
        func_ov004_0215e49c(arg0, 0x7c, data_ov004_021707ea + 0x1e4);
#endif
    }

#if !defined(jpn)
    char* var35 = data_ov004_02170810;
    memset(var35, 0, 0x80);
#endif
    unsigned short var36[3];
#if defined(jpn)
    var36[0] = data_ov004_0216fdd0[13];
    var36[1] = data_ov004_0216fdd0[14];
    var36[2] = data_ov004_0216fdd0[15];
#else
    var36[0] = data_ov004_0216fdd0[15];
    var36[1] = data_ov004_0216fdd0[16];
    var36[2] = data_ov004_0216fdd0[17];
#endif

    if (var3) {
        Struct_ov004_0215f0c0_5* var37 = func_ov023_021f6880(var19, 0x7c);
        if (var37 != 0) {
            Vector3i var38;
            var38 = var37->inline_ov004_0215f0c0_33();
            var38.x = 0x53000;
#if !defined(jpn)
            var38.y = 0x2000;
#endif
            var37->inline_ov004_0215f0c0_32(&var38);
            var37->inline_ov004_0215f0c0_22(var4);
        }
#if defined(jpn)
        func_ov004_0215e49c(arg0, 0x7c, 0x202);
#else
        Struct_ov004_0215f0c0_5* var39 = func_ov023_021f6880(var19, 6);
        if (var39 != 0 && func_ov023_021f6f10(var39) == 4) {
            struct Struct_02072a68_2* var40 = func_ov023_021fa598(var39);
            struct Struct_ov004_0215f0c0_9 var41;
            func_020e4bf4(&var41, data_ov004_02170804);
            int var42 = func_020421a0();
            func_02046380((void*)var42);
            *(struct Struct_ov004_0215f0c0_9**)var42 = &var41;
            func_02046608(var42, 0, func_02072a68(var40, 0x202), var35, 0x1e, 0, 0);
            var37->unknown_20_ = var35;
        }
#endif
        for (int var43 = 0; var43 < 3; var43++) {
            Struct_ov004_0215f0c0_5* var44 = func_ov023_021f6880(var19, var36[var43]);
            if (var44 != 0) {
                var44->unknown_c_ |= 8;
            }
        }
    } else {
        Struct_ov004_0215f0c0_5* var45 = func_ov023_021f6880(var19, 0x7c);
        if (var45 != 0) {
            var45->inline_ov004_0215f0c0_22(var4);
        }
        for (int var46 = 0; var46 < 3; var46++) {
            Struct_ov004_0215f0c0_5* var47 = func_ov023_021f6880(var19, var36[var46]);
            if (var47 != 0) {
                var47->unknown_c_ &= ~8;
            }
        }
    }

    func_ov023_021f809c(func_ov004_0215e4c0(arg0, 5), arg0);
}

struct Struct_ov004_0215f6f4;
extern "C" void func_ov023_021f8944(struct Struct_ov004_0215f6f4* arg0, int arg1, int arg2, int arg3);

// USA: func_ov004_0215f6f4
extern "C" ARM void func_ov004_0215f6f4(void* arg0, short arg1, short arg2, int arg3) {
    void* var0 = func_ov004_0215e4c0(arg0, 3);
    if (var0 == NULL) return;
    *(short*)((char*)var0 + 0x104) = arg1;
    *(short*)((char*)var0 + 0x106) = arg2;
    int var1 = 0;
    unsigned char var2 = 0xf;
    if (arg3 != 0) {
        var2 = 3;
        var1 = 1;
    }
    *(unsigned char*)((char*)var0 + 0x10a) = var2;
    func_ov023_021f8944((struct Struct_ov004_0215f6f4*)var0, (int)(long)arg0, var1, 0);
}

// USA: func_ov004_0215f74c
extern "C" ARM int func_ov004_0215f74c(int arg0, int arg1) {
	return func_0200ff1c(GameState::GetInstance(), arg1) != NULL;
}

#if !defined(jpn)
extern "C" unsigned char func_020114ec(char* arg0, void* arg1);
extern "C" int func_02052df8(struct Struct_ov004_0215f770_3* arg0, int arg1);
extern "C" struct Struct_ov004_0215f770_2* func_020dedd0(struct Struct_0200fb08* arg0, int arg1);
extern "C" int func_020100bc(GameState* arg0);
extern "C" void func_020100c4(GameState* arg0, int arg1);
extern "C" void func_020a2010(void* arg0);
extern "C" void func_0202e5c0(struct Struct_ov004_0215f770_4* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020a27a0(void* arg0);
extern "C" void func_ov023_021f6bec(void* arg0, int arg1, unsigned int arg2, unsigned int arg3);
extern "C" void func_ov004_0215ee90(void* arg0);
extern "C" void func_ov004_0215eb40(void* arg0);
extern "C" void func_020dc7e8(unsigned int arg0, int arg1);

// USA: func_ov004_0215f770
extern "C" ARM int func_ov004_0215f770(void* arg0) {
    unsigned short var0;
    unsigned char var1[4];
    unsigned char var2[4];

    GameState* var3 = GameState::GetInstance();
    char* var4 = (char*)GetGameResources()->unknown_ptr_array_3afc[20];
    data_ov004_02170804 = 0;
    data_ov004_02170804 = *(int*)(var4 + 0x4c);
    data_ov004_021707ec = 1;
    data_ov004_021707e8 = 0;
    unsigned char var5 = func_020114ec((char*)var3, var1);
    GameObject* var6 = func_0200ff1c(var3, data_ov004_02170804);
    if (var6 == 0) {
        data_ov004_02170804 = 0;
        while (var6 == 0) {
            var6 = func_0200ff1c(var3, data_ov004_02170804);
            if (var6 != 0) {
                break;
            }
            data_ov004_02170804 += 1;
            data_ov004_02170804 %= var5;
        }
    }
    *(int*)(var4 + 0x4c) = data_ov004_02170804;

    data_ov004_021707ea = *(int*)(*(char**)((char*)var6 + 0x150) + 0x950);
    data_ov004_021707f0 = 0;
    data_ov004_02170854[0] = 0;
    data_ov004_02170854[1] = data_ov004_021707ea;

    unsigned char var7 = 1;
    unsigned char var8 = 2;
    while (var8 < 13) {
        int var9 = data_ov004_0216fe5c[var7];
        data_ov004_02170854[var8] = var9;
        if (data_ov004_021707ea != var9) {
            var8++;
            var7++;
        } else {
            var7++;
        }
    }

    while (data_ov004_021707ea != data_ov004_02170854[data_ov004_021707f0]) {
        data_ov004_021707f0 += 1;
        data_ov004_021707f0 %= 13;
        if (data_ov004_021707ea == data_ov004_02170854[data_ov004_021707f0]) {
            break;
        }
    }
    data_ov004_021707eb = data_ov004_021707f0;

    data_ov004_021707f2 = 0;
    while (data_ov004_02170804 != var1[data_ov004_021707f2]) {
        data_ov004_021707f2 += 1;
        data_ov004_021707f2 %= (unsigned int)var5;
        if (data_ov004_02170804 == var1[data_ov004_021707f2]) {
            break;
        }
    }

    func_ov004_0215ee90(data_ov004_02170b90);
    for (int var10 = 0; var10 < 4; var10++) {
        data_ov004_02170818[var10] = -1;
        data_ov004_02170814[var10] = 0;
    }
    for (int var11 = 0; var11 < 7; var11++) {
        for (int var12 = 0; var12 < 4; var12++) {
            data_ov004_02170888[var11][var12] = -1;
        }
    }
    for (int var13 = 0; var13 < 12; var13++) {
        data_ov004_02170820[var13] = 0;
    }
    for (int var14 = 0; var14 < 13; var14++) {
        if (func_ov004_0215eb20(var6, data_ov004_02170854[var14])) {
            data_ov004_02170838[var14] = 1;
        } else {
            data_ov004_02170838[var14] = 0;
        }
        if (func_ov004_0215eb20(var6, data_ov004_0216fe5c[var14])) {
            data_ov004_02170845[var14] = 1;
        } else {
            data_ov004_02170845[var14] = 0;
        }
    }

    data_ov004_021707e9 = 1;
    data_ov004_021707ef = 0x64;
    data_ov004_021707f1 = 0;
    data_ov004_021707ed = 0;
    func_ov004_0215eb40(arg0);
    func_ov004_0215ef14();

    int var15;
    int var16;
    struct Struct_ov004_0215f770_2* var17;
    char* var18;
    int var19;
    int var20;
    int var21;
    GameObject* var22;
    GameState* var23;
    Struct_ov004_0215f0c0_5* var24;
    int var25;
    int var26;
    var21 = data_ov004_021707f2;
    var15 = data_ov004_02170804;
    var23 = GameState::GetInstance();
    var25 = func_020114ec((char*)var23, var2);
    var26 = var15;
    for (var20 = 0; var20 < var25; var20++) {
        var22 = func_0200ff1c(var23, var26);
        if (var22 == 0) {
            continue;
        }
        for (var16 = 0; var16 < 8; var16++) {
            var19 = func_02052df8((struct Struct_ov004_0215f770_3*)var22, data_ov004_0216fdf4[var16]);
            var17 = 0;
            var24 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x81);
            if (var24 != 0 && func_ov023_021f6f10(var24) != 0x11) {
                var17 = func_020dedd0(var24->inline_ov004_0215f770_2(), var19);
            }
            if (var17 == 0 && var19 > 0) {
                var17 = &((struct Struct_ov004_0215f770_2*)(*(char**)((char*)var22 + 0x150) + 0x194))[(unsigned char)data_ov004_0216fe1c[var16]];
            }
            if (var17 == 0) {
                data_ov004_021704a4[var16][var26] = 0;
                if (var16 == 0) {
                    data_ov004_02170818[var26] = 0xe;
                }
                data_ov004_02170888[var16][var26] = -1;
            } else {
                var18 = data_ov004_02170800 + (var26 * 8 + var16) * 0x80;
                memset(var18, 0, 0x80);
                func_02046608(func_020421a0(), 0, var17->unknown_4_, var18, 0x60, 0, 0);
                data_ov004_02170888[var16][var26] = var17->unknown_18_;
                data_ov004_021704a4[var16][var26] = var18;
                if (var16 == 0) {
                    int var27 = var17->unknown_0_->unknown_0_7_;
                    if (var27 == 0) {
                        var27 = 0xe;
                    }
                    data_ov004_02170818[var26] = var27;
                }
                if (var16 == 1) {
                    data_ov004_02170814[var26] = 0;
                    if (var17->unknown_18_ != -1) {
                        data_ov004_02170814[var26] = 1;
                    }
                }
            }
        }
        var21 = (var21 + 1) % var25;
        var26 = var2[var21];
        if (var26 == var15) {
            break;
        }
    }

    data_ov004_021707f3 = 0;
    data_ov004_021707ee = data_ov004_021707f1;
    func_020dc7e8(2, (signed char)data_ov004_02170804);
    func_020dc7e8(5, (signed char)data_ov004_02170804);
    data_ov004_021707f8 = func_020100bc(var3);
    func_020a2010(data_ov004_021708c8);
    func_0202e5c0((struct Struct_ov004_0215f770_4*)data_ov004_021708c8, 0xb666, 0xa800, 0x42ccc);
    func_0202e5c8((unsigned char*)data_ov004_021708c8, 0xb666, 0xa800, 0);
    func_020a27a0(data_ov004_021708c8);
    func_020100c4(var3, (int)data_ov004_021708c8);
    func_ov004_0215e47c(arg0, 9)->unknown_c_ |= 0x80;
    var0 = 0x18c6;
    DC_FlushRange(&var0, 2);
    LoadToSubBGStandardPalette(&var0, 2, 2);
    CleanCacheRange(&var0, 2);

    struct Struct_ov004_0215f0c0_10* var28 = func_ov004_0215e47c(arg0, 0x1f5);
    void* var29 = func_ov011_021849c8(arg0);
    if (var28 != 0 && var29 != 0) {
        void* var30 = func_ov023_021f6880(var29, 0x1f4);
        if (var28 != 0 && var30 != 0) {
            var28->unknown_24_ = 0x7e;
            unsigned short* var31 = (unsigned short*)func_ov004_0215e438(func_ov023_021fad18(var30), var28->unknown_22_);
            func_ov023_021f6bec(var29, 0, var28->unknown_24_, *var31);
        }
    }
    return 0;
}
#endif
