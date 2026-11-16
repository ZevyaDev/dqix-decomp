#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct BGLayer_0204b8d0;

struct BGLayer_02020cb8_2;

// USA: func_ov000_02175480
extern "C" ARM void func_ov000_02175480(void* arg0) {
    ((BGLayer*)((struct BGLayer_0204b8d0*)((char*)arg0 + 0x8c4)))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x19, 0xffff);
    ((BGLayer*)((struct BGLayer_02020cb8_2*)((char*)arg0 + 0x8c4)))->CleanCacheAndUploadIndexBuffer((const void*)(0));
}
