#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_0205a254;
extern "C" void SetSpriteAnimationPosition_020e27ec(struct SpriteAnimationList_0205a254* animationList, int index, short x, short y);
extern "C" void func_020e1780(void* arg0);

struct Struct_020e2794 {
    unsigned char unknown_0_[0x3f];
    unsigned char isOpen_3f_0_ : 1;
};

struct YesNoWindow_020e2794_2 {
    unsigned char unknown_0_[0xc];
    struct Struct_020e2794* unknown_c_;
    void* pWindow_10_;
    unsigned char unknown_14_[4];
    short cursorX_18_;
    short cursorY_1a_;
    unsigned short cursorAnimationIndex_1c_;
    unsigned char unknown_1e_[2];
    struct SpriteAnimationList_0205a254* pCursorAnimationList_20_;
};

// USA: DrawYesNoWindow_020e2794
extern "C" ARM void DrawYesNoWindow_020e2794(struct YesNoWindow_020e2794_2* yesNoWindow, void* spriteSet) {
    if (!yesNoWindow->unknown_c_->isOpen_3f_0_) return;
    if (yesNoWindow->pCursorAnimationList_20_ != NULL) {
        SetSpriteAnimationPosition_020e27ec(yesNoWindow->pCursorAnimationList_20_, yesNoWindow->cursorAnimationIndex_1c_, yesNoWindow->cursorX_18_, yesNoWindow->cursorY_1a_);
        if (spriteSet != NULL) ((OBJSpriteSet*)(spriteSet))->DrawAll();
    }
    func_020e1780(yesNoWindow->pWindow_10_);
}
