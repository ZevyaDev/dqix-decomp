#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Combat/Main/BattleList.h"
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "World/Object3D.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#define data_ov003_0217fdbb data_ov003_0217e5e3
#define data_ov003_0217f2e8 data_ov003_0217dfe8
#define data_ov003_0217f2ce data_ov003_0217dfce
extern "C" int func_020e2168(char* arg0, const char* arg1, int arg2, int arg3, bool arg4);
extern char data_ov003_0217e5f8;
#endif

struct Struct_ov003_021575dc_3 { unsigned char unknown_0_0_ : 1; };

struct Struct_ov003_021575dc_6 {
    unsigned char unknown_0_[0x186];
    unsigned char unknown_186_[0xd];
    unsigned char unknown_193_[0x49c - 0x193];
    Struct_ov003_021575dc_3 unknown_49c_;
#if defined(jpn)
    unsigned char unknown_49d_[0x8b8 - 0x49d];
#else
    unsigned char unknown_49d_[0x950 - 0x49d];
#endif
    int unknown_950_;
};

struct Struct_ov003_021575dc_7 : GameObject {
#if defined(jpn)
    unsigned char unknown_13c_[0x144 - 0x13c];
#else
    unsigned char unknown_13c_[0x150 - 0x13c];
#endif
    Struct_ov003_021575dc_6* unknown_150_;
};

struct Struct_ov003_021575dc_5 {
#if defined(jpn)
    unsigned char unknown_0_[0x2a];
#else
    unsigned char unknown_0_[0x36];
#endif
    short unknown_36_;
};

struct Struct_ov003_021575dc {
#if defined(jpn)
    unsigned char unknown_0_[0x15c];
#else
    unsigned char unknown_0_[0x244];
#endif
};

struct Struct_ov003_021575dc_4 {
    char* unknown_0_;
    unsigned char unknown_4_[4];
    void* unknown_8_;
    unsigned char unknown_c_[0x18 - 0xc];
    Struct_ov003_021575dc_5* unknown_18_;
    unsigned char unknown_1c_[0x80 - 0x1c];
    unsigned char unknown_80_[0x90 - 0x80];
#if defined(jpn)
    unsigned char unknown_90_[0x174 - 0x90];
#else
    unsigned char unknown_90_[0x178 - 0x90];
#endif
    unsigned char unknown_178_[0x1d0 - 0x178];
    int unknown_1d0_;
    unsigned char unknown_1d4_[0x1e2 - 0x1d4];
    short unknown_1e2_;
    unsigned char unknown_1e4_[2];
    short unknown_1e6_;
    short unknown_1e8_;
    short unknown_1ea_;
    short unknown_1ec_[2];
    short unknown_1f0_;
    unsigned char unknown_1f2_[0x1f7 - 0x1f2];
    signed char unknown_1f7_;
    unsigned char unknown_1f8_;
    unsigned char unknown_1f9_;
    unsigned char unknown_1fa_[0x200 - 0x1fa];
    Struct_ov003_021575dc* unknown_200_;
    void* unknown_204_;
    unsigned char unknown_208_[0x280 - 0x208];
    Object3D unknown_280_;
    int unknown_32c_;
    unsigned char unknown_330_[0x338 - 0x330];
    unsigned char unknown_338_;
};

extern "C" void* func_02010828(GameState*);

extern "C" int func_02080468(void* arg0, int arg1);
struct Struct_02081f20_2;
extern "C" void func_0208203c(Struct_02081f20_2*);
struct Struct_02108760;
extern "C" void func_0205eaa0(Struct_02108760*, int, int);
struct Struct_0207fe44;
extern "C" void func_0207fe44(Struct_0207fe44*);
extern "C" int func_ov003_02155ffc(void* arg0, int arg1);
extern "C" int func_ov003_02155f88(void* arg0, int arg1);
extern "C" void func_ov003_0215873c(void* arg0);
extern "C" void func_ov003_02158a50(unsigned char*);
struct Struct_02109bf4_2;
extern "C" void func_0209c830(Struct_02109bf4_2*, int);
extern "C" int func_0209ca2c(void* arg0);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);
extern "C" void* func_020de824(void* arg0);
extern "C" void func_0207cbe8(char* arg0);
extern "C" void func_0207cc0c(char* arg0);
extern "C" int func_ov023_021ed6cc(int arg0);
struct Struct_020a13c4;
extern "C" void func_020a13c4(Struct_020a13c4*);
extern "C" void func_020a13e4(void* arg0, void* arg1, int arg2, unsigned short arg3, unsigned char arg4);
struct Struct_020a1180;
extern "C" void func_020a1380(Struct_020a1180*);
extern "C" void func_ov003_021580a0(Struct_ov003_021575dc*);
struct Struct_020a15bc;
extern "C" void* func_020a15bc(Struct_020a15bc*, int);
struct Struct_ov003_021575dc_2;
extern "C" void func_ov003_02158140(Struct_ov003_021575dc_2*, int);

