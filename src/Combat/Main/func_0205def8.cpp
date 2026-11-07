#include <globaldefs.h>

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c*, int);
struct Struct_0205d5b8;
extern "C" void func_0205d5b8(struct Struct_0205d5b8*, int);

struct TextWindowManager_0205def8 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
};

// USA: SetTextWindowVisible_0205def8
extern "C" ARM void SetTextWindowVisible_0205def8(struct TextWindowManager_0205def8* windowManager, int isVisible, int windowId) {
    struct TextWindow_0205d0e0* textWindow;
    if (windowManager->unknown_98_ == 0 || windowManager->unknown_9c_ == 0) return;
    textWindow = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)windowManager, windowId);
    if (textWindow == 0) return;
    func_0205d5b8((struct Struct_0205d5b8*)textWindow, isVisible == 0);
}
