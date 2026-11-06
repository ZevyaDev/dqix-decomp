#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/CharacterCreationUI.h"

extern "C" int FindStringInTable_020e0434(Struct_0201099c_3*, int);
struct TextWindowManager_0205d304;
extern "C" void OpenTextWindow_0205d304(TextWindowManager_0205d304* windowManager, const char* text, int arg2,
                            unsigned char isVerticallyCentered, unsigned char hasPageArrows,
                            unsigned char isSizedToText, void* margins
#if !defined(jpn)
                            , unsigned char font
#endif
);

// USA: 021d9c7c; JPN: 021da52c.
extern "C" ARM void func_ov023_021d9c7c(void* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
#if defined(jpn)
    var0->unknown_1f8_[1].unknown_a0_[0] = 0xd;
    var0->unknown_1f8_[1].unknown_a0_[1] = 2;
    var0->unknown_1f8_[1].unknown_a0_[2] = 2;
    var0->unknown_1f8_[1].unknown_a0_[3] = 0x13;
    var0->unknown_1f8_[1].unknown_a0_[4] = 2;
    var0->unknown_1f8_[1].unknown_a0_[5] = 2;
    var0->unknown_1f8_[1].unknown_a0_[6] = 0xa;
    var0->unknown_1f8_[1].unknown_a0_[7] = 0xc;
    var0->unknown_1f8_[1].unknown_b1_ = 2;
    var0->unknown_1f8_[1].unknown_b7_ = 0xa;
    var0->unknown_1f8_[1].unknown_b5_ = 1;
    var0->unknown_1f8_[1].unknown_b6_ = 1;
    memset(var0->unknown_f8_, 0, 0x800);
    int var1 = FindStringInTable_020e0434(&var0->unknown_e0_, 0x4274);
    sprintf(var0->unknown_f8_, (const char*)var1);
    OpenTextWindow_0205d304((TextWindowManager_0205d304*)&var0->unknown_1f8_[1], var0->unknown_f8_, 0, 0, 0, 1, 0);
#else
    Struct_ov023_021d9c7c* var2 = &var0->unknown_1f8_[1];
    var2->unknown_a0_[0] = 0xd;
    var2->unknown_a0_[1] = 2;
    var2->unknown_a0_[2] = 2;
    var2->unknown_a0_[3] = 0x13;
    var2->unknown_a0_[4] = 2;
    var2->unknown_a0_[5] = 2;
    var2->unknown_a0_[6] = 0xa;
    var2->unknown_a0_[7] = 0xc;
    var2->unknown_b1_ = 2;
    var2->unknown_b7_ = 0xa;
    var2->unknown_b5_ = 1;
    var2->unknown_b6_ = 1;
    char* var3 = var0->unknown_f8_;
    memset(var3, 0, 0x960);
    int var4 = FindStringInTable_020e0434(&var0->unknown_e0_, 0x4274);
    sprintf(var3, (const char*)var4);
    OpenTextWindow_0205d304((TextWindowManager_0205d304*)var2, var3, 0, 0, 0, 1, 0, 0);
#endif
}
