#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"


// USA: func_ov011_0218513c
extern "C" ARM void* func_ov011_0218513c(void* arg0) {
    ((SPRSprite*)((struct Struct_02012fa4*)((char*)arg0 + 0x20)))->Release();
    ((SPRSprite::Names*)((struct Struct_0204719c*)((char*)arg0 + 0x34)))->Reset();
    return arg0;
}
