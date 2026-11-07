#include <globaldefs.h>
extern "C" void func_0204c804(void*);

struct TextWindow_0207fe44_2 { char unknown_0_[0xe0]; };

struct MenuLayout_0207fe44 {
#if defined(jpn)
    char unknown_0_[0x24];
#else
    char unknown1_0_[0x30];
#endif
    TextWindow_0207fe44_2* unknown_30_;
    char unknown_34_[0x39 - 0x34];
    unsigned char unknown_39_;
};

// USA: CloseMenuLayoutWindows_0207fe44
extern "C" ARM void CloseMenuLayoutWindows_0207fe44(MenuLayout_0207fe44* menuLayout) {
    unsigned char windowCount;
    TextWindow_0207fe44_2* window = menuLayout->unknown_30_;
    unsigned char i;
    if (window == NULL) return;
    windowCount = menuLayout->unknown_39_;
    for (i = 0; i < windowCount; i++) {
        func_0204c804((void*)(window));
        window++;
    }
}
