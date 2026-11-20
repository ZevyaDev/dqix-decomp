#include <globaldefs.h>

#include "Combat/BattleSkillEligibility.h"

extern "C" int func_0201b588(int);

extern "C" unsigned short *GetZone3D_02012fe4(void);

// USA: IsInGrotto_020117f0
extern "C" ARM int IsInGrotto_020117f0(GameState *) {
    return func_0201b588((int) (*GetZone3D_02012fe4()));
}
