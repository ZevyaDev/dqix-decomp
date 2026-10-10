#include <globaldefs.h>

#include "Combat/ActionState.h"

// USA: func_0202738c
// Set or clear the flag bit `mask` in element `id`'s ActionState.b2, or in all four
// when id < 0. `add` picks |= (nonzero) against &= ~mask (zero).
// obj[i + 0x758] holds the action-state id of combatant slot i.
extern "C" ARM void func_0202738c(unsigned char *obj, int add, int mask, int id) {
    if (id < 0) {
        int i;
        for (i = 0; i < 4; i++) {
            ActionState0201fbe0 *e = &data_020fdc60[i];
            if (add) {
                e->b2 = e->b2 | mask;
            } else {
                e->b2 = e->b2 & ~mask;
            }
        }
        return;
    }
    if (id >= 4) return;
    {
        int i;
        unsigned char *p;
        ActionState0201fbe0 *e;
        for (i = 0; i < 4; i++) {
            p = obj + i;
            e = &data_020fdc60[i];
            if (id == p[0x758]) {
                if (add) {
                    e->b2 = e->b2 | mask;
                    return;
                }
                e->b2 = e->b2 & ~mask;
                return;
            }
        }
    }
}