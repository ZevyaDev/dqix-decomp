#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/SpriteAffineTransform.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/PAC.h"

#if defined(jpn)
#define REGION(j,u) (j)
#else
#define REGION(j,u) (u)
#endif

struct Struct_ov023_021ddae4 {
    char unknown_0_[0x44];
    SafeAllocator* unknown_44_;
    char unknown_48_[REGION(0x128,0x12c) - 0x48];
    SpriteSet_0205ac40 unknown_12c_;
    char unknown_17d_[REGION(0x6f9,0x77d) - REGION(0x128,0x12c) - sizeof(SpriteSet_0205ac40)];
    signed char unknown_77d_;
    signed char unknown_77e_;
    int unknown_780_;
};

struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;

// USA: func_ov023_021ddae4
extern "C" ARM void func_ov023_021ddae4(void* arg0) {
    Struct_ov023_021ddae4* var0 = (Struct_ov023_021ddae4*)arg0;
    if (var0->unknown_780_ < 0) return;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (!var1->GetTaskStatus(var0->unknown_780_)) return;
    var0->unknown_44_->Reset();
    void* var2;
    void* var3;
    unsigned int var4;
    int var5;
    var1->GetLoadedFileByID(var0->unknown_780_, &var3, &var4);
#if !defined(jpn)
    if (var3 != 0 && var4 != 0)
#endif
    {
        int var6 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)var3));
        for (int var7 = 0; var7 < var6; var7++) {
            void* var8 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)var3), var7, (const char**)(&var2), (unsigned int*)(&var5));
            ((OBJSpriteSet*)(&var0->unknown_12c_))->LoadFromNitroFile((void*)(var8), var5, (SafeAllocator*)((int)var0->unknown_44_));
        }
    }
    var0->unknown_77d_ = var0->unknown_77e_;
    var1->RemoveTask(var0->unknown_780_);
    var0->unknown_780_ = -1;
}
