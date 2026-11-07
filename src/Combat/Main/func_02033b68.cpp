#include <globaldefs.h>

extern "C" void func_02033ce8(void*);

struct Struct_02033b68 {
    char unknown_0_[0xbe];
    unsigned char motion_be_;
    unsigned char previousMotion_bf_;
};

// USA: SetMotionIfDifferent_02033b68
extern "C" ARM void SetMotionIfDifferent_02033b68(struct Struct_02033b68* object, int motion) {
    if (object->motion_be_ == motion) return;
    object->previousMotion_bf_ = object->motion_be_;
    object->motion_be_ = motion;
    func_02033ce8(object);
}
