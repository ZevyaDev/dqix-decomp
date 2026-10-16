#include "Graphics/NSBXX/NSBXX.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020b732c
extern "C" ARM void NSBXX_Model_SetAlpha(NSBXXInternalModel* model, int alpha)
{
    unsigned int i;
    for (i = 0; i < model->numMaterials_; i++)
    {
        NSBXX_Model_SetMaterialAlpha(model, i, alpha);
    }
}
