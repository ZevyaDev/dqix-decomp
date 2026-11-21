#include <globaldefs.h>

struct Dialog_ov031_02237e9c { unsigned char unknown_0_[0x1b]; signed char choice_1b_; };
extern Dialog_ov031_02237e9c* gDialog_ov031_02290d10;

// USA: GetDialogChoice_ov031_02237e9c
extern "C" ARM signed char GetDialogChoice_ov031_02237e9c(void) {
    return gDialog_ov031_02290d10->choice_1b_;
}
