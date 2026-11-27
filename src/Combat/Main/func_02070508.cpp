#include <globaldefs.h>

struct Struct_02108d5c {
    unsigned char unknown_0_;
    unsigned char unknown_1_[0xB];
    int unknown_c_;
    int unknown_10_;
};

// USA: ResetColorFade_02070508
extern "C" ARM void ResetColorFade_02070508(struct Struct_02108d5c *colorFade) {
    colorFade->unknown_0_ = 0;
    colorFade->unknown_c_ = 0;
    colorFade->unknown_10_ = 0;
}
