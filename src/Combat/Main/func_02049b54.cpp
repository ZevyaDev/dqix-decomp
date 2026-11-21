#include <globaldefs.h>

extern "C" void __clear(void* arg0, int arg1);

struct Struct_02049b54_3 {
    unsigned int unknown_0_[3];
};
struct Struct_02049b54 {
    unsigned int unknown_0_, lineupX_4_, unknown_8_, lineupZ_c_;
};
struct Combatant_02049b54_2 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049b54* pBattleState_13c_;
};

// USA: GetCombatantLineupPosition_02049b54
extern "C" ARM struct Struct_02049b54_3 GetCombatantLineupPosition_02049b54(struct Combatant_02049b54_2* combatant) {
    struct Struct_02049b54_3 position;
    __clear(&position, 0xc);
    if (combatant->pBattleState_13c_ == NULL) return position;
    unsigned int x = combatant->pBattleState_13c_->lineupX_4_;
    unsigned int z = combatant->pBattleState_13c_->lineupZ_c_;
    position.unknown_0_[0] = x;
    position.unknown_0_[1] = 0xcc;
    position.unknown_0_[2] = z;
    return position;
}
