#include <globaldefs.h>

// USA: SetSPRSpriteScale_0203a47c
extern "C" ARM void SetSPRSpriteScale_0203a47c(unsigned int* sprite, unsigned int x, unsigned int y, unsigned int z) {
    sprite[0xd] = x;
    sprite[0xe] = y;
    sprite[0xf] = z;
}
