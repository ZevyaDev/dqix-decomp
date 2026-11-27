#include <globaldefs.h>

struct Struct_02083e28_6 {
    char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    char unknown_20_[0x6c - 0x20];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
};

// USA: ClampHPAndMPToMax_020863e0
extern "C" ARM void ClampHPAndMPToMax_020863e0(struct Struct_02083e28_6* memberData) {
    if (memberData->unknown_6c_ < memberData->unknown_1c_) memberData->unknown_1c_ = memberData->unknown_6c_;
    if (memberData->unknown_6e_ < memberData->unknown_1e_) memberData->unknown_1e_ = memberData->unknown_6e_;
}
