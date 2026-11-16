#include <globaldefs.h>
#include "Filesystem/FileIO.h"
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"


// USA: func_02014414
extern "C" ARM int func_02014414(Zone3D* arg0, const void* arg1, unsigned int arg2) {
    SafeAllocator* var0 = arg0->pAllocator_68_;
    unsigned int var1;
    void* var2 = DecompressLZ77FileIntoScratchSpace(var0, arg1, &var1);
    arg0->lighting_.Initialize();
    arg0->lighting_.LoadFromScript(var2, var1, var0);
    return 1;
}
