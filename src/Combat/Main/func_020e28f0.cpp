#include <globaldefs.h>

struct SpriteAnimationList_0205a254;
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);

struct YesNoWindow_020e28f0 {
    char unknown_0_[0x1c];
    unsigned short cursorAnimationIndex_1c_;
    char unknown_1e_[2];
    struct SpriteAnimationList_0205a254* pCursorAnimationList_20_;
};

// USA: SetYesNoWindowCursorPosition_020e28f0
extern "C" ARM void SetYesNoWindowCursorPosition_020e28f0(struct YesNoWindow_020e28f0* yesNoWindow, short x, short y) {
    SetSpriteAnimationPosition_020e27ec(yesNoWindow->pCursorAnimationList_20_, yesNoWindow->cursorAnimationIndex_1c_, x, y);
}
