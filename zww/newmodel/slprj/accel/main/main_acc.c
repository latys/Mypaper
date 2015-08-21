#include "__cf_main.h"
#include <math.h>
#include "main_acc.h"
#include "main_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { uint32_T lo ; uint32_T
hi ; lo = * u % 127773U * 16807U ; hi = * u / 127773U * 2836U ; if ( lo < hi
) { * u = 2147483647U - ( hi - lo ) ; } else { * u = lo - hi ; } return (
real_T ) * u * 4.6566128752457969E-10 ; } real_T rt_nrand_Upu32_Yd_f_pw_snf (
uint32_T * u ) { real_T sr ; real_T si ; do { sr = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; return muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) /
si ) * sr ; } static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T
B_1_12_0 ; real_T B_0_0_0 ; real_T B_0_8_0 ; real_T B_0_18_0 ; real_T B_0_3_0
; real_T B_0_6_0 ; real_T B_0_10_0 ; BlockIO_main * _rtB ; Parameters_main *
_rtP ; D_Work_main * _rtDW ; _rtDW = ( ( D_Work_main * ) ssGetRootDWork ( S )
) ; _rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 1 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 1 , SS_CALL_MDL_OUTPUTS ) ; } _rtB -> B_1_2_0 =
_rtB -> B_1_0_0 [ 2 ] * _rtB -> B_1_0_0 [ 1 ] ; if ( ssIsSampleHit ( S , 1 ,
0 ) ) { ssCallAccelRunBlock ( S , 1 , 3 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
B_1_4_0 = _rtP -> P_52 ; } _rtB -> B_1_5_0 = _rtB -> B_1_4_0 - _rtB ->
B_1_0_0 [ 1 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S
, 1 , 6 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 7 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 8 , SS_CALL_MDL_OUTPUTS
) ; } B_0_0_0 = ( _rtP -> P_2 [ 0 ] ) * ( ( ContinuousStates_main * )
ssGetContStates ( S ) ) -> HarmonicFilter_CSTATE [ 0 ] + ( _rtP -> P_2 [ 1 ]
) * ( ( ContinuousStates_main * ) ssGetContStates ( S ) ) ->
HarmonicFilter_CSTATE [ 1 ] ; B_0_8_0 = ( _rtP -> P_7 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_1_CSTATE
[ 0 ] + ( _rtP -> P_7 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates
( S ) ) -> HarmonicFilter_1_CSTATE [ 1 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) )
{ _rtB -> B_0_2_0 = _rtDW -> UnitDelay_DSTATE ; } B_0_3_0 = B_0_8_0 * _rtB ->
B_0_2_0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_0_4_0 = _rtDW ->
UnitDelay1_DSTATE ; } B_0_8_0 = ( _rtP -> P_14 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_2_CSTATE
[ 0 ] + ( _rtP -> P_14 [ 1 ] ) * ( ( ContinuousStates_main * )
ssGetContStates ( S ) ) -> HarmonicFilter_2_CSTATE [ 1 ] ; B_0_6_0 = _rtB ->
B_0_4_0 * B_0_8_0 ; B_0_8_0 = ssGetT ( S ) ; if ( ssIsSampleHit ( S , 1 , 0 )
) { _rtB -> B_0_9_0 = _rtP -> P_17 ; } B_0_10_0 = _rtP -> P_18 * _rtB ->
B_1_0_0 [ 1 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_0_11_0 = _rtDW
-> UnitDelay_DSTATE_j ; } B_0_18_0 = ( _rtP -> P_22 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_j [ 0
] + ( _rtP -> P_22 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates (
S ) ) -> TransferFcn_CSTATE_j [ 1 ] ; B_0_18_0 += _rtP -> P_23 * ( (
BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_11_0 ; _rtB -> B_0_13_0 = _rtP
-> P_25 * B_0_18_0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> B_0_14_0 =
_rtDW -> UnitDelay_DSTATE_f ; } B_0_18_0 = ( _rtP -> P_29 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFunction_CSTATE
[ 0 ] + ( _rtP -> P_29 [ 1 ] ) * ( ( ContinuousStates_main * )
ssGetContStates ( S ) ) -> TransferFunction_CSTATE [ 1 ] ; B_0_18_0 += _rtP
-> P_30 * ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_14_0 ; _rtB ->
B_0_16_0 = _rtP -> P_32 * B_0_18_0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtB -> B_0_17_0 = _rtDW -> UnitDelay_DSTATE_m ; } B_0_18_0 = ( _rtP -> P_36
[ 0 ] ) * ( ( ContinuousStates_main * ) ssGetContStates ( S ) ) ->
TransferFcn_CSTATE_g [ 0 ] + ( _rtP -> P_36 [ 1 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_g [ 1
] ; B_0_18_0 += _rtP -> P_37 * ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) ->
B_0_17_0 ; _rtB -> B_0_19_0 = _rtP -> P_39 * B_0_18_0 ; _rtB -> B_0_21_0 = (
_rtB -> B_0_9_0 + B_0_0_0 ) + ( B_0_3_0 + B_0_6_0 ) ; if ( ssIsSampleHit ( S
, 1 , 0 ) ) { _rtB -> B_0_23_0 = _rtP -> P_43 * _rtDW -> NextOutput ; _rtB ->
B_0_25_0 = _rtP -> P_47 * _rtDW -> NextOutput_h ; _rtB -> B_0_27_0 = _rtP ->
P_51 * _rtDW -> NextOutput_c ; } _rtB -> B_0_28_0 = muDoubleScalarCos ( 3.0 *
B_0_10_0 * B_0_8_0 ) * 1.4142135623730951 ; _rtB -> B_0_29_0 =
muDoubleScalarSin ( 3.0 * B_0_10_0 * B_0_8_0 ) * 1.4142135623730951 ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 1 , 10 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_1_11_0 = _rtDW -> Delay_DSTATE ; } B_1_12_0
= _rtP -> P_56 * ( ( ContinuousStates_main * ) ssGetContStates ( S ) ) ->
TransferFcn_CSTATE ; ssCallAccelRunBlock ( S , 1 , 13 , SS_CALL_MDL_OUTPUTS )
; _rtB -> B_1_14_0 = _rtB -> B_1_13_0 - B_1_12_0 ; _rtB -> B_1_15_0 [ 0 ] =
_rtB -> B_0_21_0 ; _rtB -> B_1_15_0 [ 1 ] = B_1_12_0 ; ( ( BlockIO_main * )
_ssGetBlockIO ( S ) ) -> B_1_16_0 = ssGetT ( S ) ; if ( ssIsSampleHit ( S , 1
, 0 ) ) { ssCallAccelRunBlock ( S , 1 , 17 , SS_CALL_MDL_OUTPUTS ) ; } if (
ssGetTaskTime ( S , 0 ) < _rtP -> P_59 ) { _rtB -> B_1_18_0 = _rtP -> P_60 ;
} else { _rtB -> B_1_18_0 = _rtP -> P_61 ; } ssCallAccelRunBlock ( S , 1 , 19
, SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 1 , 20 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 1 , 21 , SS_CALL_MDL_OUTPUTS ) ; } UNUSED_PARAMETER
( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { BlockIO_main * _rtB ;
Parameters_main * _rtP ; D_Work_main * _rtDW ; _rtDW = ( ( D_Work_main * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S
) ) ; _rtB = ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock
( S , 1 , 0 , SS_CALL_MDL_UPDATE ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
_rtDW -> UnitDelay_DSTATE = _rtB -> B_0_28_0 ; _rtDW -> UnitDelay1_DSTATE =
_rtB -> B_0_29_0 ; } if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtDW ->
UnitDelay_DSTATE_j = _rtB -> B_0_23_0 ; } if ( ssIsSampleHit ( S , 1 , 0 ) )
{ _rtDW -> UnitDelay_DSTATE_f = _rtB -> B_0_25_0 ; } if ( ssIsSampleHit ( S ,
1 , 0 ) ) { _rtDW -> UnitDelay_DSTATE_m = _rtB -> B_0_27_0 ; } if (
ssIsSampleHit ( S , 1 , 0 ) ) { _rtDW -> NextOutput =
rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed ) * _rtP -> P_41 + _rtP ->
P_40 ; _rtDW -> NextOutput_h = rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW ->
RandSeed_p ) * _rtP -> P_45 + _rtP -> P_44 ; _rtDW -> NextOutput_c =
rt_nrand_Upu32_Yd_f_pw_snf ( & _rtDW -> RandSeed_n ) * _rtP -> P_49 + _rtP ->
P_48 ; _rtDW -> Delay_DSTATE = _rtB -> B_1_14_0 ; } UNUSED_PARAMETER ( tid )
; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { BlockIO_main * _rtB ;
Parameters_main * _rtP ; _rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S
) ) ; _rtB = ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock
( S , 1 , 0 , SS_CALL_MDL_DERIVATIVES ) ; { ( ( StateDerivatives_main * )
ssGetdX ( S ) ) -> HarmonicFilter_CSTATE [ 0 ] = ( _rtP -> P_0 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_CSTATE [
0 ] + ( _rtP -> P_0 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates (
S ) ) -> HarmonicFilter_CSTATE [ 1 ] ; ( ( StateDerivatives_main * ) ssGetdX
( S ) ) -> HarmonicFilter_CSTATE [ 0 ] += _rtP -> P_1 * ( ( BlockIO_main * )
_ssGetBlockIO ( S ) ) -> B_0_13_0 ; ( ( StateDerivatives_main * ) ssGetdX ( S
) ) -> HarmonicFilter_CSTATE [ 1 ] = ( _rtP -> P_0 [ 2 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_CSTATE [
0 ] ; } { ( ( StateDerivatives_main * ) ssGetdX ( S ) ) ->
HarmonicFilter_1_CSTATE [ 0 ] = ( _rtP -> P_5 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_1_CSTATE
[ 0 ] + ( _rtP -> P_5 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates
( S ) ) -> HarmonicFilter_1_CSTATE [ 1 ] ; ( ( StateDerivatives_main * )
ssGetdX ( S ) ) -> HarmonicFilter_1_CSTATE [ 0 ] += _rtP -> P_6 * ( (
BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_16_0 ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> HarmonicFilter_1_CSTATE [ 1 ] =
( _rtP -> P_5 [ 2 ] ) * ( ( ContinuousStates_main * ) ssGetContStates ( S ) )
-> HarmonicFilter_1_CSTATE [ 0 ] ; } { ( ( StateDerivatives_main * ) ssGetdX
( S ) ) -> HarmonicFilter_2_CSTATE [ 0 ] = ( _rtP -> P_12 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> HarmonicFilter_2_CSTATE
[ 0 ] + ( _rtP -> P_12 [ 1 ] ) * ( ( ContinuousStates_main * )
ssGetContStates ( S ) ) -> HarmonicFilter_2_CSTATE [ 1 ] ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> HarmonicFilter_2_CSTATE [ 0 ] +=
_rtP -> P_13 * ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_19_0 ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> HarmonicFilter_2_CSTATE [ 1 ] =
( _rtP -> P_12 [ 2 ] ) * ( ( ContinuousStates_main * ) ssGetContStates ( S )
) -> HarmonicFilter_2_CSTATE [ 0 ] ; } { ( ( StateDerivatives_main * )
ssGetdX ( S ) ) -> TransferFcn_CSTATE_j [ 0 ] = ( _rtP -> P_20 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_j [ 0
] + ( _rtP -> P_20 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates (
S ) ) -> TransferFcn_CSTATE_j [ 1 ] ; ( ( StateDerivatives_main * ) ssGetdX (
S ) ) -> TransferFcn_CSTATE_j [ 0 ] += _rtP -> P_21 * ( ( BlockIO_main * )
_ssGetBlockIO ( S ) ) -> B_0_11_0 ; ( ( StateDerivatives_main * ) ssGetdX ( S
) ) -> TransferFcn_CSTATE_j [ 1 ] = ( _rtP -> P_20 [ 2 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_j [ 0
] ; } { ( ( StateDerivatives_main * ) ssGetdX ( S ) ) ->
TransferFunction_CSTATE [ 0 ] = ( _rtP -> P_27 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFunction_CSTATE
[ 0 ] + ( _rtP -> P_27 [ 1 ] ) * ( ( ContinuousStates_main * )
ssGetContStates ( S ) ) -> TransferFunction_CSTATE [ 1 ] ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> TransferFunction_CSTATE [ 0 ] +=
_rtP -> P_28 * ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_14_0 ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> TransferFunction_CSTATE [ 1 ] =
( _rtP -> P_27 [ 2 ] ) * ( ( ContinuousStates_main * ) ssGetContStates ( S )
) -> TransferFunction_CSTATE [ 0 ] ; } { ( ( StateDerivatives_main * )
ssGetdX ( S ) ) -> TransferFcn_CSTATE_g [ 0 ] = ( _rtP -> P_34 [ 0 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_g [ 0
] + ( _rtP -> P_34 [ 1 ] ) * ( ( ContinuousStates_main * ) ssGetContStates (
S ) ) -> TransferFcn_CSTATE_g [ 1 ] ; ( ( StateDerivatives_main * ) ssGetdX (
S ) ) -> TransferFcn_CSTATE_g [ 0 ] += _rtP -> P_35 * ( ( BlockIO_main * )
_ssGetBlockIO ( S ) ) -> B_0_17_0 ; ( ( StateDerivatives_main * ) ssGetdX ( S
) ) -> TransferFcn_CSTATE_g [ 1 ] = ( _rtP -> P_34 [ 2 ] ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE_g [ 0
] ; } { ( ( StateDerivatives_main * ) ssGetdX ( S ) ) -> TransferFcn_CSTATE =
( _rtP -> P_54 ) * ( ( ContinuousStates_main * ) ssGetContStates ( S ) ) ->
TransferFcn_CSTATE ; ( ( StateDerivatives_main * ) ssGetdX ( S ) ) ->
TransferFcn_CSTATE += _rtP -> P_55 * ( ( BlockIO_main * ) _ssGetBlockIO ( S )
) -> B_1_13_0 ; } } static void mdlInitializeSizes ( SimStruct * S ) {
ssSetChecksumVal ( S , 0 , 3265941446U ) ; ssSetChecksumVal ( S , 1 ,
311567202U ) ; ssSetChecksumVal ( S , 2 , 1538613934U ) ; ssSetChecksumVal (
S , 3 , 3466343086U ) ; { mxArray * slVerStructMat = NULL ; mxArray *
slStrMat = mxCreateString ( "simulink" ) ; char slVerChar [ 10 ] ; int status
= mexCallMATLAB ( 1 , & slVerStructMat , 1 , & slStrMat , "ver" ) ; if (
status == 0 ) { mxArray * slVerMat = mxGetField ( slVerStructMat , 0 ,
"Version" ) ; if ( slVerMat == NULL ) { status = 1 ; } else { status =
mxGetString ( slVerMat , slVerChar , 10 ) ; } } mxDestroyArray ( slStrMat ) ;
mxDestroyArray ( slVerStructMat ) ; if ( ( status == 1 ) || ( strcmp (
slVerChar , "8.0" ) != 0 ) ) { return ; } } ssSetOptions ( S ,
SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork ( S ) != sizeof (
D_Work_main ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( BlockIO_main ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
Parameters_main ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & main_rtDefaultParameters ) ; rt_InitInfAndNaN ( sizeof ( real_T
) ) ; } static void mdlInitializeSampleTimes ( SimStruct * S ) { } static
void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
