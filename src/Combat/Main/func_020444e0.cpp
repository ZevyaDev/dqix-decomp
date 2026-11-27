#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020444e0_56 = 4 };
#else
enum { Enum_020444e0_56 = 0x38 };
#endif

struct MessageWindow_020444e0 { char unknown_0_[Enum_020444e0_56]; void* unknown_38_; };

extern "C" int func_020e1f1c(void* arg0);
extern "C" void func_02066cf0(void* arg0, int arg1);
extern "C" void func_020e23f4(void* arg0);
extern "C" int func_020e2478(int* arg0);

// USA: DrawMessageWindow_020444e0
extern "C" ARM void DrawMessageWindow_020444e0(struct MessageWindow_020444e0* window) {
    void* canvasWindow = window->unknown_38_;
    if (canvasWindow != NULL) {
        if (func_020e1f1c(canvasWindow) == 0) return;
        func_02066cf0(window, 0);
        func_020e23f4(window->unknown_38_);
        func_020e2478((int*)window->unknown_38_);
    } else {
        func_02066cf0(window, 0);
    }
}
