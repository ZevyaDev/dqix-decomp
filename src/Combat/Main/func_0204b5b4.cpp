#include <globaldefs.h>

extern int (*data_020f01d8[][4])(int);

struct BGLayer_0204b5b4 {
    char unknown_0_[0x1c];
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
};

static inline int (*inline_0204b5b4(int arg1, int arg2))(int) {
    return data_020f01d8[arg1][arg2];
}

// USA: SetBGPriority_0204b5b4
extern "C" ARM void SetBGPriority_0204b5b4(struct BGLayer_0204b5b4* layer, int priority) {
    inline_0204b5b4(layer->isSubScreen_1c_0_, layer->bgIndex_1c_4_)(priority & 3);
}
