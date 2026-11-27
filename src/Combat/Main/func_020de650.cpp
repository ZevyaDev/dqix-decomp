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

// USA: BinarySearchItemTable_020de650
extern "C" ARM struct ItemData_0201099c_9* BinarySearchItemTable_020de650(struct Struct_020de5b0_2* itemTable, int key, Type_020de5fc getKey) {
    struct ItemData_0201099c_9* entries;
    int count;
    int low;
    int high;
    int mid;
    struct ItemData_0201099c_9* midEntry;
    int midKey;

    entries = itemTable->unknown_c_;
    if (entries == NULL || getKey == NULL) return NULL;
    count = itemTable->unknown_0_;
    if (count == 0) return NULL;
    high = count - 1;
    low = 0;
    while (low <= high) {
        mid = low + ((high - low + 1) >> 1);
        midEntry = entries + mid;
        midKey = getKey(midEntry);
        if (midKey == key) return midEntry;
        if (midKey > key) high = mid - 1;
        else low = mid + 1;
    }
    return NULL;
}
