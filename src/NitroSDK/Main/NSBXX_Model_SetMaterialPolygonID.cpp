#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b710c
extern "C" ARM void NSBXX_Model_SetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex, int polygonId)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    material->paramPOLYGON_ATTR_ = (material->paramPOLYGON_ATTR_ & ~0x3f000000) | (polygonId << 24);
}
