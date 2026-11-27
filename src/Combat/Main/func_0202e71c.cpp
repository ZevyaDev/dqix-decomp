#include <globaldefs.h>

struct Camera_0202e71c {
    unsigned char unknown_0_[0x70];
    int yaw_70_;
    int height_74_;
    int distance_78_;
};

extern "C" void SetCameraOrbit_0202e5d8(struct Camera_0202e71c* camera, int angle, int height, int distance);

// USA: SetCameraDistance_0202e71c
extern "C" ARM void SetCameraDistance_0202e71c(struct Camera_0202e71c* camera, int distance) {
    camera->distance_78_ = distance;
    int height = camera->height_74_;
    if (0.0f < (float)height) {
        int minDistanceAbove = height + 0x1000;
        if (camera->distance_78_ < minDistanceAbove) camera->distance_78_ = minDistanceAbove;
    } else {
        int minDistanceBelow = 0x1000 - height;
        if (camera->distance_78_ < minDistanceBelow) camera->distance_78_ = minDistanceBelow;
    }
    if (camera->distance_78_ < 0x1000)
        camera->distance_78_ = 0x1000;
    SetCameraOrbit_0202e5d8(camera, camera->yaw_70_, camera->height_74_, camera->distance_78_);
}
