#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov002_02155960_2;
struct Struct_ov002_02155960_4;
extern "C" struct Struct_ov002_02155960_4* FindTextWindow_0205d81c(struct Struct_ov002_02155960_2* windowManager, int windowId);

struct Struct_ov002_0215624c_11;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct Struct_ov002_0215624c_11* windowManager, unsigned char isSubScreen, unsigned char bgIndex);

extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_0215eec0(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

struct Struct_ov002_0215ee04 { char unknown_0_[0xbd0]; void* unknown_bd0_; };

// USA: func_ov002_0215ee04
extern "C" ARM void func_ov002_0215ee04(char* arg0) {
#if defined(jpn)
    SetNextTextWindowBGLayer_0205de24((struct Struct_ov002_0215624c_11*)(arg0 + 0xe20), 0, 2);
    func_ov002_0215be00(arg0, 0x13, 0x15, 1);

    memset(*(void**)(arg0 + 0x1000 + 0xa98), 0, 0x800);
    func_ov002_0215eec0(arg0, *(void**)(arg0 + 0x1000 + 0xa98), 0);

    OpenTextWindow_0205d304(arg0 + 0xe20, *(void**)(arg0 + 0x1000 + 0xa98), 0, 0, 0, 1, 0);
#else
    short var0 = 0x10;
    struct Struct_ov002_02155960_4* var1 = FindTextWindow_0205d81c((struct Struct_ov002_02155960_2*)(arg0 + 0xec8), var0);
    if (var1) {
        var0 = *(short*)((char*)var1 + 0xac) + *(short*)((char*)var1 + 0xa8);
    }
    SetNextTextWindowBGLayer_0205de24((struct Struct_ov002_0215624c_11*)(arg0 + 0xec8), 0, 2);
    func_ov002_0215be00(arg0, 0x12, var0, 0x11);

    memset(((struct Struct_ov002_0215ee04*)(arg0 + 0x1000))->unknown_bd0_, 0, 0x960);
    func_ov002_0215eec0(arg0, ((struct Struct_ov002_0215ee04*)(arg0 + 0x1000))->unknown_bd0_, 0);

    OpenTextWindow_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215ee04*)(arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 0, 0, 0);
#endif
}
