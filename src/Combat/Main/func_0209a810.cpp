#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#include "std_library_functions.h"
#include "Resource/Script.h"
#include "Filesystem/FileIO.h"

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char data_020f1668[];
extern char data_020f1640[];

struct SpellTable_0201099c_18 { void* unknown_0_; };
extern struct SpellTable_0201099c_18* data_02109ba8;

// USA: LoadSpellTable_0209a810
extern "C" ARM void LoadSpellTable_0209a810(struct SpellTable_0201099c_18* table, void* block) {
    unsigned int scriptSize;
    char script[0x430];

    BackgroundLoader::AddLockGlobal();

    if (LoadFileIntoMemory(data_020f1668, g_fileScratchSpace, &scriptSize) != NULL) {
        table->unknown_0_ = block;
        memset(block, 0, 0x550);
        data_02109ba8 = table;
        ((Script*)((struct Struct_0201f040*)script))->Initialize();
        ((Script*)script)->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1640);
        ((Script*)((struct Struct_0201f040_2*)script))->Load((struct Struct_02013fb4*)g_fileScratchSpace, scriptSize);
        ((Script*)((struct Struct_0201f040_3*)script))->Execute();
        data_02109ba8 = NULL;
    }
    BackgroundLoader::RemoveLockGlobal();
}
