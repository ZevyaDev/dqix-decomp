#include <globaldefs.h>

struct SpriteAnimationList_0205a330 {
    char unknown_0_[4];
    unsigned short animationCount_4_;
};

extern "C" void func_0205a254(struct SpriteAnimationList_0205a330*, int, int);

// USA: AdvanceSpriteAnimations_0205a330
extern "C" ARM void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks) {
    unsigned short i;
    for (i = 0; i < animationList->animationCount_4_; i++) {
        func_0205a254(animationList, i & 0xff, ticks);
    }
}
