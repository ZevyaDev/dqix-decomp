#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020dcfc8(int arg0, char* arg1);
extern "C" int GetMessageWindow_020421a0();
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
struct TextWindowManager_0205d81c;
struct TextWindow_0205d0e0;
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
struct TextWindowManager_0205d5d0;
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void*, void*, int, int, int, int, int);
#define APPLY_TEXT(s,k,t) SetTextWindowText_0205d5d0(s,k,(int)t,1)
#define DRAW_TEXT(s,t) OpenTextWindow_0205d304(s,t,0,0,0,1,0)
enum { Enum_ov000_021781f8_92=0x28, Enum_ov000_021781f8_2400=0x800, Enum_ov000_021781f8_7535=0x1fa7, Enum_ov000_021781f8_16=12, Enum_ov000_021781f8_8=7, Enum_ov000_021781f8_16_2=0x16, Enum_ov000_021781f8_5=8 };
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#define APPLY_TEXT(s,k,t) SetTextWindowText_0205d5d0(s,k,(int)t,1,0)
#define DRAW_TEXT(s,t) OpenTextWindow_0205d304(s,t,0,0,0,1,0,0)
enum { Enum_ov000_021781f8_92=0x5c, Enum_ov000_021781f8_2400=0x960, Enum_ov000_021781f8_7535=0x1d6f, Enum_ov000_021781f8_16=16, Enum_ov000_021781f8_8=8, Enum_ov000_021781f8_16_2=0x10, Enum_ov000_021781f8_5=5 };
#endif

struct Struct_ov000_021781f8 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_ov000_021781f8
extern "C" ARM void func_ov000_021781f8(char* arg0, struct Struct_ov000_021781f8* arg1) {
    char* var0;
    char* var1;
#if !defined(jpn)
    char var2[0x800];
#endif
    char* var3 = *(char**)(GetMessageWindow_020421a0() + Enum_ov000_021781f8_92);
    memset(var3, 0, Enum_ov000_021781f8_2400);
    func_020dcfc8(*(short*)(arg0 + 0x26 + *(signed char*)(arg0 + Enum_ov000_021781f8_7535) * 2), var3);
#if !defined(jpn)
    func_02046608(GetMessageWindow_020421a0(), 0xa, var3, var2, 0x72, 0, 0);
#endif
    var1 = arg0 + 0x188;
#if defined(jpn)
    var0 = var3;
#else
    var0 = var2;
#endif
    if (FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)var1, 0x21)) {
        APPLY_TEXT((struct TextWindowManager_0205d5d0*)var1, 0x21, var0);
        return;
    }
    int var4 = arg1->unknown_44_;
    int var5 = arg1->unknown_48_;
    *(short*)(var1 + 0xa0) = Enum_ov000_021781f8_16;
    *(short*)(var1 + 0xa2) = Enum_ov000_021781f8_8;
    *(short*)(var1 + 0xa4) = (var4 >> 3) + Enum_ov000_021781f8_16_2;
    *(short*)(var1 + 0xa6) = var5 >> 3;
    *(short*)(var1 + 0xa8) = 7;
    *(short*)(var1 + 0xaa) = Enum_ov000_021781f8_5;
    *(short*)(var1 + 0xac) = 0xa;
    *(short*)(var1 + 0xae) = 0xe;
    *(unsigned char*)(var1 + 0xb1) = 0x21;
    DRAW_TEXT(var1, var0);
}
