#include <globaldefs.h>

extern "C" int func_02033ce8(void* arg0, int arg1);

struct Struct_02010604 {
    char unknown_0_[0xbe];
    unsigned char unknown_be_;
    unsigned char unknown_bf_;
};

// USA: SetMotion_02033b88
extern "C" ARM int SetMotion_02033b88(struct Struct_02010604* object, int motion) {
    object->unknown_bf_ = object->unknown_be_;
    object->unknown_be_ = (unsigned char)motion;
    return func_02033ce8(object, motion);
}
