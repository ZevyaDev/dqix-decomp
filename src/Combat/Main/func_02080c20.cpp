#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;

struct TextWindow_0207fdcc {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
    char unknown_c6_[0x1a];
};

extern "C" struct TextWindow_0207fdcc* func_02081da8(struct MenuLayout_0207fdcc_2* arg0, int arg1);

// USA: ShowMenuLayoutWindow_02080c20
extern "C" ARM void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId) {
    struct TextWindow_0207fdcc* window = func_02081da8(menuLayout, windowId);
    if (window != NULL) {
        window->unknown_c5_ &= ~0x20;
    }
}
