#include <globaldefs.h>

struct KeyMenuCursor_0205bf3c {
    char unknown_0_[0x30];
    int step_30_;
    short heldKey_34_;
    unsigned char isVerticalKeyHeld_36_;
    unsigned char isHorizontalKeyHeld_37_;
    unsigned char repeatTimer_38_;
};

// USA: func_0205bf3c
extern "C" ARM void func_0205bf3c(struct KeyMenuCursor_0205bf3c* arg0) {
    arg0->step_30_ = 0;
    arg0->heldKey_34_ = 0;
    arg0->isVerticalKeyHeld_36_ = 0;
    arg0->isHorizontalKeyHeld_37_ = 0;
    arg0->repeatTimer_38_ = 0;
}
