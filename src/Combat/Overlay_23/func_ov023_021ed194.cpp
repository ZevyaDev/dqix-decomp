#include <globaldefs.h>
#include "std_library_functions.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void func_ov023_021ed254(void* arg0, void* arg1);
#if defined(jpn)
extern "C" ARM void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" ARM void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif


// USA: func_ov023_021ed194
extern "C" ARM void func_ov023_021ed194(char* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021ed194_2400=0x800};
#else
 enum {Enum_ov023_021ed194_2400=0x960};
#endif
    struct Struct_ov023_021ed194 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };
    unsigned char var0 = ((struct Struct_ov023_021ed194*)(arg0 + 0xa0))->unknown_0_0_;
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + 0xc4), var0, 3);

#if defined(jpn)
    *(unsigned short*)(arg0 + 0x164) = 0x10;
#else
    *(unsigned short*)(arg0 + 0x164) = 0x14;
#endif

    *(unsigned short*)(arg0 + 0x166) = 3;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x168) = 8;
#else
    *(unsigned short*)(arg0 + 0x168) = 6;
#endif

    *(unsigned short*)(arg0 + 0x16a) = 5;
    *(unsigned short*)(arg0 + 0x16c) = 0;
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x16e) = 5;
#else
    *(unsigned short*)(arg0 + 0x16e) = 6;
#endif
    *(unsigned short*)(arg0 + 0x170) = 0xc;
    *(unsigned short*)(arg0 + 0x172) = 0xe;
    *(unsigned char*)(arg0 + 0x17b) = 0xc;
    *(unsigned char*)(arg0 + 0x175) = 0;
    *(unsigned char*)(arg0 + 0x179) = 1;
    *(unsigned char*)(arg0 + 0x17a) = 1;

    memset(*(void**)(arg0 + 0x1c), 0, Enum_ov023_021ed194_2400);

    func_ov023_021ed254(arg0, *(void**)(arg0 + 0x1c));

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0, 1);
#endif

}
