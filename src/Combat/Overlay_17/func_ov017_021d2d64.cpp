#include <globaldefs.h>
#include "Combat/CombatantRecovery.h"
#include "GameState/GameState.h"

struct Party_02048150;
struct Queue_02038598_5;
struct Struct_020d805c;
struct MessageWindow_020465c0;
struct Struct_02000c9c_62;
struct Struct_ov017_021d2d64_2 { unsigned char unknown_0_; unsigned short unknown_2_; unsigned char unknown_4_; };

struct Struct_ov017_021d2d64_3 {
    short unknown_0_0_ : 11;
    short unknown_1_3_ : 5;
};

struct Struct_ov017_021d2d64_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    signed char unknown_3_;
    signed char unknown_4_[3];
    signed char unknown_7_;
    Struct_ov017_021d2d64_3 unknown_8_[3];
    signed char unknown_e_;
};

struct Struct_ov017_021d2d64_5 {
    char unknown_0_[4];
    Struct_ov017_021d2d64_4 unknown_4_;
};

struct Struct_ov017_021d2d64_6 {
    Object3D unknown_0_;
    short unknown_ac_;
};

struct Struct_ov017_021d2d64_7 {
#if defined(jpn)
    char unknown_0_[0xf0];
#else
    char unknown_0_[0x150];
#endif
    unsigned char unknown_150_0_ : 6;
};

struct Struct_ov017_021d2d64_8 {
    char unknown_0_[0x59f];
    unsigned char unknown_59f_;
};

struct Struct_ov017_021d2d64_9 {
    char unknown_0_[0x1c];
    Struct_ov017_021d2d64_8* unknown_1c_;
};

struct Struct_ov017_021d2d64_10 {
    char unknown_0_[0x64];
    int unknown_64_;
};

struct Struct_ov017_021d2d64 {
    short unknown_0_[2];
};

struct Struct_ov017_021d6ce8_2 {
    char unknown_0_[0x18];
    Struct_ov017_021d2d64 unknown_18_;
};

extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" void func_ov017_021d2d00(void* arg0, void* arg1);
extern "C" void func_ov017_021d35f8(Struct_ov017_021d2d64_2* arg0);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" int IsInParty_02086ef0(Party_02048150* party, int objectIndex);
extern "C" int IsTypeInQueue_02046b60(Queue_02038598_5* queue, int type);
extern "C" void* func_020d7a50(void);
extern "C" int IsQueueEmpty_02046b08(void** queue);
extern "C" int IsPerformingGesture_020535c8(signed char* gameObject);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" int func_020d805c(Struct_020d805c* arg0);
extern "C" int func_ov017_0218b628(signed char);
extern "C" void func_ov017_0218b5c0(int arg0, signed char arg1);
extern "C" void func_ov017_02191ba0(char*, int, int);
extern "C" void func_020e1154(void* arg0);
extern "C" int func_02048418(unsigned char* arg0, unsigned short arg1);
extern "C" void func_ov017_021c9e00(int arg0, int arg1, int arg2, int arg3);
extern "C" void __clear(void* arg0, unsigned int arg1);
extern "C" void ClearMessageParams_02046380(void* window);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width);
extern "C" void SetMessageNumber_020465c0(MessageWindow_020465c0* window, int index, int number);
#if defined(jpn)
extern "C" int func_020e2168(char* arg0, const char* arg1, int arg2, int arg3, bool arg4);
extern "C" void SetMessageString_02046574(void* window, int index, char* text);
extern "C" void func_020474a8(void* arg0, int arg1, char* arg2, char* arg3);
extern "C" void func_020d7e10(void* arg0, void* arg1, int arg2, int arg3, int arg4);
extern char data_ov017_021d8b4c[];
static inline char* inline_ov017_021d2d64(GameObject* arg0) { SDK_NULL_ASSERT(arg0); return arg0->baseStats_->unk; }
#else
extern "C" int func_020e04f4(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5);
extern "C" void InitNoun_020e46c4(void* noun);
extern "C" void InitPartyMemberNoun_020e4bf4(void* noun, int partyMemberIndex);
extern "C" void func_02046608(void* arg0, int arg1, char* arg2, char* arg3, int arg4, int arg5, int arg6);
extern "C" void func_020d7e10(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);
#endif
extern "C" void func_ov017_021d2cc0(void* arg0);
extern "C" void func_ov017_021a5a88(int arg0, int arg1, int arg2, int arg3, unsigned char arg4);

