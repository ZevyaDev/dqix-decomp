#include <globaldefs.h>

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
};

// USA: FindEventSyncEntry_020e385c
extern "C" ARM struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId) {
    int i;
    for (i = 0; i < 4; i++, entry++) {
        if (entry->type_4_ == type) {
            if (entry->eventId_0_ == eventId || eventId == -1) {
                return entry;
            }
        }
    }
    return NULL;
}
