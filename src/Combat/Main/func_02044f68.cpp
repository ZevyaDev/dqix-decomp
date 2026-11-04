#include <globaldefs.h>

#if defined(jpn)

#include <std_library_functions.h>

struct Struct_02044f68 {
    char unknown_0_[0x17dd];
    signed char unknown_17dd_;
};

struct Struct_02044f68_2 {
    char unknown_0_[0x58];
    char* unknown_58_;
    char* unknown_5c_;
    char* unknown_60_;
    char unknown_64_[4];
    char* unknown_68_;
    char* unknown_6c_;
};

extern Struct_02044f68_2 data_020efd90;
extern const char data_020f00a7[];
extern const char data_020f00ad[];
extern const char data_020f00b0[];
extern const char data_020f00b3[];
extern const char data_020f00b7[];
extern const char data_020f00ba[];
extern const char data_020f00bd[];

extern "C" char* func_02045504(Struct_02044f68* arg0, const char* arg1);
extern "C" void func_020454dc(char** arg0, unsigned short arg1);
extern "C" int func_020d85dc(const char* arg0, const char* arg1);
extern "C" int func_020d857c(const char* arg0, const char* arg1);
extern "C" int func_02005a94(const char* arg0);
extern "C" void func_020436dc(Struct_02044f68* arg0, int arg1, int arg2);

// JPN: func_02044f68
extern "C" ARM void func_02044f68(Struct_02044f68* arg0, char* arg1, char* arg2, ...) {
    if (arg1 == NULL || arg2 == NULL) {
        return;
    }
    arg1 = func_02045504(arg0, arg1);
    for (;;) {
        char var1 = *arg1;
        if (var1 == 0) {
            break;
        }
        char var2 = arg1[1];
        char* var31;
        if ((var1 == '\\' && var2 == 'n') || (var1 == '\r' && var2 == '\n')) {
            func_020454dc(&arg2, 0xff18);
            arg1 += 2;
            continue;
        }
        if (var1 == '\n') {
            func_020454dc(&arg2, 0xff18);
            arg1 += 1;
            continue;
        }
        if (var1 == '\x81' && var2 == '@') {
            func_020454dc(&arg2, 0xff1a);
            arg1 += 2;
            continue;
        }
        if (var1 == ' ') {
            func_020454dc(&arg2, 0xff1b);
            arg1 += 1;
            continue;
        }
        if (var1 == '<') {
            char* var3 = arg1 + 1;
            char* var4 = strchr(arg1, '>');
            if (var4 == NULL) {
                break;
            }
            var31 = var4 + 1;
            if (func_020d85dc(var3, data_020f00a7)) {
                int var5 = func_02005a94(var3 + 5);
                if (var5 < 0) {
                    var5 = 0;
                }
                func_020436dc(arg0, var5, arg0->unknown_17dd_);
                arg0->unknown_17dd_++;
                func_020454dc(&arg2, 0xff1c);
            } else if (func_020d857c(var3, data_020f00ad)) {
                short var6 = func_02005a94(var3 + 2);
                func_020454dc(&arg2, 0xff22);
                func_020454dc(&arg2, var6);
            } else if (func_020d857c(var3, data_020f00b0)) {
                short var7 = func_02005a94(var3 + 2);
                func_020454dc(&arg2, 0xff23);
                func_020454dc(&arg2, var7);
            } else if (func_020d857c(var3, data_020f00b3)) {
                char* var8 = strchr(var3 + 3, ',');
                if (var8 != NULL) {
                    short var9 = func_02005a94(var3 + 3);
                    short var10 = func_02005a94(var8 + 1);
                    func_020454dc(&arg2, 0xff24);
                    func_020454dc(&arg2, var9);
                    func_020454dc(&arg2, var10);
                }
            } else if (func_020d857c(var3, data_020f00b7)) {
                short var11 = func_02005a94(var3 + 2);
                func_020454dc(&arg2, 0xff25);
                func_020454dc(&arg2, var11);
            } else if (func_020d857c(var3, data_020f00ba)) {
                short var12 = func_02005a94(var3 + 2);
                func_020454dc(&arg2, 0xff26);
                func_020454dc(&arg2, var12);
            } else if (func_020d857c(var3, data_020f00bd)) {
                char* var13 = strchr(var3 + 3, ',');
                if (var13 != NULL) {
                    short var14 = func_02005a94(var3 + 3);
                    short var15 = func_02005a94(var13 + 1);
                    func_020454dc(&arg2, 0xff27);
                    func_020454dc(&arg2, var14);
                    func_020454dc(&arg2, var15);
                }
            }
        } else if (var1 >= 'A' && var1 <= 'Z') {
            int var20 = var1 - 'A';
            char* var30 = arg2++;
            char* var21 = data_020efd90.unknown_5c_;
            var31 = arg1 + 1;
            *var30 = var21[0];
            *arg2++ = var21[1] + var20;
        } else if (var1 >= 'a' && var1 <= 'z') {
            int var22 = var1 - 'a';
            char* var30 = arg2++;
            char* var23 = data_020efd90.unknown_60_;
            var31 = arg1 + 1;
            *var30 = var23[0];
            *arg2++ = var23[1] + var22;
        } else if (var1 >= '0' && var1 <= '9') {
            int var24 = var1 - '0';
            char* var30 = arg2++;
            char* var25 = data_020efd90.unknown_58_;
            var31 = arg1 + 1;
            *var30 = var25[0];
            *arg2++ = var25[1] + var24;
        } else {
            char* var16 = data_020efd90.unknown_68_;
            char* var17 = strchr(var16, var1);
            if (var17 != NULL) {
                int var18 = var17 - var16;
                char* var19 = data_020efd90.unknown_6c_;
                char* var32 = var19 + var18 * 2;
                *arg2++ = var32[0];
                *arg2++ = var32[1];
                var31 = arg1 + 1;
            } else if (strchr(var16, var1) != NULL) {
                var31 = arg1 + 1;
            } else {
                var31 = arg1;
                *arg2++ = *var31++;
                *arg2++ = *var31++;
            }
        }
        arg1 = var31;
    }
    func_020454dc(&arg2, 0xff01);
}

#endif
