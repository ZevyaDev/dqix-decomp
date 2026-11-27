#include <globaldefs.h>

struct Struct_02088624 {
    unsigned char unknown_0_[0x14];
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short unknown_22_0_ : 2;
};

// USA: SetPoisoned_02088624
extern "C" ARM void SetPoisoned_02088624(struct Struct_02088624* stats) {
    stats->unknown_14_ |= 0x2;
    stats->unknown_22_0_ = 1;
}
