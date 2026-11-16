#include <globaldefs.h>
#include "Graphics/BGLayer.h"

#if defined(jpn)
enum { Enum_ov023_021f7864_40 = 0x24 };
#else
enum { Enum_ov023_021f7864_40 = 0x28 };
#endif

struct BGLayer_0204b010;

struct Struct_ov023_021f7864 { char unknown_0_[0xc]; unsigned char unknown_c_; };

// USA: func_ov023_021f7864
extern "C" ARM void func_ov023_021f7864(struct Struct_ov023_021f7864* arg0) {
	if (arg0->unknown_c_ & 1) return;
	((BGLayer*)((struct BGLayer_0204b010*)((char*)arg0 + Enum_ov023_021f7864_40)))->PrepareIndexBuffer((void*)(NULL));
}
