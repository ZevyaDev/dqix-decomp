#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_02046e08;
extern "C" void func_02046e08(struct Struct_02046e08* arg0);

struct Struct_ov017_021b61e4 {
	unsigned char unknown_0_;
	unsigned char unknown_1_[0xfb];
	unsigned char unknown_fc_;
	unsigned char unknown_fd_;
	unsigned short unknown_fe_;
	unsigned short unknown_100_;
};

// USA: func_ov017_021b61e4
extern "C" ARM void func_ov017_021b61e4(struct Struct_ov017_021b61e4* arg0) {
	ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
	arg0->unknown_0_ = 0x16;
	func_02046e08((struct Struct_02046e08*)((char*)arg0 + 0xc));
	arg0->unknown_fc_ = 0;
	arg0->unknown_fe_ = 0;
	arg0->unknown_100_ = 0;
	arg0->unknown_fd_ = 0;
}
