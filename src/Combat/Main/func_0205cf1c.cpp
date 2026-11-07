#include <globaldefs.h>

struct TextWindowManager_0205cf1c {
    char unknown_0_[0x95];
    unsigned char isKeyMenuCursorEnabled_95_;
};

// USA: DisableKeyMenuCursor_0205cf1c
extern "C" ARM void DisableKeyMenuCursor_0205cf1c(struct TextWindowManager_0205cf1c* windowManager) {
    windowManager->isKeyMenuCursorEnabled_95_ = 0;
}
