#include <globaldefs.h>

struct TextWindowManager_0205d81c;

extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);

#pragma optimize_for_size off
// USA: func_ov002_0216197c
extern "C" ARM int func_ov002_0216197c(int arg0, struct TextWindowManager_0205d81c* arg1) {
    unsigned char* var0 = (unsigned char*)FindTextWindow_0205d81c(arg1, arg0);
    if (var0 != NULL) {
        return (var0[0xc5] & 0x40) != 0;
    }
    return 0;
}
