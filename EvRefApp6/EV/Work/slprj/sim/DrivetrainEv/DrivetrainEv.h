#include "__cf_DrivetrainEv.h"
#ifndef RTW_HEADER_DrivetrainEv_h_
#define RTW_HEADER_DrivetrainEv_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef DrivetrainEv_COMMON_INCLUDES_
#define DrivetrainEv_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "DrivetrainEv_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "rt_zcfcn.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
typedef struct { real_T i44j3pbzxi [ 5 ] ; real_T mgmwllixta [ 16 ] ; real_T
gvhcivljxw [ 24 ] ; real_T er3f4nu0ud ; real_T kw03jznckt ; } hlukveddmd ;
typedef struct { real_T fwrl5d33ue ; real_T cfn511ixns ; real_T c2tcvdlupx [
3 ] ; real_T p0ctrrjg1g [ 3 ] ; real_T m1x2obzxgs [ 3 ] ; real_T bctfrzpfn4 ;
real_T knzbgayx4u [ 3 ] ; real_T keekitk2is ; real_T hbp3fxpwce ; real_T
fwftdh2zfa ; real_T p05uwbciyv ; real_T fabfeuq1qs ; real_T mj4mgbspyo ;
real_T j5o0xogiyp ; real_T h2ua4dbdss ; real_T exshbe45hf ; real_T cizixps0bi
; real_T osouszsno1 ; real_T ayjk3srvhl ; real_T lqd5jneig0 ; real_T
modkqqewpt ; real_T d5gjruzutb [ 3 ] ; real_T i4ubwswfan ; real_T m1cipc1wpj
[ 2 ] ; real_T n5xguxysiq [ 3 ] ; real_T ogmjg133si ; real_T oillntyhiu ;
real_T alppfr14pu ; real_T edckgj05jg ; real_T nzkiqmkp0c ; real_T gperswtxj0
; real_T kjcmgslufn ; real_T dcld1q5lvl ; real_T oyaiv4tw3h ; real_T
ktrwj0vxj5 ; real_T lennquprki ; real_T h4sl3qngu1 ; real_T hjigd0nww4 [ 12 ]
; real_T ejfbjrcaua [ 2 ] ; boolean_T eqyfsnnb3l ; boolean_T bmg55bqrqj ;
boolean_T b5loyh3lfm ; boolean_T lutbzibltf ; boolean_T eo1zoivqe3 ;
boolean_T caesvv44j1 ; hlukveddmd fydjzmik2n ; hlukveddmd mwkg5r4pmw ; }
pw4f2kjo3k ; typedef struct { real_T m1dxc5kp4b ; real_T jrm4ykfn0y ; int_T
nglaxgjcyd ; int_T e2xhnwpx45 ; int_T huxlbxlfje ; int_T dzaxmxhtir ; int_T
o1gfoqzhn5 ; int_T jhhbegw1rd ; int_T om5dph5kos ; int_T mgtego0m0j ; int_T
lneakfj3ps ; int8_T kboseoe5pa ; int8_T jqdsc4fpta ; int8_T opjj2o1gmu ;
int8_T ee41cva2jk ; int8_T fm1zhcupow ; int8_T afyqfreogx ; int8_T danmrtfrac
; int8_T kr020znbzq ; int8_T pguzoss2zy ; boolean_T i4eqdqhffq ; boolean_T
infhkuxyt3 ; boolean_T npevopjo34 ; boolean_T howyw1324i ; } lvsoqlxlcs ;
typedef struct { real_T i5wjdx1uey [ 2 ] ; real_T p4mfawgeor [ 2 ] ; real_T
edx4uize0w [ 2 ] ; real_T afy2t3vv24 ; real_T dzd4qxegmm ; real_T gvee4crewc
; real_T hqm0ru5wpx ; real_T oh0wzmmyhg ; real_T o4d5jmaj20 ; real_T
gvp3wjuaii ; real_T avikqegq2n ; real_T pclrccjq3k ; real_T pup0e5ztn2 ;
real_T d1rq45csir [ 2 ] ; real_T cxyubynbrf ; real_T howi1ia10i ; }
edp3webv0p ; typedef struct { real_T i5wjdx1uey [ 2 ] ; real_T p4mfawgeor [ 2
] ; real_T edx4uize0w [ 2 ] ; real_T afy2t3vv24 ; real_T dzd4qxegmm ; real_T
gvee4crewc ; real_T hqm0ru5wpx ; real_T oh0wzmmyhg ; real_T o4d5jmaj20 ;
real_T gvp3wjuaii ; real_T avikqegq2n ; real_T pclrccjq3k ; real_T pup0e5ztn2
; real_T d1rq45csir [ 2 ] ; real_T cxyubynbrf ; real_T howi1ia10i ; }
cspbap1de4 ; typedef struct { boolean_T i5wjdx1uey [ 2 ] ; boolean_T
p4mfawgeor [ 2 ] ; boolean_T edx4uize0w [ 2 ] ; boolean_T afy2t3vv24 ;
boolean_T dzd4qxegmm ; boolean_T gvee4crewc ; boolean_T hqm0ru5wpx ;
boolean_T oh0wzmmyhg ; boolean_T o4d5jmaj20 ; boolean_T gvp3wjuaii ;
boolean_T avikqegq2n ; boolean_T pclrccjq3k ; boolean_T pup0e5ztn2 ;
boolean_T d1rq45csir [ 2 ] ; boolean_T cxyubynbrf ; boolean_T howi1ia10i ; }
bbuzvmnhsa ; typedef struct { real_T i5wjdx1uey [ 2 ] ; real_T p4mfawgeor [ 2
] ; real_T edx4uize0w [ 2 ] ; real_T afy2t3vv24 ; real_T dzd4qxegmm ; real_T
gvee4crewc ; real_T hqm0ru5wpx ; real_T oh0wzmmyhg ; real_T o4d5jmaj20 ;
real_T gvp3wjuaii ; real_T avikqegq2n ; real_T pclrccjq3k ; real_T pup0e5ztn2
; real_T d1rq45csir [ 2 ] ; real_T cxyubynbrf ; real_T howi1ia10i ; }
nupxuy3etd ; typedef struct { real_T bbhxbfxv0z ; real_T gwrgeqg4ze ; real_T
bdagzt1wsu ; real_T mtx242vpil ; real_T he2wjrnl2b ; real_T korydwzquq ;
real_T l5devrtwhj ; real_T p10xktv12s ; } pmzuarg20b ; typedef struct {
ZCSigState fgfoi3gqdg ; ZCSigState j2o2f1jd4b ; ZCSigState aesm5oppxx ;
ZCSigState jgxptiecam ; } at3vnbf5fi ; struct okacw1m2bm_ { real_T P_0 ;
real_T P_1 ; } ; struct akbgnuupjzy_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 [ 2 ] ; real_T P_5 [ 2 ] ; real_T P_6 [ 2 ] ; real_T
P_7 ; real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 [ 7 ] ; real_T P_12
[ 7 ] ; real_T P_13 [ 6 ] ; real_T P_14 [ 6 ] ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T
P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ;
real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T
P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ;
real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 [ 2 ] ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ; real_T
P_60 ; real_T P_61 [ 7 ] ; real_T P_62 [ 7 ] ; real_T P_63 [ 6 ] ; real_T
P_64 [ 6 ] ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T
P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ;
real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T
P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ;
real_T P_86 [ 2 ] ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T
P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101
; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ;
real_T P_107 ; real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ;
real_T P_112 ; real_T P_113 ; real_T P_114 [ 2 ] ; real_T P_115 ; real_T
P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T P_120 ; real_T
P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T
P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T
P_131 ; real_T P_132 [ 34 ] ; real_T P_133 [ 3 ] ; real_T P_134 [ 3 ] ;
real_T P_135 [ 9 ] ; real_T P_136 ; real_T P_137 ; real_T P_138 ; real_T
P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T
P_144 ; real_T P_145 ; real_T P_146 [ 3 ] ; real_T P_147 [ 3 ] ; real_T P_148
[ 9 ] ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T
P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 ; real_T
P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ; real_T P_162 ; real_T
P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T P_167 ; real_T
P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T P_172 ; real_T
P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T P_177 ; real_T
P_178 ; real_T P_179 ; real_T P_180 ; real_T P_181 ; real_T P_182 ; real_T
P_183 ; real_T P_184 ; real_T P_185 ; real_T P_186 ; real_T P_187 ; real_T
P_188 ; real_T P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 [ 34 ] ;
real_T P_193 [ 3 ] ; real_T P_194 [ 3 ] ; real_T P_195 [ 9 ] ; real_T P_196 ;
real_T P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ; real_T P_201 ;
real_T P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ; real_T P_206 [ 3
] ; real_T P_207 [ 3 ] ; real_T P_208 [ 9 ] ; real_T P_209 ; real_T P_210 ;
real_T P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ;
real_T P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ;
real_T P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ;
real_T P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ;
real_T P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ;
real_T P_236 [ 3 ] ; real_T P_237 ; real_T P_238 ; real_T P_239 [ 4 ] ;
real_T P_240 ; real_T P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ;
real_T P_245 [ 2 ] ; real_T P_246 ; real_T P_247 ; real_T P_248 ; real_T
P_249 ; boolean_T P_250 ; boolean_T P_251 [ 8 ] ; boolean_T P_252 ; boolean_T
P_253 [ 8 ] ; okacw1m2bm nljcc0osem ; } ; struct kz1ziyy35g { struct
SimStruct_tag * _mdlRefSfcnS ; struct { real_T mr_nonContSig0 [ 1 ] ; real_T
mr_nonContSig1 [ 1 ] ; } NonContDerivMemory ; ssNonContDerivSigInfo
nonContDerivSignal [ 2 ] ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 16 ] ; int32_T * vardimsAddress [
16 ] ; sysRanDType * systemRan [ 15 ] ; int_T systemTid [ 15 ] ; }
DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ; typedef
struct { pw4f2kjo3k rtb ; lvsoqlxlcs rtdw ; hcopmldpph rtm ; at3vnbf5fi rtzce
; } hmke5fx3tcj ; extern void ktxb3gprz3 ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 , hcopmldpph * const
a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, at3vnbf5fi * localZCE , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_DrivetrainEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_DrivetrainEv_GetDWork ( const
hmke5fx3tcj * mdlrefDW ) ; extern void mr_DrivetrainEv_SetDWork ( hmke5fx3tcj
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_DrivetrainEv_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DrivetrainEv_GetCAPIStaticMap ( void ) ;
extern void fovt1kgxhn ( real_T grnu4cdzrn , real_T eqcuangv4g , real_T
f03onhqa3z , real_T kkk5nbc33q , real_T defef0gmnf , real_T ny3huf4tfs ,
real_T d5sljmc3mp , real_T fp5plqhb4a , real_T ez2jlx2syk , const real_T
exem25bc5p [ 34 ] , const real_T k1uhu13xaz [ 3 ] , const real_T pnpvnsx342 [
3 ] , const real_T oaz05kokeu [ 9 ] , real_T lxywhmx0q2 , real_T htfwh552yf ,
real_T mlluugkyxd , real_T jpkq4pce51 , real_T kdaswub2di , real_T lmsqu4eju2
, real_T bdtvgdjbwl , real_T dhj0ugsuyc , real_T b4k3qcmmjt , real_T
b5s2dkbhul , real_T mpxd3jsbqa , real_T hss4j51wiy , real_T par3uvbfbt ,
real_T ed5knztqnd , real_T h0pzjew1oe , real_T n43prfxi1e , const real_T
gyhkv2uppk [ 3 ] , const real_T jfyynntvs1 [ 3 ] , const real_T jca3w0mi1m [
9 ] , real_T gca3a4pmvh , real_T m5kw3zzyck , real_T k4scoixskc , real_T
lroqnwxlph , real_T gjkln52f2u , real_T gp2hl4rh0w , real_T blticsvdi1 ,
real_T lcwax3gh4h , real_T e1payipgej , real_T bgkxd11npp , real_T iffmh4qory
, real_T ezwrh4c4q0 , real_T kve4wob1ey , real_T cvs0c3twqi , real_T
c2sb5mzbkt , real_T c3t4hr1lkw , real_T ek2fncxt2d , real_T ly0z1o1qi2 ,
real_T mhbaojjcp5 , real_T j0y0p05no3 , real_T lrof3gdtab , real_T krupcmtako
, real_T mahjxzalu2 , real_T capxpimbcm , real_T j5smfwvkpy , hlukveddmd *
localB , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW , real_T
rtp_kappamax ) ; extern void eqyc2wn3m1 ( hcopmldpph * const a5ree4wwe5 ,
pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX ) ; extern
void er1nyhy4k5 ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW ,
edp3webv0p * localX ) ; extern void ka5dospcnh ( pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW ) ; extern void a2spfqi5as ( pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX , cspbap1de4 * localXdot ) ;
extern void ehifyxeeav ( pw4f2kjo3k * localB , pmzuarg20b * localZCSV ) ;
extern void gjrktinair ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW
, bbuzvmnhsa * localXdis ) ; extern void ekz3w3o33e ( hcopmldpph * const
a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW ) ; extern void
ekz3w3o33eTID2 ( void ) ; extern void DrivetrainEv ( hcopmldpph * const
a5ree4wwe5 , const real_T * a10dw5c4tm , const real_T * btli3rd3in , const
real_T * dxefyqzind , const real_T * iudgegw2lz , real_T * hk0t0gzq0m ,
real_T * jnhw4b1r4n , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p
* localX , at3vnbf5fi * localZCE , bbuzvmnhsa * localXdis ) ; extern void
DrivetrainEvTID2 ( pw4f2kjo3k * localB ) ; extern void ekywbf3nku (
hcopmldpph * const a5ree4wwe5 ) ;
#endif
