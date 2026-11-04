#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
struct Struct_0201099c_3;

extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" char *func_020e0434(struct Struct_0201099c_3 *arg0, int arg1);
extern "C" void func_02041a90(char *arg0, int arg1, int arg2);
extern "C" int func_02042058(char *arg0, const char *arg1);
extern "C" int func_02042638(char *arg0, const char *arg1, int arg2);
extern "C" int func_02041b00(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int func_02041a28(char *arg0, int arg1);
extern "C" int func_02042158(char *arg0, int arg1);
extern "C" int func_02041bac(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_0204234c(char *arg0, int arg1);
extern "C" void *__clear(void *arg0, int arg1);

// JPN: func_ov002_02161c0c
extern "C" ARM void func_ov002_02161c0c(unsigned char *arg0, char *arg1, int arg2) {
    unsigned char *var0[3];
    short var1;
    int var8;
    unsigned char var3;
    int var7;
    short var4;
    unsigned char var6;
    int var9;
    if (arg1 == NULL) return;
    GameState::GetInstance();
    var7 = *(short *) (arg0 + 0x1a00 + 0xd6);
    var8 = 0;
    var9 = 3;
    __clear(var0, 0xc);
    var0[0] = arg0 + 0x1af4;
    var0[1] = arg0 + 0x1af5;
    if (arg2) {
        func_02041c08(arg1, var7, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var7);
    func_02041a90(arg1, 0x4b, 4);
    func_02042058(arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0xfa6));
    func_02042638(arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 5), 0x10);
    var1 = 0x11f8;
    for (var3 = 0; var3 < 3; var3++) {
        if (var3 == 2) {
            func_02041b00(arg1, 7);
        }
        func_02041e70(arg1, 0xf);
        func_02041b70(arg1, var8, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), var1++));
        if (var3 != 2) {
            func_02041a28(arg1, 0x52);
            var4 = 0x11fb;
            func_02041e70(arg1, 3);
            func_02042058(arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), var4++));
            func_02042158(arg1, 0xc);
            for (var6 = 0; var6 < 5; var6++) {
                int var11 = 0xf;
                if (var6 + 1 == *var0[var3]) {
                    func_02041e70(arg1, var11);
                    func_02042058(arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x1202));
                    var11 = 5;
                }
                func_02041e70(arg1, var11);
                func_02041b70(arg1, var9, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), var4++));
                var9++;
                func_02042158(arg1, 0xc);
            }
            func_02041e70(arg1, 3);
            func_02042058(arg1, func_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), var4));
        }
        if (var3 != 2) {
            func_02042058(arg1, *(char **) (arg0 + 0x1000 + 0xaa4));
        }
        var8++;
    }
    func_02041bac(arg1, 0xf, 0x48, 0x10, 1, 0x24);
    func_0204234c(arg1, 0x34);
}
#endif
