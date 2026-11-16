#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Memory/SafeAllocator.h"
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "Graphics/SPRSprite.h"
#include "Graphics/TextureArena.h"
#include "Filesystem/FileIO.h"

struct TextureVRAMArea_0203d028;
struct Struct_02000c9c_8;
#if defined(jpn)
enum { Enum_ov017_0219b624_1276 = 0x4ac };
#define data_ov017_021d656c data_ov017_021d69bc
#define data_ov017_021d751f data_ov017_021d797b
#define data_ov017_021d7544 data_ov017_021d7982
#define data_ov017_021d7555 data_ov017_021d7993
#define data_ov017_021d7567 data_ov017_021d79a5
#else
enum { Enum_ov017_0219b624_1276 = 0x4fc };
#endif
struct Struct_ov017_021d656c { int unknown_0_; const char* unknown_4_; };
extern const Struct_ov017_021d656c data_ov017_021d656c[];
void* LoadFileIntoMemory(const char*, void*, unsigned int*);
bool GetFileInNarc(const void*, const char*, const void**, unsigned int*, unsigned int);
extern const char data_ov017_021d7504[], data_ov017_021d7510[], data_ov017_021d751b[];
extern const char data_ov017_021d751f[], data_ov017_021d7526[], data_ov017_021d7530[], data_ov017_021d753a[];
extern const char data_ov017_021d7544[], data_ov017_021d7555[], data_ov017_021d7567[];
extern "C" int func_0200fb08(Struct_02000c9c_8*);
extern "C" void* func_0208e9e8();
extern "C" void func_02096604(char*, int);
extern "C" {
Zone3D* GetZone3D_02012fe4();
void func_02018d28(Zone3D*, SafeAllocator*, void*, unsigned int);
void GetEffectManager_02057924();
void func_0208f36c(void*, Object3D*);
void func_02013d24(Zone3D*);
int sprintf(char*, const char*, ...);
}

// USA: func_ov017_0219b624
extern "C" ARM void func_ov017_0219b624(GameResources* arg0) {
    Struct_02012fa4* var0;
    Zone3D* var1;
    SafeAllocator* var2;
#if !defined(jpn)
    GameState* var3 = GameState::GetInstance();
#endif
    var1 = GetZone3D_02012fe4();
    BackgroundLoader::GetInstance();
    var2 = &arg0->allocator_array_38[5];
    TextureVRAMArea_0203d028* var4 = reinterpret_cast<TextureVRAMArea_0203d028*>(reinterpret_cast<char*>(arg0) + Enum_ov017_0219b624_1276);
    var2->Reset();
    ((TextureArena*)(var4))->Reset();
    BackgroundLoader::AddLockGlobal();
    char var5[0x50];
    unsigned int var6;
    sprintf(var5, data_ov017_021d7504, data_ov017_021d7510);
    if (!LoadFileIntoMemory(var5, &g_fileScratchSpace, &var6)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    ((TextureArena*)((char*)var4))->Restore();
    NarcHandle var7;
    if (!var7.Initialize(data_ov017_021d751b, (const unsigned char*)&g_fileScratchSpace)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_02018d28(var1, var2, &g_fileScratchSpace, var6);
    char var8[0x50];
    int var9 = 0;
    for (; data_ov017_021d656c[var9].unknown_0_ >= 0; var9++) {
        var0 = arg0->substruct_array_2b90;
        int var10 = data_ov017_021d656c[var9].unknown_0_;
        sprintf(var8, data_ov017_021d751f, data_ov017_021d656c[var9].unknown_4_);
        ((SPRSprite*)(&var0[var10]))->Reset();
        const void* var11 = GetFileFromNARCInMemory(var8);
        if (var11 != 0) ((SPRSprite*)(&var0[var10]))->LoadFromSPR((const void*)(var11), (SafeAllocator*)(var2));
    }
#if !defined(jpn)
    sprintf(var8, data_ov017_021d751f, data_ov017_021d7526);
    switch (func_0200fb08((Struct_02000c9c_8*)var3)) {
    case 3: sprintf(var8, data_ov017_021d751f, data_ov017_021d7530); break;
    case 5: sprintf(var8, data_ov017_021d751f, data_ov017_021d753a); break;
    }
    ((SPRSprite*)(&arg0->substruct_array_2b90[0]))->Reset();
    {
        const void* var12 = GetFileFromNARCInMemory(var8);
        if (var12 != 0) ((SPRSprite*)(&arg0->substruct_array_2b90[0]))->LoadFromSPR((const void*)(var12), (SafeAllocator*)(var2));
    }
#endif
    const void* var13;
    var13 = GetFileFromNARCInMemory(data_ov017_021d7544);
    if (var13 != 0) {
        ((SPRSprite*)(&arg0->unknown_3520))->Reset();
        ((SPRSprite*)(&arg0->unknown_3520))->LoadFromSPR((const void*)(var13), (SafeAllocator*)(var2));
    }
    var13 = GetFileFromNARCInMemory(data_ov017_021d7555);
    if (var13 != 0) {
        ((SPRSprite*)(&(*reinterpret_cast<Struct_02012fa4*>(arg0->unknown_35a8))))->Reset();
        ((SPRSprite*)(&(*reinterpret_cast<Struct_02012fa4*>(arg0->unknown_35a8))))->LoadFromSPR((const void*)(var13), (SafeAllocator*)(var2));
    }
    var7.Destroy();
    GetEffectManager_02057924();
    unsigned int var14;
    if (GetFileInNarc(&g_fileScratchSpace, data_ov017_021d7567, &var13, &var14, 0)) {
        Object3D* var15 = (Object3D*)var2->Allocate(0xac);
        if (var15 != 0) {
            var15->Initialize();
            ObjectArchiveLoadInfo var16;
            var16.fileData = var13;
            var16.unk_8 = var14;
            var16.allocator = var2;
            var16.unk_10 = 1;
            var15->LoadFromCHRArchive(&var16);
            func_0208f36c(func_0208e9e8(), var15);
        }
    }
    BackgroundLoader::RemoveLockGlobal();
    func_02096604(static_cast<char*>(arg0->unknown_ptr_4328), (int)var2);
    ((TextureArena*)((char*)var4))->Save();
    ((Struct_02012fa4**)var1->unk_480)[0] = &arg0->substruct_array_2b90[5];
    ((Struct_02012fa4**)var1->unk_480)[1] = &arg0->substruct_array_2b90[6];
    ((Struct_02012fa4**)var1->unk_480)[2] = &arg0->substruct_array_2b90[7];
    ((Struct_02012fa4**)var1->unk_480)[3] = &arg0->substruct_array_2b90[8];
    ((Struct_02012fa4**)var1->unk_480)[4] = &arg0->substruct_array_2b90[9];
    ((Struct_02012fa4**)var1->unk_480)[5] = &arg0->substruct_array_2b90[10];
    func_02013d24(var1);
}
