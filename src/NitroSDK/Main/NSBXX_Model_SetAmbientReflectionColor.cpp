#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

extern "C" void NSBXX_Model_SetMaterialAmbientReflectionColor(NSBXXInternalModel* model, unsigned int materialIndex, int col);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b72ac
extern "C" ARM void NSBXX_Model_SetAmbientReflectionColor(NSBXXInternalModel* model, int col)
{
    unsigned int i;
    for (i = 0; i < model->numMaterials_; i++)
    {
        NSBXX_Model_SetMaterialAmbientReflectionColor(model, i, col);
    }
}
