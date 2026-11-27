#include <globaldefs.h>
#include "World/Object3D.h"

struct Combatant_02048cf0_3;

struct CellPosition_02048cf0 { int x_0_; int z_4_; };
struct Struct_020e7b48 { int unknown_0_[3]; };

struct CombatantBattleState_02048cf0_2 {
    char unknown_0_[0x20];
    unsigned int unknown_20_;
};

struct Combatant_02048cf0_3 {
    char unknown_0_[0x44];
    int position_44_[3];
    char unknown_50_[0x6e];
    unsigned char motion_be_;
    char unknown_bf_[0x7d];
    CombatantBattleState_02048cf0_2* pBattleState_13c_;
};

extern "C" int GetCombatantReservedCell_020493ec(unsigned char*);
extern "C" int func_020493c8(unsigned char*);
extern "C" int GetCombatantCell_020493a4(unsigned char*);
extern "C" void SetCombatantCell_02049390(unsigned char*, unsigned char);
extern "C" void func_020493b8(unsigned char*, unsigned char);
extern "C" void SetCombatantReservedCell_020493dc(unsigned char*, unsigned char);
extern "C" void SetCombatantCellPosition_02049bd4(unsigned char*, int*);
struct Struct_02010604;
extern "C" void SetMotion_02033b88(Struct_02010604*, int);
struct Combatant_02048c90;
extern "C" void ClearCombatantPath_02048c90(Combatant_02048c90*);
extern "C" struct CellPosition_02048cf0 GetCellPosition_ov000_0216f74c(int* cell);
struct Vector3i;

extern Struct_020e7b48 data_020e7b48;

// USA: PlaceCombatantOnCell_02048cf0
extern "C" ARM void PlaceCombatantOnCell_02048cf0(struct Combatant_02048cf0_3* combatant, int isCurrentCellKept) {
    int cell = GetCombatantReservedCell_020493ec((unsigned char*)combatant);
    if (cell == 0xff) {
        cell = func_020493c8((unsigned char*)combatant);
    }
    if (cell == 0xff) {
        cell = GetCombatantCell_020493a4((unsigned char*)combatant);
    }
    if (isCurrentCellKept != 0) {
        cell = GetCombatantCell_020493a4((unsigned char*)combatant);
    }
    if (cell != 0xff) {
        struct CellPosition_02048cf0 cellPosition = GetCellPosition_ov000_0216f74c(&cell);
        struct Struct_020e7b48 position = data_020e7b48;
        position.unknown_0_[0] = cellPosition.x_0_;
        position.unknown_0_[2] = cellPosition.z_4_;
        unsigned int flags = combatant->pBattleState_13c_->unknown_20_;
        SetCombatantCellPosition_02049bd4((unsigned char*)combatant, position.unknown_0_);
        combatant->pBattleState_13c_->unknown_20_ = flags;
        if (flags & 0x21) {
            *(Vector3i*)combatant->position_44_ = *(Vector3i const*)position.unknown_0_;
        }
    }
    SetCombatantCell_02049390((unsigned char*)combatant, cell & 0xff);
    func_020493b8((unsigned char*)combatant, 0xff);
    if (isCurrentCellKept == 0) {
        SetCombatantReservedCell_020493dc((unsigned char*)combatant, 0xff);
    }
    if (combatant->motion_be_ == 0) {
        SetMotion_02033b88((Struct_02010604*)combatant, 0);
        ((Object3D*)combatant)->IsTransitioningAnimations();
    }
    ((Object3D*)combatant)->SetAnimationPlaybackSpeed(0x1000, 0);
    ClearCombatantPath_02048c90((Combatant_02048c90*)combatant);
}

void force_emission_of_vector3_copy_assignment_operator(Vector3fix* a)
{
    *a = *a;
}
