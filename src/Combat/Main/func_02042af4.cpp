#include <globaldefs.h>

// USA: FreeGlyphSlot_02042af4
extern "C" ARM void FreeGlyphSlot_02042af4(int arg0, unsigned char* slotBits, int slot) {
    slotBits[slot >> 3] &= ~(1 << (slot & 7));
}
