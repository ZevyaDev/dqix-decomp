#include "Resource/ActionDataTables.h"
#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_ov025_021dc324 { char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov025_021dc324_3 { char unknown_0_[0xe]; short unknown_e_; char unknown_10_[0x10]; Struct_ov025_021dc324_3* unknown_20_; };
struct Struct_ov025_021dc324_4 { unsigned short unknown_0_; char unknown_2_[0xe]; Struct_ov025_021dc324* unknown_10_; Struct_ov025_021dc324_3* unknown_14_; };
struct Struct_ov025_021dc324_5 {
    int unknown_0_;
    unsigned int unknown_4_0_:12, unknown_5_4_:20;
    char unknown_8_[12]; unsigned int unknown_14_0_:28, unknown_17_4_:4;
};
struct Struct_ov025_021dc324_6 {
#if defined(jpn)
    char unknown_0_[0x800];
#else
    char unknown_0_[0xc00];
#endif
    char unknown_c00_[0x260]; unsigned char unknown_e60_;
};
struct Struct_ov025_021dc324_7 { char unknown_0_[0x5ce]; short unknown_5ce_; char unknown_5d0_[0xe78 - 0x2a8 - 0x5d0]; };
struct Struct_ov025_021dc324_9 {
    union {
#if defined(jpn)
        struct { char unknown_0_[0x394]; Struct_ov025_021dc324_6 unknown_18_; };
#else
        struct { char unknown_0_[0x18]; Struct_ov025_021dc324_6 unknown_18_; };
#endif
        struct {
#if defined(jpn)
            char unknown2_0_[0x218];
#else
            char unknown2_0_[0x29c];
#endif
            char* unknown_29c_; char unknown_2a0_[8]; Struct_ov025_021dc324_7 unknown_2a8_;
            unsigned char unknown_e78_; char unknown_e79_[0x33]; int unknown_eac_;
#if defined(jpn)
            char unknown_eb0_[0x5b44 - 0xe2c];
#else
            char unknown_eb0_[0x5954 - 0xeb0];
#endif
            Object3D unknown_5954_;
            Object3D unknown_5a00_; char unknown_5aac_[4]; char unknown_5ab0_[0x5c3a - 0x5ab0]; unsigned char unknown_5c3a_;
        };
    };
};
struct Struct_ov025_021ef404 { int unknown_0_; int unknown_4_; };
struct Struct_ov025_021dc324_2 { unsigned char unknown_0_; char unknown_1_; unsigned short unknown_2_; };
extern Struct_ov025_021ef404 data_ov025_021ef404;
extern "C" Struct_ov025_021dc324_2 _ZZ21inline_ov025_021dcf14vE1s;
extern "C" Struct_ov025_021dc324_4* func_ov000_02160f20(void*);
extern "C" int func_ov025_021ea46c(void*);
extern "C" int func_ov000_0216f0bc(void*);
extern "C" Struct_ov025_021dc324_5* FindActionData_02079e2c(char*, int);
extern "C" int func_ov000_02163690(int);
extern "C" int func_ov000_0215fc60(char*);
extern "C" void func_ov025_021df5e4(void*, int, int);
extern "C" int func_ov025_021df9f4(GameObject*);
extern "C" int func_0204936c(unsigned char*);
extern "C" void func_0204a030(unsigned char*, int);
extern "C" void func_02033920(GameObject*, int, int);
extern "C" void func_ov025_021ea474(void*);
extern "C" void func_ov025_021eb6fc(void*, int);

// USA: func_ov025_021dc324
extern "C" ARM void func_ov025_021dc324(Struct_ov025_021dc324_9* arg0) {
    GameState* var0 = GameState::GetInstance();
    char* var1 = arg0->unknown_29c_;
    Struct_ov025_021dc324_6* var2;
    Struct_ov025_021dc324_4* var3 = func_ov000_02160f20(arg0);
    var2 = &arg0->unknown_18_;
    if (!func_ov025_021ea46c(&arg0->unknown_2a8_)) return;
    ActionTables_02108e10* var4 = GetActionTables_020797dc();
    Object3D* var5 = &arg0->unknown_5954_;
    Object3D* var17 = &arg0->unknown_5a00_;
    if (data_ov025_021ef404.unknown_4_) {
        if (!func_ov000_0216f0bc(var2->unknown_c00_)) return;
        var5->MakeHidden();
        var17->MakeHidden();
        int var6 = 0;
        Struct_ov025_021dc324_5* var7 = FindActionData_02079e2c((char*)var4, (short)var3->unknown_0_);
        if (func_ov000_02163690(var3->unknown_0_)) var6 = 1;
        else if (var7) {
            if (var7->unknown_17_4_ == 2) var6 = 1;
            if (var7->unknown_4_0_ == 0xae) var6 = 1;
        }
        if (var6 && var3->unknown_10_ && var3->unknown_14_) {
            int var8;
            int var9 = var3->unknown_10_->unknown_20_;
            int var10 = var3->unknown_14_->unknown_e_;
            var8 = 1;
            if (func_ov000_0215fc60(var1)) {
                if (var9 == 0) var8 = 0;
            }
            if (!var2->unknown_e60_) var8 = 0;
            if (var8) {
                func_ov025_021df5e4(arg0->unknown_5ab0_, var9, var10);
            }
            GameObject* var11 = var0->GetCombatantByIndex(var10);
            if (func_ov025_021df9f4(var11)) {
                if (var7->unknown_4_0_ == 0xae && func_0204936c((unsigned char*)var11)) return;
                if (_ZZ21inline_ov025_021dcf14vE1s.unknown_0_) func_0204a030((unsigned char*)var11, var9);
                else func_02033920(var11, var9, 1);
            }
        }
        if (!arg0->unknown_5c3a_) arg0->unknown_eac_ = 3;
        func_ov025_021ea474(&arg0->unknown_2a8_);
        data_ov025_021ef404.unknown_4_ = 0;
        _ZZ21inline_ov025_021dcf14vE1s.unknown_2_ = 0;
    } else {
        unsigned int var12 = var0->GetEffectiveDeltaTime();
        if (_ZZ21inline_ov025_021dcf14vE1s.unknown_2_ < var12) {
            Struct_ov025_021dc324_3* var13;
            GameState* var14 = GameState::GetInstance();
            var13 = var3->unknown_14_;
            int var15;
            while (var13) {
                GameObject* var16 = var14->GetCombatantByIndex(var13->unknown_e_);
                if (var16 && func_0204936c((unsigned char*)var16)) { var15 = 0; goto readinessDone; }
                var13 = var13->unknown_20_;
            }
            var15 = 1;
        readinessDone:
            if (var15) arg0->unknown_eac_ = 3;
        } else _ZZ21inline_ov025_021dcf14vE1s.unknown_2_ -= var12;
    }
    if (var3->unknown_0_ == 0xdb) { arg0->unknown_2a8_.unknown_5ce_ = 750; return; }
    func_ov025_021eb6fc(&arg0->unknown_2a8_, 0);
}
