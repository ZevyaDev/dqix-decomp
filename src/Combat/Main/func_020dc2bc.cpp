#include <globaldefs.h>

#if defined(jpn)
#define func_020d6c00 func_020d8608
#endif

extern "C" unsigned int* func_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);

// USA: func_020dc2bc
extern "C" ARM void func_020dc2bc(void) {
    SetGlobalFlags_020466e4(func_020d6c00(), 0x40);
}