extern "C" int func_020100a8(GameState*);
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" void func_020de848(void* arg0);
extern "C" ARM int func_020de980(void* arg0, void* arg1, void* arg2, int arg3, int arg4);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" void func_020dc2d0(int);
struct GameResources;
ARM int IsBrightnessTransitionActive(GameResources*);
extern "C" ARM void* func_0208247c(void* arg0);

extern "C" void __clear(void* arg0, int arg1);
extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);
extern "C" ARM int func_020813ec(void* arg0, int arg1);
extern "C" void func_0207d300(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_0205ec34(void);
extern "C" void func_020e046c(void* arg0, void* arg1, int arg2, int arg3);
extern "C" void func_02082490(void* arg0, void* arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov003_02158334(void* arg0);
extern "C" int func_ov003_021550dc(void* arg0);
extern "C" int func_ov003_02155208(void* arg0);
extern "C" int func_ov003_02155fc0(void* arg0, int arg1);
extern "C" void func_ov003_02155580(void* arg0, int arg1);
extern "C" int func_ov003_02155618(void* arg0);
extern "C" void func_ov003_02155e38(void* arg0);
extern "C" void func_ov003_021580d8(void* arg0, void* arg1);
extern "C" int func_ov003_02158754(void* arg0);
extern "C" int func_ov023_021ed724(void* arg0, void* arg1, int arg2);
extern "C" void func_ov023_021eb138(void* arg0, int arg1);
extern "C" void func_ov023_021eb080(void* arg0, void* arg1);
extern "C" void func_ov023_021eb564(void* arg0, void* arg1, int arg2);
extern "C" void func_ov023_021eb43c(void* arg0);
extern "C" void func_ov023_021eb26c(void* arg0);

extern char data_02108760;
extern char data_ov003_0217fdbb;
extern const char* data_020f2a38;
extern const char* data_020f2a30;
extern short data_ov003_0217f2e8[];
extern char data_02109bf4;
extern short data_ov003_0217f2ce[];
extern char data_ov003_0217fdd0;
extern char data_ov003_0217fde7;

// USA: func_ov003_021575dc
extern "C" ARM void func_ov003_021575dc(void* arg0) {
    Struct_ov003_021575dc_4* var0 = (Struct_ov003_021575dc_4*)arg0;
    GameState* var1 = GameState::GetInstance();
    void* var2 = func_02010828(var1);
    unsigned char var3 = var0->unknown_1f9_;
    void* var4;
    short* var5 = var0->unknown_1ec_;
    Struct_ov003_021575dc_5* var6 = var0->unknown_18_;

    if (var3 == 0) {
        var0->unknown_1e6_ = 3;
        unsigned char var7 = *(unsigned char*)((char*)var2 + 0xf7c);
        switch (var7) {
        case 3: var0->unknown_1e6_ = 4; break;
        case 4: var0->unknown_1e6_ = 5; break;
        }
        if (var0->unknown_1e2_ < 0) {
            short var8 = (short)func_02080468(var6, var0->unknown_1e6_);
            var0->unknown_1e2_ = var8;
            var0->unknown_1e8_ = var0->unknown_1e2_;
        }
        var6->unknown_36_ = var0->unknown_1e2_;
        func_ov003_02158334(arg0);
        func_0208203c((Struct_02081f20_2*)var0->unknown_80_);
        var0->unknown_8_ = 0;
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 1) {
        var0->unknown_8_ = &var0->unknown_1e2_;
        if (func_ov003_021550dc(arg0) != 0) {
            func_0205eaa0((Struct_02108760*)&data_02108760, 1, 0);
            func_0208203c((Struct_02081f20_2*)var0->unknown_80_);
            var0->unknown_8_ = 0;
            int var9 = func_02080468(var6, var0->unknown_1e6_);
            short var10 = var0->unknown_1e2_ - var9;
            unsigned char var11 = var0->unknown_1f2_[var10];
            var0->unknown_1f7_ = var11;
            var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
            func_0207fe44((Struct_0207fe44*)var6);
        } else if (func_ov003_02155208(arg0) != 0) {
            var0->unknown_8_ = 0;
            var5[0] = 7;
            var0->unknown_1f8_ = 7;
            func_0207fe44((Struct_0207fe44*)var6);
        }
    } else if (var3 == 2) {
        signed char var12 = var0->unknown_1f7_;
        if (func_ov003_02155ffc(arg0, var12) != 0) {
            var5[0] = 0x10;
            var0->unknown_1f8_ = 7;
            return;
        }
        var5[0] = 0x11;
        var12 = var0->unknown_1f7_;
        if (func_ov003_02155fc0(arg0, var12) != 0) {
            var5[1] = 0x41;
            var0->unknown_1f8_ = 7;
            func_0207fe44((Struct_0207fe44*)var6);
            return;
        }
        var12 = var0->unknown_1f7_;
        if (func_ov003_02155f88(arg0, var12) != 0) {
            var5[1] = 0x12;
            var0->unknown_1f8_ = 7;
            func_0207fe44((Struct_0207fe44*)var6);
            return;
        }
        var5[1] = 0x13;
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 3) {
        func_ov003_02155580(arg0, 1);
        var0->unknown_1e8_ = var0->unknown_1ea_ = 7;
        var0->unknown_18_->unknown_36_ = var0->unknown_1ea_;
        func_020813ec(var0->unknown_18_, var0->unknown_1e6_);
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 4) {
        int var13 = func_ov003_02155618(arg0);
        if (var13 == -1) goto state4_neg1;
        if (var13 != 1) goto state4_done;
        var5[0] = 0x15;
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
        goto state4_done;
    state4_neg1:
        var5[0] = 0x14;
        var0->unknown_1f8_ = 7;
    state4_done:;
    } else if (var3 == 5) {
        BackgroundLoader* var14 = BackgroundLoader::GetInstance();
        signed char var15 = var0->unknown_1f7_;
        int var16 = 0;
        Struct_ov003_021575dc_7* var17 = (Struct_ov003_021575dc_7*)var1->GetPartyMemberByIndex(var15);
        if (var17 != 0) {
            Struct_ov003_021575dc_6* var18 = var17->unknown_150_;
            var16 = var18->unknown_950_;
        }
        char var19[0x18];
        __clear(var19, 0x18);
        sprintf(var19, &data_ov003_0217fdbb, var16);
        var0->unknown_1d0_ = var14->QueueLoadFile(var19, (SafeAllocator*)0);
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 6) {
        BackgroundLoader* var20 = BackgroundLoader::GetInstance();
        if (var20->GetTaskStatus(var0->unknown_1d0_) != 0) {
            void* var21; unsigned int var22;
            var20->GetLoadedFileByID(var0->unknown_1d0_, &var21, &var22);
            func_0208247c(var0->unknown_90_);
            if (var21 != 0) {
                func_02082490(var0->unknown_90_, var21, var22, 1, 0);
            }
            var20->RemoveTask(var0->unknown_1d0_);
            var0->unknown_1d0_ = -1;
            var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
        }
    } else if (var3 == 7) {
        BackgroundLoader* var23 = BackgroundLoader::GetInstance();
#if defined(jpn)
        var0->unknown_1d0_ = var23->QueueLoadGP1(data_020f2a38, (SafeAllocator*)0);
#else
        var0->unknown_1d0_ = var23->QueueLoadFileInGP2(data_020f2a38, data_020f2a30, (SafeAllocator*)0);
#endif
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 8) {
        BackgroundLoader* var24 = BackgroundLoader::GetInstance();
        if (var24->GetTaskStatus(var0->unknown_1d0_) != 0) {
            void* var25; unsigned int var26;
            var24->GetLoadedFileByID(var0->unknown_1d0_, &var25, &var26);
            ((SafeAllocator*)(var0->unknown_0_ + 0x78))->Reset();
            var0->unknown_1f0_ = -1;
            signed char var27 = var0->unknown_1f7_;
            Struct_ov003_021575dc_7* var28 = (Struct_ov003_021575dc_7*)var1->GetPartyMemberByIndex(var27);
            if (var28 != 0) {
                Struct_ov003_021575dc_6* var29 = var28->unknown_150_;
                int var30 = var29->unknown_950_;
                var0->unknown_1f0_ = data_ov003_0217f2e8[var30];
            }
            var24->RemoveTask(var0->unknown_1d0_);
            var0->unknown_1d0_ = -1;
            short var31 = var0->unknown_1f0_;
            func_020de848(var0->unknown_178_);
            func_020de980(var0->unknown_178_, var0->unknown_0_ + 0x78, var25, var26, var31);
            var0->unknown_338_ = 1;
            func_ov003_0215873c(arg0);
            var0->unknown_1f9_ = 0x32;
        }
    } else if (var3 == 9) {
        func_02043204((char*)GetMessageWindow_020421a0());
        func_ov003_02158a50((unsigned char*)arg0);
        func_0209c830((Struct_02109bf4_2*)&data_02109bf4, 0x34);
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 0xa) {
        if (func_0209ca2c(&data_02109bf4) != 0) {
            goto tail;
        }
        if (var0->unknown_280_.HasAnimationStopped() == 0) {
            goto tail;
        }
        var0->unknown_32c_ = 0;
        func_ov003_02155e38(arg0);
        signed char var32 = var0->unknown_1f7_;
        Struct_ov003_021575dc_7* var33 = (Struct_ov003_021575dc_7*)var1->GetPartyMemberByIndex(var32);
        int var34 = -1;
        if (var33 != 0) {
            Struct_ov003_021575dc_6* var35 = var33->unknown_150_;
            var34 = var35->unknown_950_;
        }
        if (var34 > 0) {
            void* var36 = func_0205ec34();
            if (func_0206dfb0((int)var36, (unsigned char*)var36 + 0x8c, var34 + 0x8b + 0x1100) == 0) {
                func_0206df6c(var36, (unsigned char*)var36 + 0x8c, var34 + 0x8b + 0x1100, 1);
                var5[0] = 0x16;
                var5[1] = 0x17;
                var0->unknown_1f9_ = var0->unknown_1f9_ + 1;

                char var37[0x38];
                ((SafeAllocator*)var37)->ResetAllocatorPointer();
                func_020de824(var37 + 0x14);
                func_0207cbe8(var37);
                func_0207cbe8(var37);
                *(void**)(var37 + 0x2c) = var0->unknown_178_;
                func_0207d300(var37, var0->unknown_1f0_, 1, 0);
                func_0207cc0c(var37);
                return;
            }
        }
        var0->unknown_1f9_ = 0x64;
    } else if (var3 == 0xb) {
#if defined(jpn)
        var0->unknown_338_ = 0;
#endif
        var5[0] = 0x18;
        var5[1] = 0x19;
        var0->unknown_1f8_ = 7;
    } else if (var3 == 0x64) {
        short var38[12];
        __clear(var38, 0x18);
        unsigned short var39 = 0;
        int var40 = func_020100a8(var1);
        Struct_ov003_021575dc_7* var41 = (Struct_ov003_021575dc_7*)func_0200ff1c(var1, var40);
        for (int var42 = 1; var42 < 13; var42++) {
            Struct_ov003_021575dc_6* var43 = var41->unknown_150_;
            if (var43->unknown_186_[(unsigned char)var42] >= 0xa) {
                short var44 = data_ov003_0217f2ce[var42];
                if (func_ov023_021ed6cc(var44) == 0) {
                    var38[var39] = var44;
                    var39++;
                }
            }
        }
        if (var39 == 0) goto emptyResult0x64;
        {
            var4 = var0->unknown_0_;
            ((SafeAllocator*)((char*)var4 + 0x64))->Reset();
            char var45[0x14];
            func_020a13c4((Struct_020a13c4*)var45);
            func_020a13e4(var45, (char*)var4 + 0x64, (int)var38, var39, 8);

            Struct_ov003_021575dc var46[12];
            Struct_ov003_021575dc* var47 = var46;
            do {
                func_020a1380((Struct_020a1180*)var47);
                func_ov003_021580a0(var47);
                var47++;
            } while (var47 < var46 + 12);

            short var48[12];
            __clear(var48, 0x18);
            int var49 = 0;
            for (int var50 = 0; var50 < var39; var50++) {
                short var51 = var38[var50];
                void* var52 = func_020a15bc((Struct_020a15bc*)var45, var51);
                if (var52 != 0) {
                    func_ov003_021580a0(&var46[var49]);
                    func_ov003_021580d8(&var46[var49], var52);
                    char var53[0x38];
                    __clear(var53, 0x38);
#if defined(jpn)
                    func_020e2168(var53, &data_ov003_0217e5f8, var38[var50], var41->unknown_150_->unknown_49c_.unknown_0_0_, true);
#else
                    BackgroundLoader::AddLockGlobal();
                    unsigned int var54 = 0;
                    char var55[0x40];
                    __clear(var55, 0x40);
                    char var56[0x20];
                    __clear(var56, 0x20);
                    int var57 = var41->unknown_150_->unknown_49c_.unknown_0_0_;
                    sprintf(var55, &data_ov003_0217fdd0, var57);
                    int var58 = var41->unknown_150_->unknown_49c_.unknown_0_0_;
                    sprintf(var56, &data_ov003_0217fde7, var58);
                    void* var59 = ExtractFileFromGP2(var55, var56, &var54);
                    if (var59 != 0) {
                        func_020e046c(var53, var59, var54, var38[var50]);
                    }
                    BackgroundLoader::RemoveLockGlobal();
#endif
                    func_ov003_02158140((Struct_ov003_021575dc_2*)&var46[var49], (int)var53);
                    var48[var49++] = var38[var50];
                }
            }
            if (var49 <= 0) goto emptyResult0x64;
            {
                int var60 = func_ov023_021ed724(var45, var48, var49);
                ((SafeAllocator*)((char*)var4 + 0x64))->Reset();
                var0->unknown_200_ = (Struct_ov003_021575dc*)((SafeAllocator*)((char*)var4 + 0x64))->Allocate(var49 * sizeof(Struct_ov003_021575dc));
                for (int var61 = 0; var61 < var49; var61++) {
                    Struct_ov003_021575dc* var62 = &var46[var61];
                    Struct_ov003_021575dc* var63 = &var0->unknown_200_[var61];
                    func_ov003_021580a0(var63);
                    func_ov003_021580d8(var63, var62);
                    func_ov003_02158140((Struct_ov003_021575dc_2*)var63, (int)((char*)var62 + 0xc));
                }
                void* var64 = ((SafeAllocator*)((char*)var4 + 0x64))->Allocate(1100);
                var0->unknown_204_ = var64;
                func_ov023_021eb138(var64, 6);
                func_ov023_021eb080(var0->unknown_204_, (char*)var4 + 0x64);
                func_ov023_021eb564(var0->unknown_204_, var0->unknown_200_, var39);
                char* var65 = (char*)var0->unknown_204_;
                if (var60 & 1) {
                    *(unsigned short*)(var65 + 0x438) |= 0x400;
                } else {
                    *(unsigned short*)(var65 + 0x438) &= ~0x400;
                }
                char* var66 = (char*)var0->unknown_204_;
                unsigned short* var67;
                var66 += 0x400;
                var67 = (unsigned short*)(var66 + 0x38);
                *var67 = *var67 | 0x10;
                var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
                return;
            }
        }
        goto stateEnd;
    emptyResult0x64:
        var0->unknown_338_ = 0;
        var5[0] = 0x16;
        var5[1] = 0x19;
        var0->unknown_1f8_ = 7;
    stateEnd:;
    } else if (var3 == 0x65) {
        if (var0->unknown_204_ != 0) {
            func_ov023_021eb43c(var0->unknown_204_);
            if (*(unsigned short*)((char*)var0->unknown_204_ + 0x438) & 4) {
                func_ov023_021eb26c(var0->unknown_204_);
                ((SafeAllocator*)(var0->unknown_0_ + 0x64))->Reset();
                var0->unknown_200_ = 0;
                var0->unknown_204_ = 0;
                var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
            }
        }
    } else if (var3 == 0x66) {
        Struct_0208cb08* var68 = func_02094a00();
        func_02094b40(var68);
        func_02094b34(var68, 0x66, 501, 0, 0);
        var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
    } else if (var3 == 0x67) {
        if (func_02094b4c(func_02094a00()) != 0) {
            func_020dc2d0(0);
            var0->unknown_1f9_ = var0->unknown_1f9_ + 1;
        }
    } else if (var3 == 0x68) {
        GameResources* var69 = GetGameResources();
        if (IsBrightnessTransitionActive(var69) != 0) {
            return;
        }
        var0->unknown_338_ = 0;
        var5[0] = 0x16;
        var5[1] = 0x19;
        var0->unknown_1f8_ = 7;
    }

tail:
    if (var0->unknown_1f9_ == 0x32) {
        if (func_ov003_02158754(arg0) != 0) {
            var0->unknown_1f9_ = 9;
        }
    }
}
