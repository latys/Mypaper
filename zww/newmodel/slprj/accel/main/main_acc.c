#include "__cf_main.h"
#include <math.h>
#include "main_acc.h"
#include "main_acc_private.h"
#include <stdio.h>
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T B_0_15_0 ;
real_T currentTime ; BlockIO_main * _rtB ; Parameters_main * _rtP ;
D_Work_main * _rtDW ; _rtDW = ( ( D_Work_main * ) ssGetRootDWork ( S ) ) ;
_rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S ) ) ; _rtB = ( (
BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 0 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 0 , 1 , SS_CALL_MDL_OUTPUTS ) ; } _rtB -> B_0_2_0 =
_rtB -> B_0_0_0 [ 2 ] * _rtB -> B_0_0_0 [ 1 ] ; if ( ssIsSampleHit ( S , 1 ,
0 ) ) { ssCallAccelRunBlock ( S , 0 , 3 , SS_CALL_MDL_OUTPUTS ) ; } ( (
BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_4_0 = ssGetT ( S ) ; if (
ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 0 , 5 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_6_0 = _rtP -> P_0 ; } _rtB -> B_0_7_0 =
_rtB -> B_0_6_0 - _rtB -> B_0_0_0 [ 1 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) )
{ ssCallAccelRunBlock ( S , 0 , 8 , SS_CALL_MDL_OUTPUTS ) ;
ssCallAccelRunBlock ( S , 0 , 9 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock
( S , 0 , 10 , SS_CALL_MDL_OUTPUTS ) ; } currentTime = ssGetTaskTime ( S , 0
) ; if ( currentTime < _rtP -> P_1 ) { _rtB -> B_0_11_0 = _rtP -> P_2 ; }
else { _rtB -> B_0_11_0 = _rtP -> P_3 ; } ssCallAccelRunBlock ( S , 0 , 12 ,
SS_CALL_MDL_OUTPUTS ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) {
ssCallAccelRunBlock ( S , 0 , 13 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_14_0 =
_rtDW -> Delay_DSTATE ; } B_0_15_0 = _rtP -> P_7 * ( ( ContinuousStates_main
* ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE ; ssCallAccelRunBlock ( S ,
0 , 16 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> B_0_17_0 = _rtB -> B_0_16_0 -
B_0_15_0 ; _rtB -> B_0_18_0 [ 0 ] = _rtB -> B_0_12_0 ; _rtB -> B_0_18_0 [ 1 ]
= B_0_15_0 ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { ssCallAccelRunBlock ( S , 0
, 19 , SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 0 , 20 ,
SS_CALL_MDL_OUTPUTS ) ; } UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { BlockIO_main * _rtB ;
Parameters_main * _rtP ; _rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S
) ) ; _rtB = ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock
( S , 0 , 0 , SS_CALL_MDL_UPDATE ) ; if ( ssIsSampleHit ( S , 1 , 0 ) ) { ( (
D_Work_main * ) ssGetRootDWork ( S ) ) -> Delay_DSTATE = _rtB -> B_0_17_0 ; }
UNUSED_PARAMETER ( tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { BlockIO_main * _rtB ;
Parameters_main * _rtP ; _rtP = ( ( Parameters_main * ) ssGetDefaultParam ( S
) ) ; _rtB = ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock
( S , 0 , 0 , SS_CALL_MDL_DERIVATIVES ) ; { ( ( StateDerivatives_main * )
ssGetdX ( S ) ) -> TransferFcn_CSTATE = ( _rtP -> P_5 ) * ( (
ContinuousStates_main * ) ssGetContStates ( S ) ) -> TransferFcn_CSTATE ; ( (
StateDerivatives_main * ) ssGetdX ( S ) ) -> TransferFcn_CSTATE += _rtP ->
P_6 * ( ( BlockIO_main * ) _ssGetBlockIO ( S ) ) -> B_0_16_0 ; } } static
void mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 ,
3089498090U ) ; ssSetChecksumVal ( S , 1 , 49919693U ) ; ssSetChecksumVal ( S
, 2 , 412083875U ) ; ssSetChecksumVal ( S , 3 , 3370502334U ) ; { mxArray *
slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" ) ;
char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1
, & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField
( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; }
else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; } }
mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.0" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( D_Work_main ) ) { ssSetErrorStatus ( S ,
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
