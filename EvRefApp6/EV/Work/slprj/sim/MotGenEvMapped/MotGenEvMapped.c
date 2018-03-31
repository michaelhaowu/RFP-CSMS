#include "__cf_MotGenEvMapped.h"
#include "MotGenEvMapped_capi.h"
#include "MotGenEvMapped.h"
#include "MotGenEvMapped_private.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
static RegMdlInfo rtMdlInfo_MotGenEvMapped [ 50 ] = { { "juj5p01hmia" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"chagifxp1o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "omkccwsbtz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "cfzqkyi2uw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "dpukc5flet" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "had2nm4nh5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "gsmjq23gxo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "nepexasvga" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "j0snurpmyo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "bnav1tab2v" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "e4ld3xwh5m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "dbofzogh4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "ih0hv3mzey" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "phnn1n2hbt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "ej4mlkun2d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "p1zygudiey" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "bn5bwiwjd1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "g0mz5raeki" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "bbghji4q0s" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "l54abfqz2k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "absendw0s0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "cdsebpbgwo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "oaswkbqw52" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "a1gbom0qkq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "j5tah0ocdl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "MotGenEvMapped" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "owbnlam2bbo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "on0re23vh3a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "l054lu4b4q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "fwopgqa2e5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "ahhq0hoasus" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "owbnlam2bb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "on0re23vh3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "fwopgqa2e5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "nsg1hqawul" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "p5veghsq5l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "mr_MotGenEvMapped_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotGenEvMapped" } , { "mr_MotGenEvMapped_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "MotGenEvMapped" } , { "MotGenEvMapped.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "MotGenEvMapped.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "MotGenEvMapped" } } ; a1kqx2ugby3 a1kqx2ugby = { 0.02 , 80000.0 ,
280.0 , 0.0 , 0.0 , { - 1.0 , 1.0 } , { - 1.0 , 1.0 } , 0.0 , 0.0 , {
22069.9698961863 , 16844.2840149921 , 12345.907972002 , 10802.6694755017 ,
9259.43097900149 , 7716.19248250124 , 7486.34845110759 , 9773.84381116825 ,
8888.88888887612 , 7996.78130004675 , 5174.38790003025 , 0.0 ,
4398.22971502571 , 7037.16754404114 , 7999.9999999885 , 8796.45943005142 ,
7037.16754404113 , 7330.38285837618 , 8796.45943005141 , 10262.5360017266 ,
11728.6125734019 , 15833.6269740925 , 20525.0720034533 , 20493.5434750302 ,
15641.1208710641 , 11464.0574025733 , 10031.0502272516 , 8598.04305192995 ,
7165.03587660829 , 6951.60927602848 , 9075.71211037052 , 8253.9682539564 ,
7425.5826357577 , 4804.7887643138 , 0.0 , 4084.07044966673 , 6534.51271946677
, 7428.57142856075 , 8168.14089933346 , 6534.51271946676 , 6806.78408277788 ,
8168.14089933345 , 9529.49771588903 , 10890.8545324446 , 14702.6536188002 ,
19058.9954317781 , 18917.117053874 , 14437.9577271361 , 10582.2068331446 ,
9259.43097900148 , 7936.65512485842 , 6613.87927071535 , 6416.87010094936 ,
8377.58040957279 , 7619.04761903668 , 6854.38397146864 , 4435.18962859736 ,
0.0 , 3769.91118430775 , 6031.8578948924 , 6857.142857133 , 7539.8223686155 ,
6031.8578948924 , 6283.18530717958 , 7539.82236861549 , 8796.45943005141 ,
10053.0964914873 , 13571.6802635079 , 17592.9188601028 , 17340.6906327178 ,
13234.7945832081 , 9700.35626371584 , 8487.81173075136 , 7275.26719778688 ,
6062.7226648224 , 5882.13092587025 , 7679.44870877505 , 6984.12698411695 ,
6283.18530717959 , 4065.59049288091 , 0.0 , 3455.75191894877 ,
5529.20307031804 , 6285.71428570525 , 6911.50383789754 , 5529.20307031803 ,
5759.58653158128 , 6911.50383789754 , 8063.42114421379 , 9215.33845053005 ,
12440.7069082156 , 16126.8422884276 , 15764.2642115617 , 12031.6314392801 ,
8818.50569428713 , 7716.19248250124 , 6613.87927071535 , 5511.56605892946 ,
5347.39175079114 , 5463.63939754746 , 4968.94409937174 , 5711.98664289054 ,
3695.99135716446 , 0.0 , 3141.59265358979 , 5026.54824574367 , 4571.428571422
, 5026.54824574367 , 5026.54824574366 , 5235.98775598298 , 6283.18530717958 ,
7330.38285837617 , 8377.58040957277 , 11309.7335529232 , 14660.7657167524 ,
14187.8377904055 , 10828.4682953521 , 7936.65512485842 , 6944.57323425111 ,
5952.49134364381 , 4960.40945303651 , 4812.65257571202 , 4917.27545779272 ,
4472.04968943457 , 4188.79020478639 , 3326.39222144802 , 0.0 ,
2827.43338823081 , 3769.91118430775 , 4114.2857142798 , 4523.8934211693 ,
4523.8934211693 , 4712.38898038468 , 5654.86677646162 , 6597.34457253856 ,
7539.82236861549 , 10178.7601976309 , 13194.6891450771 , 12611.4113692493 ,
9625.30515142405 , 7054.8045554297 , 6172.95398600099 , 5291.10341657228 ,
4409.25284714356 , 4277.91340063291 , 4370.91151803797 , 3975.15527949739 ,
3723.36907092124 , 2956.79308573157 , 0.0 , 2513.27412287184 ,
3351.03216382911 , 3657.1428571376 , 4021.23859659493 , 4021.23859659493 ,
4188.79020478639 , 5026.54824574366 , 5864.30628670094 , 6702.06432765822 ,
9047.7868423386 , 11728.6125734019 , 11034.9849480932 , 8422.14200749604 ,
6172.95398600099 , 5401.33473775087 , 4629.71548950074 , 3858.09624125062 ,
3743.17422555379 , 3310.49548442795 , 3478.26086956022 , 3257.94793705608 ,
2587.19395001512 , 0.0 , 2199.11485751286 , 2932.15314335047 ,
3199.9999999954 , 3078.760800518 , 3518.58377202056 , 3665.19142918809 ,
4398.22971502571 , 5131.26800086332 , 5864.30628670094 , 7916.81348704627 ,
10262.5360017267 , 9458.558526937 , 7218.97886356803 , 5291.10341657228 ,
4629.71548950074 , 3968.32756242921 , 3306.93963535767 , 3208.43505047468 ,
2837.5675580811 , 2981.36645962304 , 2792.52680319093 , 2217.59481429868 ,
0.0 , 1884.95559215388 , 2513.27412287183 , 2742.8571428532 ,
2638.93782901542 , 3015.9289474462 , 3141.59265358979 , 3769.91118430775 ,
4398.2297150257 , 5026.54824574366 , 6785.84013175395 , 8796.45943005141 ,
7882.13210578084 , 6015.81571964003 , 4409.25284714356 , 3858.09624125062 ,
3306.93963535767 , 2755.78302946473 , 2673.69587539557 , 2364.63963173425 ,
2484.47204968587 , 2327.10566932577 , 1847.99567858223 , 0.0 ,
1570.7963267949 , 2094.39510239319 , 2285.714285711 , 2199.11485751285 ,
2513.27412287183 , 2617.99387799149 , 3141.59265358979 , 3665.19142918809 ,
4188.79020478639 , 5654.86677646162 , 7330.38285837618 , 6305.70568462467 ,
4812.65257571202 , 3527.40227771485 , 3086.47699300049 , 3208.43505047468 ,
2673.69587539557 , 2138.95670031645 , 1891.7117053874 , 1987.5776397487 ,
1861.68453546062 , 1478.39654286579 , 0.0 , 1256.63706143592 ,
1675.51608191456 , 1828.5714285688 , 1759.29188601028 , 2010.61929829747 ,
2513.27412287183 , 3015.9289474462 , 2932.15314335047 , 3351.03216382911 ,
4523.8934211693 , 5864.30628670094 , 5463.63939754746 , 3609.48943178402 ,
3208.43505047468 , 2807.38066916535 , 2406.32628785601 , 2005.27190654668 ,
1604.21752523734 , 1639.09181926424 , 1490.68322981152 , 1396.26340159546 ,
1108.79740714934 , 0.0 , 942.477796076938 , 1256.63706143592 ,
1371.4285714266 , 1507.9644737231 , 1507.9644737231 , 1884.95559215387 ,
2261.94671058465 , 2638.93782901542 , 3015.9289474462 , 3392.92006587697 ,
5026.54824574367 , 4654.21133865155 , 2837.5675580811 , 2522.28227384987 ,
2206.99698961863 , 1891.7117053874 , 1576.42642115617 , 1261.14113692493 ,
1092.72787950949 , 993.788819874348 , 930.842267730309 , 739.198271432893 ,
0.0 , 628.318530717959 , 837.758040957278 , 914.2857142844 , 1005.30964914873
, 1172.86125734019 , 1466.07657167524 , 1759.29188601028 , 2052.50720034533 ,
2345.72251468038 , 2638.93782901542 , 4188.79020478639 , 3695.99135716446 ,
3326.39222144802 , 2956.79308573157 , 2587.19395001512 , 2217.59481429868 ,
1847.99567858223 , 1478.39654286579 , 1108.79740714934 , 1008.40336134309 ,
739.198271432893 , 369.599135716446 , 0.0 , 314.159265358979 ,
628.318530717959 , 857.142857141626 , 942.477796076938 , 1256.63706143592 ,
1570.7963267949 , 1884.95559215388 , 2199.11485751286 , 2513.27412287184 ,
2827.43338823081 , 3141.59265358979 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 3141.59265358979 , 2827.43338823081 , 2513.27412287184 ,
2199.11485751286 , 1884.95559215388 , 1570.7963267949 , 1256.63706143592 ,
942.477796076938 , 857.142857141626 , 628.318530717959 , 314.159265358979 ,
0.0 , 369.599135716446 , 739.198271432893 , 1008.40336134309 ,
1108.79740714934 , 1478.39654286579 , 1847.99567858223 , 2217.59481429868 ,
2587.19395001512 , 2956.79308573157 , 3326.39222144802 , 3695.99135716446 ,
4188.79020478639 , 2638.93782901542 , 2345.72251468038 , 2052.50720034533 ,
1759.29188601028 , 1466.07657167524 , 1172.86125734019 , 1005.30964914873 ,
914.2857142844 , 837.758040957278 , 628.318530717959 , 0.0 , 739.198271432893
, 930.842267730309 , 993.788819874348 , 1092.72787950949 , 1261.14113692493 ,
1576.42642115617 , 1891.7117053874 , 2206.99698961863 , 2522.28227384987 ,
2837.5675580811 , 4654.21133865155 , 5026.54824574367 , 3392.92006587697 ,
3015.9289474462 , 2638.93782901542 , 2261.94671058465 , 1884.95559215387 ,
1507.9644737231 , 1507.9644737231 , 1371.4285714266 , 1256.63706143592 ,
942.477796076938 , 0.0 , 1108.79740714934 , 1396.26340159546 ,
1490.68322981152 , 1639.09181926424 , 1604.21752523734 , 2005.27190654668 ,
2406.32628785601 , 2807.38066916535 , 3208.43505047468 , 3609.48943178402 ,
5463.63939754746 , 5864.30628670094 , 4523.8934211693 , 3351.03216382911 ,
2932.15314335047 , 3015.9289474462 , 2513.27412287183 , 2010.61929829747 ,
1759.29188601028 , 1828.5714285688 , 1675.51608191456 , 1256.63706143592 ,
0.0 , 1478.39654286579 , 1861.68453546062 , 1987.5776397487 , 1891.7117053874
, 2138.95670031645 , 2673.69587539557 , 3208.43505047468 , 3086.47699300049 ,
3527.40227771485 , 4812.65257571202 , 6305.70568462467 , 7330.38285837618 ,
5654.86677646162 , 4188.79020478639 , 3665.19142918809 , 3141.59265358979 ,
2617.99387799149 , 2513.27412287183 , 2199.11485751285 , 2285.714285711 ,
2094.39510239319 , 1570.7963267949 , 0.0 , 1847.99567858223 ,
2327.10566932577 , 2484.47204968587 , 2364.63963173425 , 2673.69587539557 ,
2755.78302946473 , 3306.93963535767 , 3858.09624125062 , 4409.25284714356 ,
6015.81571964003 , 7882.13210578084 , 8796.45943005141 , 6785.84013175395 ,
5026.54824574366 , 4398.2297150257 , 3769.91118430775 , 3141.59265358979 ,
3015.9289474462 , 2638.93782901542 , 2742.8571428532 , 2513.27412287183 ,
1884.95559215388 , 0.0 , 2217.59481429868 , 2792.52680319093 ,
2981.36645962304 , 2837.5675580811 , 3208.43505047468 , 3306.93963535767 ,
3968.32756242921 , 4629.71548950074 , 5291.10341657228 , 7218.97886356803 ,
9458.558526937 , 10262.5360017267 , 7916.81348704627 , 5864.30628670094 ,
5131.26800086332 , 4398.22971502571 , 3665.19142918809 , 3518.58377202056 ,
3078.760800518 , 3199.9999999954 , 2932.15314335047 , 2199.11485751286 , 0.0
, 2587.19395001512 , 3257.94793705608 , 3478.26086956022 , 3310.49548442795 ,
3743.17422555379 , 3858.09624125062 , 4629.71548950074 , 5401.33473775087 ,
6172.95398600099 , 8422.14200749604 , 11034.9849480932 , 11728.6125734019 ,
9047.7868423386 , 6702.06432765822 , 5864.30628670094 , 5026.54824574366 ,
4188.79020478639 , 4021.23859659493 , 4021.23859659493 , 3657.1428571376 ,
3351.03216382911 , 2513.27412287184 , 0.0 , 2956.79308573157 ,
3723.36907092124 , 3975.15527949739 , 4370.91151803797 , 4277.91340063291 ,
4409.25284714356 , 5291.10341657228 , 6172.95398600099 , 7054.8045554297 ,
9625.30515142405 , 12611.4113692493 , 13194.6891450771 , 10178.7601976309 ,
7539.82236861549 , 6597.34457253856 , 5654.86677646162 , 4712.38898038468 ,
4523.8934211693 , 4523.8934211693 , 4114.2857142798 , 3769.91118430775 ,
2827.43338823081 , 0.0 , 3326.39222144802 , 4188.79020478639 ,
4472.04968943457 , 4917.27545779272 , 4812.65257571202 , 4960.40945303651 ,
5952.49134364381 , 6944.57323425111 , 7936.65512485842 , 10828.4682953521 ,
14187.8377904055 , 14660.7657167524 , 11309.7335529232 , 8377.58040957277 ,
7330.38285837617 , 6283.18530717958 , 5235.98775598298 , 5026.54824574366 ,
5026.54824574367 , 4571.428571422 , 5026.54824574367 , 3141.59265358979 , 0.0
, 3695.99135716446 , 5711.98664289054 , 4968.94409937174 , 5463.63939754746 ,
5347.39175079114 , 5511.56605892946 , 6613.87927071535 , 7716.19248250124 ,
8818.50569428713 , 12031.6314392801 , 15764.2642115617 , 16126.8422884276 ,
12440.7069082156 , 9215.33845053005 , 8063.42114421379 , 6911.50383789754 ,
5759.58653158128 , 5529.20307031803 , 6911.50383789754 , 6285.71428570525 ,
5529.20307031804 , 3455.75191894877 , 0.0 , 4065.59049288091 ,
6283.18530717959 , 6984.12698411695 , 7679.44870877505 , 5882.13092587025 ,
6062.7226648224 , 7275.26719778688 , 8487.81173075136 , 9700.35626371584 ,
13234.7945832081 , 17340.6906327178 , 17592.9188601028 , 13571.6802635079 ,
10053.0964914873 , 8796.45943005141 , 7539.82236861549 , 6283.18530717958 ,
6031.8578948924 , 7539.8223686155 , 6857.142857133 , 6031.8578948924 ,
3769.91118430775 , 0.0 , 4435.18962859736 , 6854.38397146864 ,
7619.04761903668 , 8377.58040957279 , 6416.87010094936 , 6613.87927071535 ,
7936.65512485842 , 9259.43097900148 , 10582.2068331446 , 14437.9577271361 ,
18917.117053874 , 19058.9954317781 , 14702.6536188002 , 10890.8545324446 ,
9529.49771588903 , 8168.14089933345 , 6806.78408277788 , 6534.51271946676 ,
8168.14089933346 , 7428.57142856075 , 6534.51271946677 , 4084.07044966673 ,
0.0 , 4804.7887643138 , 7425.5826357577 , 8253.9682539564 , 9075.71211037052
, 6951.60927602848 , 7165.03587660829 , 8598.04305192995 , 10031.0502272516 ,
11464.0574025733 , 15641.1208710641 , 20493.5434750302 , 20525.0720034533 ,
15833.6269740925 , 11728.6125734019 , 10262.5360017266 , 8796.45943005141 ,
7330.38285837618 , 7037.16754404113 , 8796.45943005142 , 7999.9999999885 ,
7037.16754404114 , 4398.22971502571 , 0.0 , 5174.38790003025 ,
7996.78130004675 , 8888.88888887612 , 9773.84381116825 , 7486.34845110759 ,
7716.19248250124 , 9259.43097900149 , 10802.6694755017 , 12345.907972002 ,
16844.2840149921 , 22069.9698961863 } , { - 1047.1975511966 , -
942.477796076938 , - 837.758040957278 , - 733.038285837618 , -
628.318530717959 , - 523.598775598299 , - 418.879020478639 , -
314.159265358979 , - 285.714285713875 , - 209.43951023932 , - 104.71975511966
, 0.0 , 104.71975511966 , 209.43951023932 , 285.714285713875 ,
314.159265358979 , 418.879020478639 , 523.598775598299 , 628.318530717959 ,
733.038285837618 , 837.758040957278 , 942.477796076938 , 1047.1975511966 } ,
{ - 280.0 , - 260.0 , - 240.0 , - 220.0 , - 200.0 , - 180.0 , - 160.0 , -
140.0 , - 120.0 , - 100.0 , - 80.0 , - 60.0 , - 40.0 , - 20.0 , 0.0 , 20.0 ,
40.0 , 60.0 , 80.0 , 100.0 , 120.0 , 140.0 , 160.0 , 180.0 , 200.0 , 220.0 ,
240.0 , 260.0 , 280.0 } , 0.0 , 0.0001 , { 22U , 28U } } ; void cdsebpbgwo (
real_T * ponb5z2hzx , had2nm4nh5 * localX ) { localX -> boofytynkf =
a1kqx2ugby . P_7 ; * ponb5z2hzx = a1kqx2ugby . P_3 ; * ponb5z2hzx =
a1kqx2ugby . P_4 ; * ponb5z2hzx = a1kqx2ugby . P_8 ; } void absendw0s0 (
had2nm4nh5 * localX ) { localX -> boofytynkf = a1kqx2ugby . P_7 ; } void
p1zygudiey ( p5veghsq5l * const evs52r32sz , e4ld3xwh5m * localDW ) { switch
( localDW -> nieu1vc5kp ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( evs52r32sz -> _mdlRefSfcnS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( evs52r32sz ->
_mdlRefSfcnS ) ; break ; } localDW -> nieu1vc5kp = - 1 ; } void a1gbom0qkq (
e4ld3xwh5m * localDW ) { localDW -> nieu1vc5kp = - 1 ; } void MotGenEvMapped
( p5veghsq5l * const evs52r32sz , const real_T * m0ompgh13e , const real_T *
kgnmwflo5q , const real_T * m1i5o0ijap , real_T * ponb5z2hzx , real_T *
itrcxc1zrc , dbofzogh4q * localB , e4ld3xwh5m * localDW , had2nm4nh5 * localX
) { int8_T rtPrevAction ; int8_T rtAction ; real_T e10nmeglma_p ; if (
rtmIsMajorTimeStep ( evs52r32sz ) ) { localDW -> pztruslxqu = ( * kgnmwflo5q
>= 0.0 ) ; } localB -> ngx5rsq4kz = localDW -> pztruslxqu > 0 ? * kgnmwflo5q
: - * kgnmwflo5q ; localB -> aqe0o0g4on = 1.0 / a1kqx2ugby . P_0 * localX ->
boofytynkf ; rtPrevAction = localDW -> nieu1vc5kp ; if ( rtmIsMajorTimeStep (
evs52r32sz ) ) { rtAction = ( int8_T ) ! ( localB -> ngx5rsq4kz <= localB ->
nddkmahtub ) ; localDW -> nieu1vc5kp = rtAction ; } else { rtAction = localDW
-> nieu1vc5kp ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( evs52r32sz ->
_mdlRefSfcnS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep
( evs52r32sz -> _mdlRefSfcnS ) ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( evs52r32sz , 0 ) !=
rtmGetTStart ( evs52r32sz ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
evs52r32sz -> _mdlRefSfcnS ) ; } } if ( rtmIsMajorTimeStep ( evs52r32sz ) ) {
localDW -> muul0olaki = localB -> aqe0o0g4on >= a1kqx2ugby . P_2 ? 1 : localB
-> aqe0o0g4on > - a1kqx2ugby . P_2 ? 0 : - 1 ; } * ponb5z2hzx = localDW ->
muul0olaki == 1 ? a1kqx2ugby . P_2 : localDW -> muul0olaki == - 1 ? -
a1kqx2ugby . P_2 : localB -> aqe0o0g4on ; if ( rtmIsMajorTimeStep (
evs52r32sz ) ) { srUpdateBC ( localDW -> nnobr021gq ) ; } break ; case 1 : if
( rtAction != rtPrevAction ) { if ( rtmGetTaskTime ( evs52r32sz , 0 ) !=
rtmGetTStart ( evs52r32sz ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
evs52r32sz -> _mdlRefSfcnS ) ; } } e10nmeglma_p = a1kqx2ugby . P_1 / localB
-> ngx5rsq4kz ; * ponb5z2hzx = look1_binlcpw ( localB -> aqe0o0g4on /
e10nmeglma_p , a1kqx2ugby . P_6 , a1kqx2ugby . P_5 , 1U ) * e10nmeglma_p ; if
( rtmIsMajorTimeStep ( evs52r32sz ) ) { srUpdateBC ( localDW -> p0ylzwrrqf )
; } break ; } if ( rtmIsMajorTimeStep ( evs52r32sz ) ) { localDW ->
gqfece1v41 = * m1i5o0ijap >= a1kqx2ugby . P_12 ? 1 : * m1i5o0ijap >
a1kqx2ugby . P_13 ? 0 : - 1 ; } * itrcxc1zrc = ( * kgnmwflo5q * * ponb5z2hzx
+ look2_binlcapw ( * kgnmwflo5q , * ponb5z2hzx , a1kqx2ugby . P_10 ,
a1kqx2ugby . P_11 , a1kqx2ugby . P_9 , a1kqx2ugby . P_14 , 23U ) ) / (
localDW -> gqfece1v41 == 1 ? a1kqx2ugby . P_12 : localDW -> gqfece1v41 == - 1
? a1kqx2ugby . P_13 : * m1i5o0ijap ) ; localB -> hfcxrde40j = * m0ompgh13e -
localB -> aqe0o0g4on ; } void MotGenEvMappedTID1 ( dbofzogh4q * localB ) {
localB -> nddkmahtub = a1kqx2ugby . P_1 / a1kqx2ugby . P_2 ; } void
l54abfqz2k ( void ) { } void l54abfqz2kTID1 ( void ) { } void bbghji4q0s (
dbofzogh4q * localB , dpukc5flet * localXdot ) { localXdot -> boofytynkf =
localB -> hfcxrde40j ; } void g0mz5raeki ( const real_T * kgnmwflo5q , const
real_T * m1i5o0ijap , dbofzogh4q * localB , e4ld3xwh5m * localDW , chagifxp1o
* localZCSV ) { localZCSV -> eap3jcmmol = * kgnmwflo5q ; localZCSV ->
mnhuwml5kf = 0.0 ; if ( localB -> ngx5rsq4kz <= localB -> nddkmahtub ) {
localZCSV -> mnhuwml5kf = 1.0 ; } { real_T * zcsv = & ( localZCSV ->
eqhqwfrt4n ) ; int_T i ; for ( i = 0 ; i < 2 ; i ++ ) { zcsv [ i ] = 0.0 ; }
} if ( localDW -> nieu1vc5kp == 0 ) { localZCSV -> eqhqwfrt4n = localB ->
aqe0o0g4on - a1kqx2ugby . P_2 ; localZCSV -> aaqqkh1w35 = localB ->
aqe0o0g4on - ( - a1kqx2ugby . P_2 ) ; } localZCSV -> bp30webvxl = *
m1i5o0ijap - a1kqx2ugby . P_12 ; localZCSV -> bgnh4wx5ay = * m1i5o0ijap -
a1kqx2ugby . P_13 ; } void phnn1n2hbt ( p5veghsq5l * const evs52r32sz ) { if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( evs52r32sz ->
_mdlRefSfcnS , "MotGenEvMapped" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void oaswkbqw52 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , p5veghsq5l
* const evs52r32sz , dbofzogh4q * localB , e4ld3xwh5m * localDW , had2nm4nh5
* localX , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T ) ) ; a1kqx2ugby . P_12 =
rtInf ; ( void ) memset ( ( void * ) evs52r32sz , 0 , sizeof ( p5veghsq5l ) )
; evs52r32sz -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; evs52r32sz ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; evs52r32sz -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( evs52r32sz -> _mdlRefSfcnS , "MotGenEvMapped" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> ngx5rsq4kz = 0.0
; localB -> nddkmahtub = 0.0 ; localB -> aqe0o0g4on = 0.0 ; localB ->
hfcxrde40j = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
e4ld3xwh5m ) ) ; MotGenEvMapped_InitializeDataMapInfo ( evs52r32sz , localDW
, localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( evs52r32sz -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
evs52r32sz -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( evs52r32sz -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_MotGenEvMapped_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_MotGenEvMapped , 50 ) ; * retVal = 1 ; } static void
mr_MotGenEvMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_MotGenEvMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_MotGenEvMapped_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_MotGenEvMapped_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_MotGenEvMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_MotGenEvMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_MotGenEvMapped_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MotGenEvMapped_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_MotGenEvMapped_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_MotGenEvMapped_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_MotGenEvMapped_GetDWork ( const
juj5p01hmia * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = { "rtb"
, "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1
, 3 , ssDWFieldNames ) ; mr_MotGenEvMapped_cacheDataAsMxArray ( ssDW , 0 , 0
, & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char
* rtdwDataFieldNames [ 6 ] = { "mdlrefDW->rtdw.pztruslxqu" ,
"mdlrefDW->rtdw.gqfece1v41" , "mdlrefDW->rtdw.muul0olaki" ,
"mdlrefDW->rtdw.nieu1vc5kp" , "mdlrefDW->rtdw.p0ylzwrrqf" ,
"mdlrefDW->rtdw.nnobr021gq" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 6 , rtdwDataFieldNames ) ; mr_MotGenEvMapped_cacheDataAsMxArray (
rtdwData , 0 , 0 , & ( mdlrefDW -> rtdw . pztruslxqu ) , sizeof ( mdlrefDW ->
rtdw . pztruslxqu ) ) ; mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 ,
1 , & ( mdlrefDW -> rtdw . gqfece1v41 ) , sizeof ( mdlrefDW -> rtdw .
gqfece1v41 ) ) ; mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 2 , &
( mdlrefDW -> rtdw . muul0olaki ) , sizeof ( mdlrefDW -> rtdw . muul0olaki )
) ; mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 3 , & ( mdlrefDW ->
rtdw . nieu1vc5kp ) , sizeof ( mdlrefDW -> rtdw . nieu1vc5kp ) ) ;
mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 4 , & ( mdlrefDW ->
rtdw . p0ylzwrrqf ) , sizeof ( mdlrefDW -> rtdw . p0ylzwrrqf ) ) ;
mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 5 , & ( mdlrefDW ->
rtdw . nnobr021gq ) , sizeof ( mdlrefDW -> rtdw . nnobr021gq ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_MotGenEvMapped_SetDWork ( juj5p01hmia * mdlrefDW , const mxArray * ssDW )
{ mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtb ) , ssDW , 0
, 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . pztruslxqu
) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . pztruslxqu ) ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . gqfece1v41
) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . gqfece1v41 ) ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . muul0olaki
) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . muul0olaki ) ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nieu1vc5kp
) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . nieu1vc5kp ) ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . p0ylzwrrqf
) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . p0ylzwrrqf ) ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( & ( mdlrefDW -> rtdw . nnobr021gq
) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . nnobr021gq ) ) ; } } void
mr_MotGenEvMapped_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 1199478802U , 1118052651U , 284892322U , 4181756257U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "MotGenEvMapped" , & chksum [ 0 ]
) ; } mxArray * mr_MotGenEvMapped_GetSimStateDisallowedBlocks ( ) { return
NULL ; }
