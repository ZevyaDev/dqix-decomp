#include <globaldefs.h>
extern "C" void func_020dc70c(int, int, int, int, unsigned short, unsigned short, unsigned int);
static inline int inline_020dc7e8(unsigned int arg0) { return arg0 >= 6; }
// USA: LoadPartyMemberColors_020dc7e8
extern "C" ARM void LoadPartyMemberColors_020dc7e8(unsigned int destination, int partyMemberIndex) {
    int sourceColorIndex;
    int isSubScreen = 0;
    unsigned short paletteIndex = 0;
    unsigned short colorIndex = 0;
    sourceColorIndex = 15;
    unsigned int size = 2;
    int isObj = inline_020dc7e8(destination);
    switch (destination) {
    case 0: isSubScreen = 1; paletteIndex = 2; colorIndex = 9; break;
    case 1: paletteIndex = 6; colorIndex = 14; break;
    case 2: sourceColorIndex = 0; isSubScreen = 1; paletteIndex = 12; size = 32; break;
    case 3: isSubScreen = 1; colorIndex = 13; break;
    case 4: colorIndex = 13; break;
    case 5: paletteIndex = 2; colorIndex = 4; break;
    case 6: isSubScreen = 1; colorIndex = 2; break;
    case 7: isSubScreen = 1; paletteIndex = 4; colorIndex = 3; break;
    case 8: paletteIndex = 9; colorIndex = 15; break;
    }
    if (partyMemberIndex < 0) {
        signed char i = 0;
        while (i < 4) {
            func_020dc70c(i, sourceColorIndex, isSubScreen, isObj, paletteIndex, colorIndex, size);
            paletteIndex++;
            i++;
        }
    } else func_020dc70c(partyMemberIndex, sourceColorIndex, isSubScreen, isObj, paletteIndex, colorIndex, size);
}
