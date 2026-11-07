#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

extern "C" void CancelFontLoad_02094ab0(void);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void CloseMessageWindow_02043124(void* window);
extern "C" int GetFontLoader_02094a00(void);
extern "C" void EnablePlayerControl_020397c0(void* object);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void ClearCameraFlags_020a28b0(unsigned char* camera, int flags);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void LoadFileTables_020a0c0c(void);

extern int gMainHeap_02114e20;

struct Struct_ov017_021ac32c {
    char unknown_0_[0xc];
    int unknown_c_;
    SafeAllocator unknown_10_;
};

// USA: func_ov017_021ac32c
extern "C" ARM void func_ov017_021ac32c(struct Struct_ov017_021ac32c* arg0) {
    void* var0 = (void*)GetMessageWindow_020421a0();
    ResetMessageWindow_02043204((char*)var0);
    CloseMessageWindow_02043124(var0);
    GetFontLoader_02094a00();
    CancelFontLoad_02094ab0();
    GameState* var1 = GameState::GetInstance();
    EnablePlayerControl_020397c0(var1->GetUnknownGameObject());

    void* var2 = arg0->unknown_10_.GetSignedAllocator();
    if (var2 != NULL) {
        arg0->unknown_10_.Destroy();
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var2);
        LoadFileTables_020a0c0c();
    }
    arg0->unknown_c_ = 0;
    int var3 = GetFollowCamera_020100f8((char*)var1);
    if (var3 == 0) return;
    ClearCameraFlags_020a28b0((unsigned char*)var3, 3);
}
