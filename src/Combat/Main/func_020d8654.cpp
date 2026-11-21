#include <globaldefs.h>

unsigned int DisableSpecificInterrupts(unsigned int mask);

struct Struct_0214e4a0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    unsigned int vCounterEnableStack_4_;
};
extern Struct_0214e4a0 data_0214e4a0;

// USA: SaveAndDisableVCounterInterrupt_020d8654
extern "C" ARM void SaveAndDisableVCounterInterrupt_020d8654(void) {
    data_0214e4a0.vCounterEnableStack_4_ <<= 1;
    unsigned int previousInterruptMask = DisableSpecificInterrupts(4);
    data_0214e4a0.vCounterEnableStack_4_ |= (previousInterruptMask & 4) ? 1 : 0;
}
