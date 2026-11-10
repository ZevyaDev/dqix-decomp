#include <globaldefs.h>

extern "C" int GetNextActionResult_ov000_0215e958(int battle);
extern "C" void AddActionResultMessage_ov000_0215a88c(void* battle, void* result, int messageId);
extern "C" void AppendTargetResult_ov000_0215ffc4(void* target, void* result, int listIndex);

struct Struct_ov024_021e2bd0 { char unknown_0_[0xc]; void* unknown_c_; void* unknown_10_; };

// USA: func_ov024_021e8ca0
extern "C" ARM void* func_ov024_021e8ca0(struct Struct_ov024_021e2bd0* arg0, int arg1) {
	void* var0 = (void*)GetNextActionResult_ov000_0215e958((int)arg0->unknown_10_);
	if (!var0) return 0;
	AddActionResultMessage_ov000_0215a88c(arg0->unknown_10_, var0, arg1);
	AppendTargetResult_ov000_0215ffc4(arg0->unknown_c_, var0, 1);
	((unsigned char*)arg0->unknown_10_)[0x8e02] = ((unsigned char*)arg0->unknown_10_)[0x8e02] + 1;
	return var0;
}
