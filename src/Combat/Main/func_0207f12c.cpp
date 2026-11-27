#include <globaldefs.h>
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

struct Struct_0201c1c8;
struct Struct_0207f12c;

extern "C" void AllocateMenuLayoutTextEntries_0207f594(struct Struct_0207f12c* textEntries, SafeAllocator* allocator, int capacity);

extern void* data_02108ee0[2];

// USA: func_0207f12c
extern "C" ARM int func_0207f12c(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    AllocateMenuLayoutTextEntries_0207f594((struct Struct_0207f12c*)data_02108ee0[1], (SafeAllocator*)data_02108ee0[0], (short)var0[0].ToInt());
    return 1;
}
