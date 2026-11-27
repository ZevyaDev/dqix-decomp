#include <globaldefs.h>

struct ItemData_0201099c_9 {
    unsigned int unknown_0_[8];
};

struct Struct_020de5b0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct ItemData_0201099c_9* unknown_c_;
};

typedef int (*Type_020de5fc)(struct ItemData_0201099c_9*);

extern "C" int GetItemDataId_020de56c(void*);
extern "C" struct ItemData_0201099c_9* BinarySearchItemTable_020de650(struct Struct_020de5b0_2* itemTable, int key, Type_020de5fc getKey);

struct ItemTable_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct ItemData_0201099c_9* pItems_c_;
    unsigned char unknown_10_[4];
    unsigned char isSorted_14_;
};

// USA: FindItemData_020dedd0
extern "C" ARM struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId) {
    int i;
    struct ItemData_0201099c_9* item;
    unsigned short count;
    if (itemId < 0) {
        return NULL;
    }
    if (itemTable->isSorted_14_ != 0) {
        return BinarySearchItemTable_020de650((struct Struct_020de5b0_2*)itemTable, itemId, (Type_020de5fc)GetItemDataId_020de56c);
    }
    item = itemTable->pItems_c_;
    if (item == NULL || (Type_020de5fc)GetItemDataId_020de56c == NULL) {
        item = NULL;
        goto done;
    }
    count = itemTable->unknown_0_;
    if (count == 0) {
        item = NULL;
        goto done;
    }
    for (i = 0; i < count; i++, item++) {
        if (itemId == GetItemDataId_020de56c(item)) {
            goto done;
        }
    }
    item = NULL;
done:
    return item;
}
