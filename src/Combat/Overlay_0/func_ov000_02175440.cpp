#include <globaldefs.h>

struct TextWindowManager_0205d0e0_2 {
    char unknown_0_[0x98];
    int pBGLayers_98_;
    void* pTextWindows_9c_;
    char unknown_a0_[0x14];
    unsigned char textWindowCount_b4_;
};
extern "C" void* GetLastOpenedTextWindow_0205d888(struct TextWindowManager_0205d0e0_2* windowManager);
extern "C" int IsTextWindowReady_0204c7cc(unsigned char* textWindow);
extern "C" void SetMenuCursorTouchedIndex_0205bc24(void* cursor, int index);

// USA: func_ov000_02175440
extern "C" ARM void func_ov000_02175440(void* arg0) {
    void* var0 = GetLastOpenedTextWindow_0205d888((struct TextWindowManager_0205d0e0_2*)((char*)arg0 + 0x188));
    if (var0 == 0) return;
    if (!IsTextWindowReady_0204c7cc((unsigned char*)var0)) return;
    if (((unsigned char*)var0)[0xc5] & 0x2) return;
    SetMenuCursorTouchedIndex_0205bc24((char*)arg0 + 0x18c, -1);
}
