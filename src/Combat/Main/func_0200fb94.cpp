#include <globaldefs.h>

// USA: SetGameMode_0200fb94
extern "C" ARM void SetGameMode_0200fb94(char* gameState, unsigned char mode) {
    gameState[4] = mode;
}
