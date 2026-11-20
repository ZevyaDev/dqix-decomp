#include <globaldefs.h>

struct Struct_02033fdc {
    char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: ResumeMovementUpdate_02033fdc
extern "C" ARM void ResumeMovementUpdate_02033fdc(struct Struct_02033fdc* object) {
    object->unknown_e0_ &= ~0x4;
}
