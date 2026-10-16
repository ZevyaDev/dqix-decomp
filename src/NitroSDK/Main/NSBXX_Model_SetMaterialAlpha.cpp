#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b7184
extern "C" ARM void NSBXX_Model_SetMaterialAlpha(NSBXXInternalModel* model, unsigned int materialIndex, int alpha)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    material->paramPOLYGON_ATTR_ = (material->paramPOLYGON_ATTR_ & ~0x1f0000) | (alpha << 16);
}
