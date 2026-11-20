#include <globaldefs.h>

struct SPRSprite_0203a46c {
    char unknown_0_[0x1c];
    int positionX_1c_;
    int positionY_20_;
    int positionZ_24_;
};

// USA: SetSPRSpritePosition_0203a46c
extern "C" ARM void SetSPRSpritePosition_0203a46c(struct SPRSprite_0203a46c* sprite, int x, int y, int z) {
    sprite->positionX_1c_ = x;
    sprite->positionY_20_ = y;
    sprite->positionZ_24_ = z;
}
