#include <globaldefs.h>

extern int (*data_020f01b8[][4])(int, int);

struct BGLayer_02020cb8_5 {
    char unknown_0_[0x1c];
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
};

// USA: SetBGScroll_0204b5e8
extern "C" ARM int SetBGScroll_0204b5e8(struct BGLayer_02020cb8_5* layer, int scrollX, int scrollY) {
    return data_020f01b8[layer->isSubScreen_1c_0_][layer->bgIndex_1c_4_](scrollX, scrollY);
}
