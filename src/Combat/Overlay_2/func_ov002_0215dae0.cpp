#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void SetNextTextWindow_ov002_0215be00(void* menu, int windowId, int x, int y);
extern "C" void func_ov002_0215db8c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_ov002_02157030(void* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
#define RG(u, j) (u)
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" void func_ov002_0215ddbc(void* arg0);

struct TextWindowManager_0205dee8 {
    char unknown_0_[0xb0];
    unsigned char cursorWindowId_b0_;
};
extern "C" void SetCursorTextWindow_0205dee8(struct TextWindowManager_0205dee8* windowManager, int windowId);

struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette);

// USA: func_ov002_0215dae0
extern "C" ARM void func_ov002_0215dae0(unsigned char* arg0) {
#if defined(jpn)
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    func_ov002_02157030(arg0, 4, &var0, &var1, &var2, &var3);
    var0 = var0 + var2;
    var1 -= 3;
    var0 -= 2;
    SetNextTextWindow_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + 0xa80)) & 0xff, var0, var1);
#else
    SetNextTextWindow_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + 0xbb8)) & 0xff, 5, 1);
#endif

    memset(*(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));

    func_ov002_0215db8c(arg0, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xe20, *(int*)(arg0 + 0x1000 + 0xa98), 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0x2c8 + 0xc00, *(int*)(arg0 + 0x1000 + 0xbd0), 0, 1, 0, 1, 0, 0);
#endif

    func_ov002_0215ddbc(arg0);

    SetCursorTextWindow_0205dee8((struct TextWindowManager_0205dee8*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0xb, 0xc));

    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0xb, 0xc), 0);
}
