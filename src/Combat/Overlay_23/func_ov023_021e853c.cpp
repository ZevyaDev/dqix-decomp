#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

namespace {
struct Struct_ov023_021e853c_2 {
    unsigned char unknown_0_[0x4c];
    Struct_0201099c_3 unknown_4c_;
    unsigned char unknown_54_[0x5d8 - 0x54];
    char* unknown_5d8_;
};
}

extern "C" int GetMessageWindow_020421a0(void);
#if defined(jpn)
extern "C" int func_0204234c(char* arg0, int arg1);
#define func_02041cc0 func_0204234c
#else
extern "C" int func_02041cc0(char* arg0, int arg1);
#endif

struct MessageWindow_020465c0;
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void SetMessageNumberAlignment_020465d8(unsigned char* window, int index, unsigned char alignment);
extern "C" void SetMessageNumberWidth_020465f0(unsigned char* window, int index, unsigned char width);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);

#if defined(jpn)
extern "C" void func_020474a8(void* arg0, unsigned char arg1, const char* arg2, char* arg3);
#else
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);
#endif

struct Struct_ov023_021e853c { char unknown_0_[0xf68]; int unknown_f68_; int unknown_f6c_; };

// USA: func_ov023_021e853c
// JPN: func_ov023_021e84c0
extern "C" ARM void func_ov023_021e853c(void* arg0) {
    Struct_ov023_021e853c_2* var0 = static_cast<Struct_ov023_021e853c_2*>(arg0);
    Struct_ov023_021e853c* var1 = static_cast<Struct_ov023_021e853c*>(GetParty_02010828(GameState::GetInstance()));
    int var2 = GetMessageWindow_020421a0();
    func_02041cc0(var0->unknown_5d8_, 0x18);
    int var3[2] = { var1->unknown_f6c_, var1->unknown_f68_ };
    for (int var4 = 0; var4 < 2; var4++) {
        SetMessageNumber_020465c0((struct MessageWindow_020465c0*)var2, var4, var3[var4]);
        SetMessageNumberAlignment_020465d8((unsigned char*)var2, var4, 1);
        SetMessageNumberWidth_020465f0((unsigned char*)var2, var4, 0xa);
    }
    int var5 = FindStringInTable_020e0434(&var0->unknown_4c_, 1);
#if defined(jpn)
    func_020474a8(((void*)(var2)), 0xa, ((const char*)(var5)), var0->unknown_5d8_);
#else
    func_02046608(var2, 0xa, ((void*)(var5)), var0->unknown_5d8_, 0x100, 0, 0);
#endif
}

#if defined(jpn)
#undef func_02041cc0
#endif
