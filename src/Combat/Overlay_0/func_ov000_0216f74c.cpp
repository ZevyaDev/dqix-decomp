#include <globaldefs.h>
#include "Combat/FormationPosition.h"

// USA: GetCellPosition_ov000_0216f74c
extern "C" ARM struct CellPosition_02048cf0 GetCellPosition_ov000_0216f74c(int* cell) {
    int index = *cell;
    int row = index / 9;
    int column = index % 9;
    float columnX = -42566.87890625f + 10641.7197265625f * (float)column;
    struct CellPosition_02048cf0 position;
    position.x_0_ = (int)(columnX + 5320.85986328125f * (float)(row % 2));
    position.z_4_ = (int)(-36864.0f + 3.0f * (3072.0f * (float)row));
    return position;
}
