#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;

struct TextWindow_0207fdcc {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
    char unknown_c6_[0x1a];
};

extern "C" struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);

// USA: HideMenuLayoutWindow_02080c04
extern "C" ARM void HideMenuLayoutWindow_02080c04(struct MenuLayout_0207fdcc_2* menuLayout, int windowId) {
    struct TextWindow_0207fdcc* window = FindMenuLayoutWindow_02081da8(menuLayout, windowId);
    if (window != NULL) {
        window->unknown_c5_ |= 0x20;
    }
}
