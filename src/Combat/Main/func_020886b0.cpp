#include <globaldefs.h>

struct Struct_020886b0 {
    char unknown_0_[0x18];
    unsigned int unknown_18_;
    char unknown_1c_[6];
    unsigned short unknown_22_0_ : 9;
    unsigned short unknown_23_1_ : 3;
    unsigned short unknown_23_4_ : 4;
};

// USA: HasFireFource_020886b0
extern "C" ARM int HasFireFource_020886b0(struct Struct_020886b0* stats) {
    if (stats->unknown_18_ & 0x80) {
        if (stats->unknown_23_1_ == 1) {
            return 1;
        }
    }
    return 0;
}
