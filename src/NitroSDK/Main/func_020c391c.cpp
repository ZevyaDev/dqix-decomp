#include <globaldefs.h>

extern unsigned short data_020f226c;
extern unsigned short data_02111220;

// USA: SetMainDisplayAndBGMode_020c391c
extern "C" ARM void SetMainDisplayAndBGMode_020c391c(int displayMode, int bgMode, int isBG03D) {
    volatile unsigned int* dISPCNT = (volatile unsigned int*)0x4000000;
    unsigned int isDisplayOn = data_020f226c;
    unsigned int oldValue = *dISPCNT;
    data_02111220 = (unsigned short)displayMode;
    unsigned int writtenDisplayMode = (isDisplayOn == 0) ? 0 : displayMode;
    unsigned int newValue = bgMode | ((oldValue & 0xfff0fff0) | (writtenDisplayMode << 16));
    newValue = newValue | (isBG03D << 3);
    *dISPCNT = newValue;
    if (data_02111220 == 0) {
        data_020f226c = 0;
    }
}
