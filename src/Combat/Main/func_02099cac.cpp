#include <globaldefs.h>

extern unsigned short data_02109928[10][2];

// USA: GetCharacterPalettes_02099cac
extern "C" ARM unsigned short (*GetCharacterPalettes_02099cac(void))[2] {
    return data_02109928;
}
