#include <globaldefs.h>

struct MenuObject_ov023_021f6ed8 {
    char unknown_0_[4];
    unsigned short type_4_;
    unsigned short id_6_;
    unsigned short unknown_8_;
    char unknown_a_[2];
    unsigned char unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
};

// USA: InitMenuObjectBase_ov023_021f6ed8
extern "C" ARM void InitMenuObjectBase_ov023_021f6ed8(MenuObject_ov023_021f6ed8* object) {
    object->type_4_ = 0xffff;
    object->id_6_ = 0;
    object->unknown_8_ = 0;
    object->unknown_10_ = 0;
    object->unknown_14_ = 0;
    object->unknown_18_ = 0;
    object->unknown_c_ = 0;
    object->unknown_1c_ = 0;
}
