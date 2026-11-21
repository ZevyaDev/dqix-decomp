#include <globaldefs.h>

// USA: IsScriptedBattle_020a3694
extern "C" ARM int IsScriptedBattle_020a3694(int* battleSetup) {
    return battleSetup[3] >= 0;
}
