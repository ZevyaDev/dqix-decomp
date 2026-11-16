#include <globaldefs.h>
#include "Graphics/OBJSpriteSet.h"

extern signed char data_020e7039;


// USA: func_02026ebc
extern "C" ARM void func_02026ebc(void* arg0) {
    unsigned char var0 = 0;
    signed char var1;
    while ((var1 = (&data_020e7039)[var0]) >= 0) {
        ((OBJSpriteSet*)((int)((char*)arg0 + 0x94)))->SetMetatileOBJMode((OBJSpriteSet::Metatile*)((char*)arg0 + 0xe8 + var1 * 40), 0);
        var0 = (unsigned char)(var0 + 1);
    }
}
