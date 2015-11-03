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
#include "rt_defines.h"
#include "rt_nonfinite.h"
#endif
#include "main_acc_types.h"
typedef struct { real_T B_0_0_0 [ 3 ] ; real_T B_0_2_0 ; real_T B_0_4_0 ;
real_T B_0_6_0 ; real_T B_0_7_0 ; real_T B_0_12_0 ; real_T B_0_14_0 ; real_T
B_0_16_0 ; real_T B_0_17_0 ; real_T B_0_18_0 [ 2 ] ; real_T B_0_11_0 ; }
BlockIO_main ; typedef struct { real_T Delay_DSTATE ; struct { void *
LoggedData ; } Scope1_PWORK ; struct { void * LoggedData ; } Scope2_PWORK ;
void * ToWorkspace_PWORK ; void * ToWorkspace1_PWORK ; void *
ToWorkspace2_PWORK ; void * ToWorkspace3_PWORK ; void * ToWorkspace5_PWORK ;
struct { void * LoggedData ; } Scope_PWORK ; void * ToWorkspace4_PWORK ; char
pad_ToWorkspace4_PWORK [ 4 ] ; } D_Work_main ; typedef struct { real_T
SFunction2_CSTATE [ 2 ] ; real_T TransferFcn_CSTATE ; } ContinuousStates_main
; typedef struct { real_T SFunction2_CSTATE [ 2 ] ; real_T TransferFcn_CSTATE
; } StateDerivatives_main ; typedef struct { boolean_T SFunction2_CSTATE [ 2
] ; boolean_T TransferFcn_CSTATE ; } StateDisabled_main ; struct
Parameters_main_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T
P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; uint32_T P_10 ; char pad_P_10 [
4 ] ; } ; extern Parameters_main main_rtDefaultParameters ;
#endif
