#include <globaldefs.h>
struct ButtonBar_ov031_02222e80 { unsigned char unknown_0_[0x18]; unsigned char isInputDisabled_18_; };
extern ButtonBar_ov031_02222e80* data_ov031_02250ba8;
// USA: EnableButtonBarInput_ov031_02222e80
extern "C" ARM void EnableButtonBarInput_ov031_02222e80(void) {
	data_ov031_02250ba8->isInputDisabled_18_ = 0;
}
