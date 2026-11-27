#include <globaldefs.h>

struct Struct_02033fcc {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: PauseMovementUpdate_02033fcc
extern "C" ARM void PauseMovementUpdate_02033fcc(struct Struct_02033fcc* object) {
    object->unknown_e0_ |= 0x4;
}
