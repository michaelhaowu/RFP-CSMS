#include "__cf_EvPowertrainController_KO.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EvPowertrainController_KO_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "EvPowertrainController_KO.h"
#include "EvPowertrainController_KO_capi.h"
#include "EvPowertrainController_KO_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "" , "" , 0 ,
0 , 0 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 0 , 0 } } ; static uint_T rtDimensionArray [ ] = { 0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 0 , 0 } } ; static int_T
rtContextSystems [ 11 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 11 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 4018603591U , 1547508191U , 2195460815U ,
2166661880U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * EvPowertrainController_KO_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void EvPowertrainController_KO_InitializeSystemRan ( d04jalh2th *
const odjqivxgdz , sysRanDType * systemRan [ ] , eqmrths2cf * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
odjqivxgdz ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemRan [ 3 ] = ( NULL ) ; systemRan [ 4 ] = ( NULL ) ; systemRan [ 5 ] = (
NULL ) ; systemRan [ 6 ] = ( NULL ) ; systemRan [ 7 ] = ( NULL ) ; systemRan
[ 8 ] = ( NULL ) ; systemRan [ 9 ] = ( NULL ) ; systemRan [ 10 ] = ( NULL ) ;
systemTid [ 1 ] = odjqivxgdz -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = odjqivxgdz -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] =
odjqivxgdz -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 4 ] = odjqivxgdz
-> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 5 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 6 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 7 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 8 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 9 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 10 ] = odjqivxgdz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ;
rtContextSystems [ 3 ] = 0 ; rtContextSystems [ 4 ] = 0 ; rtContextSystems [
5 ] = 0 ; rtContextSystems [ 6 ] = 0 ; rtContextSystems [ 7 ] = 0 ;
rtContextSystems [ 8 ] = 0 ; rtContextSystems [ 9 ] = 0 ; rtContextSystems [
10 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void EvPowertrainController_KO_InitializeDataMapInfo ( d04jalh2th * const
odjqivxgdz , eqmrths2cf * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( odjqivxgdz -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( odjqivxgdz -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( odjqivxgdz -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; rtwCAPI_SetPath ( odjqivxgdz -> DataMapInfo . mmi ,
( NULL ) ) ; rtwCAPI_SetFullPath ( odjqivxgdz -> DataMapInfo . mmi , ( NULL )
) ; rtwCAPI_SetInstanceLoggingInfo ( odjqivxgdz -> DataMapInfo . mmi , &
odjqivxgdz -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
odjqivxgdz -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
odjqivxgdz -> DataMapInfo . mmi , 0 ) ;
EvPowertrainController_KO_InitializeSystemRan ( odjqivxgdz , odjqivxgdz ->
DataMapInfo . systemRan , localDW , odjqivxgdz -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( odjqivxgdz -> DataMapInfo .
mmi , odjqivxgdz -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
odjqivxgdz -> DataMapInfo . mmi , odjqivxgdz -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( odjqivxgdz -> DataMapInfo . mmi , & odjqivxgdz ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EvPowertrainController_KO_host_InitializeDataMapInfo (
EvPowertrainController_KO_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
