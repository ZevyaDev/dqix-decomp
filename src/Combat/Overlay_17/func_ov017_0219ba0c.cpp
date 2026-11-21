#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "NitroSDK/Filesystem/NarcHandle.h"
#include "Graphics/Model3D.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"
#include "World/Object3D.h"
#include "std_library_functions.h"
#include "Graphics/TextureArena.h"

extern "C" char* GetMessageWindow_020421a0(void);
struct TextureVRAMArea_0203d028;
extern "C" void func_020440b8(char* arg0, void* arg1, void* arg2);

extern char data_ov017_021d7504[];
extern char data_ov017_021d7510[];
extern char data_ov017_021d751b[];
extern char data_ov017_021d7577[];
extern char data_ov017_021d7584[];
extern char data_ov017_021d758d[];
extern char data_ov017_021d75a2[];

// USA: LoadCommonFieldResources_ov017_0219ba0c
extern "C" ARM void LoadCommonFieldResources_ov017_0219ba0c(GameResources* gameResources, int isIconsOnly) {
    const void* archiveFile;
    unsigned int archiveFileSize;
    unsigned int archiveSize;
    unsigned int fileSize;
    char* messageWindow = GetMessageWindow_020421a0();
    BackgroundLoader* var5 = BackgroundLoader::GetInstance();
    SafeAllocator* var6 = &gameResources->allocator_array_38[6];
    char* textureArena = gameResources->unknown_2cc_ + 0x2a0;
    var5->AddLockGlobal();
    var6->Reset();
    ((TextureArena*)((TextureVRAMArea_0203d028*)textureArena))->Reset();
    ((TextureArena*)(textureArena))->Restore();

    char path[0x50];
    sprintf(path, data_ov017_021d7504, data_ov017_021d7510);
    if (!LoadFileIntoMemory(path, g_fileScratchSpace, &archiveSize)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }

    NarcHandle archive;
    if (!archive.Initialize(data_ov017_021d751b, g_fileScratchSpace)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    func_020440b8(messageWindow, var6, g_fileScratchSpace);
    if (isIconsOnly) {
        archive.Destroy();
        ((TextureArena*)(textureArena))->Save();
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    archive.Destroy();

    ((Model3D*)gameResources->unknown_ptr_36c8)->Clear();
    if (GetFileInNarc(g_fileScratchSpace, data_ov017_021d7577, &archiveFile, &archiveFileSize, 0)) {
        ((Model3D*)gameResources->unknown_ptr_36c8)->CopyAndProcessRawFile(&var6->allocUnion, archiveFile, archiveFileSize, Model3D::TextureStagingMode_Normal);
    }
    ((Object3D*)gameResources->unknown_ptr_36cc)->Initialize();
    if (GetFileInNarc(g_fileScratchSpace, data_ov017_021d7584, &archiveFile, &archiveFileSize, 0)) {
        ObjectArchiveLoadInfo loadInfo;
        loadInfo.fileData = archiveFile;
        loadInfo.unk_8 = archiveFileSize;
        loadInfo.allocator = var6;
        loadInfo.unk_10 = 1;
        ((Object3D*)gameResources->unknown_ptr_36cc)->LoadFromCHRArchive(&loadInfo);
    }
    ((TextureArena*)(textureArena))->Save();

    if (!LoadFileIntoMemory(data_ov017_021d758d, g_fileScratchSpace, &fileSize)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    void* buffer = var6->Allocate(fileSize);
    if (buffer == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    memcpy(buffer, g_fileScratchSpace, fileSize);
    *(void**)((char*)gameResources + 0x30) = buffer;
    *(unsigned int*)((char*)gameResources + 0x34) = fileSize;
    if (!LoadFileIntoMemory(data_ov017_021d75a2, g_fileScratchSpace, &fileSize)) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    buffer = var6->Allocate(fileSize);
    if (buffer == NULL) {
        BackgroundLoader::RemoveLockGlobal();
        return;
    }
    memcpy(buffer, g_fileScratchSpace, fileSize);
    *(void**)((char*)gameResources + 0x2c) = buffer;
    BackgroundLoader::RemoveLockGlobal();
}
