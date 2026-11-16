// USA: func_ov009_02184ca4
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"
#include "Graphics/BGLayer.h"

struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(TextWindowManager_0205d2bc*);
#if defined(jpn)
extern "C" void func_ov009_02184e58(unsigned char*);
extern "C" void func_ov023_021d9a6c(char*);
extern "C" void func_ov023_021d9d34(char*);
extern "C" void func_ov023_021d9e60(char*);
extern "C" void func_ov023_021da1dc(unsigned char*);
#else
extern "C" void func_ov009_02184e58(unsigned char*);
extern "C" void func_ov023_021d9a6c(char*);
extern "C" void func_ov023_021d9d34(char*);
extern "C" void func_ov023_021d9e60(char*);
extern "C" void func_ov023_021da1dc(unsigned char*);
#endif

extern "C" ARM void func_ov009_02184ca4(unsigned char* arg0) {
    Struct_ov009_021842a0* var0 = (Struct_ov009_021842a0*)arg0;
#if defined(jpn)
    func_ov009_02184e58(arg0);
#else
    func_ov009_02184e58(arg0);
#endif
    signed char var1 = var0->unknown_c58_;
    if (var1 == 0 || var1 == 12)
        return;
    if (var0->unknown_d9c_ & 0x80)
        return;
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)&var0->unknown_1f8_[0]);
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((TextWindowManager_0205d2bc*)&var0->unknown_1f8_[1]);
    if (var0->unknown_d9c_ & 0x1000) {
        ((BGLayer*)(&var0->unknown_158_[0]))->UploadIndexBuffer((const void*)(0));
        var0->unknown_d9c_ &= ~0x1000;
    }
    if (var0->unknown_d9c_ & 0x2000) {
        ((BGLayer*)(&var0->unknown_158_[3]))->UploadIndexBuffer((const void*)(0));
#if defined(jpn)
        if (var0->unknown_c58_ == 8 || var0->unknown_c58_ == 9)
#else
        signed char var2 = var1 - 8;
        if ((unsigned char)var2 <= 1)
#endif
            ((BGLayer*)(&var0->unknown_158_[2]))->UploadIndexBuffer((const void*)(0));
        var0->unknown_d9c_ &= ~0x2000;
    }
#if defined(jpn)
    func_ov023_021d9a6c((char*)arg0);
    func_ov023_021d9d34((char*)arg0);
    func_ov023_021d9e60((char*)arg0);
    func_ov023_021da1dc(arg0);
#else
    func_ov023_021d9a6c((char*)arg0);
    func_ov023_021d9d34((char*)arg0);
    func_ov023_021d9e60((char*)arg0);
    func_ov023_021da1dc(arg0);
#endif
}
