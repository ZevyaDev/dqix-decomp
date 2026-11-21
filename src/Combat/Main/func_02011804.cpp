#include <globaldefs.h>

struct GameState;
extern "C" ARM int func_020ac78c(void* arg0);

// USA: GetTreasureMapCount_02011804
extern "C" ARM unsigned char GetTreasureMapCount_02011804(GameState* gameState) {
    unsigned char mapCount;
    func_020ac78c(&mapCount);
    return mapCount;
}
