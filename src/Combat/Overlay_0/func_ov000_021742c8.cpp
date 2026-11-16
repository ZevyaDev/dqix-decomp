#include <globaldefs.h>
#include "Graphics/BGLayer.h"

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc*);

#if defined(jpn)
enum { Enum_ov000_021742c8_7538 = 0x1faa };
#else
enum { Enum_ov000_021742c8_7538 = 0x1d72 };
#endif

// USA: func_ov000_021742c8
extern "C" ARM void func_ov000_021742c8(void* arg0) {
    unsigned short var0 = *(unsigned short*)((char*)arg0 + Enum_ov000_021742c8_7538);
    if (!(var0 & 0x40)) return;
    if (var0 & 0x80) {
        ((BGLayer*)((char*)arg0 + 0x8c4))->UploadIndexBuffer((const void*)(0));
        return;
    }
    ((BGLayer*)((char*)arg0 + 0x8a4))->UploadIndexBuffer((const void*)(0));
    ((BGLayer*)((char*)arg0 + 0x8c4))->UploadIndexBuffer((const void*)(0));
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((struct TextWindowManager_0205d2bc*)((char*)arg0 + 0x188));
}
