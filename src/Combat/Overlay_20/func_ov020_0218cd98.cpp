#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/BGLayer.h"
#include "Resource/PAC.h"
#include "Filesystem/FileIO.h"


extern "C" void WriteBrightnessRegister_020c39a0(short* reg, int brightness);

extern "C" void MapVRAMBanksToSubBG(int);
extern "C" void func_ov020_0218cd64(int, int, int, int, int);
struct BGLayer_02020cb8;
struct BGLayer_0204b12c;
struct BGLayer_0204af38;
struct BGLayer_02020cb8_5;
struct PacEntry_02020cb8_4;
struct PacEntry_02020aec;
struct BGLayer_0204b8d0;
struct BGLayer_02020cb8_2;

extern char data_ov020_0218dcb3;

struct Struct_ov020_0218cd98 {
    char unknown_0_[0x470];
    SafeAllocator unknown_470_;
};

// USA: func_ov020_0218cd98
extern "C" ARM void func_ov020_0218cd98(struct Struct_ov020_0218cd98* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
    arg0->unknown_470_.Reset();
    MapVRAMBanksToSubBG(4);
    func_ov020_0218cd64(0, 1, 1, 1, 0);

    ((BGLayer*)((BGLayer_02020cb8*)(var0 + 0xbc + 0x400)))->Reset();
    ((BGLayer*)((unsigned char*)(var0 + 0xbc + 0x400)))->ConfigureTextMode(0);

    BGLayer* var2 = (BGLayer*)(var0 + 0xbc + 0x400);
    var2->engine_ = 1;
    var2->bgIndex_ = 0;
    var2->SetPriority(0);

    ((BGLayer*)((BGLayer_0204b12c*)(var0 + 0xbc + 0x400)))->AllocateIndexBuffer((SafeAllocator*)((SafeAllocator*)&arg0->unknown_470_));
    ((BGLayer*)((BGLayer_0204af38*)(var0 + 0xbc + 0x400)))->AllocateSprites(1, (SafeAllocator*)((SafeAllocator*)&arg0->unknown_470_));
    ((BGLayer*)((BGLayer_02020cb8_5*)(var0 + 0xbc + 0x400)))->SetOffset(0, 0);
    BackgroundLoader::AddLockGlobal();

    unsigned int var4 = 0;
    LoadFileIntoMemory((const char*)&data_ov020_0218dcb3, (void*)&g_fileScratchSpace, &var4);
    int var5 = GetNumFilesInPAC((const void*)((PacEntry_02020cb8_4*)&g_fileScratchSpace));

    for (int var6 = 0; var6 < var5; var6++) {
        int var7;
        void* var8;
        void* var9 = GetFileInPACByIndex((void*)((PacEntry_02020aec*)&g_fileScratchSpace), var6, (const char**)(&var8), (unsigned int*)(&var7));
        if (var9 != 0) {
            ((BGLayer*)(var0 + 0xbc + 0x400))->ProcessGraphicsFile((const void*)var9, (SafeAllocator*)(&arg0->unknown_470_), var7);
        }
    }

    ((BGLayer*)((BGLayer_0204b8d0*)(var0 + 0xbc + 0x400)))->BlitSpriteByIndex(0, 0, 0, 0, 0, 0x20, 0x18, 0xffff);
    ((BGLayer*)((BGLayer_02020cb8_2*)(var0 + 0xbc + 0x400)))->CleanCacheAndUploadIndexBuffer((const void*)((void*)0));
    BackgroundLoader::RemoveLockGlobal();

    *(volatile unsigned short*)0x4000050 = 0;
    *(volatile unsigned short*)0x4001050 = 0;
    *(volatile unsigned int*)0x4000000 = (*(volatile unsigned int*)0x4000000 & ~0x1f00) | 0x1300;
    *(volatile unsigned int*)0x4001000 = (*(volatile unsigned int*)0x4001000 & ~0x1f00) | 0x100;

    WriteBrightnessRegister_020c39a0((short*)0x400006c, -16);
    WriteBrightnessRegister_020c39a0((short*)0x400106c, -16);
}
