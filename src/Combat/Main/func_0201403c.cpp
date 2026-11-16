#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "std_library_functions.h"

#if defined(jpn)
#define func_0201b5b0 func_0201b328
#endif

extern "C" int func_0201b5b0(int arg0);
extern "C" int func_0201b5d8(int arg0);

extern char data_020ef106;
extern char data_020ef116;
extern char data_020ef11f;
extern char data_020ef12f;

// USA: func_0201403c
extern "C" ARM void func_0201403c(Zone3D* arg0) {
    Zone3D* var0 = arg0;
    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    char var2[0x14];

    if (func_0201b5b0(var0->currentZoneID_)) {
        ActiveGrottoClass* var3 = &var0->grotto_;
        int var4 = var3->GetActiveGrottoEnviron();
        if (var4 == 0) var4 = 1;
        if (var4 > 5) var4 = 5;
        sprintf(var2, &data_020ef106, &data_020ef116, var4);
    } else if (func_0201b5d8(var0->currentZoneID_)) {
        ActiveGrottoClass* var5 = &var0->grotto_;
        int var6 = var5->GetActiveGrottoEnviron();
        sprintf(var2, &data_020ef11f, &data_020ef116, var6);
    } else {
        sprintf(var2, &data_020ef12f, &data_020ef116, var0->pUnknownStruct_8_->mapShortName_);
    }

    var0->mapAMBLLoadHandle_ = var1->QueueLoadFile(var2, NULL);
}
