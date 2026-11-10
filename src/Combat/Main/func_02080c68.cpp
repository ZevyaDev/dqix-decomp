#include <globaldefs.h>

struct MenuLayoutWindowEntryList_0207f0ac;
struct MenuLayout_0207fdcc_2;

struct MenuLayoutWindowEntry_02080c68_2 {
    char unknown_0_[0x8];
    short windowId_8_;
    char unknown_a_[0x12 - 0xa];
    union {
        unsigned char unknown_0_;
        struct { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; } unknown1_0_;
    } unknown_12_;
};

struct TextWindow_02080c68 {
    char unknown_0_[0xc2];
    short palette_c2_;
};

extern "C" struct MenuLayoutWindowEntry_02080c68_2* FindMenuLayoutWindowEntry_0207f0ac(struct MenuLayoutWindowEntryList_0207f0ac* windowEntries, int windowId);
extern "C" struct TextWindow_02080c68* func_02081da8(struct MenuLayout_0207fdcc_2* arg0, int arg1);

// USA: SetMenuLayoutWindowPalette_02080c68
extern "C" ARM void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette) {
    struct MenuLayoutWindowEntry_02080c68_2* windowEntry = FindMenuLayoutWindowEntry_0207f0ac((struct MenuLayoutWindowEntryList_0207f0ac*)((char*)menuLayout + 0xc), windowId);
    struct TextWindow_02080c68* window;
    if (windowEntry == NULL) {
        return;
    }
    windowEntry->unknown_12_.unknown_0_ = (windowEntry->unknown_12_.unknown_0_ & ~0xf) | (palette & 0xf);
    window = func_02081da8((struct MenuLayout_0207fdcc_2*)menuLayout, windowEntry->windowId_8_);
    if (window != NULL) {
        window->palette_c2_ = windowEntry->unknown_12_.unknown1_0_.unknown_0_0_ & 0xf;
    }
}
