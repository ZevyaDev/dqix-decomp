#include <globaldefs.h>

struct Struct_0205d304_3 {
    short unknown_0_;
    short unknown_2_;
    inline void inline_0205d304(short arg0, short arg1) { unknown_0_ = arg0; unknown_2_ = arg1; }
};

struct TextWindowManager_0205d81c;
struct KeyMenuCursor_0205bf3c;
struct Struct_0205d304_2;
struct Struct_0204aa28;

extern "C" void* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c*, int);
extern "C" void func_0204c770(char*, void*);
extern "C" void func_0205d594(struct Struct_0205d304_2*, unsigned char*, unsigned char*);
#if defined(jpn)
extern "C" void func_0204d790(void* arg0, const char* arg1, unsigned int arg2, int arg3, unsigned char arg4, unsigned char arg5);
#else
extern "C" void func_0204c980(void* arg0, const char* arg1, unsigned int arg2, int arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6);
#endif
extern "C" unsigned int func_0204aa28(struct Struct_0204aa28*);
extern "C" void func_0205bf3c(struct KeyMenuCursor_0205bf3c*);
extern "C" void func_0205d904(unsigned char*);

struct TextWindow_0205d304_4 {
    char unknown_0_[0x4];
    void* pBGLayer_4_;
    char unknown_8_[0x98];
    unsigned int characterDataOffset_a0_;
    int characterDataSize_a4_;
    struct Struct_0205d304_3 unknown_a8_[4];
    char unknown_b8_[0xa];
    short palette_c2_;
    unsigned char id_c4_;
    unsigned char flags_c5_;
    char unknown_c6_;
    unsigned char fontSize_c7_;
    char unknown_c8_[0x18];
};

struct TextWindowManager_0205d304 {
    char unknown_0_[0x54];
    char unknown_54_[0x44];
    void* pBGLayers_98_;
    struct TextWindow_0205d304_4* pTextWindows_9c_;
    struct Struct_0205d304_3 unknown_a0_[4];
    unsigned char cursorWindowId_b0_;
    unsigned char nextWindowId_b1_;
    char unknown_b2_;
    unsigned char textWindowCapacity_b3_;
    unsigned char textWindowCount_b4_;
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
    unsigned char fontSize_b7_;
};

// USA: OpenTextWindow_0205d304
extern "C" ARM void OpenTextWindow_0205d304(struct TextWindowManager_0205d304* windowManager, const char* text, int arg2, unsigned char isVerticallyCentered,
#if defined(jpn)
                                       unsigned char hasPageArrows, unsigned char isSizedToText, void* margins) {
#else
                                       unsigned char hasPageArrows, unsigned char isSizedToText, void* margins, unsigned char font) {
#endif
    struct TextWindow_0205d304_4* textWindow;
    struct TextWindow_0205d304_4* earlierWindow;
    unsigned char isSubScreen, bgIndex, earlierIsSubScreen, earlierBGIndex;
    int hasSameLayerWindow;
    int earlierIndex;
    unsigned char i;
    unsigned int characterDataOffset;

    if (text == 0 || windowManager->pBGLayers_98_ == NULL || windowManager->pTextWindows_9c_ == NULL) return;
    if (windowManager->textWindowCapacity_b3_ <= windowManager->textWindowCount_b4_) return;
    if (FindTextWindow_0205d81c((struct TextWindowManager_0205d81c*)windowManager, windowManager->nextWindowId_b1_) != 0) return;

    textWindow = &windowManager->pTextWindows_9c_[windowManager->textWindowCount_b4_];
    textWindow->unknown_a8_[0].inline_0205d304(windowManager->unknown_a0_[0].unknown_0_, windowManager->unknown_a0_[0].unknown_2_);
    textWindow->unknown_a8_[1].inline_0205d304(windowManager->unknown_a0_[1].unknown_0_, windowManager->unknown_a0_[1].unknown_2_);
    textWindow->unknown_a8_[2].inline_0205d304(windowManager->unknown_a0_[2].unknown_0_, windowManager->unknown_a0_[2].unknown_2_);
    textWindow->unknown_a8_[3].inline_0205d304(windowManager->unknown_a0_[3].unknown_0_, windowManager->unknown_a0_[3].unknown_2_);
    if (hasPageArrows) {
        textWindow->flags_c5_ |= 8;
    } else {
        textWindow->flags_c5_ &= ~8;
    }
    textWindow->id_c4_ = windowManager->nextWindowId_b1_;
    if (windowManager->unknown_b5_) {
        textWindow->flags_c5_ |= 4;
    } else {
        textWindow->flags_c5_ &= ~4;
    }
    if (windowManager->unknown_b6_) {
        textWindow->flags_c5_ |= 0x10;
    } else {
        textWindow->flags_c5_ &= ~0x10;
    }
    textWindow->fontSize_c7_ = windowManager->fontSize_b7_;
    func_0204c770((char*)textWindow, margins);

    if (windowManager->textWindowCount_b4_ != 0) {
        hasSameLayerWindow = 0;
        func_0205d594((struct Struct_0205d304_2*)textWindow->pBGLayer_4_, &isSubScreen, &bgIndex);
        for (earlierIndex = windowManager->textWindowCount_b4_ - 1; earlierIndex >= 0; earlierIndex--) {
            earlierWindow = &windowManager->pTextWindows_9c_[earlierIndex];
            func_0205d594((struct Struct_0205d304_2*)earlierWindow->pBGLayer_4_, &earlierIsSubScreen, &earlierBGIndex);
            if (isSubScreen == earlierIsSubScreen && bgIndex == earlierBGIndex) {
                earlierWindow = &windowManager->pTextWindows_9c_[earlierIndex];
                characterDataOffset = earlierWindow->characterDataOffset_a0_ + earlierWindow->characterDataSize_a4_;
#if defined(jpn)
                func_0204d790(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText);
#else
                func_0204c980(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText, font);
#endif
                hasSameLayerWindow = 1;
                break;
            }
        }
        if (!hasSameLayerWindow) {
            characterDataOffset = func_0204aa28((struct Struct_0204aa28*)textWindow->pBGLayer_4_);
#if defined(jpn)
            func_0204d790(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText);
#else
            func_0204c980(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText, font);
#endif
        }
        textWindow->flags_c5_ &= ~0x20;
        for (i = 0; i < windowManager->textWindowCount_b4_; i++) {
            earlierWindow = &windowManager->pTextWindows_9c_[i];
            earlierWindow->palette_c2_ = 1;
        }
    } else {
        characterDataOffset = func_0204aa28((struct Struct_0204aa28*)textWindow->pBGLayer_4_);
#if defined(jpn)
        func_0204d790(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText);
#else
        func_0204c980(textWindow, text, characterDataOffset, arg2, isVerticallyCentered, isSizedToText, font);
#endif
        textWindow->flags_c5_ &= ~0x20;
    }

    windowManager->textWindowCount_b4_++;
    func_0205bf3c((struct KeyMenuCursor_0205bf3c*)windowManager->unknown_54_);
    windowManager->cursorWindowId_b0_ = windowManager->nextWindowId_b1_;
    func_0205d904((unsigned char*)windowManager);
}
