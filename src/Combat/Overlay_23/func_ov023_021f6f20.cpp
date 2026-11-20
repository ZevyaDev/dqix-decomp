#include <globaldefs.h>
#include "Graphics/SPRSprite.h"

extern "C" void InitMenuObjectBase_ov023_021f6ed8(void* object);
extern "C" void func_ov023_021f71a8(void* arg0, int arg1);

// USA: func_ov023_021f6f20
extern "C" ARM int func_ov023_021f6f20(void* arg0, int arg1, int arg2, int arg3, int arg4, unsigned int arg5) {
    InitMenuObjectBase_ov023_021f6ed8(arg0);
    *(unsigned short*)((char*)arg0 + 0x4) = 0;
    *(unsigned short*)((char*)arg0 + 0x6) = arg2;
    *(unsigned short*)((char*)arg0 + 0x8) = arg3;
    *(unsigned short*)((char*)arg0 + 0xa) = arg4;
    *(unsigned int*)((char*)arg0 + 0x10) = arg5;
    ((SPRSprite*)((char*)arg0 + 0x20))->Reset();
    func_ov023_021f71a8(arg0, arg1);
    *(unsigned short*)((char*)arg0 + 0xa8) = 0;
    *(unsigned short*)((char*)arg0 + 0xaa) = 0;
    return 1;
}
