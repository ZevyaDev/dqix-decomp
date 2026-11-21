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
struct FieldIconEntry_ov017_021d656c { int spriteIndex_0_; const char* pFileName_4_; };
extern const FieldIconEntry_ov017_021d656c data_ov017_021d656c[];
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

// USA: LoadFieldIcons_ov017_0219b624
extern "C" ARM void LoadFieldIcons_ov017_0219b624(GameResources* gameResources) {
    Struct_02012fa4* sprites;
    Zone3D* zone;
    SafeAllocator* allocator;
#if !defined(jpn)
    GameState* gameState = GameState::GetInstance();
#endif
    zone = GetZone3D_02012fe4();
    BackgroundLoader::GetInstance();
    allocator = &gameResources->allocator_array_38[5];
    TextureVRAMArea_0203d028* textureArena = reinterpret_cast<TextureVRAMArea_0203d028*>(reinterpret_cast<char*>(gameResources) + Enum_ov017_0219b624_1276);
    allocator->Reset();
    ((TextureArena*)(textureArena))->Reset();
    BackgroundLoader::AddLockGlobal();
    char archivePath[0x50];
    unsigned int archiveSize;
    sprintf(archivePath, data_ov017_021d7504, data_ov017_021d7510);
    if (!LoadFileIntoMemory(archivePath, &g_fileScratchSpace, &archiveSize)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    ((TextureArena*)((char*)textureArena))->Restore();
    NarcHandle narc;
    if (!narc.Initialize(data_ov017_021d751b, (const unsigned char*)&g_fileScratchSpace)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_02018d28(zone, allocator, &g_fileScratchSpace, archiveSize);
    char spritePath[0x50];
    int i = 0;
    for (; data_ov017_021d656c[i].spriteIndex_0_ >= 0; i++) {
        sprites = gameResources->substruct_array_2b90;
        int spriteIndex = data_ov017_021d656c[i].spriteIndex_0_;
        sprintf(spritePath, data_ov017_021d751f, data_ov017_021d656c[i].pFileName_4_);
        ((SPRSprite*)(&sprites[spriteIndex]))->Reset();
        const void* spriteFile = GetFileFromNARCInMemory(spritePath);
        if (spriteFile != 0) ((SPRSprite*)(&sprites[spriteIndex]))->LoadFromSPR((const void*)(spriteFile), (SafeAllocator*)(allocator));
    }
#if !defined(jpn)
    sprintf(spritePath, data_ov017_021d751f, data_ov017_021d7526);
    switch (func_0200fb08((Struct_02000c9c_8*)gameState)) {
    case 3: sprintf(spritePath, data_ov017_021d751f, data_ov017_021d7530); break;
    case 5: sprintf(spritePath, data_ov017_021d751f, data_ov017_021d753a); break;
    }
    ((SPRSprite*)(&gameResources->substruct_array_2b90[0]))->Reset();
    {
        const void* wingSpriteFile = GetFileFromNARCInMemory(spritePath);
        if (wingSpriteFile != 0) ((SPRSprite*)(&gameResources->substruct_array_2b90[0]))->LoadFromSPR((const void*)(wingSpriteFile), (SafeAllocator*)(allocator));
    }
#endif
    const void* file;
    file = GetFileFromNARCInMemory(data_ov017_021d7544);
    if (file != 0) {
        ((SPRSprite*)(&gameResources->unknown_3520))->Reset();
        ((SPRSprite*)(&gameResources->unknown_3520))->LoadFromSPR((const void*)(file), (SafeAllocator*)(allocator));
    }
    file = GetFileFromNARCInMemory(data_ov017_021d7555);
    if (file != 0) {
        ((SPRSprite*)(&(*reinterpret_cast<Struct_02012fa4*>(gameResources->unknown_35a8))))->Reset();
        ((SPRSprite*)(&(*reinterpret_cast<Struct_02012fa4*>(gameResources->unknown_35a8))))->LoadFromSPR((const void*)(file), (SafeAllocator*)(allocator));
    }
    narc.Destroy();
    GetEffectManager_02057924();
    unsigned int chrFileSize;
    if (GetFileInNarc(&g_fileScratchSpace, data_ov017_021d7567, &file, &chrFileSize, 0)) {
        Object3D* object = (Object3D*)allocator->Allocate(0xac);
        if (object != 0) {
            object->Initialize();
            ObjectArchiveLoadInfo loadInfo;
            loadInfo.fileData = file;
            loadInfo.unk_8 = chrFileSize;
            loadInfo.allocator = allocator;
            loadInfo.unk_10 = 1;
            object->LoadFromCHRArchive(&loadInfo);
            func_0208f36c(func_0208e9e8(), object);
        }
    }
    BackgroundLoader::RemoveLockGlobal();
    func_02096604(static_cast<char*>(gameResources->unknown_ptr_4328), (int)allocator);
    ((TextureArena*)((char*)textureArena))->Save();
    ((Struct_02012fa4**)zone->unk_480)[0] = &gameResources->substruct_array_2b90[5];
    ((Struct_02012fa4**)zone->unk_480)[1] = &gameResources->substruct_array_2b90[6];
    ((Struct_02012fa4**)zone->unk_480)[2] = &gameResources->substruct_array_2b90[7];
    ((Struct_02012fa4**)zone->unk_480)[3] = &gameResources->substruct_array_2b90[8];
    ((Struct_02012fa4**)zone->unk_480)[4] = &gameResources->substruct_array_2b90[9];
    ((Struct_02012fa4**)zone->unk_480)[5] = &gameResources->substruct_array_2b90[10];
    func_02013d24(zone);
}
