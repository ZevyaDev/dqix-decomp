#include <globaldefs.h>
#include "std_library_functions.h"

extern char data_ov025_021ef778[];
extern char data_ov025_021ef781[];
extern char data_ov025_021ef78a[];
extern char data_ov025_021ef791[];
extern char data_ov025_021ef7ac[];
extern char data_ov025_021ef7b5[];
extern char data_ov025_021ef7be[];

// USA: ResolveCharaPackPath_ov025_021e24d0
extern "C" ARM int ResolveCharaPackPath_ov025_021e24d0(char* path, char* outArchivePath, char* outEntryName) {
    char* var0 = strstr(path, data_ov025_021ef778);
    if (!var0) {
        strstr(path, data_ov025_021ef781);
    }
    if (var0) {
        strcpy(outEntryName, var0 + strlen(data_ov025_021ef78a));
        strcpy(outArchivePath, data_ov025_021ef791);
        return 1;
    }
    var0 = strstr(path, data_ov025_021ef7ac);
    if (!var0) {
        strstr(path, data_ov025_021ef7b5);
    }
    if (!var0) return 0;
    strcpy(outEntryName, var0 + strlen(data_ov025_021ef78a));
    strcpy(outArchivePath, data_ov025_021ef7be);
    return 1;
}
