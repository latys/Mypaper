#ifndef __c1_new_lv_trygenerator_mode1_h__
#define __c1_new_lv_trygenerator_mode1_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"

/* Type Definitions */
typedef struct {
  char *context;
  char *name;
  char *dominantType;
  char *resolved;
  uint32_T fileLength;
  uint32_T fileTime1;
  uint32_T fileTime2;
} c1_ResolvedFunctionInfo;

typedef struct {
  SimStruct *S;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  boolean_T c1_doneDoubleBufferReInit;
  uint8_T c1_is_active_c1_new_lv_trygenerator_mode1;
  ChartInfoStruct chartInfo;
} SFc1_new_lv_trygenerator_mode1InstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
const mxArray *sf_c1_new_lv_trygenerator_mode1_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c1_new_lv_trygenerator_mode1_get_check_sum(mxArray *plhs[]);
extern void c1_new_lv_trygenerator_mode1_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
