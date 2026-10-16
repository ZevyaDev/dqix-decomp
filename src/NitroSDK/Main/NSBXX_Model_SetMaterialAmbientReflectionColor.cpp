#include <globaldefs.h>
#include "Graphics/NSBXX/NSBXX.h"

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b708c
extern "C" ARM void NSBXX_Model_SetMaterialAmbientReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int col)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    material->paramDIF_AMB_ = (material->paramDIF_AMB_ & 0x8000ffff) | (col << 16);
}
