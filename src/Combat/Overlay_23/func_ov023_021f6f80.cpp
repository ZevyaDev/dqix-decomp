#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Graphics/SPRSprite.h"

struct Struct_02012fa4;

// USA: func_ov023_021f6f80
extern "C" ARM void func_ov023_021f6f80(void* arg0) {
	((SPRSprite*)((Struct_02012fa4*)((char*)arg0 + 0x20)))->Release();
}
