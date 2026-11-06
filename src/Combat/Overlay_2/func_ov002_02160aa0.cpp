#include <globaldefs.h>

#if defined(jpn)
#define data_ov002_0216d2b4 data_ov002_0216da66
extern "C" void __clear(void *arg0, int arg1);
extern "C" void *GetMessageWindow_020421a0(void);
extern "C" void ClearMessageParams_02046380(void *window);
extern "C" void SetMessageNumber_020465c0(void *window, int index, int number);
extern "C" void func_020465f0(void *arg0, int arg1, int arg2);
extern "C" void func_020474a8(void *arg0, int arg1, const char *arg2, char *arg3);
#endif

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int func_02041c08(char *arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" int func_02041ea4(char *arg0, int arg1);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int func_02041b70(char *arg0, int arg1, const char *arg2);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int func_ov002_0215a9b4(void *arg0, short arg1);
extern "C" int func_0206e3d4(int arg0, int arg1);
extern "C" void func_ov002_0215b918(unsigned char *arg0, int arg1, int arg2, int arg3);
extern "C" char *GetFlagManager_0205ec34(void);
extern "C" char data_ov002_0216d2b4[];

// USA: func_ov002_02160aa0
#if defined(jpn)
extern "C" ARM void func_ov002_02161938(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    short var0                                    = *(short *) (arg0 + 0x1a00 + 0xd4);
    int var1                                 = var0 % 16;
    *(unsigned char *) (arg0 + 0x2000 + 0x2b4) = var0 / 16;
    if (arg2) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);

    short var2 = 0;
    unsigned char var3;
    unsigned char var4 = *(unsigned char *) (arg0 + 0x2000 + 0x2b4) << 4;
    var3             = var4 + 0x10;
    char *var5      = GetFlagManager_0205ec34();
    for (; var4 < var3; var4++) {
        var1 = func_0206e3d4((int) var5, func_ov002_0215a9b4(arg0, var4));
        if (var1 == 0) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 8), 0x119c + 1));
        } else if (*(unsigned int *) (arg0 + 0x2000 + 0x2b0) & (1 << (var1 - 1))) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 8), (short) (var1 + 0x119d)));
        } else {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 8), 0x119c));
        }
        var2++;
        if (var4 & 1) {
            AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xaa4));
        } else {
            AppendText_02042058(arg1, data_ov002_0216d2b4);
        }
    }
    func_02041e70(arg1, 0xf);
    char var6[0x40];
    __clear(var6, 0x40);
    void *var7 = GetMessageWindow_020421a0();
    ClearMessageParams_02046380(var7);
    SetMessageNumber_020465c0(var7, 0, *(unsigned char *) (arg0 + 0x2000 + 0x2b4) + 1);
    func_020465f0(var7, 0, 1);
    SetMessageNumber_020465c0(var7, 1, 2);
    func_020465f0(var7, 1, 1);
    func_020474a8(var7, 8,
                  (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x119a),
                  var6);
    AppendText_02042058(arg1, var6);
    AppendText_02042058(arg1,
                  (const char *) FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 8), 0x119b));
}
#else
extern "C" ARM void func_ov002_02160aa0(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    short var0                                    = *(short *) (arg0 + 0x1c00 + 0xc);
    int var1                                 = var0 % 16;
    *(unsigned char *) (arg0 + 0x2000 + 0x484) = var0 / 16;
    if (arg2) {
        func_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    func_02041ea4(arg1, var1);

    short var2 = 0;
    unsigned char var3;
    unsigned char var4 = *(unsigned char *) (arg0 + 0x2000 + 0x484) << 4;
    var3             = var4 + 0x10;
    char *var5      = GetFlagManager_0205ec34();
    for (; var4 < var3; var4++) {
        var1 = func_0206e3d4((int) var5, func_ov002_0215a9b4(arg0, var4));
        if (var1 == 0) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), 0x119c + 1));
        } else if (*(unsigned int *) (arg0 + 0x2000 + 0x480) & (1 << (var1 - 1))) {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), (short) (var1 + 0x119d)));
        } else {
            func_02041e70(arg1, 0xf);
            func_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + 0x20), 0x119c));
        }
        var2++;
        if (var4 & 1) {
            AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + 0xbdc));
        } else {
            AppendText_02042058(arg1, data_ov002_0216d2b4);
        }
    }
    func_02041e70(arg1, 0xf);
    func_ov002_0215b918(arg0, 0x22, *(unsigned char *) (arg0 + 0x2000 + 0x484), 2);
}
#endif
