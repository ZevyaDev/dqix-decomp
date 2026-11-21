#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02088e80;
struct Struct_020a0608;
struct Struct_020a0294;

struct Struct_02000c9c_31 {
    char unknown_0_[0x48];
};

struct Struct_ov000_0215a004 {
    char unknown_0_[0x68];
    struct Struct_02000c9c_31 unknown_68_;
};

extern "C" void func_ov000_021554f4(void* arg0, int arg1, void* arg2, int arg3, unsigned char arg4, int arg5);
extern "C" void func_ov000_02155184(void* arg0, int arg1, int arg2);
extern "C" void func_02088e80(Struct_02088e80*, int);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" void GetBattleRecords_020ac4c0(void*);
extern "C" void func_020a0608(Struct_020a0608*, unsigned int);
extern "C" void func_020a0294(Struct_020a0294*, unsigned int);
extern "C" void SetBattleRecords_020ac494(void*);

// USA: ApplyDamage_ov000_0215a004
extern "C" ARM short ApplyDamage_ov000_0215a004(void* battle, void* attackerIndex, int targetIndex, int damage, unsigned long long* resultFlags,
                                          int action, unsigned char isCriticalHit, int defeatFlags) {
    int remainingHP;
    GameObject* target = GameState::GetInstance()->GetCombatantByIndex(targetIndex);
    if (target == 0) {
        return 0;
    }
    remainingHP = target->currentStats_->primaryStats.currHP - damage;
    if (remainingHP <= 0) {
        remainingHP = 0;
        *resultFlags = 0;
        *resultFlags |= 4;
        func_ov000_021554f4(battle, targetIndex, attackerIndex, action, isCriticalHit, defeatFlags);
        func_02088e80((Struct_02088e80*)target->currentStats_, (signed char)target->obj3D_.unknown_4_);
        func_ov000_02155184(battle, targetIndex, defeatFlags);
        if (targetIndex == GetProtagonistObjectIndex_020100a8(GameState::GetInstance())) {
            struct Struct_ov000_0215a004 records;
            GetBattleRecords_020ac4c0(&records);
            func_020a0608((Struct_020a0608*)&records, 1);
            func_020a0294((Struct_020a0294*)&records.unknown_68_, 1);
            SetBattleRecords_020ac494(&records);
        }
    }
    if (damage > 0) {
        *resultFlags |= 2;
    }
    target->currentStats_->primaryStats.currHP = remainingHP;
    return (short)remainingHP;
}
