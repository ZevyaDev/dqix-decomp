#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct BGLayer_0204b010;

struct BGLayer_0204b8d0;


struct Struct_ov023_021ecdfc {
    char unknown_0_[0x64];
    char unknown_64_[0x400 - 0x64];
    char unknown_400_[0x38];
    unsigned short unknown_438_;
    char unknown_43a_[0x43d - 0x43a];
    unsigned char unknown_43d_;
    char unknown_43e_[0];
    short unknown1_43e_;
    short unknown_440_;
    short unknown_442_;
    short unknown_444_;
    short unknown_446_;
};

// USA: func_ov023_021ecdfc
extern "C" ARM void func_ov023_021ecdfc(struct Struct_ov023_021ecdfc* arg0) {
    if ((arg0->unknown_438_ & 0x40) != 0 || (arg0->unknown_438_ & 0x200) != 0) {
        ((BGLayer*)((struct BGLayer_0204b010*)&arg0->unknown_64_))->PrepareIndexBuffer((void*)(NULL));

        short var0 = arg0->unknown1_43e_;
        short var1 = arg0->unknown_442_ + var0;
        short var2 = arg0->unknown_446_ - var0;
        ((BGLayer*)((struct BGLayer_0204b8d0*)&arg0->unknown_64_))->BlitSpriteByIndex(arg0->unknown_43d_, 0, var0, arg0->unknown_440_, var1, arg0->unknown_444_, var2, 0xffff);

        ((BGLayer*)(&arg0->unknown_64_))->CleanIndexBufferCache((const void*)(NULL));
    }
}
