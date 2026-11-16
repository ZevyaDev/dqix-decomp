#include <globaldefs.h>
#include "Graphics/BGLayer.h"

extern "C" void InitTextWindow_0204c684(void*);

struct Struct_0204c754 {
    char unknown_0_[0xc8];
    char unknown_c8_;
};

// USA: func_0204c754
extern "C" ARM void func_0204c754(struct Struct_0204c754* arg0) {
    ((BGLayer::Sprite*)((struct BGScreenBlock_02020cb8_7*)(&arg0->unknown_c8_)))->MaybeDestroy();
    InitTextWindow_0204c684(arg0);
}
