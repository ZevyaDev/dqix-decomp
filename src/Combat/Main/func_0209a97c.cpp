#include <globaldefs.h>

struct Struct_0209a7bc { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209a97c_3 { struct Struct_0209a7bc unknown_0_[20]; };
struct Struct_0209a97c_2 {
    unsigned char unknown_0_[0x10c];
    struct Struct_0209a97c_3 unknown_10c_[13];
    int unknown_51c_[16];
};
struct Struct_0209a97c {
    struct Struct_0209a97c_2* unknown_0_;
};

// USA: AppendSpellTableListEntry_0209a97c
extern "C" ARM void AppendSpellTableListEntry_0209a97c(struct Struct_0209a97c* table, int listIndex, struct Struct_0209a7bc* entry) {
    struct Struct_0209a97c_2* block = table->unknown_0_;
    int count;
    if (block == NULL) return;
    count = block->unknown_51c_[listIndex];
    if (count >= 0x14) return;
    block->unknown_51c_[listIndex]++;
    {
        struct Struct_0209a7bc* listEntry = &table->unknown_0_->unknown_10c_[listIndex].unknown_0_[count];
        listEntry->unknown_0_ = entry->unknown_0_;
        listEntry->unknown_2_ = entry->unknown_2_;
    }
}
