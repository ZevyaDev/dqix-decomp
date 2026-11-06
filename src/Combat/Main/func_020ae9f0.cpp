#include <globaldefs.h>


extern "C" void* GetFlagManager_0205ec34(void);
extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);
extern "C" void func_020aea40(unsigned char arg0, unsigned char arg1);
extern unsigned short data_020e9138[];

// USA: func_020ae9f0
extern "C" ARM void func_020ae9f0(void) {
    unsigned char* var0 = (unsigned char*)GetFlagManager_0205ec34();
    int var1;
    for (var1 = 0; var1 < 8; var1++) {
        int var2 = IsFlagSet_0206dfb0((int)var0, var0 + 0x8c, data_020e9138[var1]);
        func_020aea40(var1, var2);
    }
}
