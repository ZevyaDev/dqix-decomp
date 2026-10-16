#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b700c
extern "C" ARM void NSBXX_Model_SetMaterialDiffuseReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int rgb)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    material->paramDIF_AMB_ = (material->paramDIF_AMB_ & ~0x7fff) | rgb;
}
