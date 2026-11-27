#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);
extern "C" void Vector3fix_Normalize(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1);
extern "C" int fix32_Atan2(int arg0, int arg1);
int fix32ReduceAngle0To2Pi(int angle);

struct Struct_02033834;
extern "C" void SetFacingInstantly_02033874(struct Struct_02033834* object, int angle);

struct Struct_020338d4 {
    char unknown_0_[0x44];
    struct Struct_ov009_0218aa28 position_44_;
};

// USA: FacePositionInstantly_020338d4
extern "C" ARM void FacePositionInstantly_020338d4(struct Struct_020338d4* object, struct Struct_ov009_0218aa28* targetPosition) {
    struct Struct_ov009_0218aa28 direction;
    Vector3fix_Subtract(targetPosition, &object->position_44_, &direction);
    Vector3fix_Normalize(&direction, &direction);
    int angle = fix32ReduceAngle0To2Pi(fix32_Atan2(direction.unknown_0_, direction.unknown_8_));
    SetFacingInstantly_02033874((struct Struct_02033834*)object, angle);
}
