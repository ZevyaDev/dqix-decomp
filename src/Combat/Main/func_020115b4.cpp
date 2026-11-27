#include <globaldefs.h>

struct Struct_02000c9c_13 {
#if defined(jpn)
    char unknown1_0_[0x6176];
#else
    char unknown_0_[0x63D6];
#endif
    unsigned char requestedMovie_63d6_;
};

// USA: SetRequestedMovie_020115b4
extern "C" ARM void SetRequestedMovie_020115b4(struct Struct_02000c9c_13* gameState, unsigned char movie) {
    gameState->requestedMovie_63d6_ = movie;
}
