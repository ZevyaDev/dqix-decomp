#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_3;

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char* arg0, int arg1);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" int GetProtagonistObjectIndex_020100a8(GameState* gameState);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int AppendText_02042058(char* buffer, const char* text);

extern short data_ov000_021834bc[];

// USA: func_ov000_021775a4
extern "C" ARM void func_ov000_021775a4(void* arg0, char* arg1) {
    if (arg1 == NULL) return;

#if defined(jpn)
    signed char var0 = *(signed char*)((char*)arg0 + 0x1f00 + 0xa2);
#else
    signed char var0 = *(signed char*)((char*)arg0 + 0x1d00 + 0x6a);
#endif
    int var1 = 0;

    if (func_ov000_0217542c(arg0)) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);

    void* var2 = GetLocalWireless_0202ae18();
    int var3 = 3;
    if (IsLocalWirelessOn_0202b7d8((int*)var2)) {
        if (GetProtagonistObjectIndex_020100a8(GameState::GetInstance()) == 0) var3 = 4;
    }

    struct Struct_0201099c_3* var4 = (struct Struct_0201099c_3*)((char*)arg0 + 0xb8);
    for (int var5 = 0; var5 < var3; var5++) {
        int var6 = FindStringInTable_020e0434(var4, data_ov000_021834bc[var5]);
        func_02041b70(arg1, var1, (const char*)var6);
        if (var5 != var3 - 1) {
            int var7 = FindStringInTable_020e0434(var4, 0);
            AppendText_02042058(arg1, (const char*)var7);
        }
        var1++;
    }
}
