#include <globaldefs.h>

int fix32ReduceAngle0To2Pi(int);
extern "C" int fix32_Sqrt(int arg0);

struct Struct_ov009_0218aa28;
extern "C" void Vector3fix_Add(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);

struct Struct_0202e5d8 { unsigned int unknown_0_[12]; };
struct Struct_0202e5d8 RotationMatrixY(int angle);

struct Struct_0202e5d8_2;
struct Struct_0202e5d8_3;
extern "C" void Mat4x3_ApplyToVector(struct Struct_0202e5d8_2* arg0, struct Struct_0202e5d8_3* arg1, struct Struct_0202e5d8_2* arg2);

static inline int inline_0202e5d8(int arg0, int arg1) {
    return (int)(((long long)arg0 * arg1 + 0x800) >> 12);
}

struct Struct_0202e5d8_4 {
    int x_0_;
    int y_4_;
    int z_8_;
};

// USA: SetCameraOrbit_0202e5d8
extern "C" ARM void SetCameraOrbit_0202e5d8(void* camera, int angle, int height, int distance) {
    int yaw;
    int heightSquared, distanceSquared, groundDistanceSquared;
    struct Struct_0202e5d8_4 offset;
    struct Struct_0202e5d8 rotation;

    yaw = fix32ReduceAngle0To2Pi(angle);
    *(int*)((char*)camera + 0x70) = yaw;
    *(int*)((char*)camera + 0x74) = height;
    *(int*)((char*)camera + 0x78) = distance;

    heightSquared = inline_0202e5d8(height, height);
    distanceSquared = inline_0202e5d8(distance, distance);
    groundDistanceSquared = distanceSquared - heightSquared;

    offset.x_0_ = 0;
    offset.y_4_ = height;
    offset.z_8_ = fix32_Sqrt(groundDistanceSquared);

    rotation = RotationMatrixY(yaw);

    Mat4x3_ApplyToVector((struct Struct_0202e5d8_2*)&offset, (struct Struct_0202e5d8_3*)&rotation, (struct Struct_0202e5d8_2*)&offset);

    Vector3fix_Add((struct Struct_ov009_0218aa28*)((char*)camera + 0x10), (struct Struct_ov009_0218aa28*)&offset, (struct Struct_ov009_0218aa28*)((char*)camera + 4));
}
