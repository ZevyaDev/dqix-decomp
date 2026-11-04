#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02042638(char *arg0, int arg1, int arg2);
extern "C" int func_02041a90(char *arg0, int arg1, int arg2);
extern "C" int func_0204234c(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_020100a8(GameState *arg0);
extern "C" unsigned char *func_02053c6c(unsigned char *arg0);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);

// JPN: func_ov002_02160944
extern "C" ARM void func_ov002_02160944(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    int var0 = *(short *) (arg0 + 0x1a00 + 0xca);
    if (arg2) {
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var0);
    func_02041a28(arg1, 0x5a);
    int var13 = func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0xfa2);
    func_02042638(arg1, var13, 0xf);

    int var1 = 0;
    GameState *var2 = GameState::GetInstance();
    unsigned char var3 = *(arg0 + 0x1000 + 0xb37);
    signed char *var4 = (signed char *) (arg0 + 0x1b00 + 0x32);
    int var5 = var3 + 1;
    int var6 = var5 + var3 + 1;
    for (unsigned char var9 = 0; var9 < var3; var9++) {
        int var10 = var4[var9];
        GameObject *var11 = var2->GetPartyMemberByIndex(var10);
        if (var11 == NULL) continue;
        func_02041e70(arg1, func_ov002_02159774(arg0, var10, 0, 1, 1));
        var13 = (int) var11->baseStats_;
        func_02042058(arg1, (const char *) var13);
        func_02041a28(arg1, 0x4a);
        func_02041e70(arg1, 0xf);
        short var12 = (signed char) *(int *) (func_02053c6c((unsigned char *) var11) + 0x8b4) + 0x109c;
        if (var10 == func_020100a8(var2)) var12 = 0x109b;
        func_02041b70(arg1, var1, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), var12));
        func_02041a28(arg1, 0xad);
        func_02041b70(arg1, var5, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 5));
        func_02041a28(arg1, 0xda);
        func_02041b70(arg1, var6, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 6));
        func_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xaa4));
        var1++;
        var5++;
        var6++;
    }
    int var7[5] = {0, 0x28, 0x31, 0x41, 0x49};
    int var8[5] = {0, 0x25, 0x2f, 0x3f, 0x47};
    func_02041a90(arg1, 0x4a, var7[var3]);
    func_02041b70(arg1, var1, (const char *) func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x11fa));
    func_0204234c(arg1, var8[var3]);
}
#endif
