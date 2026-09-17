#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "System/OverlayId.h"

extern int data_ov000_02184220;
extern "C" void _Z28StoreByteAtCountTail020a1fd4h(unsigned char value);

// USA: func_ov000_02160e48
extern "C" ARM void func_ov000_02160e48(void* obj) {
    *(int*)((char*)obj + 0xea8) = 0x13;
    *(int*)((char*)obj + 0xeac) = 0;
    data_ov000_02184220 = 1;
    *(short*)((char*)obj + 0x7700 + 0x30) = BackgroundLoader::GetInstance()->QueueLoadOverlay(OVERLAY_ID(25));
    _Z28StoreByteAtCountTail020a1fd4h(4);
}
