#include <globaldefs.h>

struct ModifiableCombatStats_02088660 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: HasFource_02088660
extern "C" ARM int HasFource_02088660(struct ModifiableCombatStats_02088660* stats) {
    return (stats->unknown_18_ & 0x80) != 0;
}
