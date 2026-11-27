#if !defined(jpn)
#include <globaldefs.h>
#include "Resource/StringList.h"

extern const char data_020f29cc[];
extern const char data_020f29b8[];

// USA: GetBattleString_020dd0b0
extern "C" ARM void GetBattleString_020dd0b0(int stringIndex, char* outString) {
    const char* natPath;
    const char* archivePath;
    if (stringIndex >= 0 && outString != NULL) {
        archivePath = data_020f29b8;
        natPath = data_020f29cc;
        outString[0] = 0;
        StringList stringList;
        stringList.Reset();
    } else {
        return;
    }
    GetStringFromNAT((char*)((int)outString), (const char*)((void*)natPath), stringIndex, 0, 1, (const char*)((int)archivePath));
}
#endif
