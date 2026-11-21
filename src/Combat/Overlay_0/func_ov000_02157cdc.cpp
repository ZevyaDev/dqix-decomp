#include <globaldefs.h>
#include "std_library_functions.h"

// USA: InitActionTarget_ov000_02157cdc
extern "C" ARM void InitActionTarget_ov000_02157cdc(void* target) {
    memset(target, 0, 0x20);
    memset((char*)target + 0xe, -1, 6);
    *(short*)((char*)target + 0xc) = -1;
    *(int*)((char*)target + 0x20) = 0;
}
