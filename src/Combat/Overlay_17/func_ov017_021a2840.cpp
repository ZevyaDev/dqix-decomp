#include <globaldefs.h>
#include "GameState/GameState.h"

struct GameResources;
extern "C" int _ZN7Model3D7GetTEX0Ev(void* arg0);
void StageTexFilePaletteData(Nitro3DTextureSet volatile*, bool);
struct Nitro3DTextureSet;
void StageTexFileImageData(Nitro3DTextureSet volatile*, bool);

// USA: StageMonsterModelTemplateTextures_ov017_021a2840
extern "C" ARM void StageMonsterModelTemplateTextures_ov017_021a2840(GameResources*) {
    GameState* gameState = GameState::GetInstance();

    int i;
    for (i = 0; i < 0xc; i++) {
        GameObject* object = gameState->GetGameObjectByIndex(i + 7);
        if (object == NULL) {
            continue;
        }

        void* model = object->obj3D_.pModel_;
        if (model == NULL) {
            continue;
        }

        int textureSet = _ZN7Model3D7GetTEX0Ev(model);
        if (textureSet != 0) {
            StageTexFilePaletteData((Nitro3DTextureSet volatile*)textureSet, 0);
            StageTexFileImageData((Nitro3DTextureSet volatile*)textureSet, 0);
        }
    }
}
