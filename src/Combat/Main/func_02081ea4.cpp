#include <globaldefs.h>

struct MenuLayout_0207fdcc_2;

struct TextWindow_0207fdcc {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
    char unknown_c6_[0x1a];
};

extern "C" struct TextWindow_0207fdcc* func_02081da8(struct MenuLayout_0207fdcc_2* arg0, int arg1);
extern "C" void OpenMenuLayoutWindow_020813ec(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);

// USA: func_02081ea4
extern "C" ARM void func_02081ea4(struct MenuLayout_0207fdcc_2* arg0, int arg1, int arg2) {
    struct TextWindow_0207fdcc* var0 = func_02081da8(arg0, arg1);
    if (var0 != NULL) {
        if (arg2 != 0) {
            var0->unknown_c5_ |= 0x40;
        } else {
            var0->unknown_c5_ &= ~0x40;
        }
        OpenMenuLayoutWindow_020813ec(arg0, arg1);
    }
}
