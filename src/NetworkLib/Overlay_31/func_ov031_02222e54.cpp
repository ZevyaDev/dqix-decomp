#include <globaldefs.h>

struct ButtonBar_ov031_02222e54 { unsigned char unknown_0_[0x19]; unsigned char isClosing_19_; };
extern ButtonBar_ov031_02222e54* gButtonBar_ov031_02250ba8;

// USA: func_ov031_02222e54
extern "C" ARM int func_ov031_02222e54(void) {
    ButtonBar_ov031_02222e54 *var0 = gButtonBar_ov031_02250ba8;
    if (var0 == NULL) {
        return 1;
    }
    return var0->isClosing_19_ == 0;
}
