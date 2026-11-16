#include <globaldefs.h>

#if defined(jpn)
#define func_0206dfb0 func_0206f104
#endif

extern "C" int func_0206dfb0(int flagManager, unsigned char* flags, int flagIndex);

// USA: func_0206eb98
extern "C" ARM int func_0206eb98(unsigned char* arg0, int arg1) {
    int var0 = arg1;
    if (var0 >= 0x400) {
        return func_0206dfb0((int)arg0, arg0 + 0x8c, var0 + 0x6fa);
    }
    return func_0206dfb0((int)arg0, arg0 + 0x8c, var0);
}
