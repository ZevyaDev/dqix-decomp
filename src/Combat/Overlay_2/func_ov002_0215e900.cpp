#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215e9c4(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
#define RG(u, j) (u)
extern "C" void OpenTextWindow_0205d304(void* windowManager, int text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" void func_ov002_0215eadc(void* arg0, int arg1);

struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette);

struct Struct_0205dee8 {
    char unknown_0_[0xb0];
    unsigned char unknown_b0_;
};
extern "C" void func_0205dee8(struct Struct_0205dee8* arg0, int arg1);

// USA: func_ov002_0215e900
extern "C" ARM void func_ov002_0215e900(unsigned char* arg0) {
    func_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + RG(0xbb8, 0xa80))) & 0xff, 1, 1);

    memset(*(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));

    func_ov002_0215e9c4(arg0, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xe20, *(int*)(arg0 + 0x1000 + 0xa98), 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0x2c8 + 0xc00, *(int*)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, 1, 0, 1, 0, 0);
#endif

    func_ov002_0215eadc(arg0, 1);

    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0x11, 0x12), 1);

    func_0205dee8((struct Struct_0205dee8*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0x10, 0x11));

    SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), RG(0x10, 0x11), 0);
}
