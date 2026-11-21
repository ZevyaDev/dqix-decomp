#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;

struct TextWindow_0207fdcc {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
    char unknown_c6_[0x1a];
};

extern "C" struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void OpenMenuLayoutWindow_020813ec(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);

// USA: SetMenuLayoutWindowCursorMark_02081ea4
extern "C" ARM void SetMenuLayoutWindowCursorMark_02081ea4(struct MenuLayout_0207fdcc_2* menuLayout, int windowId, int hasCursorMark) {
    struct TextWindow_0207fdcc* window = FindMenuLayoutWindow_02081da8(menuLayout, windowId);
    if (window != NULL) {
        if (hasCursorMark != 0) {
            window->unknown_c5_ |= 0x40;
        } else {
            window->unknown_c5_ &= ~0x40;
        }
        OpenMenuLayoutWindow_020813ec(menuLayout, windowId);
    }
}
