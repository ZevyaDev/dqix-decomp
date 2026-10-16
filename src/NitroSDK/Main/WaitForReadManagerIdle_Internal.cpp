#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0f28
ARM void WaitForReadManagerIdle_Internal()
{
    AwaitCardReadManagerIdle();
}
