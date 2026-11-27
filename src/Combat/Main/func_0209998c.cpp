#include "Combat/Main/ElementLookup.h"
#include "std_library_functions.h"
#include <globaldefs.h>

// USA: FindMapListEntryByShortName_0209998c
extern "C" ARM struct MapListEntry_0201cb60 *FindMapListEntryByShortName_0209998c(struct MapList_0201cb60_2 *mapList, const char *mapShortName) {
    int i;
    for (i = 0; i < mapList->count_4_; i++) {
        struct MapListEntry_0201cb60 *entry = &mapList->pEntries_0_[i];
        if (strcmp(entry->mapShortName_5_, mapShortName) == 0) return entry;
    }
    return NULL;
}
