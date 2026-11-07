#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void SetNextTextWindow_ov002_0215be00(void* menu, int windowId, int x, int y);
extern "C" void func_ov002_0215e250(void* arg0, void* arg1, int arg2);
#if defined(jpn)
#define RG(u, j) (j)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
#define RG(u, j) (u)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

struct Struct_ov002_0215e1d0 { char unknown_0_[RG(0xbd0, 0xa98)]; void* unknown_bd0_; };
struct Struct_ov002_0215e1d0_2 { char unknown_0_[RG(0xbb8, 0xa80)]; int unknown_bb8_; };

// USA: func_ov002_0215e1d0
extern "C" ARM void func_ov002_0215e1d0(char* arg0) {
    SetNextTextWindow_ov002_0215be00(arg0, ((struct Struct_ov002_0215e1d0_2*)(arg0 + 0x1000))->unknown_bb8_ & 0xff, 1, 1);

    memset(((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, RG(0x960, 0x800));
    func_ov002_0215e250(arg0, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xe20, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xec8, ((struct Struct_ov002_0215e1d0*)(arg0 + 0x1000))->unknown_bd0_, 0, 1, 0, 1, 0, 0);
#endif
}
