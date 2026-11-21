#include <globaldefs.h>
#include "Graphics/AlphaTween.h"
#include "GameState/GameState.h"
#include "std_library_functions.h"
struct BattlePosition_02049c88 { int x_0_; int facing_4_; int z_8_; };
struct Struct_02049520_2 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned char unknown_6_; };
struct CombatantBattleState_02049c88_2 {
    int unknown_0_;
    BattlePosition_02049c88 lineupPosition_4_;
    BattlePosition_02049c88 cellPosition_10_;
    unsigned char unknown_1c_[4];
    int unknown_20_;
    char unknown_24_[0x1c];
    BattlePosition_02049c88 pathStart_40_;
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
    Struct_02049520_2 unknown_4e_;
    unsigned char isOnBattlefield_56_;
    char unknown_57_;
    char unknown_58_[6];
    char unknown_5e_[2];
    AlphaTween unknown_60_;
    int unknown_68_;
    unsigned char unknown_6c_;
    char unknown_6d_[3];
};
struct Combatant_02049c88_3 { GameObject unknown_0_; CombatantBattleState_02049c88_2* pBattleState_13c_; };
extern "C" void func_02049550(Struct_02049520_2*);

// USA: SetCombatantBattleState_02049c88
extern "C" ARM void SetCombatantBattleState_02049c88(Combatant_02049c88_3* combatant, CombatantBattleState_02049c88_2* battleState) {
    combatant->pBattleState_13c_ = battleState;
    if (!combatant->pBattleState_13c_) return;
    memset(combatant->pBattleState_13c_, 0, 0x70);
    combatant->pBattleState_13c_->unknown_0_ = 0;
    BattlePosition_02049c88* lineupPosition = &combatant->pBattleState_13c_->lineupPosition_4_;
    lineupPosition->x_0_ = 0;
    lineupPosition->facing_4_ = 0;
    lineupPosition->z_8_ = 0;
    BattlePosition_02049c88* cellPosition = &combatant->pBattleState_13c_->cellPosition_10_;
    cellPosition->x_0_ = 0;
    cellPosition->facing_4_ = 0;
    cellPosition->z_8_ = 0;
    BattlePosition_02049c88* pathStart = &combatant->pBattleState_13c_->pathStart_40_;
    pathStart->x_0_ = 0;
    pathStart->facing_4_ = 0;
    pathStart->z_8_ = 0;
    combatant->pBattleState_13c_->unknown_20_ = 0;
    combatant->pBattleState_13c_->unknown_4c_ = 0;
    combatant->pBattleState_13c_->unknown_1c_[0] = 0xff;
    combatant->pBattleState_13c_->unknown_1c_[1] = 0xff;
    combatant->pBattleState_13c_->unknown_1c_[2] = 0xff;
    combatant->pBattleState_13c_->unknown_1c_[3] = 0xff;
    combatant->pBattleState_13c_->isOnBattlefield_56_ = 1;
    func_02049550(&combatant->pBattleState_13c_->unknown_4e_);
    combatant->pBattleState_13c_->unknown_60_.Reset();
    memset(combatant->pBattleState_13c_->unknown_58_, 0, 6);
    combatant->pBattleState_13c_->unknown_68_ = 0;
    combatant->pBattleState_13c_->unknown_6c_ = 0xff;
}
