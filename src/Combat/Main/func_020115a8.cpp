#include <globaldefs.h>

struct GameState_02000c9c_12 {
#if defined(jpn)
    char unknown1_0_[0x6176];
#else
    char unknown_0_[0x63D6];
#endif
    unsigned char requestedMovie_63d6_;
};

// USA: GetRequestedMovie_020115a8
extern "C" ARM int GetRequestedMovie_020115a8(struct GameState_02000c9c_12* gameState) {
    return gameState->requestedMovie_63d6_;
}
