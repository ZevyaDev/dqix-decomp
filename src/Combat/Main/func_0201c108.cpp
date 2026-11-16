#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

// USA: func_0201c108
extern "C" ARM void* func_0201c108(void* arg0)
{
    Struct_02012fa4* var0 = static_cast<Struct_02012fa4*>(arg0);
    ((SPRSprite*)(var0))->Release();
    ((SPRSprite::Names*)(&var0->unknown_14_))->Reset();
    var0->~Struct_02012fa4();
    return arg0;
}
