#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215ccbc {
    unsigned short unknown_0_0_:2;
    unsigned short unknown_0_2_:4;
    unsigned short unknown_0_6_:10;
};

struct ActionResult_ov000_021584e8 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[0xc - 8];
    short amount_c_;
    short currHP_e_;
    short currMP_10_;
    short maxHP_12_;
    short maxMP_14_;
    char unknown_16_[0x18 - 0x16];
    int unknown_18_;
    unsigned char isCriticalHit_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_;
};

// USA: SetActionResult_ov000_0215ccbc
extern "C" ARM void SetActionResult_ov000_0215ccbc(int battle, struct ActionResult_ov000_021584e8* result, GameObject* combatant,
                                 short amount, short currHP, short currMP, unsigned long long flags, unsigned char isCriticalHit) {
    if (result == NULL) return;
    result->amount_c_ = amount;
    result->currHP_e_ = currHP;
    result->currMP_10_ = currMP;
    result->maxHP_12_ = combatant->currentStats_->primaryStats.maxHP;
    result->maxMP_14_ = combatant->currentStats_->primaryStats.maxMP;
    result->unknown_18_ = *(int*)((char*)combatant->currentStats_->unk1 + 0);
    result->unknown_1d_ = ((struct Struct_ov000_0215ccbc*)((char*)combatant->currentStats_->unk1 + 0xe))->unknown_0_2_;
    result->unknown_1e_ = ((struct Struct_ov000_0215ccbc*)((char*)combatant->currentStats_->unk1 + 0xe))->unknown_0_0_;
    result->unknown_0_ = flags;
    result->unknown_4_ = flags >> 32;
    result->isCriticalHit_1c_ = isCriticalHit;
}
