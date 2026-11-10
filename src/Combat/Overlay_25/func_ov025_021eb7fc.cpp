#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_ov025_021e4450;
struct BattleAction_ov000_0215440c_2;
struct BattleAction_ov000_0215440c;
struct Struct_02033834;

struct Struct_ov025_021eb7fc {
    char unknown_0_[0x1c4];
    unsigned int unknown_1c4_;
};

struct Struct_ov025_021eb7fc_2 {
    char unknown_0_[0x278];
    unsigned char unknown_278_;
    char unknown_279_[3];
    void* unknown_27c_;
};

struct Struct_ov025_021eb7fc_3 {
    char unknown_0_[0xae];
    short unknown_ae_;
};

struct Struct_ov025_021eb7fc_4 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov025_021eb7fc_5 {
    char unknown_0_[0xe];
    short unknown_e_;
};

extern "C" void* GetBattleScene_ov000_02160130(void);
extern "C" struct Struct_ov025_021eb7fc_2* GetBattleCamera_ov000_02160f14(void* battleScene);
extern "C" void* GetCurrentBattleAction_ov000_02160f20(void* battleScene);
extern "C" void func_ov025_021eb00c(struct Struct_ov025_021e4450* arg0);
extern "C" void func_ov000_02163710(void* arg0, int arg1);
extern "C" void func_ov025_021eb8e8(struct Struct_ov025_021eb7fc* arg0);
extern "C" struct Struct_ov025_021eb7fc_4* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index);
extern "C" struct Struct_ov025_021eb7fc_5* GetActionTarget_ov000_021600f8(struct BattleAction_ov000_0215440c* action, int index);
extern "C" void func_02033920(struct Struct_ov025_021eb7fc_3* arg0, int arg1, int arg2);
extern "C" void SetFacingInstantly_02033874(struct Struct_02033834* object, int angle);

// USA: func_ov025_021eb7fc
extern "C" ARM void func_ov025_021eb7fc(struct Struct_ov025_021eb7fc* arg0) {
    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = GetBattleScene_ov000_02160130();
    struct Struct_ov025_021eb7fc_2* var3 = GetBattleCamera_ov000_02160f14(var2);
    var3->unknown_27c_ = GetCurrentBattleAction_ov000_02160f20(var2);
    func_ov025_021eb00c((struct Struct_ov025_021e4450*)arg0);
    func_ov000_02163710(var2, 0);
    func_ov025_021eb8e8(arg0);
    if (!(arg0->unknown_1c4_ & 0x20)) {
        ClearFlags04((GameResources*)var1, 0x400);
        if (arg0->unknown_1c4_ & 0x80) {
            void* var4 = GetCurrentBattleAction_ov000_02160f20(var2);
            struct Struct_ov025_021eb7fc_4* var5 = GetActionActor_ov000_02160094((struct BattleAction_ov000_0215440c_2*)var4, 0);
            struct Struct_ov025_021eb7fc_5* var6 = GetActionTarget_ov000_021600f8((struct BattleAction_ov000_0215440c*)var4, 0);
            if (var5 != 0 && var6 != 0) {
                struct Struct_ov025_021eb7fc_3* var7 = (Struct_ov025_021eb7fc_3*)var0->GetCombatantByIndex(var5->unknown_20_);
                if (var7 != 0) {
                    func_02033920(var7, var6->unknown_e_, 0);
                    SetFacingInstantly_02033874((struct Struct_02033834*)var7, var7->unknown_ae_);
                }
            }
        }
        var3->unknown_278_ = 1;
    }
    arg0->unknown_1c4_ |= 0x20;
}
