#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b71fc
extern "C" ARM int NSBXX_Model_GetMaterialPolygonID(NSBXXInternalModel* model, unsigned int materialIndex)
{
    NSBXXMaterial* material = model->GetMaterialData()->GetMaterialByIndex(materialIndex);
    return (material->paramPOLYGON_ATTR_ & 0x3f000000) >> 24;
}
