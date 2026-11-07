#include <globaldefs.h>
extern "C" void func_0205d904(unsigned char*);

struct TextWindowManager_0205dee8 {
    char unknown_0_[0xb0];
    unsigned char cursorWindowId_b0_;           // 0xb0
};


// USA: SetCursorTextWindow_0205dee8
extern "C" ARM void SetCursorTextWindow_0205dee8(struct TextWindowManager_0205dee8* windowManager, int windowId) {
    windowManager->cursorWindowId_b0_ = windowId;
    func_0205d904((unsigned char*)(windowManager));
}
