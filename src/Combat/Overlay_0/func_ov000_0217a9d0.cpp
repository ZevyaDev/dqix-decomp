#include <globaldefs.h>

struct TextWindow_0205d0e0;
struct TextWindowManager_0205d81c;
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" void func_02050400(unsigned char* arg0, int arg1);

// USA: func_ov000_0217a9d0
extern "C" ARM void func_ov000_0217a9d0(int arg0, int arg1, int arg2, struct TextWindowManager_0205d81c* arg3) {
    struct TextWindow_0205d0e0* var0 = FindTextWindow_0205d81c(arg3, arg0);
    int var1;
    if (var0 == 0) return;
    var1 = 0;
    if (arg2 < arg1) var1 = 1;
    func_02050400((unsigned char*)var0, var1);
}
