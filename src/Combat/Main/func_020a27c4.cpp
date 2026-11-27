#include <globaldefs.h>

struct Struct_020676e0 {
    char unknown_0_[0x23c];
    int unknown_23c_;
};

// USA: IsCameraTurningEnabled_020a27c4
extern "C" ARM int IsCameraTurningEnabled_020a27c4(struct Struct_020676e0* camera) {
    return camera->unknown_23c_;
}
