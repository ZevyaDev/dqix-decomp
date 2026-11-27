#include <globaldefs.h>

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;

extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" struct TextWindow_0205d0e0* GetNextTextWindowSlot_0205e00c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" void SetTextWindowPageNumberShown_02050400(unsigned char* textWindow, int isShown);
extern "C" void SetTextWindowPage_0205042c(unsigned char* textWindow, unsigned char page);
extern "C" void SetTextWindowPageCount_02050440(unsigned char* textWindow, int pageCount);

// USA: func_ov002_0215b918
extern "C" ARM void func_ov002_0215b918(unsigned char* arg0, int arg1, int arg2, int arg3) {
    struct TextWindowManager_0205d81c* var0 = (struct TextWindowManager_0205d81c*)(arg0 + 0x2c8 + 0xc00);
    struct TextWindow_0205d0e0* var1 = FindTextWindow_0205d81c(var0, arg1);
    if (var1 == 0) {
        var1 = GetNextTextWindowSlot_0205e00c(var0, arg1);
        if (var1 == 0) return;
    }
    if (arg3 != 0) {
        SetTextWindowPageNumberShown_02050400((unsigned char*)var1, 1);
        SetTextWindowPage_0205042c((unsigned char*)var1, arg2 & 0xff);
        SetTextWindowPageCount_02050440((unsigned char*)var1, arg3 & 0xff);
    } else {
        SetTextWindowPageNumberShown_02050400((unsigned char*)var1, 0);
        SetTextWindowPage_0205042c((unsigned char*)var1, 0);
        SetTextWindowPageCount_02050440((unsigned char*)var1, 0);
    }
}
