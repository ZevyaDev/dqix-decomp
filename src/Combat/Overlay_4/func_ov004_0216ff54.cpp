#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)

extern char data_ov004_02170a50[];
extern char data_ov004_02170a70[];
extern char data_ov004_02170a90[];
extern char data_ov004_02170ab0[];
extern char data_ov004_02170ad0[];
extern char data_ov004_02170af0[];
extern char data_ov004_02170b10[];
extern char data_ov004_02170b30[];
extern char data_ov004_02170b50[];
extern char data_ov004_02170b70[];
extern char data_ov004_jpn_02170b90[];
extern char data_ov004_02170bb0[];
extern char data_ov004_02170bd0[];
extern char data_ov004_02170bf0[];

// JPN: func_ov004_0216ff54
extern "C" ARM int func_ov004_0216ff54(int arg0, char* arg1) {
    if (!arg1) return 0;
    arg1[0] = 0;
    if (arg0 == 0x3e8) strcpy(arg1, data_ov004_02170a50);
    if (arg0 == 0x3e9) strcpy(arg1, data_ov004_02170a70);
    if (arg0 == 0x3ea) strcpy(arg1, data_ov004_02170a90);
    if (arg0 == 0x3eb) strcpy(arg1, data_ov004_02170ab0);
    if (arg0 == 0x3ec) strcpy(arg1, data_ov004_02170ad0);
    if (arg0 == 0x3ed) strcpy(arg1, data_ov004_02170af0);
    if (arg0 == 0x3ee) strcpy(arg1, data_ov004_02170b10);
    if (arg0 == 0x3ef) strcpy(arg1, data_ov004_02170b30);
    if (arg0 == 0x3f0) strcpy(arg1, data_ov004_02170b50);
    if (arg0 == 0x3f1) strcpy(arg1, data_ov004_02170b70);
    if (arg0 == 0x3f2) strcpy(arg1, data_ov004_jpn_02170b90);
    if (arg0 == 0x3f3) strcpy(arg1, data_ov004_02170bb0);
    if (arg0 == 0x3f4) strcpy(arg1, data_ov004_02170bd0);
    if (arg0 == 0x3f5) strcpy(arg1, data_ov004_02170bf0);
    if (arg1[0] == 0) return 0;
    return 1;
}

#endif
