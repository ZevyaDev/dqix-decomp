#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov017_021a4e48_17236 = 0x4134 };
#else
enum { Enum_ov017_021a4e48_17236 = 0x4354 };
#endif

struct Struct_ov017_021a4e48 {
    unsigned char unknown_0_[Enum_ov017_021a4e48_17236];
    signed char unknown_4354_;
};

// USA: DecrementInputCooldown_ov017_021a4e48
extern "C" ARM void DecrementInputCooldown_ov017_021a4e48(unsigned char* gameResources) {
    Struct_ov017_021a4e48* resources = (Struct_ov017_021a4e48*)gameResources;
    resources->unknown_4354_--;
    if (resources->unknown_4354_ < 0) {
        resources->unknown_4354_ = 0;
    }
}
