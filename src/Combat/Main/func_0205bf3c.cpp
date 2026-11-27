#include <globaldefs.h>

struct KeyMenuCursor_0205bf3c {
    char unknown_0_[0x30];
    int step_30_;
    short heldKey_34_;
    unsigned char isVerticalKeyHeld_36_;
    unsigned char isHorizontalKeyHeld_37_;
    unsigned char repeatTimer_38_;
};

// USA: ResetKeyMenuCursorInput_0205bf3c
extern "C" ARM void ResetKeyMenuCursorInput_0205bf3c(struct KeyMenuCursor_0205bf3c* cursor) {
    cursor->step_30_ = 0;
    cursor->heldKey_34_ = 0;
    cursor->isVerticalKeyHeld_36_ = 0;
    cursor->isHorizontalKeyHeld_37_ = 0;
    cursor->repeatTimer_38_ = 0;
}
