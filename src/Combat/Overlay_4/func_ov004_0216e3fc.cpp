#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

extern "C" void* func_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);

// USA: func_ov004_0216e3fc
extern "C" ARM int func_ov004_0216e3fc(void) {
    SetGlobalFlags_020466e4((unsigned int*)func_020d6c00(), 0x80);
    return 0;
}
