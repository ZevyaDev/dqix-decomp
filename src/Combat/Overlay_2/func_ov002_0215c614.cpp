#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov002_02157030(void* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void SetNextTextWindow_ov002_0215be00(void* menu, int windowId, int x, int y);
extern "C" void func_ov002_0215c72c(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
#define RG(u, j) (u)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void func_ov002_0215c8a4(void* arg0);
struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(TextWindowManager_0205d81c*, int, int);
struct TextWindowManager_0205dee8;
extern "C" void SetCursorTextWindow_0205dee8(struct TextWindowManager_0205dee8* windowManager, int windowId);

struct Struct_ov002_0215c614 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };
struct Struct_ov002_0215c614_2 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };

// USA: func_ov002_0215c614
extern "C" ARM void func_ov002_0215c614(char* arg0) {
    short var0 = 0, var1 = 0, var2 = 1, var3 = 1;
    func_ov002_02157030(arg0, 3, &var0, &var1, &var2, &var3);
    var1 = var1 + 3;
    SetNextTextWindow_ov002_0215be00(arg0, ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, var0, var1);

    memset(((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215c72c(arg0, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xe20, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215c614*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);
#endif

    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + RG(0xec8, 0xe20)), 0, 2);
    func_ov002_0215c8a4(arg0);
    SetTextWindowPalette_0205deb4((TextWindowManager_0205d81c*)(arg0 + RG(0xec8, 0xe20)), ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 0);
    SetCursorTextWindow_0205dee8((struct TextWindowManager_0205dee8*)(arg0 + RG(0xec8, 0xe20)), ((struct Struct_ov002_0215c614_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff);
}
