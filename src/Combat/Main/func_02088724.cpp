#include <globaldefs.h>

struct ModifiableCombatStats_020886dc_2;
extern "C" void SetFourceType_02088818(struct ModifiableCombatStats_020886dc_2* stats, unsigned short fourceType);

struct Struct_02088724 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: SetFrostFource_02088724
extern "C" ARM void SetFrostFource_02088724(struct Struct_02088724* stats) {
    stats->unknown_18_ |= 0x80;
    SetFourceType_02088818((struct ModifiableCombatStats_020886dc_2*)stats, 2);
}
