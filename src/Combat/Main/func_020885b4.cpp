#include <globaldefs.h>

struct Struct_020885b4 {
    unsigned char unknown_0_[0x14];
    unsigned int statusFlags_14_;
    unsigned int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned short poisonType_22_0_ : 2;
};

// USA: IsPoisoned_020885b4
extern "C" ARM int IsPoisoned_020885b4(struct Struct_020885b4* stats) {
    if (stats->statusFlags_14_ & 0x2) {
        if (stats->poisonType_22_0_ == 1) {
            return 1;
        }
    }
    return 0;
}
