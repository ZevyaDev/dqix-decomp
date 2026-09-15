#include <globaldefs.h>
#include "GameState/GameState.h"

unsigned char GetTableByte0207ca94(int index);
short CountPositiveEntries0207c638(void* base, unsigned int index);

// USA: func_ov003_02175f90
ARM short ComputePositiveCount_02175f90(void* obj) {
    GameState* bs = GameState::GetInstance();
    void* p = GetPtrField0x2a04(bs);
    short v = *(short*)((char*)obj + 0x1012);
    int idx = (short)(v - 286);
    unsigned char cnt = GetTableByte0207ca94(idx);
    return CountPositiveEntries0207c638((char*)p + 0x1d4, cnt);
}
