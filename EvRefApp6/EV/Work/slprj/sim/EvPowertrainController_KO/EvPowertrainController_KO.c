#include "__cf_EvPowertrainController_KO.h"
#include "EvPowertrainController_KO_capi.h"
#include "EvPowertrainController_KO.h"
#include "EvPowertrainController_KO_private.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_EvPowertrainController_KO [ 44 ] = { {
"kgvwgi1unho" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "muwh10khbb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "gdtnshsr0m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "itvhzazuzu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "eteijaq1as" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "b30txb4atk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "mqpyqe53g3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "meq3uw51ip" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "gukwp0udlx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "n2hcgkep1r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "eqmrths2cf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "meji4tzssi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "el4hkcc5xv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "dafdmkvcgk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "cp1ozclc4m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "ovdx4gckuz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "n04et0fd5o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "o5rnvcjh22" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "iarmiulnxe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "EvPowertrainController_KO" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ibthrdz4dnq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "eqbs5g4vgle" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "mw1lqlvuwd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "pfjv0eh4ifn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "e0delajbzhd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "ibthrdz4dn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "eqbs5g4vgl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "pfjv0eh4if" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "grjnyhjy1e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , { "d04jalh2th" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController_KO" } , {
"mr_EvPowertrainController_KO_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController_KO"
} , { "mr_EvPowertrainController_KO_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "EvPowertrainController_KO" } , {
"mr_EvPowertrainController_KO_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EvPowertrainController_KO" } , {
"EvPowertrainController_KO.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL )
} , { "EvPowertrainController_KO.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "EvPowertrainController_KO" } } ; plrgziaovov plrgziaovo = { 0.0 ,
2.0 , 2.0 , 0.12594458438287154 , - 1.0 , 9.5492965855137211 , { 280.0 ,
280.0 , 280.0 , 280.0 , 254.6479089 , 190.9859317 , 152.7887454 , 127.3239545
, 109.1348181 , 95.49296586 , 84.88263632 , 76.39437268 } , { 0.0 , 1000.0 ,
2000.0 , 2728.370453 , 3000.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 ,
9000.0 , 10000.0 } , 1.0 , - 1.0 , 0.0 , 0.0 , 9.5492965855137211 , { 85.0 ,
85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 ,
85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 , 85.0 ,
85.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 ,
93.0 , 90.0 , 85.0 , 85.0 , 90.0 , 92.0 , 92.0 , 94.0 , 94.0 , 94.0 , 94.0 ,
94.0 , 94.0 , 92.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 94.0 , 94.0 ,
95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 , 95.0 ,
95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 , 94.0 ,
95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 , 93.0 ,
94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 , 92.0 ,
92.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 , 90.0 ,
92.0 , 92.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 , 85.0 ,
88.0 , 92.0 , 92.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 , 85.0 ,
85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 , 93.0 ,
85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 , 94.0 ,
93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 , 95.0 ,
94.0 , 93.0 , 85.0 , 85.0 , 88.0 , 90.0 , 90.0 , 94.0 , 95.0 , 95.0 , 95.0 ,
95.0 , 94.0 , 93.0 } , { 0.0 , 1000.0 , 2000.0 , 2728.370453 , 3000.0 ,
4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } , { 0.0 ,
20.0 , 40.0 , 60.0 , 80.0 , 100.0 , 120.0 , 140.0 , 160.0 , 180.0 , 200.0 ,
220.0 , 240.0 , 260.0 , 280.0 } , 0.01 , - 1.0 , { 0.0 , 0.35 , 0.7 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } , { 0.0 , 10.0 , 20.0 , 30.0 , 40.0
, 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , 80000.0 , { 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } , { 0.0 , 10.0 , 20.0 , 30.0
, 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , - 80000.0 , 5.0E+6 ,
1.0 , 0.0 , 0.0 , 0.00082466807156732073 , 9.5492965855137211 , { 280.0 ,
280.0 , 280.0 , 280.0 , 254.6479089 , 190.9859317 , 152.7887454 , 127.3239545
, 109.1348181 , 95.49296586 , 84.88263632 , 76.39437268 } , { 0.0 , 1000.0 ,
2000.0 , 2728.370453 , 3000.0 , 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 ,
9000.0 , 10000.0 } , 7.94 , { 0.0 , 1.0 } , { 5.0 , 9.0 } , { 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } , { 0.0 , 10.0 , 20.0 ,
30.0 , 40.0 , 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } , 0.0 , 0.0 , 1.0 ,
9.5492965855137211 , { 280.0 , 280.0 , 280.0 , 280.0 , 254.6479089 ,
190.9859317 , 152.7887454 , 127.3239545 , 109.1348181 , 95.49296586 ,
84.88263632 , 76.39437268 } , { 0.0 , 1000.0 , 2000.0 , 2728.370453 , 3000.0
, 4000.0 , 5000.0 , 6000.0 , 7000.0 , 8000.0 , 9000.0 , 10000.0 } ,
0.00082466807156732073 , 0.0 , 0.0 , { 11U , 14U } } ; void o5rnvcjh22 (
d04jalh2th * const odjqivxgdz , eqmrths2cf * localDW ) { if ( ( ssGetSimMode
( odjqivxgdz -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( odjqivxgdz ->
_mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( odjqivxgdz -> DataMapInfo . mmi . InstanceMap .
fullPath ) ; if ( ! slioCatalogue || ! rtwDisableStreamingToRepository (
slioCatalogue ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "BattPwrDischrgLmt" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "BattPwrDischrgLmt" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"EvPowertrainController_KO/Battery Management System" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T
forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars (
"BattPwrDischrgLmt" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( odjqivxgdz -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , odjqivxgdz ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> gzjgszujgp . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , odjqivxgdz -> DataMapInfo
. mmi . InstanceMap . fullPath , "341a5ee3-cfa0-475a-9f46-0332c190a925" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> gzjgszujgp . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> gzjgszujgp . AQHandles , "0.01" , 0.01 , rtmGetTFinal ( odjqivxgdz ) ) ;
sdiSetRunStartTime ( localDW -> gzjgszujgp . AQHandles , rtmGetTaskTime (
odjqivxgdz , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
gzjgszujgp . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> gzjgszujgp . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> gzjgszujgp . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } { void *
treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; if ( slioCatalogue && rtwIsLoggingToFile
( slioCatalogue ) ) { int_T forEachMdlRefDimsArray [ 32 ] ; int_T
forEachMdlRefDimsArraySize = 0 ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ forEachMdlRefDimsArraySize = slSigLogGetForEachDimsForRefModel ( odjqivxgdz
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; } treeVector = rtwGetTreeVector
( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 ,
"BattPwrDischrgLmt" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 ,
"double" , "" , "0.01" , 0.01 , rtmGetTFinal ( odjqivxgdz ) , treeVector ) ;
} signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"BattPwrDischrgLmt" , "" , odjqivxgdz -> DataMapInfo . mmi . InstanceMap .
fullPath , "EvPowertrainController_KO/Battery Management System" , 1 , 0 ,
slioCatalogue , forEachMdlRefDimsArraySize ? ( const uint_T * )
forEachMdlRefDimsArray : ( NULL ) , forEachMdlRefDimsArraySize , ( NULL ) , 0
) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( odjqivxgdz ->
DataMapInfo . mmi . InstanceMap . fullPath ,
"EvPowertrainController_KO/Battery Management System" , 1 ,
"BattPwrDischrgLmt" ) ; } if ( rtwLoggingOverride ( signalDescriptor ,
slioCatalogue ) ) { if ( odjqivxgdz -> _mdlRefSfcnS -> mdlInfo -> rtwLogInfo
) { loggingInterval = rtliGetLoggingInterval ( odjqivxgdz -> _mdlRefSfcnS ->
mdlInfo -> rtwLogInfo ) ; } else { loggingInterval = sdiGetLoggingIntervals (
odjqivxgdz -> DataMapInfo . mmi . InstanceMap . fullPath ) ; datasetName = ""
; } accessor = rtwGetAccessor ( signalDescriptor , loggingInterval ) ;
rtwAddR2Client ( accessor , signalDescriptor , slioCatalogue , datasetName ,
1 ) ; localDW -> gzjgszujgp . SlioLTF = accessor ; } } } } if ( (
ssGetSimMode ( odjqivxgdz -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
odjqivxgdz -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { void * slioCatalogue =
rt_slioCatalogue ( ) ? rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) :
sdiGetSlioCatalogue ( odjqivxgdz -> DataMapInfo . mmi . InstanceMap .
fullPath ) ; if ( ! slioCatalogue || ! rtwDisableStreamingToRepository (
slioCatalogue ) ) { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "BattPwrChrgLmt" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "BattPwrChrgLmt" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"EvPowertrainController_KO/Battery Management System" ) ; sdiLabelU blockSID
= sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( ""
) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T
forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars (
"BattPwrChrgLmt" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( odjqivxgdz -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , odjqivxgdz ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> irakyrqcvs . AQHandles =
sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo , odjqivxgdz -> DataMapInfo
. mmi . InstanceMap . fullPath , "153ce183-6c0e-4a41-97f2-29da8f36be8b" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ; if (
localDW -> irakyrqcvs . AQHandles ) { sdiSetSignalSampleTimeString ( localDW
-> irakyrqcvs . AQHandles , "0.01" , 0.01 , rtmGetTFinal ( odjqivxgdz ) ) ;
sdiSetRunStartTime ( localDW -> irakyrqcvs . AQHandles , rtmGetTaskTime (
odjqivxgdz , 0 ) ) ; sdiAsyncRepoSetSignalExportSettings ( localDW ->
irakyrqcvs . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( localDW
-> irakyrqcvs . AQHandles , loggedName , origSigName , propName ) ; if (
forEachMdlRefDims . nDims > 0 ) { sdiAttachForEachIterationToParent (
hForEachParent , localDW -> irakyrqcvs . AQHandles , ( NULL ) ) ; if (
srcInfo . signalName != sigName ) { sdiFreeName ( srcInfo . signalName ) ; }
} } sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } { void *
treeVector = ( NULL ) ; void * accessor = ( NULL ) ; const void *
signalDescriptor = ( NULL ) ; void * loggingInterval = ( NULL ) ; char *
datasetName = "tmp_raccel_logsout" ; if ( slioCatalogue && rtwIsLoggingToFile
( slioCatalogue ) ) { int_T forEachMdlRefDimsArray [ 32 ] ; int_T
forEachMdlRefDimsArraySize = 0 ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ forEachMdlRefDimsArraySize = slSigLogGetForEachDimsForRefModel ( odjqivxgdz
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; } treeVector = rtwGetTreeVector
( ) ; { int_T sigDimsArray [ 1 ] = { 1 } ; rtwAddLeafNode ( 0 ,
"BattPwrChrgLmt" , "zoh" , 0 , ( unsigned int * ) sigDimsArray , 1 , "double"
, "" , "0.01" , 0.01 , rtmGetTFinal ( odjqivxgdz ) , treeVector ) ; }
signalDescriptor = rtwGetSignalDescriptor ( treeVector , 1 , 1 , 0 , 1 ,
"BattPwrChrgLmt" , "" , odjqivxgdz -> DataMapInfo . mmi . InstanceMap .
fullPath , "EvPowertrainController_KO/Battery Management System" , 2 , 0 ,
slioCatalogue , forEachMdlRefDimsArraySize ? ( const uint_T * )
forEachMdlRefDimsArray : ( NULL ) , forEachMdlRefDimsArraySize , ( NULL ) , 0
) ; if ( ! rt_slioCatalogue ( ) ) { sdiSlioIsLoggingSignal ( odjqivxgdz ->
DataMapInfo . mmi . InstanceMap . fullPath ,
"EvPowertrainController_KO/Battery Management System" , 2 , "BattPwrChrgLmt"
) ; } if ( rtwLoggingOverride ( signalDescriptor , slioCatalogue ) ) { if (
odjqivxgdz -> _mdlRefSfcnS -> mdlInfo -> rtwLogInfo ) { loggingInterval =
rtliGetLoggingInterval ( odjqivxgdz -> _mdlRefSfcnS -> mdlInfo -> rtwLogInfo
) ; } else { loggingInterval = sdiGetLoggingIntervals ( odjqivxgdz ->
DataMapInfo . mmi . InstanceMap . fullPath ) ; datasetName = "" ; } accessor
= rtwGetAccessor ( signalDescriptor , loggingInterval ) ; rtwAddR2Client (
accessor , signalDescriptor , slioCatalogue , datasetName , 1 ) ; localDW ->
irakyrqcvs . SlioLTF = accessor ; } } } } } void EvPowertrainController_KO (
d04jalh2th * const odjqivxgdz , const real_T * eplomtid1i , const real_T *
ksxmgmvlcl , const real_T * emigvhjyev , const real_T * fuzksytlnp , const
real_T * bz2jyhrf0l , real_T * kecf2zkdej , real_T * i0r1tc1qtz , meji4tzssi
* localB , eqmrths2cf * localDW ) { real_T dflfsg1joe ; real_T eoymq4td0g ;
real_T fxumzgwvz1 ; real_T adfmnkbpcc ; real_T bdeo0x52u4 ; real_T lwdnzh30zx
; real_T lrnl01qmgj ; real_T bz2jyhrf0l_p ; dflfsg1joe = look1_binlcapw ( *
fuzksytlnp , plrgziaovo . P_20 , plrgziaovo . P_19 , 10U ) * plrgziaovo .
P_21 ; { if ( ( localDW -> gzjgszujgp . AQHandles || localDW -> gzjgszujgp .
SlioLTF ) && ssGetLogOutput ( odjqivxgdz -> _mdlRefSfcnS ) ) {
sdiSlioSdiWriteSignal ( localDW -> gzjgszujgp . AQHandles , localDW ->
gzjgszujgp . SlioLTF , 0 , rtmGetTaskTime ( odjqivxgdz , 0 ) , ( void * ) &
dflfsg1joe ) ; } } eoymq4td0g = look1_binlcapw ( * fuzksytlnp , plrgziaovo .
P_23 , plrgziaovo . P_22 , 10U ) * plrgziaovo . P_24 ; { if ( ( localDW ->
irakyrqcvs . AQHandles || localDW -> irakyrqcvs . SlioLTF ) && ssGetLogOutput
( odjqivxgdz -> _mdlRefSfcnS ) ) { sdiSlioSdiWriteSignal ( localDW ->
irakyrqcvs . AQHandles , localDW -> irakyrqcvs . SlioLTF , 0 , rtmGetTaskTime
( odjqivxgdz , 0 ) , ( void * ) & eoymq4td0g ) ; } } if ( plrgziaovo . P_27 >
plrgziaovo . P_28 ) { bz2jyhrf0l_p = plrgziaovo . P_26 ; } else {
bz2jyhrf0l_p = * ksxmgmvlcl ; } fxumzgwvz1 = bz2jyhrf0l_p * plrgziaovo . P_25
* plrgziaovo . P_29 ; adfmnkbpcc = muDoubleScalarMin ( fxumzgwvz1 ,
look1_binlcapw ( plrgziaovo . P_30 * * bz2jyhrf0l , plrgziaovo . P_32 ,
plrgziaovo . P_31 , 11U ) * plrgziaovo . P_33 * rtP_RegenEna ) * (
look1_binlcapw ( * emigvhjyev , plrgziaovo . P_35 , plrgziaovo . P_34 , 1U )
* look1_binlcapw ( * fuzksytlnp , plrgziaovo . P_37 , plrgziaovo . P_36 , 10U
) ) ; if ( * eplomtid1i > plrgziaovo . P_1 ) { bdeo0x52u4 = look1_binlcapw (
plrgziaovo . P_6 * * bz2jyhrf0l , plrgziaovo . P_8 , plrgziaovo . P_7 , 11U )
* * eplomtid1i ; } else { bdeo0x52u4 = plrgziaovo . P_4 * adfmnkbpcc *
plrgziaovo . P_5 ; } if ( ! ( muDoubleScalarAbs ( * bz2jyhrf0l ) < plrgziaovo
. P_2 ) ) { bz2jyhrf0l_p = * bz2jyhrf0l * bdeo0x52u4 ; if ( bz2jyhrf0l_p >=
plrgziaovo . P_12 ) { lrnl01qmgj = plrgziaovo . P_10 ; } else { lrnl01qmgj =
plrgziaovo . P_9 ; } lwdnzh30zx = look2_binlcapw ( muDoubleScalarAbs (
plrgziaovo . P_13 * * bz2jyhrf0l ) , muDoubleScalarAbs ( bdeo0x52u4 ) ,
plrgziaovo . P_15 , plrgziaovo . P_16 , plrgziaovo . P_14 , plrgziaovo . P_47
, 12U ) * plrgziaovo . P_17 ; if ( ( lwdnzh30zx < 0.0 ) && ( lrnl01qmgj >
muDoubleScalarFloor ( lrnl01qmgj ) ) ) { lrnl01qmgj = - muDoubleScalarPower (
- lwdnzh30zx , lrnl01qmgj ) ; } else { lrnl01qmgj = muDoubleScalarPower (
lwdnzh30zx , lrnl01qmgj ) ; } lwdnzh30zx = bz2jyhrf0l_p * lrnl01qmgj ; if ( !
( ( dflfsg1joe - lwdnzh30zx >= plrgziaovo . P_38 ) && ( eoymq4td0g -
lwdnzh30zx <= plrgziaovo . P_39 ) ) ) { if ( ( * bz2jyhrf0l >= - plrgziaovo .
P_3 ) && ( * bz2jyhrf0l <= plrgziaovo . P_3 ) ) { if ( * bz2jyhrf0l >=
plrgziaovo . P_11 ) { bz2jyhrf0l_p = plrgziaovo . P_40 ; } else {
bz2jyhrf0l_p = localB -> g4x2rn1dtj ; } bdeo0x52u4 = 4.0 / ( 3.0 -
muDoubleScalarPower ( * bz2jyhrf0l / 2.0 , 2.0 ) ) * bz2jyhrf0l_p ; } else {
bdeo0x52u4 = * bz2jyhrf0l ; } if ( lwdnzh30zx > dflfsg1joe ) { lwdnzh30zx =
dflfsg1joe ; } else { if ( lwdnzh30zx < eoymq4td0g ) { lwdnzh30zx =
eoymq4td0g ; } } bdeo0x52u4 = lwdnzh30zx / lrnl01qmgj / bdeo0x52u4 ; } }
lrnl01qmgj = look1_binlcapw ( plrgziaovo . P_41 * * bz2jyhrf0l , plrgziaovo .
P_43 , plrgziaovo . P_42 , 11U ) ; if ( bdeo0x52u4 > lrnl01qmgj ) { *
kecf2zkdej = lrnl01qmgj ; } else { lrnl01qmgj *= plrgziaovo . P_18 ; if (
bdeo0x52u4 < lrnl01qmgj ) { * kecf2zkdej = lrnl01qmgj ; } else { * kecf2zkdej
= bdeo0x52u4 ; } } fxumzgwvz1 -= adfmnkbpcc ; if ( fxumzgwvz1 > plrgziaovo .
P_45 ) { fxumzgwvz1 = plrgziaovo . P_45 ; } else { if ( fxumzgwvz1 <
plrgziaovo . P_46 ) { fxumzgwvz1 = plrgziaovo . P_46 ; } } * i0r1tc1qtz =
fxumzgwvz1 / plrgziaovo . P_44 ; } void EvPowertrainController_KOTID1 (
meji4tzssi * localB ) { localB -> g4x2rn1dtj = - plrgziaovo . P_40 ; } void
dafdmkvcgk ( d04jalh2th * const odjqivxgdz , eqmrths2cf * localDW ) { if ( (
ssGetSimMode ( odjqivxgdz -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
odjqivxgdz -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW -> gzjgszujgp .
AQHandles ) { sdiTerminateStreaming ( & localDW -> gzjgszujgp . AQHandles ) ;
} if ( localDW -> gzjgszujgp . SlioLTF ) { rtwDestructAccessorPointer (
localDW -> gzjgszujgp . SlioLTF ) ; } } if ( ( ssGetSimMode ( odjqivxgdz ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( odjqivxgdz -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> irakyrqcvs . AQHandles ) { sdiTerminateStreaming ( & localDW ->
irakyrqcvs . AQHandles ) ; } if ( localDW -> irakyrqcvs . SlioLTF ) {
rtwDestructAccessorPointer ( localDW -> irakyrqcvs . SlioLTF ) ; } } if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( odjqivxgdz ->
_mdlRefSfcnS , "EvPowertrainController_KO" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void n04et0fd5o (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , d04jalh2th
* const odjqivxgdz , meji4tzssi * localB , eqmrths2cf * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; plrgziaovo . P_45 = rtInf ; ( void )
memset ( ( void * ) odjqivxgdz , 0 , sizeof ( d04jalh2th ) ) ; odjqivxgdz ->
Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; odjqivxgdz -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; odjqivxgdz -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( odjqivxgdz -> _mdlRefSfcnS , "EvPowertrainController_KO"
, "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> g4x2rn1dtj =
0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof ( eqmrths2cf ) ) ;
EvPowertrainController_KO_InitializeDataMapInfo ( odjqivxgdz , localDW ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( odjqivxgdz -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
odjqivxgdz -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( odjqivxgdz -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_EvPowertrainController_KO_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_EvPowertrainController_KO , 44 ) ; * retVal = 1 ; } static void
mr_EvPowertrainController_KO_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_EvPowertrainController_KO_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_EvPowertrainController_KO_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EvPowertrainController_KO_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvPowertrainController_KO_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvPowertrainController_KO_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_EvPowertrainController_KO_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvPowertrainController_KO_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvPowertrainController_KO_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_EvPowertrainController_KO_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvPowertrainController_KO_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvPowertrainController_KO_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvPowertrainController_KO_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_EvPowertrainController_KO_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_EvPowertrainController_KO_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvPowertrainController_KO_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvPowertrainController_KO_GetDWork (
const kgvwgi1unho * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ;
mr_EvPowertrainController_KO_cacheDataAsMxArray ( ssDW , 0 , 0 , & ( mdlrefDW
-> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; return ssDW ; } void
mr_EvPowertrainController_KO_SetDWork ( kgvwgi1unho * mdlrefDW , const
mxArray * ssDW ) { mr_EvPowertrainController_KO_restoreDataFromMxArray ( & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; } void
mr_EvPowertrainController_KO_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2269084085U , 143754723U , 3503461467U ,
939960643U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"EvPowertrainController_KO" , & chksum [ 0 ] ) ; } mxArray *
mr_EvPowertrainController_KO_GetSimStateDisallowedBlocks ( ) { return NULL ;
}
