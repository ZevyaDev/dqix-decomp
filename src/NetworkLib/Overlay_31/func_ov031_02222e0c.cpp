#include <globaldefs.h>
struct ButtonBar_ov031_02222e0c { unsigned char unknown_0_[0x16]; signed char choice_16_; };
extern ButtonBar_ov031_02222e0c* data_ov031_02250ba8;

// USA: GetButtonBarChoice_ov031_02222e0c
extern "C" ARM int GetButtonBarChoice_ov031_02222e0c(void) {
	return data_ov031_02250ba8->choice_16_;
}
