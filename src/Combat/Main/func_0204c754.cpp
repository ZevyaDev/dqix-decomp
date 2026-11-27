#include <globaldefs.h>
#include "Graphics/BGLayer.h"

extern "C" void InitTextWindow_0204c684(void*);

struct TextWindow_0204c754 {
    char unknown_0_[0xc8];
    char unknown_c8_;
};

// USA: ResetTextWindow_0204c754
extern "C" ARM void ResetTextWindow_0204c754(struct TextWindow_0204c754* textWindow) {
    ((BGLayer::Sprite*)((struct BGScreenBlock_02020cb8_7*)(&textWindow->unknown_c8_)))->MaybeDestroy();
    InitTextWindow_0204c684(textWindow);
}
