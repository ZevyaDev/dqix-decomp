#include <globaldefs.h>

struct ButtonBar_ov031_02222ddc {
	unsigned char unknown_0_[0xc];
	int pTask_c_;
	unsigned char unknown_10_[9];
	unsigned char isClosing_19_;
};

struct Struct_ov031_02250ba8 {
	ButtonBar_ov031_02222ddc *pButtonBar_0_;
};

extern Struct_ov031_02250ba8 data_ov031_02250ba8;

extern "C" void func_ov031_0222318c(void*);
extern "C" int SetTaskCallback_ov031_0223e2b8(int, void*);

// USA: CloseButtonBar_ov031_02222ddc
extern "C" ARM int CloseButtonBar_ov031_02222ddc(void) {
	ButtonBar_ov031_02222ddc *buttonBar = data_ov031_02250ba8.pButtonBar_0_;
	buttonBar->isClosing_19_ = 1;
	ButtonBar_ov031_02222ddc *reloadedButtonBar = data_ov031_02250ba8.pButtonBar_0_;
	return SetTaskCallback_ov031_0223e2b8(reloadedButtonBar->pTask_c_, (void*)func_ov031_0222318c);
}
