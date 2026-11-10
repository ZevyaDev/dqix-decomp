#include <globaldefs.h>

struct Struct_02088514 {
    char unknown_0_[0x14];
    unsigned int statusFlags_14_;
    char unknown_18_[0xa];
    unsigned short poisonType_22_0_ : 2;
    unsigned short unknown_22_2_ : 14;
};

// USA: IsEnvenomated_02088514
extern "C" ARM int IsEnvenomated_02088514(struct Struct_02088514* stats) {
    if (stats->statusFlags_14_ & 0x2) {
        if (stats->poisonType_22_0_ == 2) {
            return 1;
        }
    }
    return 0;
}
