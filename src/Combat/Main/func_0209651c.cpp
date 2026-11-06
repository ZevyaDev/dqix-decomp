#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)
extern "C" void __clear(void*, int);
extern "C" int func_020952f4(char* arg0);
extern "C" int CompareBytes_02001aec(const char* left, const char* right, int count);
extern "C" int GetStoryChapter_0201079c(char* gameState);

// JPN: func_0209651c
extern "C" ARM void func_0209651c(FontLoader_0208cb08* arg0) {
    arg0->requestedFontSetId_34_ = arg0->nextRequestedFontSetId_38_;
    arg0->nextRequestedFontSetId_38_ = -1;
    arg0->unknown_61_ = arg0->unknown_62_;
    arg0->unknown_62_ = 0;
    unsigned char var0 = arg0->unknown_55_;
    arg0->unknown_54_ = var0;
    for (unsigned char var1 = 0; var1 < arg0->unknown_55_; var1++) {
        arg0->loadTaskIds_14_[var1] = arg0->loadTaskIds_14_[var1 + var0];
        arg0->loadTaskIds_14_[var1 + var0] = -1;
        var0++;
    }
    if (arg0->requestedFontSetId_34_ < 0 || arg0->unknown_54_ == 0) {
        arg0->loadState_56_ = 1;
        arg0->unknown_57_ = 0;
    } else {
        arg0->loadState_56_ = 0;
        arg0->unknown_57_ = 1;
    }
}

// JPN: func_020965c0
extern "C" ARM int func_020965c0(FontLoader_0208cb08* arg0, int arg1) {
    int var0 = 0;
    if (arg1 >= 0) {
        if (arg0->unknown_3c_ == arg1) var0 = 1;
        if (arg0->unknown_40_ == arg1) {
            char var1[8];
            var0 = 1;
            __clear(var1, 8);
            if (arg1 != 1000) {
                if (arg1 == 5000) {
                    if (CompareBytes_02001aec(var1, arg0->unknown_59_, func_020952f4(var1)) != 0) var0 = 0;
                }
            } else {
                unsigned char var2 = GetStoryChapter_0201079c((char*)GameState::GetInstance());
                if (var2 != arg0->unknown_58_) var0 = 0;
            }
        }
    }
    return var0;
}
#endif
