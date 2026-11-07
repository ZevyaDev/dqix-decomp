#include <globaldefs.h>

struct Struct_02033834;

struct Struct_02033834_2 {
    char unknown_0_[0xae];
    short targetFacing_ae_;
    char unknown_b0_[0x0e];
    unsigned char motion_be_;
    char unknown_bf_[0x05];
    unsigned short unknown_c4_;
};

short fix32ReduceAngle0To2Pi(int);
extern "C" void SetFacingInstantly_02033874(struct Struct_02033834* object, int angle);

// USA: SetFacing_02033834
extern "C" ARM void SetFacing_02033834(struct Struct_02033834_2* object, int angle) {
    if (object->motion_be_ == 4 || object->motion_be_ == 3) {
        SetFacingInstantly_02033874((struct Struct_02033834*)object, angle);
    } else {
        object->targetFacing_ae_ = fix32ReduceAngle0To2Pi(angle);
    }
    object->unknown_c4_ &= ~0x8000;
}
