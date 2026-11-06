#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct StringTable_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};
extern "C" void InitStringTable_020dfc40(StringTable_0201099c_14* stringTable);

struct Struct_02153694 {
    StringTable_0201099c_14 unknown_0_;
    unsigned char unknown_14_[4];
};

extern Struct_02153694 data_02153694[2];
extern SafeAllocator data_02153680;

// USA: func_020e5058
extern "C" ARM void func_020e5058(void) {
    int var0;
    for (var0 = 0; var0 < 2; var0++) {
        InitStringTable_020dfc40(&data_02153694[var0].unknown_0_);
    }
    data_02153680.ResetAllocatorPointer();
}
