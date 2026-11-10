#include <globaldefs.h>

struct Struct_02059cfc_3 {
    int x_0_;
    int y_4_;
    int z_8_;
};

struct Struct_02059cfc_2 {
    char unknown_0_[0x44];
    int positionX_44_;
    int positionY_48_;
    int positionZ_4c_;
};

// USA: SetObject3DPositionFromVector_02059f38
extern "C" ARM void SetObject3DPositionFromVector_02059f38(struct Struct_02059cfc_2* object, struct Struct_02059cfc_3* position) {
    object->positionX_44_ = position->x_0_;
    object->positionY_48_ = position->y_4_;
    object->positionZ_4c_ = position->z_8_;
}
