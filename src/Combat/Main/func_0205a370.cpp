#include <globaldefs.h>

struct SpriteAnimation_0205a370 {
    char unknown_0_[0x10];
    unsigned short frame_10_;
    unsigned short frameTime_12_;
    unsigned char unknown_14_;
    unsigned char flags_15_;
    char unknown_16_[2];
};

struct SpriteAnimationList_0205a254;

extern "C" struct SpriteAnimation_0205a370* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254*, int);

// USA: PlaySpriteAnimation_0205a370
extern "C" ARM void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index) {
    struct SpriteAnimation_0205a370* animation = FindSpriteAnimation_0205a3d0(animationList, index);
    if (animation == NULL) return;
    if (animation->flags_15_ & 1) {
        animation->frame_10_ = 0;
        animation->frameTime_12_ = 0;
    }
    animation->flags_15_ &= ~7;
    animation->flags_15_ |= 2;
}
