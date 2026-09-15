#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* _Z10GetWord0x0Pi(int*);
extern "C" void _Z13SetBrightnessP13GameResourcesii(void* obj, int value, int frames);

// USA: func_ov001_0215b2cc  (semantic: UpdateCounterAndNotify_0215b2cc)
extern "C" ARM int func_ov001_0215b2cc(void* self, int mode) {
    int frames = func_ov017_021d60f4(self);
    if (mode >= 2) {
        func_ov017_021d60f4((char*)self + 0x8);
    }
    void* battle = GameState::GetInstance();
    void* obj = _Z10GetWord0x0Pi((int*)battle);
    if (obj != NULL) {
        _Z13SetBrightnessP13GameResourcesii(obj, 0, frames);
        func_ov017_0218b5b0();
    }
    return 1;
}
