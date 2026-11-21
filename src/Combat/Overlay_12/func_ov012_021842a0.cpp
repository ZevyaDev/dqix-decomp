#include <globaldefs.h>

struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
struct Struct_0205e00c;
extern "C" Struct_0205e00c* func_0205e00c(struct TextWindowManager_0205d81c* arg0, int arg1);
extern "C" void SetTextWindowPageNumberShown_02050400(unsigned char* arg0, int isShown);
extern "C" void SetTextWindowPage_0205042c(unsigned char* textWindow, unsigned char page);
extern "C" void SetTextWindowPageCount_02050440(unsigned char* textWindow, int pageCount);

// USA: func_ov012_021842a0
extern "C" ARM void func_ov012_021842a0(void* arg0, int arg1, int arg2, int arg3) {
    void* var0 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)((char*)arg0 + 0xac), arg1);
    if (var0 == 0) {
        var0 = func_0205e00c((struct TextWindowManager_0205d81c*)((char*)arg0 + 0xac), arg1);
        if (var0 == 0) return;
    }
    if (arg3 != 0) {
        SetTextWindowPageNumberShown_02050400((unsigned char*)var0, 1);
        SetTextWindowPage_0205042c((unsigned char*)var0, (unsigned char)arg2);
        SetTextWindowPageCount_02050440((unsigned char*)var0, (unsigned char)arg3);
    } else {
        SetTextWindowPageNumberShown_02050400((unsigned char*)var0, 0);
        SetTextWindowPage_0205042c((unsigned char*)var0, 0);
        SetTextWindowPageCount_02050440((unsigned char*)var0, 0);
    }
}
