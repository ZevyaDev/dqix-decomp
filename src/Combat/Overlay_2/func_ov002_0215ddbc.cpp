#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_ov004_0215de9c func_ov002_0215ef64
#endif

extern "C" void func_ov002_02157030(void* arg0, unsigned char arg1, short* arg2, short* arg3, short* arg4, short* arg5);
struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void SetNextTextWindow_ov002_0215be00(void* menu, int windowId, int x, int y);
extern "C" void func_ov004_0215de9c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
#define RG(u, j) (u)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

// USA: func_ov002_0215ddbc
extern "C" ARM void func_ov002_0215ddbc(unsigned char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    unsigned char var4 = (unsigned char)*(int*)(arg0 + 0x1000 + RG(0xbb8, 0xa80));
    func_ov002_02157030(arg0, var4, &var0, &var1, &var2, &var3);
    var0 = var0 + var2;
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + RG(0x2c8 + 0xc00, 0xe20)), 0, 3);
    SetNextTextWindow_ov002_0215be00(arg0, RG(0xd, 0xe), var0, var1);
    memset(*(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, RG(0x960, 0x800));
    func_ov004_0215de9c(arg0, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0);
#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xe20, *(void**)(arg0 + 0x1000 + 0xa98), 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0x2c8 + 0xc00, *(void**)(arg0 + 0x1000 + RG(0xbd0, 0xa98)), 0, 0, 0, 1, 0, 0);
#endif
}
