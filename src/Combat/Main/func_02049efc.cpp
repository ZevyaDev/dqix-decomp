#include <globaldefs.h>

struct Struct_02010088;
extern "C" int IsDead_02010088(struct Struct_02010088* object);

struct Struct_02049efc {
    unsigned char unknown_0_[0x56];
    unsigned char unknown_56_;
};
struct Struct_02049efc_2 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049efc* unknown_13c_;
};

// USA: SetCombatantOffBattlefieldIfDead_02049efc
extern "C" ARM void SetCombatantOffBattlefieldIfDead_02049efc(struct Struct_02049efc_2* combatant) {
    if (combatant->unknown_13c_ == NULL) return;
    if (IsDead_02010088((struct Struct_02010088*)combatant)) {
        combatant->unknown_13c_->unknown_56_ = 0;
    }
}
