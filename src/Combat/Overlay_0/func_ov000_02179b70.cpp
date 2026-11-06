#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#endif

#include "std_library_functions.h"

struct TextWindow_0205d0e0 {
    char unknown_0_[0xc2];
    unsigned short palette_c2_;
    char unknown_c4_[0xe0 - 0xc4];
};

struct TextWindowManager_0205d81c;

extern "C" void func_ov000_02179cdc(void* arg0, void* arg1);
extern "C" void func_ov000_0217ab8c(void* arg0, int arg1, int arg2);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void func_ov000_02179ed8(void* arg0, void* arg1, void* arg2);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" void func_ov000_02176210(void* arg0, int arg1, int arg2);

// USA: func_ov000_02179b70
extern "C" ARM void func_ov000_02179b70(char* arg0, void* arg1, int arg2, int arg3) {
    func_ov000_02179cdc(arg0, arg1);
    int var0 = *(int*)((char*)arg1 + 0x44);
    int var1 = *(int*)((char*)arg1 + 0x48);
    func_ov000_0217ab8c(arg1, arg2, arg3);

    char* var2 = arg0 + 0x188;
#if defined(jpn)
    *(short*)(var2 + 0xa0) = 0xd;
#else
    *(short*)(var2 + 0xa0) = 0x10;
#endif
    *(short*)(var2 + 0xa2) = 1;
    *(short*)(var2 + 0xa4) = (var0 >> 3) + 0x10;
    *(short*)(var2 + 0xa6) = (var1 >> 3);
    *(short*)(var2 + 0xa8) = 0xc;
    *(short*)(var2 + 0xaa) = 0xa;
    *(short*)(var2 + 0xac) = 0xa;
    *(short*)(var2 + 0xae) = 0xe;
    *(unsigned char*)(var2 + 0xb1) = 0x15;

    void* var3 = *(void**)(GetMessageWindow_020421a0() + REGION_OFFSET_0);
    memset(var3, 0, REGION_OFFSET_1);
    func_ov000_02179ed8(arg0, arg1, var3);
#if defined(jpn)
    OpenTextWindow_0205d304(var2, var3, 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(var2, var3, 0, 1, 0, 1, 0, 0);
#endif

    struct TextWindow_0205d0e0* var4 = FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)var2, 0x16);
    if (var4 != NULL) {
        var4->palette_c2_ = 0;
    }
    func_ov000_02176210(arg0 + 0x188, 0x15, 0x16);
}
