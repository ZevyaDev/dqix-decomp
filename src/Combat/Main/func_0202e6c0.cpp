#include <globaldefs.h>

extern "C" void SetCameraOrbit_0202e5d8(void*, int, int, int);

struct Struct_0202e6c0 {
    char unknown_0_[0x70];
    int unknown_70_;
    int unknown_74_;
    int unknown_78_;
};

// USA: SetCameraHeight_0202e6c0
extern "C" ARM void SetCameraHeight_0202e6c0(struct Struct_0202e6c0* camera, int height) {
    int heightLimit;
    camera->unknown_74_ = height;
    if (0.0f < (float)camera->unknown_74_) {
        heightLimit = camera->unknown_78_ - 0x1000;
        if (heightLimit < camera->unknown_74_) camera->unknown_74_ = heightLimit;
    } else {
        heightLimit = 0x1000 - camera->unknown_78_;
        if (camera->unknown_74_ < heightLimit) camera->unknown_74_ = heightLimit;
    }
    SetCameraOrbit_0202e5d8(camera, camera->unknown_70_, camera->unknown_74_, camera->unknown_78_);
}
