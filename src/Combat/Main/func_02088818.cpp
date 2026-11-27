#include <globaldefs.h>

struct ModifiableCombatStats_020886dc_2 {
    unsigned char unknown_0_[0x22];
    unsigned short : 9;
    unsigned short fourceType_23_1_ : 3;
    unsigned short : 4;
    unsigned char unknown_24_[0x6a - 0x24];
    unsigned char fourceTurns_6a_;
    unsigned char unknown_6b_[0x8d - 0x6b];
    unsigned char fourceWearOffCount_8d_;
};

// USA: SetFourceType_02088818
extern "C" ARM void SetFourceType_02088818(struct ModifiableCombatStats_020886dc_2* stats, unsigned short fourceType) {
    stats->fourceType_23_1_ = fourceType;
    stats->fourceTurns_6a_ = 5;
    stats->fourceWearOffCount_8d_ = 0;
}
