#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void SetNextTextWindow_ov002_0215be00(void* menu, int windowId, int x, int y);
extern "C" void func_ov002_02160ce8(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

#if defined(jpn)
struct Struct_ov002_02160c68 { char unknown_0_[0xa98]; void* unknown_a98_; };
struct Struct_ov002_02160c68_2 { char unknown_0_[0xa80]; int unknown_a80_; };
#else
struct Struct_ov002_02160c68 { char unknown_0_[0xbd0]; void* unknown_bd0_; };
struct Struct_ov002_02160c68_2 { char unknown_0_[0xbb8]; int unknown_bb8_; };
#endif

// USA: func_ov002_02160c68
#if defined(jpn)
extern "C" void func_ov002_02161c0c(void* arg0, void* arg1, int arg2);
#define func_ov002_02160ce8 func_ov002_02161c0c
extern "C" ARM void func_ov002_02160c68(char* arg0) {
    SetNextTextWindow_ov002_0215be00(arg0, ((struct Struct_ov002_02160c68_2*)(arg0 + 0x1000))->unknown_a80_ & 0xff, 1, 0xe);

    memset(((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_a98_, 0, 0x800);
    func_ov002_02160ce8(arg0, ((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_a98_, 0);

    OpenTextWindow_0205d304(arg0 + 0xe20, ((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_a98_, 0, 0, 0, 1, 0);
}
#else
extern "C" ARM void func_ov002_02160c68(char* arg0) {
    SetNextTextWindow_ov002_0215be00(arg0, ((struct Struct_ov002_02160c68_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 1, 0xe);

    memset(((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_bd0_, 0, 0x960);
    func_ov002_02160ce8(arg0, ((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_bd0_, 0);

    OpenTextWindow_0205d304(arg0 + 0xec8, ((struct Struct_ov002_02160c68*)(arg0 + 0x1000))->unknown_bd0_, 0, 0, 0, 0, 0, 0);
}
#endif
