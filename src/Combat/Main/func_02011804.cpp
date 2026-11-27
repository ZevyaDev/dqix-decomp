#include <globaldefs.h>

struct GameState;
extern "C" ARM int ReadTreasureMapCount_020ac78c(void* count);

// USA: GetTreasureMapCount_02011804
extern "C" ARM unsigned char GetTreasureMapCount_02011804(GameState* gameState) {
    unsigned char mapCount;
    ReadTreasureMapCount_020ac78c(&mapCount);
    return mapCount;
}
