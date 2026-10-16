#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

extern "C" void NSBXX_Model_SetMaterialDiffuseReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int rgb);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b726c
extern "C" ARM void NSBXX_Model_SetDiffuseReflectionColor(NSBXXInternalModel* model, int rgb)
{
    unsigned int i;
    for (i = 0; i < model->numMaterials_; i++)
    {
        NSBXX_Model_SetMaterialDiffuseReflectionColor(model, i, rgb);
    }
}
