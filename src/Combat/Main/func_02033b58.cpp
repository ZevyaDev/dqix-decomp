#include <globaldefs.h>

struct Struct_02033b58 {
    char unknown_0_[0xbe];
    unsigned char motion_be_;
    unsigned char previousMotion_bf_;
};

// USA: SetMotionKeepingAnimation_02033b58
extern "C" ARM void SetMotionKeepingAnimation_02033b58(struct Struct_02033b58* object, unsigned char motion) {
    object->previousMotion_bf_ = object->motion_be_;
    object->motion_be_ = motion;
}
