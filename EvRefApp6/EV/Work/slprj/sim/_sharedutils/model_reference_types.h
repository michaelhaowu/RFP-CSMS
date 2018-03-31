#ifndef MODEL_REFERENCE_TYPES_H
#define MODEL_REFERENCE_TYPES_H
#include "rtwtypes.h"
#ifndef MODEL_REFERENCE_TYPES
#define MODEL_REFERENCE_TYPES

typedef struct _rtTimingBridge_tag rtTimingBridge;
struct _rtTimingBridge_tag {
  uint32_T nTasks;
  uint32_T** clockTick;
  uint32_T** clockTickH;
  uint32_T* taskCounter;
  real_T** taskTime;
  boolean_T** rateTransition;
  boolean_T *firstInitCond;
};

typedef struct _rtVDRMdlRefTiming_tag rtVDRMdlRefTiming;
struct _rtVDRMdlRefTiming_tag {
  uint32_T firstVDRTID;
  uint32_T* numTicksToNextHitForVDR;
};

#endif
#endif
