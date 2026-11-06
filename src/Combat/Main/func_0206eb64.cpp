#include <globaldefs.h>


extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);

// USA: func_0206eb64
extern "C" ARM void func_0206eb64(unsigned char* arg0, int arg1, int arg2) {
    if (arg1 >= 0x400) {
        SetFlag_0206df6c(arg0, arg0 + 0x8c, arg1 + 0x6fa, arg2);
        return;
    }
    SetFlag_0206df6c(arg0, arg0 + 0x8c, arg1, arg2);
}
