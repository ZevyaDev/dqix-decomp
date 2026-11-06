#include <globaldefs.h>

struct SpriteAnimation_0205a254_2 {
    char unknown_0_[8];
    unsigned short index_8_;
    char unknown_a_[0x18 - 0xa];
};

struct SpriteAnimationList_0205a254 {
    struct SpriteAnimation_0205a254_2* pAnimations_0_;
    unsigned short animationCount_4_;
};

// USA: FindSpriteAnimation_0205a3d0
extern "C" ARM struct SpriteAnimation_0205a254_2* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index) {
    struct SpriteAnimation_0205a254_2* animation;
    unsigned short i;
    if (animationList->pAnimations_0_ == NULL) {
        return NULL;
    }
    if (animationList->animationCount_4_ == 0) {
        return NULL;
    }
    animation = NULL;
    for (i = 0; i < animationList->animationCount_4_; i++) {
        if (index == animationList->pAnimations_0_[i].index_8_) {
            animation = &animationList->pAnimations_0_[i];
            break;
        }
    }
    return animation;
}
