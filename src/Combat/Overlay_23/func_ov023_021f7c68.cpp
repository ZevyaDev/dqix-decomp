#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov023_021f7c68_72 = 0x44, Enum_ov023_021f7c68_40 = 0x24 };
#else
enum { Enum_ov023_021f7c68_72 = 0x48, Enum_ov023_021f7c68_40 = 0x28 };
#endif

struct BGLayer_0204b988;
extern "C" void CopyBGScreenBlock_0204b988(struct BGLayer_0204b988* layer, unsigned int screenBlockIndex, int destX, int destY, unsigned short palette);

struct Struct_ov023_021f7c68 { char unknown_0_[Enum_ov023_021f7c68_72]; int unknown_48_; unsigned char unknown_4c_, unknown_4d_, unknown_4e_; };

// USA: func_ov023_021f7c68
extern "C" ARM void func_ov023_021f7c68(Struct_ov023_021f7c68* arg0, unsigned char arg1, unsigned char arg2, unsigned char arg3) {
    arg0->unknown_4c_ = arg1;
    arg0->unknown_4d_ = arg2;
    arg0->unknown_4e_ = arg3;
    arg0->unknown_48_ = 1;
    CopyBGScreenBlock_0204b988((struct BGLayer_0204b988*)((char*)arg0 + Enum_ov023_021f7c68_40), arg0->unknown_4c_, arg0->unknown_4d_, arg0->unknown_4e_, 0xffff);
}
