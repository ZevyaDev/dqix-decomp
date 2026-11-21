#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct SpellTable_02086f24_6 {
    void* pBlock_0_;
};
extern struct SpellTable_02086f24_6* data_02109ba8;
extern char data_020f1640[];

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

// USA: BuildSpellTable_0209a8b4
extern "C" ARM void BuildSpellTable_0209a8b4(struct SpellTable_02086f24_6* table, SafeAllocator* allocator, struct Struct_02013fb4* scriptData, int scriptSize) {
    void* block = allocator->Allocate(0x550);
    table->pBlock_0_ = block;
    if (block != NULL) {
        memset(block, 0, 0x550);
        char script[0x430];
        data_02109ba8 = table;
        ((Script*)((struct Struct_0201f040*)script))->Initialize();
        ((Script*)((struct Struct_0201f040*)script))->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f1640);
        ((Script*)((struct Struct_0201f040_2*)script))->Load(scriptData, scriptSize);
        ((Script*)((struct Struct_0201f040_3*)script))->Execute();
        data_02109ba8 = NULL;
    }
}
