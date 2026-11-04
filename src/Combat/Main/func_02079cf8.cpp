#include <globaldefs.h>
#if defined(jpn)
#define func_02079808 func_0207a6fc
#endif
#include "Filesystem/GPC.h"
#include "Filesystem/FileIO.h"
#include "GameState/GameState.h"
#include "Resource/ActionDataTables.h"

#if defined(jpn)
#define func_02079cf8 func_0207ab68
#define data_020f0e02 data_020f0ec9
#define data_020f0e17 data_020f0ee0
#define data_020f0e28 data_020f0eee
#endif

extern "C" {
    void __clear(void*, unsigned int);
}

struct Struct_02000c9c_8;
extern "C" int func_0200fb08(Struct_02000c9c_8*);

struct Struct_02079808;
extern "C" void* func_02079a3c(void* arg0);

extern unsigned char data_0211e33c[0x30000];
extern const char data_020f0e02[];
extern const char data_020f0e17[];
extern const char data_020f0e28[];

#pragma opt_propagation off
#if defined(jpn)
// JPN: func_0207ab68
extern "C" ARM void func_02079cf8(Struct_02108e10* arg0, SafeAllocator* arg1) {
#else
// USA: func_02079cf8
extern "C" ARM void func_02079cf8(Struct_02108e10* arg0, SafeAllocator* arg1, SafeAllocator* arg2) {
#endif
    unsigned int var0;
    unsigned char* var1;
    var1 = data_0211e33c;
    int var2 = sizeof(data_0211e33c);
    GPCReadPair var3;
    func_02079a3c(&var3);

    unsigned int var4;

    const char* var5 = data_020f0e02;
    bool var6 = LoadAndDecompressGPCHeaderAndInnerFileInfo(&var3.pGPCFile, var3.machine,
        var5, var1, var4, var2, false, NULL);
    if (var6) {
        unsigned int var7 = 0;
        var0 = var4;
        var2 -= var0;
#if defined(jpn)
        DecompressFileFromGPCByName(var3.pGPCFile, var3.machine, var1 + var0,
            var7, var2, data_020f0e17);

        func_02079a58(&arg0->unknown_c_, arg1, var1 + var0,
            func_02079808, 0);
#else
        GameState* var8 = GameState::GetInstance();
        char var9[0x20];
        __clear(var9, sizeof(var9));

        int var10 = func_0200fb08((Struct_02000c9c_8*)var8);
        StringReplaceLanguageTag(data_020f0e17, var9, var10);

        DecompressFileFromGPCByName(var3.pGPCFile, var3.machine, var1 + var0,
            var7, var2, var9);

        func_02079a58(&arg0->unknown_c_, arg1, var1 + var0,
            func_02079808, 0, arg2);
#endif

        DecompressFileFromGPCByName(var3.pGPCFile, var3.machine, var1 + var0,
            var7, var2, data_020f0e28);

#if defined(jpn)
        func_02079bac(&arg0->unknown_24_, arg1, var1 + var0, NULL, 0);
#else
        func_02079bac(&arg0->unknown_24_, arg1, var1 + var0, NULL, 0, 0);
#endif
    }

    var3.Reset();
    ZeroDestroyGPCPointer(&var3.pGPCFile);
}
