#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02039880_458 = 0x1be };
#else
enum { Enum_02039880_458 = 0x1ca };
#endif

// USA: SetPartyLeaderObjectIndex_02039880
extern "C" ARM void SetPartyLeaderObjectIndex_02039880(unsigned char* object, int leaderObjectIndex) {
    object[Enum_02039880_458] = leaderObjectIndex;
}
