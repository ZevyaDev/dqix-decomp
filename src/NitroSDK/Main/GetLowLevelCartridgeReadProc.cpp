#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

extern "C" void ReadBlocksFromCartridge(Struct_02111f20* handler);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0f34
ARM Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc()
{
    return &ReadBlocksFromCartridge;
}
