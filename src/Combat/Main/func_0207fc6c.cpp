#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fc6c_44 = 0x20 };
#else
enum { Enum_0207fc6c_44 = 0x2c };
#endif

extern "C" void func_0204c87c(void* arg0, int arg1);

struct MenuLayout_0207fc6c {
    char unknown_0_[Enum_0207fc6c_44];
    void* pBGLayers_2c_;
    char* pWindows_30_;
    char unknown_34_[5];
    unsigned char windowCount_39_;
};

// USA: UpdateMenuLayoutWindows_0207fc6c
extern "C" ARM void UpdateMenuLayoutWindows_0207fc6c(struct MenuLayout_0207fc6c* menuLayout, int ticks) {
    unsigned char windowCount;
    char* window;
    unsigned char i;
    if (menuLayout->pBGLayers_2c_ != NULL && menuLayout->pWindows_30_ != NULL) {
        window = menuLayout->pWindows_30_;
        windowCount = menuLayout->windowCount_39_;
        for (i = 0; i < windowCount; i++) {
            func_0204c87c(window, ticks);
            window += 0xe0;
        }
    }
}
