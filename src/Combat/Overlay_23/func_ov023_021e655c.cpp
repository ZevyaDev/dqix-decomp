#include <globaldefs.h>

#if defined(jpn)

struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette);

// JPN: func_ov023_021e655c
extern "C" ARM void func_ov023_021e655c(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 7;
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 7, 0);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 8, 1);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 9, 1);
}

// JPN: func_ov023_021e65a0
extern "C" ARM void func_ov023_021e65a0(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 8;
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 7, 1);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 8, 0);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 9, 1);
}

// JPN: func_ov023_021e65e8
extern "C" ARM void func_ov023_021e65e8(void* arg0) {
    *((unsigned char*)arg0 + 0x1341) = 9;
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 7, 1);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 8, 1);
    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x90), 9, 0);
}

#endif
