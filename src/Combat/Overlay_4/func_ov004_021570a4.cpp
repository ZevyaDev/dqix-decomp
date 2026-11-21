#include <globaldefs.h>
#include "GameState/GameState.h"

struct MenuGrid_ov004_021570a4 { char unknown_0_[0x5c]; short page_5c_; };
extern "C" MenuGrid_ov004_021570a4* func_ov004_02156ed0(void* arg0, int arg1);

// USA: GetDQVCEntry_ov004_021570a4
extern "C" ARM void* GetDQVCEntry_ov004_021570a4(void* menu, int row) {
#if defined(jpn)
    enum { Enum_ov004_021570a4_620 = 0xc };
#else
    enum { Enum_ov004_021570a4_620 = 0x26c };
#endif
    if ((unsigned)row >= 6) return NULL;
    char* dqvcBlock = (char*)GameState::GetInstance() + Enum_ov004_021570a4_620 + 0x5c00;
    MenuGrid_ov004_021570a4* grid = func_ov004_02156ed0(menu, 0x5b);
    int entryIndex = grid->page_5c_ * 6 + row;
    return (dqvcBlock + 4) + entryIndex * 0x28;
}
