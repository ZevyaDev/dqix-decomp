#include <globaldefs.h>
#include "std_library_functions.h"
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/FontBankLoader.h"

#if defined(jpn)

struct Struct_02095384 {
    int unknown_0_;
    FontLoader_0208cb08* unknown_4_;
};

struct Struct_02095384_2 {
    int unknown_0_;
    int unknown_4_;
};

extern "C" void __clear(void* arg0, int arg1);
extern "C" int func_020952f4(char* arg0);
extern "C" int GetStoryChapter_0201079c(char* gameState);
extern "C" int func_ov017_0218d2c4(int arg0);

extern Struct_02095384 data_02109400;
extern char data_020f149c[];
extern char data_020f14af[];
extern char data_020f14ca[];
extern char data_020f14d4[];
extern char data_020f14db[];
extern char data_020f14e5[];
extern char data_020f14f1[];
extern char data_020f14ff[];
extern char data_020f1511[];

static inline int inline_02095384(int arg0, int arg1, int arg2) {
    return arg0 >= arg1 && arg0 <= arg1 + arg2 ? 1 : 0;
}

// JPN: func_02095384
extern "C" ARM int func_02095384(int arg0, int arg1, Struct_02095384_2* arg2) {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0 == -1) {
        return 0;
    }
    unsigned char var2 = 0;
    const char* var6 = data_020f149c;
    const char* var1 = data_020f14af;
    if (arg1 != 0) {
        var1 = var6;
    }
    int var5;
    FontLoader_0208cb08* var3 = data_02109400.unknown_4_;
    char var4[0x30];
    __clear(var4, 0x30);
    switch (arg0) {
    case 5000:
        memset(var3->unknown_59_, 0, 8);
        func_020952f4(var3->unknown_59_);
        sprintf(var4, data_020f14ca, var3->unknown_59_);
        break;
    case 1000:
        if (var3->unknown_44_[0] != 0) {
            sprintf(var4, data_020f14d4, var3->unknown_44_);
        } else {
            unsigned char var7 = GetStoryChapter_0201079c((char*)GameState::GetInstance());
            var3->unknown_58_ = var7;
            sprintf(var4, data_020f14db, func_ov017_0218d2c4(var7));
        }
        break;
    default: {
        var5 = 10;
        if (inline_02095384(arg0, 499, 0x190)) {
            var5 = 12;
        }
        if (arg0 == 0) {
            var5 = 8;
        }
        if (inline_02095384(arg0, 0x31, 0x31)) {
            memset(var3->unknown_59_, 0, 8);
            func_020952f4(var3->unknown_59_);
            sprintf(var4, data_020f14ca, var3->unknown_59_);
            arg2->unknown_4_ = var0->QueueLoadFileInGP2(var6, var4, NULL);
            var2++;
            memset(var4, 0, 0x30);
            var1 = var6;
            sprintf(var4, data_020f14e5, arg0 - 0x32);
        } else if (arg0 == 505) {
            memset(var3->unknown_59_, 0, 8);
            func_020952f4(var3->unknown_59_);
            sprintf(var4, data_020f14ca, var3->unknown_59_);
            arg2->unknown_4_ = var0->QueueLoadFileInGP2(var6, var4, NULL);
            var2++;
            sprintf(var4, data_020f14f1, var5, arg0);
        } else if (arg0 == 510) {
            sprintf(var4, data_020f14ff, var5);
        } else if (arg0 == 502 || arg0 == 0x200 || arg0 == 0x6f || arg0 == 0x210) {
            sprintf(var4, data_020f1511, var5, arg0);
        } else {
            sprintf(var4, data_020f14f1, var5, arg0);
        }
    }
    }
    arg2->unknown_0_ = var0->QueueLoadFileInGP2(var1, var4, NULL);
    var2++;
    return var2;
}

#endif
