#include <globaldefs.h>

struct SpriteAnimation_0205a42c {
    char unknown_0_[0x14];
    unsigned char oamIndex_14_;
    char unknown_15_[3];
};

struct SpriteAnimationList_0205a254;

extern "C" struct SpriteAnimation_0205a42c* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254*, int);

// USA: SetSpriteAnimationOAMIndex_0205a42c
extern "C" ARM void SetSpriteAnimationOAMIndex_0205a42c(struct SpriteAnimationList_0205a254* animationList, int index, int oamIndex) {
    struct SpriteAnimation_0205a42c* animation = FindSpriteAnimation_0205a3d0(animationList, index);
    if (animation != NULL) {
        animation->oamIndex_14_ = oamIndex;
    }
}
