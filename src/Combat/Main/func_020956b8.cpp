#include <globaldefs.h>

#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"
#include "Resource/QuestScriptOwner.h"

unsigned char* data_02109414;
unsigned char data_02109404;
unsigned char data_02109405;
unsigned char data_02109408;
unsigned char data_02109407;
unsigned char data_02109406;
unsigned short data_0210940a;
unsigned short data_0210940c;
SafeAllocator* data_02109410;

struct Struct_0201f040;
struct Struct_0201f040_2;
struct Struct_02013fb4;
struct Struct_0201f040_3;

extern short data_020f13d8;
extern const char data_020f1474[];
extern Script::OpcodeLookupEntry data_020f141c[];
extern Script::OpcodeLookupEntry data_020f1444[];
extern char data_020f13dc[];

// USA: func_020956b8
extern "C" ARM void func_020956b8(struct Struct_020956b8* arg0, SafeAllocator* arg1) {
    unsigned int var0;

    if (arg1 == 0) {
        return;
    }

    BackgroundLoader::AddLockGlobal();
    void* var1 = LoadFileIntoMemory(data_020f1474, g_fileScratchSpace, &var0);
    if (var1 != 0) {
        data_0210940c = 0;
        data_02109407 = 0;
        data_02109408 = 0;
        data_02109410 = arg1;
        data_02109406 = 0;
#if defined(jpn)
        *(short*)0x020f1524 = -1;
#else
        *(short*)0x020f13d8 = -1;
#endif
        arg0->unknown_a0_ = 0;
        data_02109404 = 0;
        Script var2;
        var2.Initialize();
        var2.SetOpcodeLookup(data_020f141c);
        var2.Load(var1, var0);
        var2.Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}

// USA: func_0209576c
extern "C" ARM void func_0209576c(Struct_020956b8* arg0, SafeAllocator* arg1,
                                 const void* arg2, unsigned int arg3, unsigned char arg4) {
    if (arg1 != NULL && arg2 != NULL && arg3 != 0) {
        data_02109410 = arg1;
        arg0->unknown_a4_ = NULL;
        data_02109404 = arg4;
        data_02109406 = 0;
        data_020f13d8 = -1;
        Script var0;
        var0.Initialize();
        var0.SetOpcodeLookup(data_020f1444);
        var0.Load(arg2, arg3);
        var0.Execute();
    }
}

// USA: func_020957f4
extern "C" ARM int func_020957f4(void* arg0, struct Struct_02013fb4* arg1, int arg2) {
    char var0[0x430];

    data_0210940a = 0;
    data_02109405 = 1;
    data_02109406 = 0;
    data_020f13d8 = -1;

    ((Script*)((struct Struct_0201f040*)var0))->Initialize();
    ((Script*)var0)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f13dc);
    ((Script*)((struct Struct_0201f040_2*)var0))->Load(arg1, arg2);
    ((Script*)((struct Struct_0201f040_3*)var0))->Execute();

    return data_0210940a;
}
