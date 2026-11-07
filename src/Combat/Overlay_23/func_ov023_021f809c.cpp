#include <globaldefs.h>

extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);
extern "C" void func_ov023_021f7eb8(void* arg0, void* arg1, int arg2, int arg3,
    int arg4, int arg5, int arg6, unsigned char arg7, int arg8, int arg9);

struct MenuWindow_ov004_0215fdfc {
    char unknown_0_[0xc8];
    short unknown_c8_;
    short unknown_ca_;
    short unknown_cc_;
    short unknown_ce_;
    char unknown_d0_[0x12];
    unsigned short windowPalette_e2_;
    char unknown_e4_;
    unsigned char windowFlags_e5_;
};

// USA: RedrawMenuWindow_ov023_021f809c
extern "C" ARM void RedrawMenuWindow_ov023_021f809c(struct MenuWindow_ov004_0215fdfc* window, void* menu) {
    if (IsTextWindowOpen_0204c7e0((unsigned char*)window + 0x20)) {
        unsigned char windowFlags = window->windowFlags_e5_;
        unsigned short storedPalette = window->windowPalette_e2_;
        int isTransparent = (windowFlags & 4) ? 1 : 0;
        int isFrameless = (windowFlags & 0x10) ? 1 : 0;
        short y = window->unknown_ce_;
        unsigned char palette = (unsigned char)storedPalette;
        short width = window->unknown_c8_;
        short height = window->unknown_ca_;
        short x = window->unknown_cc_;
        func_ov023_021f7eb8(window, menu, 0, x, y, width, height, palette, isTransparent, isFrameless);
    }
}
