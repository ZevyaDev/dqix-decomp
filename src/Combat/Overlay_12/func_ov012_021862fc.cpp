#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "Graphics/OBJSpriteSet.h"
#include "Resource/PAC.h"


struct Sprite_02043368_2;


struct Struct_020534ac;

struct PacEntry_02020cb8_4;

struct PacEntry_02020aec;


// USA: func_ov012_021862fc
extern "C" ARM void func_ov012_021862fc(char* arg0) {
    int var0 = (int)BackgroundLoader::GetInstance();

    for (int var1 = 0; var1 < 3; var1++) {
        ((OBJSpriteSet::Metatile*)((struct Sprite_02043368_2*)(*(char**)(arg0 + 0x1000 + 0x36c) + var1 * 0x28)))->Reset();
    }

    ((OBJSpriteSet*)(*(char**)(arg0 + 0x1000 + 0x368)))->Reset();

    *(unsigned char*)(*(char**)(arg0 + 0x1000 + 0x368) + 0x50) = 1;

    char* var2 = *(char**)(arg0 + 0x1000 + 0x368);
    *(int*)(var2 + 0x40) = *(int*)(arg0 + 0x1000 + 0x36c);
    *(short*)(var2 + 0x4c) = 3;

    void* var3;
    int var4;
    int var5;
    int var6;
    ((BackgroundLoader*)((struct Struct_020534ac*)var0))->GetLoadedFileByID((int)(*(int*)(arg0 + 0x1000 + 0x394)), (void**)(&var4), (unsigned int*)(&var5));

    int var7 = GetNumFilesInPAC((const void*)((struct PacEntry_02020cb8_4*)var4));
    ((SafeAllocator*)(arg0 + 0x98))->Reset();

    for (int var8 = 0; var8 < var7; var8++) {
        void* var9 = GetFileInPACByIndex((void*)((struct PacEntry_02020aec*)var4), var8, (const char**)(&var3), (unsigned int*)(&var6));
        ((OBJSpriteSet*)(*(char**)(arg0 + 0x1000 + 0x368)))->LoadFromNitroFile((void*)(var9), var6, (SafeAllocator*)(arg0 + 0x98));
    }

    ((BackgroundLoader*)(var0))->RemoveTask((int)(*(int*)(arg0 + 0x1000 + 0x394)));
    *(int*)(arg0 + 0x1000 + 0x394) = -1;
}
