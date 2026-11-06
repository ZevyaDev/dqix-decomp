#include <globaldefs.h>

#if defined(jpn)
extern "C" int func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" void* GetMessageWindow_020421a0(void);
extern "C" void func_020465c0(void* arg0, int arg1, int arg2);
extern "C" void func_020465d8(void* arg0, int arg1, unsigned char arg2);
extern "C" void func_020465f0(void* arg0, int arg1, unsigned char arg2);
extern "C" const char* func_020e0434(char* arg0, int arg1);
extern "C" void func_020474a8(void* arg0, int arg1, const char* arg2, char* arg3);

// JPN: func_ov002_0215fe54
extern "C" ARM void func_ov002_0215fe54(void* arg0, char* arg1, int arg2, int arg3, int arg4) {
    char* var0 = (char*)arg0;
    char* var1;
    int var2;
    int var3 = 0;
    int var4 = (arg2 >= 0) && (arg2 <= 3);

    if (var4) {
        int var5;
        var2 = arg4 - 1;
        var1 = var0 + 0x1000;
        for (var5 = arg3; var5 < arg4; var5++) {
            void* var6 = *(void**)(var0 + (var5 << 2) + 0x2000 + 0x2d0);
            if (var6 != 0) {
                const char* var7 = *(const char**)var6;
                func_02041b70(arg1, var3, var7);
                if (var5 != var2) {
                    func_02042058(arg1, *(char**)(var1 + 0xaa4));
                }
                var3++;
            }
        }
    }

    int var9 = *(unsigned char*)(var0 + 0x2000 + 0x350);
    if (var9 != 0) {
        var9 = (var9 + 7) / 8;
        void* var10 = GetMessageWindow_020421a0();
        func_020465c0(var10, 0, arg3 / 8 + 1);
        func_020465c0(var10, 1, var9);
        func_020465f0(var10, 0, 1);
        func_020465f0(var10, 1, 1);
        func_020465d8(var10, 0, 1);
        func_020465d8(var10, 1, 0);
        func_02041a90(arg1, 0x20, 0x74);
        char var11[0x40] = {};
        func_020474a8(var10, 8, func_020e0434(var0 + 8, 9), var11);
        func_02042058(arg1, var11);
    }
}
#endif
