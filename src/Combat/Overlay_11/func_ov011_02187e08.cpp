#include <globaldefs.h>

struct Menu_ov004_02158dcc;
extern "C" unsigned int SetActiveMenuGrid_ov011_021849e0(Menu_ov004_02158dcc*, unsigned short);
extern "C" unsigned int GetCurrentMenu_ov017_021b2164();

// USA: func_ov011_02187e08
extern "C" ARM unsigned int func_ov011_02187e08(void) {
    SetActiveMenuGrid_ov011_021849e0((Menu_ov004_02158dcc*)GetCurrentMenu_ov017_021b2164(), 0);
    return 1;
}
