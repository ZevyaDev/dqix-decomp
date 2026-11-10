#include <globaldefs.h>

struct Camera_0202e5c0 {
    char unknown_0_[4];
    int eyeX_4_;
    int eyeY_8_;
    int eyeZ_c_;
};

// USA: SetCameraEye_0202e5c0
extern "C" ARM void SetCameraEye_0202e5c0(struct Camera_0202e5c0* camera, int x, int y, int z) {
    camera->eyeX_4_ = x;
    camera->eyeY_8_ = y;
    camera->eyeZ_c_ = z;
}
