#include <globaldefs.h>

extern "C" void LearnSpell_02083b60(unsigned char* memberData, int spellId);

// USA: LearnSpells_02083b8c
extern "C" ARM void LearnSpells_02083b8c(unsigned char* memberData, unsigned char* spellIds, unsigned int spellCount) {
    unsigned int i;
    for (i = 0; i < spellCount; i++) {
        LearnSpell_02083b60(memberData, spellIds[i]);
    }
}
