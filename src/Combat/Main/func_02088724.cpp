#include <globaldefs.h>

struct ModifiableCombatStats_020886dc_2;
extern "C" void SetFourceType_02088818(struct ModifiableCombatStats_020886dc_2* stats, unsigned short fourceType);

struct Struct_02088724 {
    unsigned char unknown_0_[0x18];
    unsigned int unknown_18_;
};

// USA: func_02088724
extern "C" ARM void func_02088724(struct Struct_02088724* arg0) {
    arg0->unknown_18_ |= 0x80;
    SetFourceType_02088818((struct ModifiableCombatStats_020886dc_2*)arg0, 2);
}
