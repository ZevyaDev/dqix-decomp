#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cbd4 data_ov005_0215dfb4
#define data_ov005_0215cd60 data_ov005_0215e140
#define data_ov014_02189480 data_ov014_0218a2c0
#define data_ov014_02189498 data_ov014_0218a2d8
#define data_ov015_02193fe0 data_ov015_02194b20
#define data_ov015_02194564 data_ov015_02195184
#define data_ov015_02194570 data_ov015_02195190
#define data_ov015_021945a0 data_ov015_021951c0
#define data_ov015_021945d0 data_ov015_021951f0
#define data_ov024_021ff17c data_ov023_021ff17c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include <GameState/GameState.h>

extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" short* GetEquipmentBagItemIds_0207c5f8(unsigned char* bag, unsigned int category);
extern "C" signed char* GetEquipmentBagCounts_0207c60c(void* bag, unsigned int category);

extern "C" unsigned char data_ov005_0215cd60[8];

struct Struct_ov005_02153ba4 {
    short itemId_0_;
    signed char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    void* unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    short unknown_18_;
};

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x2d08, 0x2d90)];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[0x3dbc - 0x3030];
    unsigned char unknown_3dbc_;
    signed char unknown_3dbd_;
};

// USA: FillEquipMenuItemGrid_ov005_021555c0
extern "C" ARM void FillEquipMenuItemGrid_ov005_021555c0(Struct_ov005_02153954* equipMenuUI) {
    char* party = (char*)GetParty_02010828(GameState::GetInstance());
    short* itemIds = GetEquipmentBagItemIds_0207c5f8((unsigned char*)(party + 0x1d4), data_ov005_0215cd60[equipMenuUI->unknown_3dbc_]);
    signed char* counts = GetEquipmentBagCounts_0207c60c(party + 0x1d4, data_ov005_0215cd60[equipMenuUI->unknown_3dbc_]);
    signed char page = equipMenuUI->unknown_3dbd_;
    for (int i = 0; i < 16; i++) {
        Struct_ov005_02153ba4* cell = &equipMenuUI->unknown_2d90_[i + 8];
        int slot = i + page * 16;
        short itemId = itemIds[slot];
        signed char count = counts[slot];
        if (itemId == cell->unknown_18_)
            cell->unknown_3_ = 1;
        else
            cell->unknown_3_ = 0;
        cell->itemId_0_ = itemId;
        cell->unknown_2_ = count;
    }
}
