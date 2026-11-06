#include <globaldefs.h>

#if defined(jpn)
struct Struct_0205b724 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};

extern "C" struct Struct_0205b724* FindSpriteAnimation_0205a3d0(void);

// JPN: func_0205b724
extern "C" ARM void func_0205b724(void) {
    struct Struct_0205b724* var0 = FindSpriteAnimation_0205a3d0();
    if (var0 != NULL) {
        var0->unknown_15_ &= ~7;
        var0->unknown_15_ |= 4;
    }
}
#endif
