#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void __clear(void*, int);
extern "C" void SetObject3DRotationFromVector_ov023_021e60c4(void* object, struct Struct_ov009_02188454* rotation);

// USA: SetCharacterModelFacing_ov023_021e60e0
extern "C" ARM void SetCharacterModelFacing_ov023_021e60e0(void* model, unsigned int angle) {
    struct Struct_ov009_02188454 rotation;
    __clear(&rotation, 0xc);
    rotation.unknown_4_ = angle;
    SetObject3DRotationFromVector_ov023_021e60c4(model, &rotation);
    SetObject3DRotationFromVector_ov023_021e60c4((char*)model + 0x8 + 0x400, &rotation);
    SetObject3DRotationFromVector_ov023_021e60c4((char*)model + 0xac, &rotation);
    SetObject3DRotationFromVector_ov023_021e60c4((char*)model + 0x35c, &rotation);
}
