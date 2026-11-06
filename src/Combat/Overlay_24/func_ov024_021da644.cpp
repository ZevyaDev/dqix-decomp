#include <globaldefs.h>

// USA: SelectPartyOrEnemyMessage_ov024_021da644
extern "C" ARM unsigned short SelectPartyOrEnemyMessage_ov024_021da644(int combatantIndex, int partyMessageId, int enemyMessageId) {
	int isPartyMember = (combatantIndex >= 0 && combatantIndex <= 3);
	return isPartyMember ? (unsigned short)partyMessageId : (unsigned short)enemyMessageId;
}
