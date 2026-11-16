#include <globaldefs.h>
#include "Graphics/BGLayer.h"

#if defined(jpn)
enum { Enum_ov023_021f7884_40 = 0x24 };
#else
enum { Enum_ov023_021f7884_40 = 0x28 };
#endif


struct Struct_ov023_021f7884 { char unknown_0_[0xc]; unsigned char unknown_c_; };

// USA: func_ov023_021f7884
extern "C" ARM void func_ov023_021f7884(struct Struct_ov023_021f7884* arg0) {
	if (arg0->unknown_c_ & 1) return;
	((BGLayer*)((char*)arg0 + Enum_ov023_021f7884_40))->CleanIndexBufferCache((const void*)(NULL));
}
