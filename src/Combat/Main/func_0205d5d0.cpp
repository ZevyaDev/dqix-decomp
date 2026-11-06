#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct TextWindow_0205d5d0_2 {
    char unknown_0_[0xc4];
    unsigned char id_c4_;
};

struct TextWindowManager_0205d5d0 {
    char unknown_0_[0x98];
    int unknown_98_;
    TextWindow_0205d5d0_2* pTextWindows_9c_;
    char unknown_a0_[0x13];
    unsigned char textWindowCapacity_b3_;
};

extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_0205d904(unsigned char* arg0);
#if defined(jpn)
extern "C" void func_0204cb20(void* arg0, int arg1, int arg2);
#else
extern "C" void func_0204cb20(void* arg0, int arg1, int arg2, unsigned char arg3);
#endif

// USA: SetTextWindowText_0205d5d0
extern "C" ARM int SetTextWindowText_0205d5d0(struct TextWindowManager_0205d5d0* windowManager, int windowId, int text, int arg3
#if !defined(jpn)
, unsigned char font
#endif
) {
    TextWindow_0205d5d0_2* textWindow;
    unsigned char i;

    if (text == 0) return 1;
    if (windowManager->unknown_98_ == 0) return 1;
    if (windowManager->pTextWindows_9c_ == 0) return 1;

    for (i = 0; i < windowManager->textWindowCapacity_b3_; i++) {
        textWindow = (TextWindow_0205d5d0_2*)((char*)windowManager->pTextWindows_9c_ + i * 0xe0);
        if (!func_0204c7e0((unsigned char*)textWindow)) continue;
        if (windowId != textWindow->id_c4_) continue;
#if defined(jpn)
        func_0204cb20(textWindow, text, arg3);
#else
        func_0204cb20(textWindow, text, arg3, font);
#endif
        func_0205d904((unsigned char*)windowManager);
        return 0;
    }
    return 1;
}
