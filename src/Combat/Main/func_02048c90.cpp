#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct CombatantBattleState_02048c90_2 {
    char unknown_0_[0x10];
    Vector3i cellPosition_10_;
    char unknown_1c_[0x4];
    unsigned int unknown_20_;
    char unknown_24_[0x10];
    unsigned char pathCellCount_34_;
    char unknown_35_[0x3];
    int pathProgress_38_;
    unsigned short pathSpeedScale_3c_;
    char unknown_3e_[0x2];
    Vector3i pathStart_40_;
};

struct Combatant_02048c90 {
    char unknown_0_[0x13c];
    struct CombatantBattleState_02048c90_2* pBattleState_13c_;
};

// USA: ClearCombatantPath_02048c90
extern "C" ARM void ClearCombatantPath_02048c90(struct Combatant_02048c90* combatant) {
    if (combatant->pBattleState_13c_ == NULL) return;
    combatant->pBattleState_13c_->pathCellCount_34_ = 0;
    combatant->pBattleState_13c_->pathProgress_38_ = 0;
    combatant->pBattleState_13c_->pathSpeedScale_3c_ = 0;
    combatant->pBattleState_13c_->pathStart_40_ = combatant->pBattleState_13c_->cellPosition_10_;
    combatant->pBattleState_13c_->unknown_20_ &= ~0x10;
    combatant->pBattleState_13c_->unknown_20_ &= ~0x40;
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
