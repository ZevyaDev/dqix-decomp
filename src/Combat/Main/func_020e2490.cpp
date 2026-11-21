#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Graphics/OBJSpriteSet.h"

extern "C" void func_020e25cc(signed char* arg0);
struct Struct_020200c0_3;
extern "C" void func_02020520(struct Struct_020200c0_3* arg0);
struct Struct_020e1568;
extern "C" void func_020e1568(struct Struct_020e1568* arg0);
extern "C" void func_020e1588(unsigned char* arg0);
extern "C" void func_020e15f8(char* arg0, int arg1, int arg2);
struct SpriteAnimationList_02043368;

struct YesNoWindow_020e2490 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    unsigned char* unknown_c_;
    unsigned char* pWindow_10_;
    signed char unknown_14_;
    signed char unknown_15_;
    signed char unknown_16_;
    signed char unknown_17_;
    short cursorX_18_;
    short cursorY_1a_;
    short cursorAnimationIndex_1c_;
    signed char cursorAnimationFlags_1e_;
    signed char unknown_1f_;
    void* pCursorAnimationList_20_;
};

// USA: InitYesNoWindow_020e2490
extern "C" ARM void InitYesNoWindow_020e2490(struct YesNoWindow_020e2490* yesNoWindow, int isSubScreen, int displayWindowIndex, void* cursorAnimationList, SafeAllocator* allocator, int maxSpriteCount, unsigned char firstOAMIndex) {
    yesNoWindow->cursorAnimationIndex_1c_ = 0;
    yesNoWindow->cursorAnimationFlags_1e_ = 8;
    yesNoWindow->cursorX_18_ = 0;
    yesNoWindow->cursorY_1a_ = 0;
    yesNoWindow->unknown_16_ = 0;
    func_020e25cc((signed char*)yesNoWindow);

    yesNoWindow->unknown_0_ = allocator->Allocate(maxSpriteCount * 0xc);
    yesNoWindow->unknown_4_ = allocator->Allocate(0xc);
    yesNoWindow->unknown_8_ = allocator->Allocate(maxSpriteCount * 0xc);
    yesNoWindow->unknown_c_ = (unsigned char*)allocator->Allocate(0x40);
    yesNoWindow->pWindow_10_ = (unsigned char*)allocator->Allocate(0x4c);
    yesNoWindow->pCursorAnimationList_20_ = cursorAnimationList;

    int i;
    for (i = 0; i < maxSpriteCount; i++) {
        func_02020520((struct Struct_020200c0_3*)((char*)yesNoWindow->unknown_0_ + i * 0xc));
        func_020e1568((struct Struct_020e1568*)((char*)yesNoWindow->unknown_8_ + i * 0xc));
    }

    func_020e1588(yesNoWindow->unknown_c_);
    *(void**)(yesNoWindow->unknown_c_ + 0x0) = yesNoWindow->unknown_0_;
    *(void**)(yesNoWindow->unknown_c_ + 0x4) = yesNoWindow->unknown_4_;
    *(void**)(yesNoWindow->unknown_c_ + 0x8) = yesNoWindow->unknown_8_;
    yesNoWindow->unknown_c_[0x3c] = (unsigned char)maxSpriteCount;
    yesNoWindow->unknown_c_[0x3d] = firstOAMIndex;

    func_020e15f8((char*)yesNoWindow->pWindow_10_, isSubScreen, displayWindowIndex);
    *(void**)(yesNoWindow->pWindow_10_ + 0x4) = yesNoWindow->unknown_c_;

    if (yesNoWindow->pCursorAnimationList_20_ != NULL) {
        ((OBJSpriteSet::List*)((struct SpriteAnimationList_02043368*)yesNoWindow->pCursorAnimationList_20_))->Reset();
    }
}
