#include <globaldefs.h>


extern "C" void* EnqueueValue_020c7e0c(void* queue, int value, int flags);
extern void* data_ov031_0224e580;

struct Struct_ov031_0220f518 { char unknown_0_[0x1c]; int unknown_1c_; int unknown_20_; int unknown_24_; };

// USA: func_ov031_0220f518
extern "C" ARM void* func_ov031_0220f518(struct Struct_ov031_0220f518* arg0) {
	if (arg0) {
		arg0->unknown_1c_ = 0;
		arg0->unknown_20_ = 0;
		arg0->unknown_24_ = 0;
	}
	void* var0 = data_ov031_0224e580;
	if (var0 == NULL) return NULL;
	return EnqueueValue_020c7e0c(var0, (int)arg0, 0);
}
