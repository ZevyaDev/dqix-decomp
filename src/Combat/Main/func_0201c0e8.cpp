#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/PlacementNew.h"
#include "Graphics/SPRSprite.h"

// USA: func_0201c0e8
extern "C" ARM void* func_0201c0e8(void* arg0)
{
    Struct_02012fa4* var0 = new (arg0) Struct_02012fa4;
    ((SPRSprite::Names*)(&var0->unknown_14_))->Reset();
    ((SPRSprite*)(var0))->Reset();
    return arg0;
}
