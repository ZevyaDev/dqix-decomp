#include <globaldefs.h>
struct Struct_021015a0_3 { unsigned short unknown_0_; char unknown_2_[14]; int unknown_10_; char unknown_14_[24]; int unknown_2c_; char unknown_30_[8]; int unknown_38_; };
struct Struct_0202d2a4 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_, unknown_8_, unknown_a_; };
extern Struct_021015a0_3 gLocalWirelessLink_021015a0;
extern char data_02101f80[], data_021017a0[];
extern "C" void func_0202d3e0();
extern "C" void SetLocalWirelessLinkError_0202c848(int);
extern "C" int func_020d5898(int, int, int, int, unsigned short, unsigned short);
// USA: func_0202d2a4
extern "C" ARM void func_0202d2a4(Struct_0202d2a4* arg0) {
    if (arg0->unknown_2_) {
        SetLocalWirelessLinkError_0202c848(arg0->unknown_2_);
        if (arg0->unknown_2_ == 12) gLocalWirelessLink_021015a0.unknown_10_ = 9;
        else if (arg0->unknown_2_ == 11) gLocalWirelessLink_021015a0.unknown_10_ = 9;
        else if (arg0->unknown_2_ == 1) gLocalWirelessLink_021015a0.unknown_10_ = 8;
        else gLocalWirelessLink_021015a0.unknown_10_ = 9;
    } else {
        if (arg0->unknown_8_ == 8) {}
        else if (arg0->unknown_8_ == 7) {
            gLocalWirelessLink_021015a0.unknown_10_ = 4;
            int var0 = func_020d5898((int)func_0202d3e0, (int)data_02101f80, (unsigned short)gLocalWirelessLink_021015a0.unknown_2c_, (int)data_021017a0, (unsigned short)gLocalWirelessLink_021015a0.unknown_38_, 1);
            if (var0 == 2) var0 = 1;
            else { SetLocalWirelessLinkError_0202c848(var0); var0 = 0; }
            if (var0 == 0) gLocalWirelessLink_021015a0.unknown_10_ = 3;
            else gLocalWirelessLink_021015a0.unknown_0_ = arg0->unknown_a_;
        }
        else if (arg0->unknown_8_ == 6) {}
        else if (arg0->unknown_8_ == 9) { SetLocalWirelessLinkError_0202c848(20); gLocalWirelessLink_021015a0.unknown_10_ = 9; }
        else if (arg0->unknown_8_ != 26) gLocalWirelessLink_021015a0.unknown_10_ = 9;
    }
}
