#include <globaldefs.h>
#include "GameState/GameState.h"

struct GameResources;
extern "C" int _ZN7Model3D7GetTEX0Ev(void* arg0);
void StageTexFilePaletteData(Nitro3DTextureSet volatile*, bool);
struct Nitro3DTextureSet;
void StageTexFileImageData(Nitro3DTextureSet volatile*, bool);

// USA: func_ov017_021a2840
extern "C" ARM void func_ov017_021a2840(GameResources*) {
    GameState* var0 = GameState::GetInstance();

    int var1;
    for (var1 = 0; var1 < 0xc; var1++) {
        GameObject* var2 = var0->GetGameObjectByIndex(var1 + 7);
        if (var2 == NULL) {
            continue;
        }

        void* var3 = var2->obj3D_.pModel_;
        if (var3 == NULL) {
            continue;
        }

        int var4 = _ZN7Model3D7GetTEX0Ev(var3);
        if (var4 != 0) {
            StageTexFilePaletteData((Nitro3DTextureSet volatile*)var4, 0);
            StageTexFileImageData((Nitro3DTextureSet volatile*)var4, 0);
        }
    }
}
