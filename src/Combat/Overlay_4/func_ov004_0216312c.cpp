#include <globaldefs.h>

struct GlobalFlags_02038598_4 {
    unsigned int bits_0_;
};
extern "C" void* GetGlobalFlags_020d6c00(void);
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);

// USA: func_ov004_0216312c
extern "C" ARM int func_ov004_0216312c(void) {
    ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 1);
    return 0;
}
