#include <globaldefs.h>

struct SpellEntry_0209a9dc_3 { unsigned short spellId_0_; unsigned short unknown_2_; };
struct SpellTableBlock_0209a9dc {
    struct SpellEntry_0209a9dc_3 entries_0_[0x42];
    int count_108_;
};
struct SpellTable_0209a9dc_2 {
    struct SpellTableBlock_0209a9dc* pBlock_0_;
};

// USA: FindSpellEntry_0209a9dc
extern "C" ARM struct SpellEntry_0209a9dc_3* FindSpellEntry_0209a9dc(struct SpellTable_0209a9dc_2* table, int spellId) {
    int i;
    struct SpellTableBlock_0209a9dc* block;
    block = table->pBlock_0_;
    if (block == NULL) return NULL;
    if (spellId >= 0x42) return NULL;
    if (block->entries_0_[spellId].spellId_0_ == spellId) return &block->entries_0_[spellId];
    for (i = 0; i < block->count_108_; i++) {
        if (block->entries_0_[i].spellId_0_ == spellId) return &block->entries_0_[i];
    }
    return NULL;
}
