#include <globaldefs.h>
struct ButtonBar_ov031_02222e20 { unsigned char unknown_0_[0x16]; signed char choice_16_; };
extern ButtonBar_ov031_02222e20* gButtonBar_ov031_02250ba8;

// USA: SetButtonBarChoice_ov031_02222e20
extern "C" ARM void SetButtonBarChoice_ov031_02222e20(int choice) {
	if (gButtonBar_ov031_02250ba8->choice_16_ == -1) {
		gButtonBar_ov031_02250ba8->choice_16_ = (signed char)choice;
	}
}
