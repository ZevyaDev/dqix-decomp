#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_0215de6c_955 = 0x3d3 };
enum { Enum_ov003_0215de6c_972 = 0x3e4 };
#else
enum { Enum_ov003_0215de6c_955 = 0x3bb };
enum { Enum_ov003_0215de6c_972 = 0x3cc };
#endif

#if defined(jpn)
struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(Struct_0201099c_3*, int);
extern "C" void func_020474a8(int, int, void*, void*);
#endif
#include "GameState/GameState.h"

struct MessageWindow_020465c0;
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2);
extern "C" int GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(void* window);
extern "C" int GetStandardString_020e51cc(int stringId);
extern "C" void func_02046608(int arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6);

// USA: func_ov003_0215de6c
extern "C" ARM void func_ov003_0215de6c(char* arg0, void* arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = GetMessageWindow_020421a0();
    void* var2 = GetParty_02010828(var0);

    unsigned char var3 = *(unsigned char*)(arg0 + Enum_ov003_0215de6c_955);
    int var4 = *(int*)((char*)var2 + 0xf6c);
    if (var3 == 2) {
        var4 -= *(int*)(arg0 + Enum_ov003_0215de6c_972);
    }

    ClearMessageParams_02046380((void*)var1);

    SetMessageNumber_020465c0((struct MessageWindow_020465c0*)var1, 0, var4);
    func_020465f0((unsigned char*)var1, 0, 7);
    func_020465d8((unsigned char*)var1, 0, 1);

#if defined(jpn)
    int var5 = FindStringInTable_020e0434((Struct_0201099c_3*)(arg0 + 0x7c), 0xa);
    func_020474a8(var1, 8, (void*)var5, arg1);
#else
    int var6 = GetStandardString_020e51cc(0x3f1);
    func_02046608(var1, 8, (void*)var6, arg1, 0x100, 0, 0);
#endif
}
