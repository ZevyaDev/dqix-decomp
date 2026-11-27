#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct SkillTable_0209a470 {
    void* pEntries_0_;
};
extern struct SkillTable_0209a470* data_02109ba4;
extern char data_020f15e8[];

struct Struct_0201f040;

struct Struct_0201f040_2;
struct Struct_02013fb4;

struct Struct_0201f040_3;

// USA: BuildSkillTable_0209a470
extern "C" ARM void BuildSkillTable_0209a470(struct SkillTable_0209a470* table, SafeAllocator* allocator, struct Struct_02013fb4* scriptData, int scriptSize) {
    void* entries = allocator->Allocate(0xd74);
    table->pEntries_0_ = entries;
    if (entries != NULL) {
        char script[0x430];
        data_02109ba4 = table;
        ((Script*)((struct Struct_0201f040*)script))->Initialize();
        ((Script*)((struct Struct_0201f040*)script))->SetOpcodeLookup((Script::OpcodeLookupEntry*)data_020f15e8);
        ((Script*)((struct Struct_0201f040_2*)script))->Load(scriptData, scriptSize);
        ((Script*)((struct Struct_0201f040_3*)script))->Execute();
        data_02109ba4 = NULL;
    }
}
