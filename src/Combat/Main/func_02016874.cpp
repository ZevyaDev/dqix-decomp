#include <globaldefs.h>
#include "World/Zone3D.h"
#include "World/Zone3DTypes.h"
#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "NitroSDK/Graphics3D/RenderConfig.h"

#if defined(jpn)
#define func_020ca528 func_020cbff4
#endif

#if defined(jpn)
#define func_0201b5b0 func_0201b328
#endif

#if defined(jpn)
#define func_02016d8c func_02016b2c
#endif

struct Struct_02016874_3;
struct Struct_020ef0dc {
    float unknown_0_;
    float unknown_4_;
    float unknown_8_;
    int unknown_c_;
    float unknown_10_;
};
extern Struct_020ef0dc data_020ef0dc;
extern "C" void func_0201730c(Struct_02016874_3*);
extern "C" void func_02017540(Zone3D*);
extern "C" int func_0201b5b0(int);
extern "C" void func_02016d8c(void*);
extern "C" void func_02016db4(void*, void*);
extern "C" void func_020ca528(const void*, void*);

// USA: DrawZone_02016874
extern "C" ARM void DrawZone_02016874(Zone3D* zone) {
    if (zone->unknown_424_ != 0) return;
    func_0201730c((Struct_02016874_3*)zone);
    func_02017540(zone);
    zone->unk_276c[0xb0] = 0;
    data_020ef0dc.unknown_c_ = 1;
    if (func_0201b5b0(zone->currentZoneID_)) {
        if (((unsigned char*)zone->unk_23bc)[0] == 0) return;
        func_0201aedc(zone);
        int grottoEnviron;
        int firstColumn;
        int row;
        GrottoTile_02013490* tile;
        int floorWidth;
        grottoEnviron = zone->grotto_.GetActiveGrottoEnviron();
        floorWidth = zone->grotto_.floorWidth_;
        GameObject* currentLeader = GameState::GetInstance()->GetUnknownGameObject();
        int leaderColumn = (int)(((float)(currentLeader->obj3D_.position_.x + 0x4000) / 4096.0f) / 8.0f);
        int leaderRow = (int)(((float)(currentLeader->obj3D_.position_.z + 0x4000) / 4096.0f) / 8.0f);
        int column;
        int endColumn, firstRow;
        int endRow = 1;
        endRow += leaderRow;
        if (grottoEnviron == 5) {
            firstColumn = leaderColumn - 4;
            endColumn = leaderColumn + 4;
            firstRow = leaderRow - 4;
        } else {
            firstColumn = leaderColumn - 2;
            endColumn = leaderColumn + 2;
            firstRow = leaderRow - 2;
        }
        if (firstColumn < 0) firstColumn = 0;
        if (firstRow < 0) firstRow = 0;
        endColumn++;
        if (endColumn > 16) endColumn = 16;
        endRow++;
        if (endRow > 16) endRow = 16;
        row = firstRow;
        for (; row < endRow; row++) {
            for (column = firstColumn; column < endColumn; column++) {
                tile = &((GrottoTile_02013490*)zone->grottoTileMapData_420_)[row * 16];
                tile = &tile[column];
                if (tile->pBMDJStruct_0_ == 0) continue;
                BMDJEntry_02016874_2* entry = tile->pBMDJStruct_0_->pEntries_44_;
                if (entry->flags_2_ & 4) continue;
                Model3D* model;
                model = entry->unknown_24_->unknown1_4_;
                if (model == 0 || model->rawInternalModel_ == 0) continue;
                LightingManager* lightingManager = LightingManager::GetInstance();
                lightingManager->ApplyAmbientColorToModel(model->rawInternalModel_);
                func_020ca528(&tile->rotation_14_, &g_nitro3DRenderConfig.objectRotationPosition);
                g_nitro3DRenderConfig.flags &= ~0xa4;
                Nitro3DRenderConfig::SetObjectPosition(&tile->position_3c_);
                Nitro3DRenderConfig::SubmitToFifo();
                model->Draw(true);
                if (grottoEnviron == 4) {
                    model = func_020196fc(zone, 11)->pEntries_44_->unknown_24_->unknown1_4_;
                    Nitro3DModel* internalModel = model->rawInternalModel_;
                    if (model != 0 && internalModel != 0) {
                        Matrix3x3 rotation;
                        Mat3x3_WriteIdentity(&rotation);
                        func_02016d8c(&rotation);
                        Nitro3DRenderConfig::SubmitToFifo();
                        model->Draw(true);
                    }
                }
            }
        }
        if (grottoEnviron != 5) return;
        Model3D* outsideModel = func_020196fc(zone, 12)->pEntries_44_->unknown_24_->unknown1_4_;
        LightingManager* lightingManager = LightingManager::GetInstance();
        lightingManager->ApplyAmbientColorToModel(outsideModel->rawInternalModel_);
        if (leaderRow < 4) {
            for (int outsideRow = leaderRow - 4; outsideRow < leaderRow; outsideRow++) {
                if (outsideRow < 0) {
                    for (int outsideColumn = leaderColumn - 4; outsideColumn < leaderColumn + 5; outsideColumn++) {
                        Vector3i outsidePosition;
                        outsidePosition.x = (int)(4096.0f * (8.0f * (float)outsideColumn));
                        outsidePosition.y = 0;
                        outsidePosition.z = (int)(4096.0f * (8.0f * (float)outsideRow));
                        Nitro3DRenderConfig::SetObjectPosition(&outsidePosition);
                        Nitro3DRenderConfig::SubmitToFifo();
                        outsideModel->Draw(true);
                    }
                }
            }
        }
        if (leaderColumn < 4) {
            for (int outsideRow = leaderRow - 4; outsideRow < leaderRow + 2; outsideRow++) {
                for (int outsideColumn = leaderColumn - 4; outsideColumn < leaderColumn; outsideColumn++) {
                    if (outsideColumn < 0) {
                        Vector3i outsidePosition;
                        outsidePosition.x = (int)(4096.0f * (8.0f * (float)outsideColumn));
                        outsidePosition.y = 0;
                        outsidePosition.z = (int)(4096.0f * (8.0f * (float)outsideRow));
                        Nitro3DRenderConfig::SetObjectPosition(&outsidePosition);
                        Nitro3DRenderConfig::SubmitToFifo();
                        outsideModel->Draw(true);
                    }
                }
            }
        }
        if (leaderColumn > floorWidth - 5) {
            for (int outsideRow = firstRow; outsideRow < endRow; outsideRow++) {
                for (int outsideColumn = leaderColumn; outsideColumn < leaderColumn + 5; outsideColumn++) {
                    if (outsideColumn >= floorWidth) {
                        Vector3i outsidePosition;
                        outsidePosition.x = (int)(4096.0f * (8.0f * (float)outsideColumn));
                        outsidePosition.y = 0;
                        outsidePosition.z = (int)(4096.0f * (8.0f * (float)outsideRow));
                        Nitro3DRenderConfig::SetObjectPosition(&outsidePosition);
                        Nitro3DRenderConfig::SubmitToFifo();
                        outsideModel->Draw(true);
                    }
                }
            }
        }
    } else {
        LightingManager* lightingManager = LightingManager::GetInstance();
        int timeOfDayIndex = lightingManager->timeOfDayIndex_;
        if (timeOfDayIndex != (unsigned char)zone->unk_830[1]) zone->unk_830[2] = 1;
        else zone->unk_830[2] = 0;
        zone->unk_830[1] = timeOfDayIndex;
        BMDJStruct_02013454* bmdj = (BMDJStruct_02013454*)(zone->firstBMDJStruct_41c_);
        while (bmdj != 0) {
            func_02016db4(zone, bmdj);
            bmdj = bmdj->pNext_54_;
        }
        zone->unk_830[3] = 0;
    }
}
