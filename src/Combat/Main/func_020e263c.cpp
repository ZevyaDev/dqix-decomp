#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
struct SpriteAnimationList_0205a330;
struct Struct_020e2604;

extern "C" void func_020e269c(void* arg0);
extern "C" void PlaySpriteAnimation_0205a370(struct SpriteAnimationList_0205a254* animationList, int index);
extern "C" void AdvanceSpriteAnimations_0205a330(struct SpriteAnimationList_0205a330* animationList, int ticks);
extern "C" void func_020e2604(struct Struct_020e2604* arg0);

struct SpriteAnimation_020e263c {
    char unknown_0_[0x15];
    unsigned char flags_15_;
};
extern "C" struct SpriteAnimation_020e263c* FindSpriteAnimation_0205a3d0(struct SpriteAnimationList_0205a254* animationList, int index);

struct YesNoWindow_020e263c_2 {
    char unknown_0_[0x1c];
    unsigned short cursorAnimationIndex_1c_;
    unsigned char cursorAnimationFlags_1e_;
    char unknown_1f_;
    struct SpriteAnimationList_0205a254* pCursorAnimationList_20_;
};

// USA: UpdateYesNoWindow_020e263c
extern "C" ARM void UpdateYesNoWindow_020e263c(struct YesNoWindow_020e263c_2* yesNoWindow, int ticks) {
    if (yesNoWindow->pCursorAnimationList_20_ == NULL) {
        return;
    }
    func_020e269c(yesNoWindow);
    PlaySpriteAnimation_0205a370(yesNoWindow->pCursorAnimationList_20_, yesNoWindow->cursorAnimationIndex_1c_);
    unsigned char animationFlags = yesNoWindow->cursorAnimationFlags_1e_;
    struct SpriteAnimation_020e263c* animation = FindSpriteAnimation_0205a3d0(yesNoWindow->pCursorAnimationList_20_, yesNoWindow->cursorAnimationIndex_1c_);
    if (animation != NULL) {
        animation->flags_15_ |= animationFlags;
    }
    AdvanceSpriteAnimations_0205a330((struct SpriteAnimationList_0205a330*)yesNoWindow->pCursorAnimationList_20_, ticks);
    func_020e2604((struct Struct_020e2604*)yesNoWindow);
}
