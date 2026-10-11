#include <globaldefs.h>

struct State0204166c;
extern "C" void _Z15Forward020416c0P13State0204166c(struct State0204166c* s);

struct Slot020462d0 {
    char pad0[8];
    int field8;
    char pad1[0x1c - 0xc];
};

// USA: func_020462d0
// Message-code refcount drain: for each code, mark the slot 0xff01, skip the escape codes,
// decrement the per-code refcount, and on hitting zero Forward the slot and bump the
// per-message forward counter. Offsets are the MessageSystem/CombatSlots layout shared with
// DecrementSlotRef0206b198, InitCombatSlots02043040 and ReinitCombatController_02043224.
// The two big offsets are written as ONE pointer expression each (0x17b8, 0x9b8); mwccarm's
// canon splits them into the +0x3b8/+0x1400 and +0x1b8/+0x800 pairs itself, and that colouring
// is the one the ROM has (a base + re-offset local colours the two scratch registers inverted).
extern "C" ARM void func_020462d0(char* obj, unsigned short* codes, int count) {
    if (codes == 0) {
        return;
    }
    if (count < 0) {
        return;
    }

    enum { kMark = 0xff01 };

    for (int i = 0; i < count; i++) {
        unsigned short v = codes[i];
        codes[i] = kMark;
        if (v == kMark) {
            return;
        }
        if ((v & 0xff00) == 0xff00) {
            continue;
        }
        if (v >= 0x80) {
            continue;
        }
        struct Slot020462d0* slot = &((struct Slot020462d0*)(obj + 0x9b8))[v];
        if (slot->field8 < 0) {
            continue;
        }
        int cnt = ((unsigned char*)(obj + 0x17b8))[v] - 1;
        ((unsigned char*)(obj + 0x17b8))[v] = cnt;
        if ((cnt & 0xff) != 0) {
            continue;
        }
        _Z15Forward020416c0P13State0204166c((struct State0204166c*)slot);
        int* counter = (int*)((obj + 0x1b4) + 0x800);
        *counter = (*counter - 1) & 0x7f;
    }
}