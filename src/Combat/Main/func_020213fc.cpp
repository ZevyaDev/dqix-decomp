#include <globaldefs.h>

struct Struct_020213fc {
#if defined(jpn)
    char unknown1_0_[0x91a];
#else
    char unknown_0_[0x9c6];
#endif
    unsigned char isSubScreenFadeInHeld_9c6_;
};

// USA: SetSubScreenFadeInHeld_020213fc
extern "C" ARM void SetSubScreenFadeInHeld_020213fc(struct Struct_020213fc* subScreenDisplay, int isHeld) {
    subScreenDisplay->isSubScreenFadeInHeld_9c6_ = (isHeld != 0) ? 1 : 0;
}
