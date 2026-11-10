#include <globaldefs.h>

#include "Combat/FieldActorState.h"

// USA: InitFieldMonster_02076a8c
extern "C" ARM void InitFieldMonster_02076a8c(FieldMonster_02076a8c* monster) {
    func_02032e58(&monster->unknown_0_.unknown_0_);

    monster->unknown_0_.unknown_0_.unknown_0_.classFlags_0_ |= 0x20;
    monster->unknown_0_.unknown_0_.unknown_b4_ = 0x1c2;
    monster->unknown_0_.state_130_ = 1;
    monster->unknown_0_.previousState_134_ = 1;
    monster->unknown_0_.unknown_138_ = 1;
    monster->unknown_0_.unknown_139_ = 2;
    monster->unknown_0_.unknown_13a_ = 1;
    monster->unknown_0_.unknown_13b_ = 3;
    monster->unknown_0_.unknown_13c_ = 1;
    monster->unknown_0_.unknown_140_ = 0x1e;
    monster->unknown_0_.unknown_144_ = 5;
    monster->unknown_0_.unknown_148_ = 0x1000;
    monster->unknown_0_.stateTime_14c_ = 0;
    monster->unknown_0_.unknown_150_ = 0;
    monster->unknown_0_.unknown_154_ = 0;
    monster->unknown_164_ = 0;
    monster->unknown_166_ = 0;
    monster->unknown_168_ = 0;
    monster->unknown_17d_ = 0;
    monster->unknown_170_ = 0;
    monster->unknown_174_ = 0;
    monster->unknown_176_ = 0;
    monster->unknown_17a_ = 0;
    monster->unknown_17b_ = 0;
    monster->unknown_17c_ = 0;
    monster->unknown_180_ = 0;
    monster->unknown_184_ = 0;
    monster->unknown_16a_ = 0;
    monster->unknown_17e_ = 0;
    monster->unknown_158_.x = 0;
    monster->unknown_158_.y = 0;
    monster->unknown_158_.z = 0;

    monster->unknown_0_.unknown_0_.unknown_0_.DisableFlag(0x80);
}
