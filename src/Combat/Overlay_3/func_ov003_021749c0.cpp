#include <globaldefs.h>

extern "C" void func_ov023_021dca88(void* arg0);

struct GlobalFlags_02038598_4;
extern "C" void ClearGlobalFlags_020466f4(struct GlobalFlags_02038598_4* globalFlags, unsigned int mask);
extern "C" void* GetGlobalFlags_020d6c00(void);

// USA: func_ov003_021749c0
extern "C" ARM void func_ov003_021749c0(char* arg0) {
	func_ov023_021dca88(arg0 + 0x3c);
#if defined(jpn)
    enum { Enum_ov003_021749c0_4166 = 0xfc2 };
#else
    enum { Enum_ov003_021749c0_4166 = 0x1046 };
#endif
	*(unsigned short*)(arg0 + Enum_ov003_021749c0_4166) &= ~0x800;
	ClearGlobalFlags_020466f4((struct GlobalFlags_02038598_4*)GetGlobalFlags_020d6c00(), 1);
}
