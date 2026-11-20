#include <globaldefs.h>

// USA: SetTextWindowCharacterDataOffsetAndId_0204f160
extern "C" ARM void SetTextWindowCharacterDataOffsetAndId_0204f160(unsigned char* textWindow, int characterDataOffset, int windowId) {
    if ((textWindow[0xc5] & 1) == 0) {
        *(int*)(textWindow + 0xa0) = characterDataOffset;
        textWindow[0xc4] = windowId;
    }
}
