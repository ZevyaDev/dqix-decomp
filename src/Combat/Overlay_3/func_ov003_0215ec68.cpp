#include <globaldefs.h>

struct Struct_ov003_0217f3b2 {
    short unknown_0_;
    short unknown_2_;
};

extern const Struct_ov003_0217f3b2 data_ov003_0217f3b2[];
extern const Struct_ov003_0217f3b2 data_ov003_0217f3b4[];

// USA: GetButtonSize_ov003_0215ec68
extern "C" ARM void GetButtonSize_ov003_0215ec68(int sizeType, short* width, short* height) {
    *width = data_ov003_0217f3b2[sizeType].unknown_0_;
    *height = data_ov003_0217f3b4[sizeType].unknown_0_;
}
