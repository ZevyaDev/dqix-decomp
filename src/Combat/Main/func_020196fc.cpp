#include <globaldefs.h>

#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"

// USA: func_020196fc
extern "C" ARM BMDJStruct_02013454* func_020196fc(Zone3D* arg0, int arg1) {
    BMDJStruct_02013454* var0 = (BMDJStruct_02013454*)(arg0->firstBMDJStruct_41c_);
    int var1;
    for (var1 = 0; var1 < arg1; var1++) {
        if (var0 == 0) {
            return 0;
        }
        var0 = var0->pNext_54_;
    }
    return var0;
}
