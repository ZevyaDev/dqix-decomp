#include <globaldefs.h>

struct Struct_02040774_2 {
    char unknown_0_[0x44];
    int positionX_44_;
    int positionY_48_;
    int positionZ_4c_;
};

// USA: SetObject3DPosition_020407b4
extern "C" ARM void SetObject3DPosition_020407b4(struct Struct_02040774_2* object, int x, int y, int z) {
    object->positionX_44_ = x;
    object->positionY_48_ = y;
    object->positionZ_4c_ = z;
}
