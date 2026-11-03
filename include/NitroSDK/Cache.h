#pragma once

void InvalidateDataCache();
void CleanDataCache();
void CleanInvalidateDataCache();
#ifdef __cplusplus
extern "C" {
#endif
void InvalidateDataCacheRange(const void* where, unsigned int len);
void DC_FlushRange(const void* where, unsigned int len);
void IC_InvalidateRange(const void* where, unsigned int len);
#ifdef __cplusplus
}
#endif
void CleanCacheRange(const void* where, unsigned int len);
void DrainWriteBuffer();
void InvalidateInstructionCache();
