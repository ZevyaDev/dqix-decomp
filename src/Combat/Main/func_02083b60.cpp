#include <globaldefs.h>

// USA: LearnSpell_02083b60
extern "C" ARM void LearnSpell_02083b60(unsigned char* memberData, int spellId) {
#if defined(jpn)
    unsigned char* learnedSpells = memberData + 0x878;
#else
    unsigned char* learnedSpells = memberData + 0x910;
#endif
    learnedSpells[spellId / 8] |= 1 << (spellId % 8);
}
