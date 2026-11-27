#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02081de0_48 = 0x24 };
#else
enum { Enum_02081de0_48 = 0x30 };
#endif

struct Struct_02081de0 {
    unsigned char unknown_0_[0xc4];
    unsigned char unknown_c4_;
    unsigned char unknown_c5_[0x1b];
};

struct Struct_020813ec_2 {
    unsigned char unknown_0_[Enum_02081de0_48];
    struct Struct_02081de0 *unknown_30_;
    unsigned char unknown_34_[5];
    unsigned char unknown_39_;
};

// USA: FindFreeMenuLayoutWindow_02081de0
extern "C" ARM struct Struct_02081de0* FindFreeMenuLayoutWindow_02081de0(struct Struct_020813ec_2 *menuLayout) {
    unsigned char windowCount = menuLayout->unknown_39_;
    struct Struct_02081de0 *window = menuLayout->unknown_30_;
    unsigned char i = 0;
    while (i < windowCount) {
        if (window->unknown_c4_ == 0xff) {
            return window;
        }
        window++;
        i++;
    }
    return NULL;
}
