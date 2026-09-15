#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

// USA: func_020ac020
ARM int CopyIndexedRegion0x75f0(void* unused, short* indices, int* dest, int count) {
    int* table = (int*)((char*)GameState::GetInstance() + 0x75f0);
    int i;
    for (i = 0; i < count; i++) {
        short idx = indices[i];
        if (idx >= 1 && idx <= 0x134) {
            idx = idx - 1;
            memcpy(&dest[i], &table[idx], sizeof(int));
        }
    }
    return 1;
}
