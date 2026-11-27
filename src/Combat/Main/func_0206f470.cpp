#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"

// USA: BinarySearchMonsterTable_0206f470
extern "C" ARM void* BinarySearchMonsterTable_0206f470(struct Struct_0206f01c_2* monsterTable, int key, Type_0206f470 getKey) {
    Struct_0206ef40* entries;
    int count;
    int low;
    int high;
    int mid;
    int midKey;

    entries = monsterTable->unknown_4_;
    if (entries == NULL || getKey == NULL) {
        return NULL;
    }
    count = monsterTable->unknown_0_.unknown_0_0_;
    if (count == 0) {
        return NULL;
    }
    low = 0;
    high = count - 1;
    while (low <= high) {
        mid = low + ((high - low + 1) >> 1);
        midKey = getKey(&entries[mid]);
        if (midKey == key) {
            return &entries[mid];
        }
        if (midKey > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return NULL;
}
