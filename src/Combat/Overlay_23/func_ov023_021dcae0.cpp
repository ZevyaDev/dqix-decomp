#include <globaldefs.h>

struct ItemData_0201099c_9;
struct ItemTable_0201099c_10;
extern "C" ItemData_0201099c_9* FindItemData_020dedd0(ItemTable_0201099c_10*, int);

extern "C" void func_ov023_021dcba4(void*);

struct ItemInfoPanel_ov003_02178910 {
    char unknown_0_[0x48];
    ItemTable_0201099c_10* pItemTable_48_;
    ItemData_0201099c_9* pItemData_4c_;
#if defined(jpn)
    char unknown_50_[0x680];
#else
    char unknown1_50_[0x704];
#endif
    int unknown_754_;
    char unknown_758_[0x18];
    short shownItemId_770_;
    unsigned short requestedItemId_772_;
    unsigned short unknown_774_;
    unsigned char unknown_776_;
};

// USA: SetItemInfoPanelItem_ov023_021dcae0
extern "C" ARM void SetItemInfoPanelItem_ov023_021dcae0(struct ItemInfoPanel_ov003_02178910* panel, int itemId) {
    if (panel->unknown_776_ == 0 || (panel->unknown_774_ & 4) == 0) {
        panel->requestedItemId_772_ = itemId;
        if (panel->unknown_754_ <= 0 || panel->unknown_776_ == 0) {
            panel->shownItemId_770_ = itemId;
            return;
        }
    }
    short shownItemId = panel->shownItemId_770_;
    if (shownItemId == itemId) {
        if (panel->pItemTable_48_ != NULL) {
            ItemData_0201099c_9* itemData = FindItemData_020dedd0(panel->pItemTable_48_, shownItemId);
            if (panel->pItemData_4c_ != itemData) panel->pItemData_4c_ = itemData;
        }
    } else {
        func_ov023_021dcba4(panel);
    }
}
