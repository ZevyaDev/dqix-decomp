#include <globaldefs.h>

// USA: IsQuestersRestLobbyZone_02098210
extern "C" ARM int IsQuestersRestLobbyZone_02098210(int questersRest, int zoneId) {
    int firstLobbyZoneId = 0xc3b5;
    return zoneId == firstLobbyZoneId || zoneId == firstLobbyZoneId + 0x64 || zoneId == firstLobbyZoneId + 0xc8 || zoneId == firstLobbyZoneId + 0x12c;
}
