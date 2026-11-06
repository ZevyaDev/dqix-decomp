#include <globaldefs.h>

struct Struct_0205bd20;
struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;

extern "C" int func_0205bd20(struct Struct_0205bd20* arg0, int arg1);
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" int IsTextWindowReady_0204c7cc(unsigned char* textWindow);

struct TextWindowManager_0205da38 {
    char unknown_0_[0xb0];
    unsigned char cursorWindowId_b0_;
};

// USA: IsEntryTouchedAgain_0205da38
extern "C" ARM int IsEntryTouchedAgain_0205da38(struct TextWindowManager_0205da38* windowManager, int arg1) {
    unsigned char* cursorWindow;
    if (func_0205bd20((struct Struct_0205bd20*)((char*)windowManager + 0x4), arg1) == 0) goto ret0;
    cursorWindow = (unsigned char*)FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)windowManager, windowManager->cursorWindowId_b0_);
    if (cursorWindow == NULL) goto ret0;
    if (IsTextWindowReady_0204c7cc(cursorWindow) == 0) goto ret0;
    if (cursorWindow[0xc5] & 2) return 1;
ret0:
    return 0;
}
