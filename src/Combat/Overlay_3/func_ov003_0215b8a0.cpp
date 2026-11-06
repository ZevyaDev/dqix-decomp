#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215b8a0_2400 = 0x800 };
#else
enum { Enum_ov003_0215b8a0_2400 = 0x960 };
#endif

#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void*, void*, int, int, int, int, int);
#endif
#include "std_library_functions.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char arg1, unsigned char bgIndex);

extern "C" void func_ov003_0215b964(void* arg0, void* arg1, int arg2);
#if !defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

// USA: func_ov003_0215b8a0
extern "C" ARM void func_ov003_0215b8a0(unsigned char* arg0) {
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + 0xf4), 0, 2);
    short var0 = arg0[0x590];
    int var1 = (var0 * (short)14 + 31) / 8;
    *(short*)(arg0 + 0x100 + 0x94) = 14;
    *(short*)(arg0 + 0x100 + 0x96) = var1;
    *(short*)(arg0 + 0x100 + 0x98) = 1;
    *(short*)(arg0 + 0x100 + 0x9a) = 2;
    *(short*)(arg0 + 0x100 + 0x9c) = 0xc;
    *(short*)(arg0 + 0x100 + 0x9e) = 8;
    *(short*)(arg0 + 0x100 + 0xa0) = 0xa;
    *(short*)(arg0 + 0x100 + 0xa2) = 14;
    arg0[0x1a5] = 2;
    arg0[0x1a9] = 1;
    void* var2 = *(void**)(arg0 + 0x7c);
    memset(var2, 0, Enum_ov003_0215b8a0_2400);
    func_ov003_0215b964(arg0, *(void**)(arg0 + 0x7c), 0);
#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xf4, *(void**)(arg0 + 0x7c), 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xf4, *(void**)(arg0 + 0x7c), 0, 1, 0, 0, 0, 0);
#endif
}
