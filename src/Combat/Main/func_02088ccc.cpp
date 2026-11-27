#include <globaldefs.h>

extern "C" void ClearEerieLight_02088d4c(unsigned char* stats);

// USA: func_02088ccc
extern "C" ARM void func_02088ccc(unsigned char* arg0) {
    arg0[0x6b] = 5;
    arg0[0x8e] = 0;
    *(int*)(arg0 + 0x18) |= 0x8;
    ClearEerieLight_02088d4c(arg0);
}
