#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Cache.h"
#include "std_library_functions.h"

extern "C" int GetFontLoader_02094a00(void);
extern "C" void CancelFontLoad_02094ab0(void);
struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct Struct_020e25e8;
extern "C" void func_020e25e8(struct Struct_020e25e8* arg0);
struct BGControlSave_02074bd0;
extern "C" void RestoreMainBGControl_02074bd0(struct BGControlSave_02074bd0* save);
struct TextWindowManager_0205d1e0;
extern "C" void ClearTextWindowManagerBGScreenData_0205d1e0(struct TextWindowManager_0205d1e0* windowManager);
struct TextWindowManager_0205d274;
extern "C" void FlushTextWindowManagerBGScreenData_0205d274(struct TextWindowManager_0205d274* windowManager);
struct TextWindowManager_0205d2bc;
extern "C" void CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc(struct TextWindowManager_0205d2bc* windowManager);
extern "C" void ResetTextWindowManager_0205d048(void* windowManager);
extern "C" int LoadToMainBG1CharacterData(int src, int offset, unsigned int size);
extern "C" int LoadToMainBG1ScreenData(int src, int offset, unsigned int size);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void CloseMessageWindow_02043124(void* window);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void* __clear(void* arg0, int arg1);

struct Struct_ov003_02158d4c {
    SafeAllocator unknown_0_;
    SafeAllocator unknown_14_;
    SafeAllocator unknown_28_;
    SafeAllocator unknown_3c_;
    char unknown_50_[0x7c - 0x50];
    int unknown_7c_;
    char unknown_80_[0xf4 - 0x80];
    char unknown_f4_[0x570 - 0xf4];
    struct Struct_020e25e8* unknown_570_;
    char unknown_574_[0x57c - 0x574];
    int unknown_57c_;
};

// USA: func_ov003_02158d4c
extern "C" ARM void func_ov003_02158d4c(Struct_ov003_02158d4c* arg0) {
    GetFontLoader_02094a00();
    CancelFontLoad_02094ab0();

    if (arg0->unknown_570_ != NULL && func_020e28dc((struct Struct_020e28dc*)arg0->unknown_570_)) {
        func_020e25e8(arg0->unknown_570_);
    }

    unsigned int* var0 = (unsigned int*)0x4000000;
    *var0 = (*var0 & ~0x1f00) | 0x100;
    *(unsigned short*)0x4000050 = 0;
    RestoreMainBGControl_02074bd0((struct BGControlSave_02074bd0*)arg0->unknown_80_);

    ClearTextWindowManagerBGScreenData_0205d1e0((struct TextWindowManager_0205d1e0*)arg0->unknown_f4_);
    FlushTextWindowManagerBGScreenData_0205d274((struct TextWindowManager_0205d274*)arg0->unknown_f4_);
    CopyTextWindowManagerBGScreenDataToVRAM_0205d2bc((struct TextWindowManager_0205d2bc*)arg0->unknown_f4_);
    ResetTextWindowManager_0205d048(arg0->unknown_f4_);

    arg0->unknown_28_.Reset();
    void* var1 = arg0->unknown_28_.Allocate(0x800);
    memset(var1, 0, 0x800);
    DC_FlushRange(var1, 0x20);
    LoadToMainBG1CharacterData((int)var1, 0, 0x20);
    LoadToMainBG1ScreenData((int)var1, 0, 0x800);

    void* var2 = (void*)GetMessageWindow_020421a0();
    CloseMessageWindow_02043124(var2);
    ResetMessageWindow_02043204((char*)var2);

    arg0->unknown_7c_ = 0;
    arg0->unknown_57c_ = 0;

    SafeAllocator* var3[5];
    __clear(var3, sizeof(var3));
    var3[0] = &arg0->unknown_3c_;
    var3[1] = &arg0->unknown_28_;
    var3[2] = &arg0->unknown_14_;
    var3[3] = &arg0->unknown_0_;

    for (int var4 = 0; var3[var4] != NULL; var4++) {
        if (var3[var4]->GetSignedAllocator() != NULL) {
            var3[var4]->Destroy();
        }
    }
}
