#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);

// USA: func_ov004_0216e3fc
extern "C" ARM int func_ov004_0216e3fc(void) {
    SetGlobalFlags_020466e4((unsigned int*)GetGlobalFlags_020d6c00(), 0x80);
    return 0;
}
