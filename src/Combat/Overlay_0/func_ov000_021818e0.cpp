#include <globaldefs.h>

struct ActionTarget_ov000_021600f8 { char unknown_0_[0x20]; struct ActionTarget_ov000_021600f8* pNext_20_; };
struct BattleAction_ov000_0215440c { char unknown_0_[9]; unsigned char unknown_9_; char unknown_a_[10]; struct ActionTarget_ov000_021600f8* unknown_14_; };
extern "C" struct ActionTarget_ov000_021600f8* GetActionTarget_ov000_021600f8(struct BattleAction_ov000_0215440c* action, int index);

struct ActionActor_ov000_02160094 { char unknown_0_[0x30]; struct ActionActor_ov000_02160094* pNext_30_; };
struct BattleAction_ov000_0215440c_2 { char unknown_0_[8]; unsigned char unknown_8_; char unknown_9_[7]; struct ActionActor_ov000_02160094* unknown_10_; };
extern "C" struct ActionActor_ov000_02160094* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index);

extern "C" int GetLatestTargetCombatantIndex_ov000_0215ffa0(struct ActionTarget_ov000_021600f8* entry);

// USA: func_ov000_021818e0
extern "C" ARM int func_ov000_021818e0(int arg0, int arg1, void* arg2, int* arg3) {
    switch (arg0) {
    case 0: {
        struct BattleAction_ov000_0215440c* var0 = (struct BattleAction_ov000_0215440c*)arg2;
        if (var0->unknown_9_ < arg1 + 1) return 0;
        struct ActionTarget_ov000_021600f8* var1 = GetActionTarget_ov000_021600f8(var0, arg1);
        *arg3 = *(short*)((char*)var1 + 0xe);
        return 1;
    }
    case 1: {
        struct BattleAction_ov000_0215440c_2* var2 = (struct BattleAction_ov000_0215440c_2*)arg2;
        if (var2->unknown_8_ < arg1 + 1) return 0;
        struct ActionActor_ov000_02160094* var3 = GetActionActor_ov000_02160094(var2, arg1);
        *arg3 = *(unsigned short*)((char*)var3 + 0x20);
        return 1;
    }
    case 2: {
        struct BattleAction_ov000_0215440c* var4 = (struct BattleAction_ov000_0215440c*)arg2;
        if (var4->unknown_9_ < arg1 + 1) return 0;
        struct ActionTarget_ov000_021600f8* var5 = GetActionTarget_ov000_021600f8(var4, arg1);
        *arg3 = GetLatestTargetCombatantIndex_ov000_0215ffa0(var5);
        return 1;
    }
    }
    return 0;
}
