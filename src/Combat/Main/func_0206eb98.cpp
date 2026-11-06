#include <globaldefs.h>

extern "C" int IsFlagSet_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);

// USA: func_0206eb98
extern "C" ARM int func_0206eb98(unsigned char* arg0, int arg1) {
    int var0 = arg1;
    if (var0 >= 0x400) {
        return IsFlagSet_0206dfb0((int)arg0, arg0 + 0x8c, var0 + 0x6fa);
    }
    return IsFlagSet_0206dfb0((int)arg0, arg0 + 0x8c, var0);
}
