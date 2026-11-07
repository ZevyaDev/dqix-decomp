#include <globaldefs.h>

extern "C" int func_0207964c(void* arg0);

struct Struct_02033b68 {
    char unknown_0_[0xbe];
    unsigned char motion_be_;
    unsigned char previousMotion_bf_;
};
extern "C" void SetMotionIfDifferent_02033b68(struct Struct_02033b68* object, int motion);

// USA: func_0207872c
extern "C" ARM int func_0207872c(struct Struct_02033b68* arg0) {
    if (arg0->motion_be_ != 2) {
        SetMotionIfDifferent_02033b68(arg0, 2);
    }
    return func_0207964c(arg0);
}
