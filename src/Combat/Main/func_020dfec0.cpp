#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_020dfec0_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
};

extern "C" int func_020dffb8(struct Struct_020dfec0_2* arg0);

struct StringTable_020dfec0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
    void* unknown_4_;
    void* pText_8_;
};

struct Struct_020dffc8;
typedef int (*Type_020dfec0)(struct StringTable_020dfec0*, struct Struct_020dffc8*);
extern "C" int func_020dffc8(struct StringTable_020dfec0* arg0, Type_020dfec0 arg1);

struct Struct_020dfbdc;
extern "C" int func_020dfbdc(void* arg0, struct Struct_020dfbdc* arg1);

// USA: LoadStringTable_020dfec0
extern "C" ARM int LoadStringTable_020dfec0(struct StringTable_020dfec0* stringTable, SafeAllocator* allocator, void* fileData, unsigned int fileSize) {
    Type_020dfec0 resolveEntryText;
    unsigned int entriesSize;
    unsigned int textSize;

    if (allocator == 0 || fileData == 0 || fileSize == 0) {
        return 0;
    }
    if (allocator == 0 || fileData == 0) {
        return 0;
    }
    memcpy(stringTable, fileData, 4);
    entriesSize = func_020dffb8((struct Struct_020dfec0_2*)stringTable);
    textSize = stringTable->unknown_1_4_;
    if (entriesSize) {
        stringTable->unknown_4_ = allocator->Allocate(entriesSize);
    } else {
        stringTable->unknown_4_ = 0;
    }
    stringTable->pText_8_ = textSize ? allocator->Allocate(textSize) : 0;
    if (stringTable->unknown_4_) {
        memcpy(stringTable->unknown_4_, (char*)fileData + 4, entriesSize);
    }
    if (stringTable->pText_8_) {
        memcpy(stringTable->pText_8_, (char*)fileData + (func_020dffb8((struct Struct_020dfec0_2*)stringTable) + 4), textSize);
    }
    resolveEntryText = (Type_020dfec0)func_020dfbdc;
    if (resolveEntryText) {
        func_020dffc8(stringTable, resolveEntryText);
    }
    stringTable->unknown_3_7_ = 1;
    return 1;
}
