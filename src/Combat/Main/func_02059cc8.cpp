#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ResetEffectSlot_02059cc8
extern "C" ARM void ResetEffectSlot_02059cc8(unsigned char* slot) {
    memset(slot, 0, 0xd4);
    *(short*)(slot + 0xb2) = -1;
    *(short*)(slot + 0xb4) = -1;
    slot[0xcc] = (slot[0xcc] | 4) & ~8;
}
