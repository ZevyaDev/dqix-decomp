#include <globaldefs.h>
struct ButtonBar_ov031_02222e98 { unsigned char unknown_0_[0x18]; unsigned char isInputDisabled_18_; };
extern ButtonBar_ov031_02222e98* gButtonBar_ov031_02250ba8;
// USA: DisableButtonBarInput_ov031_02222e98
extern "C" ARM void DisableButtonBarInput_ov031_02222e98(void) {
	gButtonBar_ov031_02250ba8->isInputDisabled_18_ = 1;
}
