#include "Combat/Main/ElementLookup.h"
#include "std_library_functions.h"
#include <globaldefs.h>

// USA: func_0209998c
extern "C" ARM struct MapListEntry_0201cb60 *func_0209998c(struct MapList_0201cb60_2 *arg0, const char *arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->count_4_; var0++) {
        struct MapListEntry_0201cb60 *var1 = &arg0->pEntries_0_[var0];
        if (strcmp(var1->unknown_5_, arg1) == 0) return var1;
    }
    return NULL;
}
