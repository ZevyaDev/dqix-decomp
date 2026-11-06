#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_0201099c_3;

struct Struct_ov002_0216caa4 {
    int unknown_0_[8];
};
struct Struct_ov002_0216ca88 {
    int unknown_0_[7];
};

extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" int func_02041c64(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" char *FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int func_020420e8(const char *arg0, int arg1);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int func_02041cc0(char *arg0, int arg1);
extern "C" void *__clear(void *arg0, int arg1);
extern "C" void func_02041a90(char *arg0, int arg1, int arg2);
extern "C" int func_02042084(char *arg0, char *arg1, int arg2, int arg3);
extern "C" int AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);

extern Struct_ov002_0216caa4 data_ov002_0216caa4;
extern Struct_ov002_0216ca88 data_ov002_0216ca88;

// USA: func_ov002_021607cc
#if defined(jpn)
extern "C" int func_0204234c(char *arg0, int arg1);
extern Struct_ov002_0216caa4 data_ov002_0216d0d0;
extern Struct_ov002_0216ca88 data_ov002_0216d0b4;
#define func_02041cc0 func_0204234c
#define data_ov002_0216caa4 data_ov002_0216d0d0
#define data_ov002_0216ca88 data_ov002_0216d0b4
extern "C" ARM void func_ov002_021607cc(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;
    GameState::GetInstance();
    int var0        = *(short *) (arg0 + 0x1ad2);
    Struct_ov002_0216caa4 var1 = data_ov002_0216caa4;
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);
    func_02041c64(arg1, 0x64, 2, 2, 2, 2);
    char *var2 = FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x1194);
    AppendText_02042058(arg1, var2);
    func_02041cc0(arg1, 0x11);
    Struct_ov002_0216ca88 var3 = data_ov002_0216ca88;
    char var4[0x40];
    int var5;
    for (var5 = 0; var5 < 7; var5++) {
        signed char var6 = *(signed char *) (arg0 + var3.unknown_0_[var5] + 0x1b40);
        int var7;
        if (var6 < 0) {
            var7 = 0x119d;
        } else {
            var7 = var6;
            var7 += 0x119d;
        }
        __clear(var4, 0x40);
        func_02041a90(arg1, 0x2b, var1.unknown_0_[var5]);
        if (var7 != 0x119d) {
            AppendText_02042058(
                var4, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), (short) var7));
        } else {
            func_02042084(
                var4, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), (short) var7),
                0x64, 0xa);
        }
        AppendMenuEntry_02041b70(arg1, var5, var4);
    }
    func_02041c64(arg1, 0, 2, 2, 2, 2);
    func_02041cc0(arg1, 0xa2);
    func_02041a90(arg1, 0x2b, var1.unknown_0_[var5]);
    AppendMenuEntry_02041b70(arg1, var5, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x11fa));
}
#else
extern "C" ARM void func_ov002_021607cc(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;
    GameState::GetInstance();
    int var8        = *(short *) (arg0 + 0x1c0a);
    Struct_ov002_0216caa4 var9 = data_ov002_0216caa4;
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var8, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var8);
    func_02041c64(arg1, 0x64, 2, 2, 2, 2);
    char *var10 = FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x1194);
    func_02041a28(arg1, (0x98 - func_020420e8(var10, 0)) >> 1);
    AppendText_02042058(arg1, var10);
    func_02041cc0(arg1, 0x11);
    Struct_ov002_0216ca88 var11 = data_ov002_0216ca88;
    char var12[0x40];
    int var13;
    for (var13 = 0; var13 < 7; var13++) {
        signed char var14 = *(signed char *) (arg0 + var11.unknown_0_[var13] + 0x1c7c);
        int var15;
        if (var14 < 0) {
            var15 = 0x119d;
        } else {
            var15 = var14;
            var15 += 0x119d;
        }
        __clear(var12, 0x40);
        func_02041a90(arg1, 0x2b, var9.unknown_0_[var13]);
        if (var15 != 0x119d) {
            AppendText_02042058(
                var12, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), (short) var15));
        } else {
            func_02042084(
                var12, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), (short) var15),
                0x64, 0);
        }
        AppendMenuEntry_02041b70(arg1, var13, var12);
    }
    func_02041c64(arg1, 0, 2, 2, 2, 2);
    func_02041cc0(arg1, 0xa2);
    func_02041a90(arg1, 0x2b, var9.unknown_0_[var13]);
    AppendMenuEntry_02041b70(arg1, var13, FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x11fa));
}
#endif
