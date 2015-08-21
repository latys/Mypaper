#include "__cf_main.h"
#ifndef RTW_HEADER_main_acc_h_
#define RTW_HEADER_main_acc_h_
#ifndef main_acc_COMMON_INCLUDES_
#define main_acc_COMMON_INCLUDES_
#include <stdlib.h>
#include <stddef.h>
#define S_FUNCTION_NAME simulink_only_sfcn 
#define S_FUNCTION_LEVEL 2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#endif
#include "main_acc_types.h"
typedef struct { real_T B_1_0_0 [ 3 ] ; real_T B_1_2_0 ; real_T B_1_4_0 ;
real_T B_1_5_0 ; real_T B_1_11_0 ; real_T B_1_13_0 ; real_T B_1_14_0 ; real_T
B_1_15_0 [ 2 ] ; real_T B_1_16_0 ; real_T B_1_19_0 ; real_T B_0_2_0 ; real_T
B_0_4_0 ; real_T B_0_9_0 ; real_T B_0_11_0 ; real_T B_0_13_0 ; real_T
B_0_14_0 ; real_T B_0_16_0 ; real_T B_0_17_0 ; real_T B_0_19_0 ; real_T
B_0_21_0 ; real_T B_0_23_0 ; real_T B_0_25_0 ; real_T B_0_27_0 ; real_T
B_0_28_0 ; real_T B_0_29_0 ; real_T B_1_18_0 ; } BlockIO_main ; typedef
struct { real_T Delay_DSTATE ; real_T UnitDelay_DSTATE ; real_T
UnitDelay1_DSTATE ; real_T UnitDelay_DSTATE_j ; real_T UnitDelay_DSTATE_f ;
real_T UnitDelay_DSTATE_m ; real_T NextOutput ; real_T NextOutput_h ; real_T
NextOutput_c ; struct { void * LoggedData ; } Scope1_PWORK ; struct { void *
LoggedData ; } Scope2_PWORK ; void * ToWorkspace1_PWORK ; void *
ToWorkspace2_PWORK ; void * ToWorkspace3_PWORK ; void * ToWorkspace5_PWORK ;
void * ToWorkspace_PWORK ; struct { void * LoggedData ; } Scope_PWORK ; void
* ToWorkspace4_PWORK ; uint32_T RandSeed ; uint32_T RandSeed_p ; uint32_T
RandSeed_n ; } D_Work_main ; typedef struct { real_T SFunction2_CSTATE [ 2 ]
; real_T TransferFcn_CSTATE ; real_T HarmonicFilter_CSTATE [ 2 ] ; real_T
HarmonicFilter_1_CSTATE [ 2 ] ; real_T HarmonicFilter_2_CSTATE [ 2 ] ; real_T
TransferFcn_CSTATE_j [ 2 ] ; real_T TransferFunction_CSTATE [ 2 ] ; real_T
TransferFcn_CSTATE_g [ 2 ] ; } ContinuousStates_main ; typedef struct {
real_T SFunction2_CSTATE [ 2 ] ; real_T TransferFcn_CSTATE ; real_T
HarmonicFilter_CSTATE [ 2 ] ; real_T HarmonicFilter_1_CSTATE [ 2 ] ; real_T
HarmonicFilter_2_CSTATE [ 2 ] ; real_T TransferFcn_CSTATE_j [ 2 ] ; real_T
TransferFunction_CSTATE [ 2 ] ; real_T TransferFcn_CSTATE_g [ 2 ] ; }
StateDerivatives_main ; typedef struct { boolean_T SFunction2_CSTATE [ 2 ] ;
boolean_T TransferFcn_CSTATE ; boolean_T HarmonicFilter_CSTATE [ 2 ] ;
boolean_T HarmonicFilter_1_CSTATE [ 2 ] ; boolean_T HarmonicFilter_2_CSTATE [
2 ] ; boolean_T TransferFcn_CSTATE_j [ 2 ] ; boolean_T
TransferFunction_CSTATE [ 2 ] ; boolean_T TransferFcn_CSTATE_g [ 2 ] ; }
StateDisabled_main ; struct Parameters_main_ { real_T P_0 [ 3 ] ; real_T P_1
; real_T P_2 [ 2 ] ; real_T P_5 [ 3 ] ; real_T P_6 ; real_T P_7 [ 2 ] ;
real_T P_10 ; real_T P_11 ; real_T P_12 [ 3 ] ; real_T P_13 ; real_T P_14 [ 2
] ; real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 [ 3 ] ; real_T P_21
; real_T P_22 [ 2 ] ; real_T P_23 ; real_T P_25 ; real_T P_26 ; real_T P_27 [
3 ] ; real_T P_28 ; real_T P_29 [ 2 ] ; real_T P_30 ; real_T P_32 ; real_T
P_33 ; real_T P_34 [ 3 ] ; real_T P_35 ; real_T P_36 [ 2 ] ; real_T P_37 ;
real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 ; real_T P_56 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; uint32_T P_62
; char pad_P_62 [ 4 ] ; } ; extern Parameters_main main_rtDefaultParameters ;
#endif
