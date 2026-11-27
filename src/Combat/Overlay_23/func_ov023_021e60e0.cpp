#include <globaldefs.h>

struct Struct_ov009_02188454 { unsigned int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void __clear(void*, int);
extern "C" void func_ov023_021e60c4(void* arg0, struct Struct_ov009_02188454* arg1);

// USA: SetCharacterModelFacing_ov023_021e60e0
extern "C" ARM void SetCharacterModelFacing_ov023_021e60e0(void* model, unsigned int angle) {
    struct Struct_ov009_02188454 rotation;
    __clear(&rotation, 0xc);
    rotation.unknown_4_ = angle;
    func_ov023_021e60c4(model, &rotation);
    func_ov023_021e60c4((char*)model + 0x8 + 0x400, &rotation);
    func_ov023_021e60c4((char*)model + 0xac, &rotation);
    func_ov023_021e60c4((char*)model + 0x35c, &rotation);
}
