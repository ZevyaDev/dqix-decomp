#include <globaldefs.h>

struct TextWindow_0207fdcc {
    char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    char unknown_c5_[0x1b];
};

struct MenuLayout_0207fdcc_2 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    struct TextWindow_0207fdcc* unknown_30_;
    char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: FindMenuLayoutWindow_02081da8
extern "C" ARM struct TextWindow_0207fdcc* FindMenuLayoutWindow_02081da8(struct MenuLayout_0207fdcc_2* menuLayout, int windowId) {
    unsigned char windowCount = menuLayout->unknown_39_;
    struct TextWindow_0207fdcc* window = menuLayout->unknown_30_;
    unsigned char i;
    for (i = 0; i < windowCount; i++) {
        if (windowId == window->unknown_c4_) {
            return window;
        }
        window++;
    }
    return NULL;
}
