#include <globaldefs.h>

struct BrightnessFade_ov031_0223c278 {
	unsigned char unknown_0_[4];
	short elapsedTime_4_;
	unsigned short duration_6_;
	unsigned char unknown_8_;
	unsigned char isActive_9_;
};

extern "C" void QueueTaskRemoval_ov031_0223e2c0(int, void*);

// USA: func_ov031_0223c2d0
extern "C" ARM void func_ov031_0223c2d0(void* arg0, BrightnessFade_ov031_0223c278* arg1) {
	arg1->elapsedTime_4_ = arg1->elapsedTime_4_ + 1;
	if (arg1->elapsedTime_4_ < arg1->duration_6_) {
		return;
	}
	arg1->isActive_9_ = 0;
	QueueTaskRemoval_ov031_0223e2c0(1, arg0);
}
