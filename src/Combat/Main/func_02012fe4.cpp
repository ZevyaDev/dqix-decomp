#include <globaldefs.h>
#include "World/ZoneTerrain.h"

extern Zone3D gZone3D_020fb3f0;

// USA: GetZone3D_02012fe4
extern "C" ARM Zone3D* GetZone3D_02012fe4(void) {
    return &gZone3D_020fb3f0;
}
