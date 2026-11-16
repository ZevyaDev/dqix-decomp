#include <globaldefs.h>
#include "Filesystem/FileIO.h"
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "World/ZoneFeatures.h"


// USA: func_02014390
extern "C" ARM int func_02014390(Zone3D* arg0, const void* arg1, unsigned int arg2) {
    SafeAllocator* var0 = arg0->pAllocator_68_;
    unsigned int var1;
    void* var2 = DecompressLZ77FileIntoScratchSpace(var0, arg1, &var1);
    Zone3D_StructPtr_8* var3 = arg0->pUnknownStruct_8_;
    func_0201e248((Struct_020134e0*)arg0->substruct_6c_);
    ((Struct_020134e0*)arg0->substruct_6c_)->func_0201e2b4(var0, var2, var1);
    arg0->pUnknownStruct_8_ = var3;
    return 1;
}
