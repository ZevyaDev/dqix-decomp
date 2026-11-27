#include <globaldefs.h>

struct Struct_0204a438 {
    char unknown_0_[0x21c];
    void* unknown_21c_;
};

// USA: GetBoneCameraObject_0204a438
extern "C" ARM void* GetBoneCameraObject_0204a438(struct Struct_0204a438* camera) {
    return camera->unknown_21c_;
}
