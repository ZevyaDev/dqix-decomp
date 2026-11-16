#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "NitroSDK/Graphics3D/Graphics3D.h"

// USA: func_0201498c
extern "C" ARM int func_0201498c(void* arg0) {
    Zone3D* var0 = static_cast<Zone3D*>(arg0);
    AtmosphericEffectSet* var1 = &var0->atmosphericEffects_;
    if (!var1->IsArchiveLoaded())
        return 0;

    var1->ProcessArchive(var1, var0->pAllocator_68_, var0->textureArena_50_);
    AtmosphericEffect* var2 = var1->GetFirstEffect();
    while (var2 != NULL) {
        Model3D* var3 = var2->object_.pModel_;
        if (var3 != NULL) {
            Nitro3DTextureSet* var4 = var3->GetTEX0();
            if (var4 != NULL) {
                var0->textureImageMemory_ += Nitro3D_GetTextureBlock1Length((const Nitro3DTextureSet*)(var4));
                var0->texturePaletteMemory_ += Nitro3D_GetTextureBlock4Length((const Nitro3DTextureSet*)(var4));
            }
        }
        var2 = var2->pNext_;
    }
    return 1;
}
