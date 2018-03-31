#include "__cf_EvPowertrainController_KO.h"
#ifndef RTW_HEADER_EvPowertrainController_KO_h_
#define RTW_HEADER_EvPowertrainController_KO_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef EvPowertrainController_KO_COMMON_INCLUDES_
#define EvPowertrainController_KO_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "EvPowertrainController_KO_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T is0sja4tz1 ; } meji4tzssi ; typedef struct { struct {
void * AQHandles ; void * SlioLTF ; } gzjgszujgp ; struct { void * AQHandles
; void * SlioLTF ; } irakyrqcvs ; } eqmrths2cf ; struct plrgziaovov_ { real_T
P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T
P_6 [ 12 ] ; real_T P_7 [ 12 ] ; real_T P_8 ; real_T P_9 ; real_T P_10 ;
real_T P_11 ; real_T P_12 ; real_T P_13 [ 180 ] ; real_T P_14 [ 12 ] ; real_T
P_15 [ 15 ] ; real_T P_16 ; real_T P_17 ; real_T P_18 [ 11 ] ; real_T P_19 [
11 ] ; real_T P_20 ; real_T P_21 [ 11 ] ; real_T P_22 [ 11 ] ; real_T P_23 ;
real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T
P_29 ; real_T P_30 [ 12 ] ; real_T P_31 [ 12 ] ; real_T P_32 ; real_T P_33 [
2 ] ; real_T P_34 [ 2 ] ; real_T P_35 [ 11 ] ; real_T P_36 [ 11 ] ; real_T
P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 [ 12 ] ; real_T
P_42 [ 12 ] ; real_T P_43 ; real_T P_44 ; real_T P_45 ; uint32_T P_46 [ 2 ] ;
} ; struct grjnyhjy1e { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 11 ] ; int_T systemTid [ 11 ]
; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { meji4tzssi rtb ; eqmrths2cf rtdw ; d04jalh2th rtm ; }
kgvwgi1unho ; extern void n04et0fd5o ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , d04jalh2th * const odjqivxgdz , meji4tzssi
* localB , eqmrths2cf * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_EvPowertrainController_KO_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController_KO_GetDWork ( const kgvwgi1unho * mdlrefDW ) ;
extern void mr_EvPowertrainController_KO_SetDWork ( kgvwgi1unho * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_EvPowertrainController_KO_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_EvPowertrainController_KO_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController_KO_GetCAPIStaticMap ( void ) ; extern void o5rnvcjh22
( d04jalh2th * const odjqivxgdz , eqmrths2cf * localDW ) ; extern void
EvPowertrainController_KO ( d04jalh2th * const odjqivxgdz , const real_T *
eplomtid1i , const real_T * ksxmgmvlcl , const real_T * emigvhjyev , const
real_T * fuzksytlnp , const real_T * bz2jyhrf0l , real_T * kecf2zkdej ,
real_T * i0r1tc1qtz , meji4tzssi * localB , eqmrths2cf * localDW ) ; extern
void EvPowertrainController_KOTID1 ( meji4tzssi * localB ) ; extern void
dafdmkvcgk ( d04jalh2th * const odjqivxgdz , eqmrths2cf * localDW ) ;
#endif
