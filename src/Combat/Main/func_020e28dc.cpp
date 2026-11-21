#include <globaldefs.h>

struct Struct_020e28dc_2 {
    char unknown_0_[0x3f];
    unsigned char isOpen_3f_0_ : 1;
};

struct YesNoWindow_020e28dc {
    char unknown_0_[0xc];
    struct Struct_020e28dc_2* unknown_c_;
};

// USA: IsYesNoWindowOpen_020e28dc
extern "C" ARM int IsYesNoWindowOpen_020e28dc(struct YesNoWindow_020e28dc* yesNoWindow) {
    return yesNoWindow->unknown_c_->isOpen_3f_0_;
}
