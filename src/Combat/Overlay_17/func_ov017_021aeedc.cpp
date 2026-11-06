#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov003_02164400 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[7];
	unsigned char unknown_8_;
	unsigned char unknown_9_[6];
	signed char unknown_f_;
	signed char unknown_10_;
	unsigned char unknown_11_;
	unsigned short unknown_12_;
};

// USA: func_ov017_021aeedc
extern "C" ARM void func_ov017_021aeedc(Struct_ov003_02164400* arg0) {
	signed char var0 = 0 - 1;
	ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
	arg0->unknown_0_ = 0x25;
	arg0->unknown_8_ = 0;
	arg0->unknown_f_ = var0;
	arg0->unknown_12_ = 0;
	arg0->unknown_10_ = var0;
}
