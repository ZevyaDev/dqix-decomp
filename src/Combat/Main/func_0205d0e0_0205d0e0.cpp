#include <globaldefs.h>

struct TextWindow_0205d0e0 {
    char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    char unknown_c5_[0xd8 - 0xc5];
    unsigned char unknown_d8_0_ : 1;
    unsigned char unknown_d8_1_ : 7;
    unsigned char unknown_d9_;
    unsigned char unknown_da_;
    char unknown_db_[0xe0 - 0xdb];
};

struct TextWindowManager_0205d81c {
    char unknown_0_[0x98];
    int unknown_98_;
    struct TextWindow_0205d0e0* pTextWindows_9c_;
    char unknown_a0_[0xb0 - 0xa0];
    unsigned char cursorWindowId_b0_;
    char unknown_b1_[0xb3 - 0xb1];
    unsigned char textWindowCapacity_b3_;
    char unknown_b4_[0xb8 - 0xb4];
    unsigned char unknown_b8_;
};

struct TextWindowManager_0205d0e0_2;
extern "C" void* GetLastOpenedTextWindow_0205d888(struct TextWindowManager_0205d0e0_2* windowManager);

extern "C" int func_0205c5b0(void* arg0, int arg1);
extern "C" unsigned int func_0205c710(unsigned char* arg0);
extern "C" void func_0205042c(unsigned char* arg0, unsigned char arg1);
extern "C" unsigned int func_0205c6e4(unsigned char* arg0);
extern "C" void func_02050440(unsigned char* arg0, int arg1);
extern "C" void func_0204c87c(void* arg0, int arg1);
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
struct Struct_0204ffc0_2;
extern "C" void func_0204ffc0(struct Struct_0204ffc0_2* arg0, int arg1);

// USA: UpdateTextWindowManager_0205d0e0
extern "C" ARM int UpdateTextWindowManager_0205d0e0(void* windowManager, int ticks) {
    struct TextWindowManager_0205d81c* textWindowManager = (struct TextWindowManager_0205d81c*)windowManager;
    int cursorChange;
    struct TextWindow_0205d0e0* textWindow;
    unsigned char i;

    if (textWindowManager->unknown_98_ == 0) return 0;
    if (textWindowManager->pTextWindows_9c_ == 0) return 0;

    cursorChange = 0;
    textWindow = (struct TextWindow_0205d0e0*)GetLastOpenedTextWindow_0205d888((struct TextWindowManager_0205d0e0_2*)windowManager);
    if (textWindow != 0) {
        cursorChange = func_0205c5b0(windowManager, ticks);
        if (textWindowManager->cursorWindowId_b0_ == textWindow->unknown_c4_) {
            if (textWindow->unknown_d8_0_) {
                func_0205042c((unsigned char*)textWindow, func_0205c710((unsigned char*)windowManager));
                func_02050440((unsigned char*)textWindow, (unsigned char)func_0205c6e4((unsigned char*)windowManager));
            }
        }
    }

    for (i = 0; i < textWindowManager->textWindowCapacity_b3_; i++) {
        func_0204c87c((void*)&textWindowManager->pTextWindows_9c_[i], ticks);
    }

    if (textWindowManager->unknown_b8_ != 0xff) {
        textWindow = FindTextWindow_0205d81c(textWindowManager, textWindowManager->unknown_b8_);
        if (textWindow != 0) {
            func_0204ffc0((struct Struct_0204ffc0_2*)textWindow, -1);
        }
        textWindowManager->unknown_b8_ = 0xff;
    }

    return cursorChange;
}
