#include <globaldefs.h>
extern "C" void func_0204c8f0(struct Struct_0204c8f0*);


struct MenuLayout_0207fd00 {
    #if defined(jpn)
    char unknown_0_[0x20];
#else
    char unknown1_0_[0x2c];
#endif
    void* pBGLayers_2c_;
    char* pWindows_30_;
    char unknown_34_[5];
    unsigned char windowCount_39_;
};

// USA: DrawMenuLayoutWindows_0207fd00
extern "C" ARM void DrawMenuLayoutWindows_0207fd00(struct MenuLayout_0207fd00* menuLayout) {
    unsigned char windowCount;
    char* window;
    unsigned char i;
    if (menuLayout->pBGLayers_2c_ != NULL && menuLayout->pWindows_30_ != NULL) {
        window = menuLayout->pWindows_30_;
        windowCount = menuLayout->windowCount_39_;
        for (i = 0; i < windowCount; i++) {
            func_0204c8f0((struct Struct_0204c8f0*)(window));
            window += 0xe0;
        }
    }
}
