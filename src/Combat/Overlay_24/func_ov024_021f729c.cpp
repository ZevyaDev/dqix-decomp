#include <globaldefs.h>

extern "C" unsigned short GetLevel_0202053c(void* gameObject);
extern "C" double _dflt(int);

struct Struct_ov024_021f729c { void* unknown_0_; char unknown_4_[0x18]; float unknown_1c_; float unknown_20_; };

// USA: func_ov024_021f729c
extern "C" ARM int func_ov024_021f729c(struct Struct_ov024_021f729c* arg0) {
	int var0 = GetLevel_0202053c(arg0->unknown_0_) * 2;
	if (var0 < 0x23) var0 = 0x23;
	arg0->unknown_1c_ = (float)var0;
	arg0->unknown_20_ = (float)((0.85) * (_dflt(var0)));
	return 1;
}
