#include <globaldefs.h>

struct ModifiableCombatStats_020886dc_2;
extern "C" void SetFourceType_02088818(struct ModifiableCombatStats_020886dc_2* stats, unsigned short fourceType);

// USA: func_020887fc
extern "C" ARM void func_020887fc(unsigned char* arg0) {
    *(int*)(arg0 + 0x18) |= 0x80;
    SetFourceType_02088818((struct ModifiableCombatStats_020886dc_2*)arg0, 5);
}
