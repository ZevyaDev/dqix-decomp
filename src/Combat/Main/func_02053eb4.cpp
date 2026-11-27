#include <globaldefs.h>

// USA: GetBoneIndexForSlot_02053eb4
extern "C" ARM unsigned char GetBoneIndexForSlot_02053eb4(void* object, int slot) {
#if defined(jpn)
    return *((unsigned char*)object + slot + 0x194);
#else
    return *((unsigned char*)object + slot + 0x1a0);
#endif
}
