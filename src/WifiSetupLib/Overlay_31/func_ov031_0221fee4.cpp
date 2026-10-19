#include <globaldefs.h>
#include "System/Timing.h"
#include "System/ProcessorContext.h"
#include "System/WirelessScanDescriptor.h"

struct AccessPoint0221fee4 {
    int ssidLength;
    char ssid[0x24];
    unsigned char bssid[6];
    unsigned short wep;
};

struct AccessPointList0221fee4 {
    int count;
    AccessPoint0221fee4 entries[1];
};

struct Connection0221fee4 {
    unsigned char padding0[0x10];
    int error;
    unsigned char padding14[4];
    int selected;
    unsigned char padding1c[0x1c];
    int state;
    unsigned char padding3c[0x20];
    WirelessScanDescriptor* scanResults;
    unsigned char padding60[0x10];
    int scanCapacity;
};

struct Deadline0221fee4 {
    unsigned char padding[0xc];
    unsigned int timestamp;
};

extern Connection0221fee4 data_ov031_0224f670;
extern Deadline0221fee4 data_ov031_0224b114;
extern char data_ov031_0224fb80[];
extern unsigned char data_ov031_0224fb20[6];

extern "C" void* func_ov031_0222288c(int count, unsigned int size);
extern "C" void func_ov031_022228b0(void* p);
extern "C" unsigned int func_ov031_02222870();
extern "C" int func_ov031_0221f6dc(void* a, int b, int c, int d);
extern "C" void func_ov031_0221fa88(int);
extern "C" void* func_ov031_0221fa20();
extern "C" int func_ov031_0221f698(WirelessScanDescriptor* destination, int capacity);
extern "C" int func_ov031_0221fd18(AccessPointList0221fee4* list, AccessPointList0221fee4* previous, int* selected);
extern "C" int func_ov031_022228f4(char* output, const unsigned char* address);
extern "C" void func_ov031_02222af0(void);

static inline AccessPointList0221fee4* AllocAccessPointList(unsigned int size) {
    return (AccessPointList0221fee4*)func_ov031_0222288c(1, size);
}

// USA: func_ov031_0221fee4
extern "C" THUMB int func_ov031_0221fee4() {
    char text[0x20];
    Alarm alarm;
    int selected;
    int retry;
    int i;
    int index;
    unsigned int size;
    AccessPointList0221fee4* list;
    AccessPointList0221fee4* previous;
    int result;
    int running;
    int message;
    int found;
    WirelessScanDescriptor* desc;

    result = -1;
    previous = NULL;
    selected = 0;
    size = sizeof(AccessPoint0221fee4) * data_ov031_0224f670.scanCapacity + sizeof(AccessPointList0221fee4);
    list = AllocAccessPointList(size);
    if (list == NULL) goto cleanup;
    previous = AllocAccessPointList(size);
    if (previous == NULL) goto cleanup;

    for (retry = 0; retry < 30 && data_ov031_0224f670.error == 0; retry++) {
        if (func_ov031_02222870() >= data_ov031_0224b114.timestamp) break;
        if (func_ov031_0221f6dc(0, 0, 0, 0x30bffe) == 0) {
            result = -2;
            goto cleanup;
        }
        ZeroInitializeAlarm(&alarm);
        SetTimeout(&alarm, 0xffb10ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
        running = 1;
        result = 0;
        do {
            SleepCurrentContext(10);
            if (func_ov031_02222870() >= data_ov031_0224b114.timestamp || data_ov031_0224f670.error != 0) break;
            while ((message = (int)func_ov031_0221fa20()) != 0) {
                switch (message) {
                case 19:
                    running = 0;
                    break;
                case 5:
                    found = func_ov031_0221f698(data_ov031_0224f670.scanResults, data_ov031_0224f670.scanCapacity);
                    if (found > result) {
                        result = found;
                        CancelAlarm(&alarm);
                        SetTimeout(&alarm, 0xffb10ULL, (Alarm::PFNCompletion)func_ov031_0221fa88, (ProcessorContext**)19);
                    }
                    break;
                case 10:
                    running = 0;
                    break;
                case 4: case 8: case 18:
                    break;
                case 0: case 1: case 2: case 3:
                default:
                    running = 0;
                    break;
                }
            }
        } while (running);
        CancelAlarm(&alarm);
        while (func_ov031_0221fa20() != 0) {}
        if (data_ov031_0224f670.error != 0) break;

        index = 0;
        if (result >= data_ov031_0224f670.scanCapacity) {
            result = -6;
            goto cleanup;
        }
        desc = data_ov031_0224f670.scanResults;
        i = 0;
        if (result > 0) {
            for (; i < result; i++) {
                memcpy(list->entries[index].ssid, desc->ssid, 32);
                list->entries[index].ssidLength = desc->ssidLength;
                list->entries[index].ssid[desc->ssidLength] = 0;
                list->entries[index].wep = (desc->capability & 0x10) ? 1 : 0;
                {
                    unsigned char* mac = list->entries[index].bssid;
                    mac[0] = desc->bssid[0];
                    mac[1] = desc->bssid[1];
                    mac[2] = desc->bssid[2];
                    mac[3] = desc->bssid[3];
                    mac[4] = desc->bssid[4];
                    mac[5] = desc->bssid[5];
                }
                desc++;
                index++;
            }
        }
        list->count = result;
        if (data_ov031_0224f670.state != 1 && func_ov031_0221fd18(list, previous, &selected)) {
            AccessPoint0221fee4* entry = &list->entries[selected];
            data_ov031_0224f670.selected = selected;
            strcpy(data_ov031_0224fb80, entry->ssid);
            {
                unsigned char* mac = entry->bssid;
                data_ov031_0224fb20[0] = mac[0];
                data_ov031_0224fb20[1] = mac[1];
                data_ov031_0224fb20[2] = mac[2];
                data_ov031_0224fb20[3] = mac[3];
                data_ov031_0224fb20[4] = mac[4];
                data_ov031_0224fb20[5] = mac[5];
            }
            func_ov031_022228f4(text, data_ov031_0224fb20);
            break;
        }
        memcpy(previous, list, size);
        data_ov031_0224f670.state = 2;
        func_ov031_02222af0();
    }
    if (retry >= 30 || func_ov031_02222870() > data_ov031_0224b114.timestamp) {
        result = -3;
    } else if (data_ov031_0224f670.error != 0) {
        result = -8;
    } else {
        result = 1;
    }
cleanup:
    if (list != NULL) func_ov031_022228b0(list);
    if (previous != NULL) func_ov031_022228b0(previous);
    return result;
}
