#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Struct_020e53bc_3;
extern "C" unsigned int func_020e544c(Struct_020e53bc_3* arg0);

struct Struct_020e53bc;
struct Struct_020e545c;
typedef void (*Type_020e53bc)(Struct_020e53bc*, Struct_020e545c*);
extern "C" int func_020e545c(Struct_020e53bc* arg0, Type_020e53bc arg1);

struct Struct_020e5204;
extern "C" void func_020e5204(void* arg0, Struct_020e5204* arg1);

struct NounTable_020e5604 {
    unsigned int header_0_;
    void* pEntries_4_;
    void* pText_8_;
};

// USA: LoadNounTable_020e5604
extern "C" ARM int LoadNounTable_020e5604(struct NounTable_020e5604* nounTable, SafeAllocator* allocator, unsigned char* fileData, int fileSize) {
    unsigned int entriesSize;
    unsigned int textSize;
    if (!(allocator != 0 && fileData != 0 && fileSize != 0)) {
        return 0;
    }
    if (!(allocator != 0 && fileData != 0)) {
        return 0;
    }
    memcpy(nounTable, fileData, 4);
    entriesSize = func_020e544c((Struct_020e53bc_3*)nounTable);
    textSize = (nounTable->header_0_ << 1) >> 13;
    if (entriesSize)
        nounTable->pEntries_4_ = allocator->Allocate(entriesSize);
    else
        nounTable->pEntries_4_ = (void*)0;
    nounTable->pText_8_ = textSize ? allocator->Allocate(textSize) : (void*)0;
    if (nounTable->pEntries_4_) {
        memcpy(nounTable->pEntries_4_, fileData + 4, entriesSize);
    }
    if (nounTable->pText_8_) {
        memcpy(nounTable->pText_8_, fileData + (func_020e544c((Struct_020e53bc_3*)nounTable) + 4), textSize);
    }
    if ((void*)func_020e5204 != 0) {
        func_020e545c((Struct_020e53bc*)nounTable,
            (Type_020e53bc)func_020e5204);
    }
    nounTable->header_0_ = (nounTable->header_0_ & ~0x80000000) | 0x80000000;
    return 1;
}
