#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Camera_0202eab8_2 {
    char unknown_0_[4];
    struct Struct_ov009_0218aa28 eye_4_;
    struct Struct_ov009_0218aa28 target_10_;
    char unknown_1c_[0x70 - 0x1c];
    int yaw_70_;
    int height_74_;
    int distance_78_;
};

struct Struct_0202eab8 {
    float x_0_;
    float y_4_;
    float z_8_;
};

extern "C" float _fflt(int fix32);
extern "C" float _fdiv(float arg0, float arg1);
extern "C" float _fsub(float arg0, float arg1);
extern "C" float _fadd(float arg0, float arg1);
extern "C" float _fmul(float a, float b);
extern "C" int _ffix(float value);
extern "C" float _d2f(double value);
extern "C" double func_02009598(double arg0, double arg1);
extern "C" float func_0200c9b4(float value);
extern "C" void SetCameraOrbit_0202e5d8(struct Camera_0202eab8_2* camera, int angle, int height, int distance);

// USA: SetCameraOrbitFromEye_0202eab8
extern "C" ARM void SetCameraOrbitFromEye_0202eab8(struct Camera_0202eab8_2* camera) {
    struct Struct_0202eab8 offset;
    offset.x_0_ = _fsub(_fdiv(_fflt(camera->eye_4_.unknown_0_), 4096.0f), _fdiv(_fflt(camera->target_10_.unknown_0_), 4096.0f));
    offset.y_4_ = _fsub(_fdiv(_fflt(camera->eye_4_.unknown_4_), 4096.0f), _fdiv(_fflt(camera->target_10_.unknown_4_), 4096.0f));
    offset.z_8_ = _fsub(_fdiv(_fflt(camera->eye_4_.unknown_8_), 4096.0f), _fdiv(_fflt(camera->target_10_.unknown_8_), 4096.0f));

    float offsetZ = offset.z_8_;
    float yaw = _d2f(func_02009598((double)(offset.x_0_), (double)(offsetZ)));
    if (yaw < 0.0f) {
        yaw = _fadd(yaw, 6.2831855f);
    }
    camera->yaw_70_ = _ffix(_fmul(4096.0f, yaw));
    camera->height_74_ = _ffix(_fmul(4096.0f, offset.y_4_));

    float distance = func_0200c9b4(_fadd(_fmul(offset.z_8_, offset.z_8_),
                                    _fadd(_fmul(offset.x_0_, offset.x_0_), _fmul(offset.y_4_, offset.y_4_))));
    camera->distance_78_ = _ffix(_fmul(4096.0f, distance));

    SetCameraOrbit_0202e5d8(camera, camera->yaw_70_, camera->height_74_, camera->distance_78_);
}
