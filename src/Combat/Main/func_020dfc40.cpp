#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020dfc40;
extern "C" int func_020dfe88(struct Struct_020dfc40*);

struct StringTable_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};

// USA: InitStringTable_020dfc40
extern "C" ARM void InitStringTable_020dfc40(StringTable_0201099c_14* stringTable) {
    memset(stringTable, 0, 0xc);
    stringTable->unknown_c_ = -1;
    stringTable->unknown_10_ = -1;
    func_020dfe88((struct Struct_020dfc40*)stringTable);
}
