#ifndef __new_lv_try2_sfun_h__
#define __new_lv_try2_sfun_h__

/* Include files */
#define S_FUNCTION_NAME                sf_sfun
#include "sfc_sf.h"
#include "sfc_mex.h"
#ifdef __cplusplus

extern "C" {

#endif

#include "template_support_fcn_list.h"
#ifdef __cplusplus

}
#endif

#include "sfcdebug.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (MAX_uint8_T)

/* Variable Declarations */
extern uint8_T _sfEvent_;
extern uint32_T _new_lv_try2MachineNumber_;
extern real_T _sfTime_;

/* Variable Definitions */

/* Function Declarations */
void new_lv_try2_initializer(void);
void new_lv_try2_terminator(void);

/* Function Definitions */
#endif
