#include <globaldefs.h>

struct ActionTarget_ov000_021600f8 { char unknown_0_[0x20]; struct ActionTarget_ov000_021600f8* pNext_20_; };
struct BattleAction_ov000_0215440c { char unknown_0_[9]; unsigned char targetCount_9_; char unknown_a_[10]; struct ActionTarget_ov000_021600f8* unknown_14_; };
extern "C" struct ActionTarget_ov000_021600f8* GetActionTarget_ov000_021600f8(struct BattleAction_ov000_0215440c* action, int index);

struct ActionActor_ov000_02160094 { char unknown_0_[0x30]; struct ActionActor_ov000_02160094* pNext_30_; };
struct BattleAction_ov000_0215440c_2 { char unknown_0_[8]; unsigned char actorCount_8_; char unknown_9_[7]; struct ActionActor_ov000_02160094* unknown_10_; };
extern "C" struct ActionActor_ov000_02160094* GetActionActor_ov000_02160094(struct BattleAction_ov000_0215440c_2* action, int index);

extern "C" int GetLatestTargetCombatantIndex_ov000_0215ffa0(struct ActionTarget_ov000_021600f8* entry);

// USA: CollectActionCombatantIndex_ov000_021818e0
extern "C" ARM int CollectActionCombatantIndex_ov000_021818e0(int mode, int index, void* record, int* indices) {
    switch (mode) {
    case 0: {
        struct BattleAction_ov000_0215440c* action = (struct BattleAction_ov000_0215440c*)record;
        if (action->targetCount_9_ < index + 1) return 0;
        struct ActionTarget_ov000_021600f8* target = GetActionTarget_ov000_021600f8(action, index);
        *indices = *(short*)((char*)target + 0xe);
        return 1;
    }
    case 1: {
        struct BattleAction_ov000_0215440c_2* action = (struct BattleAction_ov000_0215440c_2*)record;
        if (action->actorCount_8_ < index + 1) return 0;
        struct ActionActor_ov000_02160094* actor = GetActionActor_ov000_02160094(action, index);
        *indices = *(unsigned short*)((char*)actor + 0x20);
        return 1;
    }
    case 2: {
        struct BattleAction_ov000_0215440c* action = (struct BattleAction_ov000_0215440c*)record;
        if (action->targetCount_9_ < index + 1) return 0;
        struct ActionTarget_ov000_021600f8* target = GetActionTarget_ov000_021600f8(action, index);
        *indices = GetLatestTargetCombatantIndex_ov000_0215ffa0(target);
        return 1;
    }
    }
    return 0;
}