extern const Struct_ov017_021d6ce8_2 data_ov017_021d6ce8;
extern char data_ov017_021d8298[];
extern char data_ov017_021d8288[];

// USA: func_ov017_021d2d64
extern "C" ARM void func_ov017_021d2d64(void* arg0, Struct_ov017_021d2d64_5* arg1, GameState* arg2, GameResources* arg3) {
    void* var0;
    int var1;
    Party_02048150* var2;
    Struct_ov017_021d2d64_7* var3;
    int var4;
    Queue_02038598_5* var5;
    short var6;
    Struct_ov017_021d2d64_4* var7 = &arg1->unknown_4_;
    var1 = GetProtagonistObjectIndex_020100a8(arg2);
    var2 = (Party_02048150*)GetParty_02010828(arg2);
    Struct_ov017_021d2d64_4 var8;
    Struct_ov017_021d2d64_2 var9[4];
    Struct_ov017_021d2d64_2 var10[4];
    func_ov017_021d2d00(&var8, var7);
    unsigned char var11 = var8.unknown_7_;
    signed char* var12 = var8.unknown_4_;
    for (int var13 = 0; var13 < 4; var13++) {
        func_ov017_021d35f8(&var9[var13]);
        func_ov017_021d35f8(&var10[var13]);
    }
    int var14 = (int)arg3->unknown_ptr_array_371c[0];

    switch (var7->unknown_0_) {
    case 1: {
        var8.unknown_7_ = 0;
        memset(var8.unknown_4_, 0, 3);
        memset(var8.unknown_8_, 0, 6);
        signed char var15 = 0;
        for (int var16 = 0; var16 < var7->unknown_7_; var16++) {
            int var17 = var7->unknown_4_[var16];
            if (IsInParty_02086ef0(var2, var17) != 0) {
                var8.unknown_4_[var15] = var17;
                Struct_ov017_021d2d64_3* var18 = &var8.unknown_8_[var15];
                var18->unknown_0_0_ = var7->unknown_8_[var16].unknown_0_0_;
                var18->unknown_1_3_ = var7->unknown_8_[var16].unknown_1_3_;
                var15++;
            }
        }
        var8.unknown_7_ = var15;
        if (var8.unknown_7_ == 0) {
            return;
        }

        var5 = (Queue_02038598_5*)arg3->unknown_ptr_array_36fc[0];
        int var19 = 1;
        if (IsTypeInQueue_02046b60(var5, 10)) var19 = 0;
        if (IsTypeInQueue_02046b60(var5, 3)) var19 = 0;
        if (IsTypeInQueue_02046b60(var5, 0x27)) var19 = 0;
        if (IsTypeInQueue_02046b60(var5, 0x10) && ((Struct_ov017_021d2d64_9*)arg3->unknown_ptr_array_371c[4])->unknown_1c_ != 0 &&
            (((Struct_ov017_021d2d64_9*)arg3->unknown_ptr_array_371c[4])->unknown_1c_->unknown_59f_ & 4)) {
            var19 = 0;
        }

        if (var19) {
            var3 = (Struct_ov017_021d2d64_7*)func_020d7a50();
            var19 = 1;
            if (IsQueueEmpty_02046b08((void**)var5) == 0) var19 = 0;
            if (IsTypeInQueue_02046b60(var5, 0x1a)) var19 = 1;
            GameObject* var20 = arg2->GetUnknownGameObject();
            if (var20 != 0 && IsPerformingGesture_020535c8((signed char*)var20)) var19 = 0;
#if defined(jpn)
            if (*(int*)(GetMessageWindow_020421a0() + 0x868) != 0 && func_020d805c((Struct_020d805c*)var3) == 0) var19 = 0;
#else
            if (*(int*)(GetMessageWindow_020421a0() + 0x998) != 0 && func_020d805c((Struct_020d805c*)var3) == 0) var19 = 0;
#endif

            for (int var21 = 0; var21 < var8.unknown_7_; var21++) {
                if (var3->unknown_150_0_ >= 3) var19 = 0;
                int var22 = var8.unknown_4_[var21];
                Struct_ov017_021d2d64 var23 = data_ov017_021d6ce8.unknown_18_;
                GameObject* var24 = GetPartyMemberBaseByIndex_0200ff1c(arg2, var22);
                if (var24 == 0) continue;
                var4 = func_ov017_0218b628(var22);
                if (var19) func_ov017_0218b5c0(0, var22);
                Struct_ov017_021d2d64_3* var25 = &var8.unknown_8_[var21];
                int var26 = 0;
                if (var8.unknown_1_ == 1) {
                    int var27 = var24->baseStats_->primaryStats.maxHP;
                    int var28 = var24->unknown_ac_.unknown_84_->unknown_4_;
                    int var29 = var28 + var25->unknown_0_0_;
                    int var30;
                    if (var29 >= var27) {
                        var30 = var27 - var28;
                    } else {
                        var30 = var29 - var28;
                    }
                    var24->unknown_ac_.unknown_84_->unknown_4_ = var28 + var30;
                    var25->unknown_0_0_ = var30;
                    if (var30 > 0) {
                        var23.unknown_0_[0] = 0x232c;
                        var26 = 1;
                    }
                } else if (var8.unknown_1_ == 2) {
                    int var31 = var24->baseStats_->primaryStats.maxMP;
                    int var32 = var24->unknown_ac_.unknown_84_->unknown_6_;
                    int var33 = var32 + var25->unknown_0_0_;
                    int var34;
                    if (var33 >= var31) {
                        var34 = var31 - var32;
                    } else {
                        var34 = var33 - var32;
                    }
                    var24->unknown_ac_.unknown_84_->unknown_6_ = var32 + var34;
                    var25->unknown_0_0_ = var34;
                    if (var34 > 0) {
                        var23.unknown_0_[0] = 0x795f;
                        var26 = 1;
                    }
                } else if (var8.unknown_1_ == 4) {
                    int var35 = 1;
                    if (IsTypeInQueue_02046b60(var5, 0x1a) && ((Struct_ov017_021d2d64_10*)arg3->unknown_ptr_array_3afc[4])->unknown_64_ != 0) {
                        var35 = 0;
                    }
                    if ((int)var24->unknown_ac_.unknown_84_->unknown_4_ > 0 || var25->unknown_0_0_ == 0 || var35 == 0) {
                        var25->unknown_0_0_ = 0;
                    } else {
                        Struct_ov017_021d2d64_6* var36 = (Struct_ov017_021d2d64_6*)arg2->GetUnknownGameObject();
                        if (var36 != 0 && (var36->unknown_ac_ != 0 || var36->unknown_0_.GetFlag(0x8000000) != 0)) {
                            func_ov017_02191ba0((char*)arg3, var22, var25->unknown_0_0_);
                            var26 = 0;
                        } else {
                            func_02053fe4(var24, var25->unknown_0_0_, 1);
                            if (var24->baseStats_->primaryStats.maxHP < var25->unknown_0_0_) {
                                var25->unknown_0_0_ = var24->baseStats_->primaryStats.maxHP;
                            }
                            var26 = 1;
                            if (IsTypeInQueue_02046b60(var5, 0x1a)) {
                                func_020e1154((void*)0x1f4);
                            }
                            var23.unknown_0_[0] = 0x7955;
                        }
                    }
                } else if (var8.unknown_1_ == 3) {
                    if (func_02048418((unsigned char*)var24, 2) == 0) {
                        var25->unknown_0_0_ = 0;
                    } else {
                        var25->unknown_0_0_ = 1;
                        var23.unknown_0_[0] = 0x794b;
                        var26 = 1;
                    }
                }
                if (var8.unknown_2_ == 3) {
                    if (func_02048418((unsigned char*)var24, 2) == 0) {
                        var25->unknown_1_3_ = 0;
                    } else {
                        var25->unknown_1_3_ = 1;
                        var23.unknown_0_[1] = 0x794b;
                        var26 = 1;
                    }
                }
                if (var26) {
                    func_ov017_021c9e00(var22, 0, 0, 1);
                }
                if (var19) {
                    for (int var37 = 0; var37 < 2; var37++) {
                        if (var3->unknown_150_0_ >= 3) continue;
                        var0 = (void*)GetMessageWindow_020421a0();
                        var6 = var23.unknown_0_[var37];
                        if (var6 < 0) continue;
#if defined(jpn)
                        char var38[0x80];
                        __clear(var38, 0x80);
                        func_020e2168(var38, data_ov017_021d8b4c, var6, 0, true);
                        ClearMessageParams_02046380(var0);
                        SetMessageString_02046574(var0, 2, inline_ov017_021d2d64(var24));
#else
                        char var38[0x100];
                        __clear(var38, 0x100);
                        func_020e04f4((int)var38, data_ov017_021d8288, var6, 0, 1, (int)data_ov017_021d8298);
                        ClearMessageParams_02046380(var0);
                        char var39[0xc];
                        InitNoun_020e46c4(var39);
                        InitPartyMemberNoun_020e4bf4(var39, var24->obj3D_.unknown_4_);
                        *(char**)((char*)var0 + 0x10) = var39;
#endif
                        SetMessageNumberWidth_020465f0((unsigned char*)var0, 0, 0);
                        SetMessageNumber_020465c0((MessageWindow_020465c0*)var0, 0, var25->unknown_0_0_);
                        SetMessageNumberWidth_020465f0((unsigned char*)var0, 9, 0);
                        SetMessageNumber_020465c0((MessageWindow_020465c0*)var0, 9, var24->obj3D_.unknown_4_);
                        char var40[0x80];
                        __clear(var40, 0x80);
#if defined(jpn)
                        func_020474a8(var0, 0xc, var38, var40);
                        func_020d7e10(var3, var40, 0, 0, 1);
#else
                        func_02046608(var0, 0xc, var38, var40, 0xe3, 0, 1);
                        func_020d7e10(var3, var40, 0, 0, 1, 1);
#endif
                    }
                }
                if (!var19 || !var26) {
                    func_ov017_0218b5c0(var4, var22);
                }
            }
            var8.unknown_0_ = 2;
        } else {
            var8.unknown_0_ = 4;
            Struct_ov017_021d2d64_3* var41;
            for (int var42 = 0; var42 < 3; var42++) {
                var41 = var8.unknown_8_;
                var41[var42].unknown_0_0_ = 0;
                var41[var42].unknown_1_3_ = 0;
            }
        }
        var8.unknown_e_ = var1;
        func_ov017_021d2cc0(&var8);
        break;
    }
    case 2:
    case 3:
        for (int var43 = 0; var43 < var11; var43++) {
            Struct_ov017_021d2d64_3* var44 = &var8.unknown_8_[var43];
            int var45 = var43 * sizeof(Struct_ov017_021d2d64_2);
            int var46 = var44->unknown_0_0_;
            *(unsigned short*)((char*)var9 + 2 + var45) = var46;
            if (var46 > 0) {
                *((unsigned char*)var9 + var45) = 3;
            } else {
                *((unsigned char*)var9 + var45) = 0;
            }
            int var47 = var44->unknown_1_3_;
            *(unsigned short*)((char*)var10 + 2 + var45) = var47;
            if (var47 > 0) {
                *((unsigned char*)var10 + var45) = 3;
            } else {
                *((unsigned char*)var10 + var45) = 0;
            }
        }
        func_ov017_021a5a88(var14, (int)var12, (int)var9, (int)var10, var11);
        break;
    case 4:
        for (int var48 = 0; var48 < var11; var48++) {
            var9[var48].unknown_2_ = 0;
            var9[var48].unknown_0_ = 2;
            var10[var48].unknown_2_ = 0;
            var10[var48].unknown_0_ = 2;
        }
        func_ov017_021a5a88(var14, (int)var12, (int)var9, (int)var10, var11);
        break;
    }
}
