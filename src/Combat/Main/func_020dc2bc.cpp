#include <globaldefs.h>

extern "C" unsigned int* GetGlobalFlags_020d6c00(void);
extern "C" void SetGlobalFlags_020466e4(unsigned int* globalFlags, unsigned int mask);

// USA: func_020dc2bc
extern "C" ARM void func_020dc2bc(void) {
    SetGlobalFlags_020466e4(GetGlobalFlags_020d6c00(), 0x40);
}
