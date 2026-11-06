#include <globaldefs.h>

extern "C" void func_0205addc(void* arg0, unsigned char arg1);

struct SpriteAnimationList_0205ae8c {
    char unknown_0_[4];
    unsigned short animationCount_4_;
};

// USA: DrawSpriteAnimations_0205ae8c
extern "C" ARM void DrawSpriteAnimations_0205ae8c(void* spriteSet) {
    unsigned short animationCount;
    struct SpriteAnimationList_0205ae8c* animationList;
    unsigned short i;

    animationList = *(struct SpriteAnimationList_0205ae8c**)((char*)spriteSet + 0x3c);
    if (animationList == 0) {
        return;
    }
    animationCount = animationList->animationCount_4_;
    i = 0;
    while (i < animationCount) {
        func_0205addc(spriteSet, (unsigned char)i);
        i++;
    }
}
