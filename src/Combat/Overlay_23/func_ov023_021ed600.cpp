#include <globaldefs.h>
#include "std_library_functions.h"

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);

extern "C" int AppendText_02042058(char* buffer, const char* text);

#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

// USA: func_ov023_021ed600
extern "C" ARM void func_ov023_021ed600(char* arg0) {
    struct Struct_ov023_021ed600 { unsigned char unknown_0_0_ : 4; unsigned char unknown_0_4_ : 4; };
    unsigned char var0 = ((struct Struct_ov023_021ed600*)(arg0 + 0xc0))->unknown_0_0_;
    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + 0xc4), var0, 3);

    *(unsigned short*)(arg0 + 0x164) = 0x20;
    *(unsigned short*)(arg0 + 0x166) = 0x9;
    *(unsigned short*)(arg0 + 0x168) = 0;
    *(unsigned short*)(arg0 + 0x16a) = 0xf;
    *(unsigned short*)(arg0 + 0x16c) = 0xa;
    *(unsigned short*)(arg0 + 0x16e) = 0xa;
    *(unsigned short*)(arg0 + 0x170) = 0xc;
    *(unsigned short*)(arg0 + 0x172) = 0x14;
    *(unsigned char*)(arg0 + 0x17b) = 0xc;
    *(unsigned char*)(arg0 + 0x175) = 2;
    unsigned char var1 = 0;
    *(unsigned char*)(arg0 + 0x179) = var1;
    *(unsigned char*)(arg0 + 0x17a) = var1;

#if defined(jpn)
    memset(*(void**)(arg0 + 0x1c), var1, 0x800);
#else
    memset(*(void**)(arg0 + 0x1c), var1, 0x960);
#endif

    int var2 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0x4), 0x3e8);
    AppendText_02042058(*(char**)(arg0 + 0x1c), (const char*)(long)var2);

#if defined(jpn)
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0 + 0xc4, *(void**)(arg0 + 0x1c), 0, 0, 0, 0, 0, 1);
#endif
}
