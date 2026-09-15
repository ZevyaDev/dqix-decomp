#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_02092d18
ARM int FindMatchingTableIndex02092d18(int unused, int value) {
    unsigned char* bs = (unsigned char*)GameState::GetInstance();
    unsigned char i;
    for (i = 0; i < 4; i++) {
        if (value == (bs + i)[0x7f76]) {
            return (signed char)i;
        }
    }
    return -1;
}
