#include <globaldefs.h>

struct Struct_0205ba2c;
extern "C" void func_0205ba2c(struct Struct_0205ba2c*);

struct KeyMenuCursor_0205bef8 {
    char unknown_0_[0x30];
    int unknown_30_;
    short unknown_34_;
    unsigned char unknown_36_;
    unsigned char unknown_37_;
    unsigned char unknown_38_;
    unsigned char unknown_39_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
    unsigned char unknown_3d_;
};

// USA: InitKeyMenuCursor_0205bef8
extern "C" ARM void InitKeyMenuCursor_0205bef8(struct KeyMenuCursor_0205bef8* cursor) {
    func_0205ba2c((struct Struct_0205ba2c*)cursor);
    cursor->unknown_30_ = 0;
    cursor->unknown_34_ = 0;
    cursor->unknown_36_ = 0;
    cursor->unknown_37_ = 0;
    cursor->unknown_38_ = 0;
    cursor->unknown_39_ = 0x14;
    cursor->unknown_3a_ = 0xa;
    cursor->unknown_3c_ = 1;
    cursor->unknown_3d_ = 1;
}
