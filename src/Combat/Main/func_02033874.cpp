#include <globaldefs.h>

struct Struct_02033874 {
    int x_0_;
    int y_4_;
    int z_8_;
};

struct Struct_02033834 {
    char unknown_0_[0x50];
    struct Struct_02033874 rotation_50_;
    char unknown_5c_[0x52];
    short targetFacing_ae_;
};

short fix32ReduceAngle0To2Pi(int);

// USA: SetFacingInstantly_02033874
extern "C" ARM void SetFacingInstantly_02033874(struct Struct_02033834* object, int angle) {
    struct Struct_02033874* rotation = (struct Struct_02033874*)((char*)object + 0x50);
    struct Struct_02033874* oldRotation = (struct Struct_02033874*)((char*)object + 0x50);
    int x, yaw, z;
    object->targetFacing_ae_ = fix32ReduceAngle0To2Pi(angle);
    z = oldRotation->z_8_;
    yaw = object->targetFacing_ae_;
    x = oldRotation->x_0_;
    rotation->x_0_ = x;
    rotation->y_4_ = yaw;
    rotation->z_8_ = z;
    *(unsigned short*)((char*)object + 0xc4) &= ~0x8000;
}
