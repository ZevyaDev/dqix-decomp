#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0207ed1c;

extern "C" void AllocateMenuLayoutWindowEntries_0207efdc(struct Struct_0207ed1c* windowEntries, SafeAllocator* allocator, int capacity);

extern void* data_02108ed8[2];

// USA: func_0207ed1c
extern "C" ARM int func_0207ed1c(struct Struct_0201c1c8* arg0) {
    AllocateMenuLayoutWindowEntries_0207efdc((struct Struct_0207ed1c*)data_02108ed8[1], (SafeAllocator*)data_02108ed8[0], (short)((Script::Parameter*)arg0)->ToInt());
    return 1;
}
