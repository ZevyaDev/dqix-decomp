#include <globaldefs.h>

struct Struct_020dfc40;
extern "C" int func_020dfe88(struct Struct_020dfc40*);

struct StringTable_0201099c_14 {
    unsigned char unknown_0_[0xc];
    short unknown_c_;
    int unknown_10_;
};

extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

// USA: func_020dfc6c
extern "C" ARM void func_020dfc6c(struct StringTable_0201099c_14* arg0) {
    func_020dfe88((struct Struct_020dfc40*)arg0);
    InitStringTable_020dfc40(arg0);
}
