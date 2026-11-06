#include <globaldefs.h>

struct Struct_0205a3ac {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
    char unknown_16_[2];
};

struct SpriteAnimationList_0205a254;

extern "C" struct Struct_0205a3ac* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254*, int);

// USA: func_0205a3ac
extern "C" ARM void func_0205a3ac(struct SpriteAnimationList_0205a254* arg0, int arg1) {
    struct Struct_0205a3ac* var0 = FindSpriteAnimation_0205a3d0(arg0, arg1);
    if (var0 != NULL) {
        var0->unknown_15_ &= ~7;
        var0->unknown_15_ |= 1;
    }
}
