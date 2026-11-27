#include <globaldefs.h>

struct Struct_0205d5b8 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};

// USA: SetTextWindowHidden_0205d5b8
extern "C" ARM void SetTextWindowHidden_0205d5b8(struct Struct_0205d5b8* textWindow, int isHidden) {
    if (isHidden) {
        textWindow->unknown_c5_ |= 0x20;
    } else {
        textWindow->unknown_c5_ &= ~0x20;
    }
}
