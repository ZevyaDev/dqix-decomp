#include <globaldefs.h>
#include "std_library_functions.h"

struct TextWindowManager_0205d6a0;
extern "C" void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0* windowManager, int isAll);

extern "C" void func_ov023_021e7cec(void* arg0, int arg1, int arg2, int arg3);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

struct Struct_ov023_021e802c;
extern "C" void func_ov023_021e8cc0(struct Struct_ov023_021e802c* arg0);
extern "C" void func_ov023_021e8cdc(void* arg0);
extern "C" void func_ov023_021e8e34(void* arg0);
extern "C" void func_ov023_021e8ef8(void* arg0);

struct TextWindowManager_0205d81c;
extern "C" void SetTextWindowPalette_0205deb4(struct TextWindowManager_0205d81c* windowManager, int windowId, int palette);

struct Struct_ov023_021e802c_2 {
    char unknown_0_[0x5d8];
    void* unknown_5d8_;
};

// USA: func_ov023_021e802c
extern "C" ARM void func_ov023_021e802c(struct Struct_ov023_021e802c_2* arg0) {
#if defined(jpn)
 enum {Enum_ov023_021e802c_2400=0x800};
#else
 enum {Enum_ov023_021e802c_2400=0x960};
#endif
    CloseTextWindows_0205d6a0((struct TextWindowManager_0205d6a0*)((char*)arg0 + 0x78), 1);
    func_ov023_021e7cec(arg0, 0xc, 0, 5);
    memset(arg0->unknown_5d8_, 0, Enum_ov023_021e802c_2400);
    func_ov023_021e8cc0((struct Struct_ov023_021e802c*)arg0);
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 0, 0, 0, 1, 0);
#else
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->field5d8, 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 0, 0, 0, 0, 0, 1);
#endif

#endif

    func_ov023_021e7cec(arg0, 0xd, 0, 0x10);
    memset(arg0->unknown_5d8_, 0, Enum_ov023_021e802c_2400);
    func_ov023_021e8cdc(arg0);
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 0, 0, 0, 1, 0);
#else
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->field5d8, 0, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 0, 0, 0, 0, 0, 1);
#endif

#endif

    func_ov023_021e7cec(arg0, 0xe, 0, 2);
    memset(arg0->unknown_5d8_, 0, Enum_ov023_021e802c_2400);
    func_ov023_021e8e34(arg0);
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 0, 0, 1, 0);
#else
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->field5d8, 1, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 0, 0, 1, 0, 0);
#endif

#endif

    func_ov023_021e7cec(arg0, 0xf, 0, 0xd);
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 0, 0, 1, 0);
#else
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->field5d8, 1, 0, 0, 1, 0);
#else
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 0, 0, 1, 0, 0);
#endif

#endif

    func_ov023_021e7cec(arg0, 0x10, 0xf, 0xd);
    memset(arg0->unknown_5d8_, 0, Enum_ov023_021e802c_2400);
    func_ov023_021e8ef8(arg0);
#if defined(jpn)
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304((char*)arg0 + 0x78, arg0->unknown_5d8_, 1, 1, 0, 1, 0, 1);
#endif

    for (int var0 = 0; var0 < 5; var0++) {
        SetTextWindowPalette_0205deb4((struct TextWindowManager_0205d81c*)((char*)arg0 + 0x78), (unsigned char)(var0 + 0xc), 0);
    }
}
