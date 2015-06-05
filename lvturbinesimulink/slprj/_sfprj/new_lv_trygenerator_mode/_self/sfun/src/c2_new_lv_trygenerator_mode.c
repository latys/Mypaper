/* Include files */

#include "new_lv_trygenerator_mode_sfun.h"
#include "c2_new_lv_trygenerator_mode.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance.instanceNumber)
#include "new_lv_trygenerator_mode_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_new_lv_trygenerator_modeInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_new_lv_trygenerator_mode(void);
static void initialize_params_c2_new_lv_trygenerator_mode(void);
static void enable_c2_new_lv_trygenerator_mode(void);
static void disable_c2_new_lv_trygenerator_mode(void);
static void finalize_c2_new_lv_trygenerator_mode(void);
static void sf_c2_new_lv_trygenerator_mode(void);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static void c2_eml_warning(void);
static real_T c2_mpower(real_T c2_a);
static void c2_eml_error(void);
static const mxArray *c2_sf_marshall(void *c2_chartInstance, void *c2_u);
static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[42]);
static void init_dsm_address_info(void);

/* Function Definitions */
static void initialize_c2_new_lv_trygenerator_mode(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c2_is_active_c2_new_lv_trygenerator_mode = 0U;
}

static void initialize_params_c2_new_lv_trygenerator_mode(void)
{
}

static void enable_c2_new_lv_trygenerator_mode(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void disable_c2_new_lv_trygenerator_mode(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void finalize_c2_new_lv_trygenerator_mode(void)
{
}

static void sf_c2_new_lv_trygenerator_mode(void)
{
  uint8_T c2_previousEvent;
  real_T c2_Wg;
  real_T c2_W1;
  real_T c2_nargout = 1.0;
  real_T c2_nargin = 2.0;
  real_T c2_Te;
  real_T c2_A;
  real_T c2_a;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_A;
  real_T c2_B;
  real_T c2_x;
  real_T c2_y;
  real_T c2_b_x;
  real_T c2_b_y;
  real_T c2_c_x;
  real_T c2_c_y;
  real_T c2_d_y;
  real_T c2_b_b;
  real_T c2_b_B;
  real_T c2_d_x;
  real_T c2_e_y;
  real_T c2_e_x;
  real_T c2_f_y;
  real_T c2_f_x;
  real_T c2_g_y;
  real_T *c2_b_Wg;
  real_T *c2_b_Te;
  real_T *c2_b_W1;
  c2_b_Te = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
  c2_b_Wg = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
  c2_b_W1 = (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK(*c2_b_Wg, 0U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Te, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_b_W1, 2U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c2_Wg = *c2_b_Wg;
  c2_W1 = *c2_b_W1;
  sf_debug_symbol_scope_push(5U, 0U);
  sf_debug_symbol_scope_add_verbose("nargout", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
    0U, 0, 0U, 0, 0, &c2_nargout);
  sf_debug_symbol_scope_add_verbose("nargin", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
    0, 0U, 0, 0, &c2_nargin);
  sf_debug_symbol_scope_add("Te", &c2_Te, c2_sf_marshall);
  sf_debug_symbol_scope_add("W1", &c2_W1, c2_sf_marshall);
  sf_debug_symbol_scope_add("Wg", &c2_Wg, c2_sf_marshall);
  CV_EML_FCN(0, 0);

  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,6);
  c2_A = 6.85584E+003;
  c2_a = c2_Wg - c2_W1;
  c2_b = c2_W1;
  c2_b_a = 1.9511999999999997E-003;
  c2_b_A = c2_b_a * c2_b;
  c2_B = c2_Wg - c2_W1;
  c2_x = c2_b_A;
  c2_y = c2_B;
  if (c2_y == 0.0) {
    c2_eml_warning();
  }

  c2_b_x = c2_x;
  c2_b_y = c2_y;
  c2_c_x = c2_b_x;
  c2_c_y = c2_b_y;
  c2_d_y = c2_c_x / c2_c_y;
  c2_b_b = c2_mpower(0.00169 - c2_d_y) + c2_mpower(6.7480669999999993E-002);
  c2_b_B = c2_a * c2_b_b;
  c2_d_x = c2_A;
  c2_e_y = c2_b_B;
  if (c2_e_y == 0.0) {
    c2_eml_warning();
  }

  c2_e_x = c2_d_x;
  c2_f_y = c2_e_y;
  c2_f_x = c2_e_x;
  c2_g_y = c2_f_y;
  c2_Te = c2_f_x / c2_g_y;

  /* Te = 6855.84/((Wg-W1)*(0.00169-0.813*0.0024*W1/(Wg-W1))^2+(0.03692+0.813*0.03759)^2); */
  _SFD_EML_CALL(0,-6);
  sf_debug_symbol_scope_pop();
  *c2_b_Te = c2_Te;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_new_lv_trygenerator_modeMachineNumber_,
    chartInstance.chartNumber, chartInstance.
    instanceNumber);
}

static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber)
{
}

static void c2_eml_warning(void)
{
  int32_T c2_i0;
  static char c2_cv0[19] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i', 'v',
    'i', 'd', 'e', 'B', 'y', 'Z', 'e', 'r', 'o' };

  char c2_varargin_1[19];
  int32_T c2_i1;
  static char c2_cv1[15] = { 'D', 'i', 'v', 'i', 'd', 'e', ' ', 'b', 'y', ' ',
    'z', 'e', 'r', 'o', '.' };

  char c2_varargin_2[15];
  int32_T c2_i2;
  char c2_u[19];
  const mxArray *c2_y = NULL;
  int32_T c2_i3;
  char c2_b_u[15];
  const mxArray *c2_b_y = NULL;
  for (c2_i0 = 0; c2_i0 < 19; c2_i0 = c2_i0 + 1) {
    c2_varargin_1[c2_i0] = c2_cv0[c2_i0];
  }

  for (c2_i1 = 0; c2_i1 < 15; c2_i1 = c2_i1 + 1) {
    c2_varargin_2[c2_i1] = c2_cv1[c2_i1];
  }

  for (c2_i2 = 0; c2_i2 < 19; c2_i2 = c2_i2 + 1) {
    c2_u[c2_i2] = c2_varargin_1[c2_i2];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create(&c2_u, "y", 8, 0U, 1U, 2, 1, 19));
  for (c2_i3 = 0; c2_i3 < 15; c2_i3 = c2_i3 + 1) {
    c2_b_u[c2_i3] = c2_varargin_2[c2_i3];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create(&c2_b_u, "y", 8, 0U, 1U, 2, 1, 15));
  sf_mex_call("warning", 0U, 2U, 14, c2_y, 14, c2_b_y);
}

static real_T c2_mpower(real_T c2_a)
{
  real_T c2_b_a;
  real_T c2_b;
  real_T c2_ak;
  real_T c2_bk;
  real_T c2_x;
  real_T c2_b_x;
  c2_b_a = c2_a;
  c2_b = 2.0;
  c2_ak = c2_b_a;
  c2_bk = c2_b;
  if (c2_ak < 0.0) {
    c2_x = c2_bk;
    c2_b_x = c2_x;
    c2_b_x = floor(c2_b_x);
    if (c2_b_x != c2_bk) {
      c2_eml_error();
    }
  }

  return pow(c2_ak, c2_bk);
}

static void c2_eml_error(void)
{
  int32_T c2_i4;
  static char c2_cv2[32] = { 'E', 'm', 'b', 'e', 'd', 'd', 'e', 'd', 'M', 'A',
    'T', 'L', 'A', 'B', ':', 'p', 'o', 'w', 'e', 'r', ':',
    'd', 'o', 'm', 'a', 'i', 'n', 'E', 'r', 'r', 'o', 'r' };

  char c2_varargin_1[32];
  int32_T c2_i5;
  static char c2_cv3[102] = { 'D', 'o', 'm', 'a', 'i', 'n', ' ', 'e', 'r', 'r',
    'o', 'r', '.', ' ', 'T', 'o', ' ', 'c', 'o', 'm', 'p'
    , 'u', 't', 'e', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 'x', ' ', 'r', 'e', 's',
    'u', 'l', 't', 's', ',',
    ' ', 'm', 'a', 'k', 'e', ' ', 'a', 't', ' ', 'l', 'e', 'a', 's', 't', ' ',
    'o', 'n', 'e', ' ', 'i', 'n'
    , 'p', 'u', 't', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 'x', ',', ' ', 'e', '.',
    'g', '.', ' ', '\'', 'p',
    'o', 'w', 'e', 'r', '(', 'c', 'o', 'm', 'p', 'l', 'e', 'x', '(', 'a', ')',
    ',', 'b', ')', '\'', '.' };

  char c2_varargin_2[102];
  int32_T c2_i6;
  char c2_u[32];
  const mxArray *c2_y = NULL;
  int32_T c2_i7;
  char c2_b_u[102];
  const mxArray *c2_b_y = NULL;
  for (c2_i4 = 0; c2_i4 < 32; c2_i4 = c2_i4 + 1) {
    c2_varargin_1[c2_i4] = c2_cv2[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 102; c2_i5 = c2_i5 + 1) {
    c2_varargin_2[c2_i5] = c2_cv3[c2_i5];
  }

  for (c2_i6 = 0; c2_i6 < 32; c2_i6 = c2_i6 + 1) {
    c2_u[c2_i6] = c2_varargin_1[c2_i6];
  }

  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_create(&c2_u, "y", 8, 0U, 1U, 2, 1, 32));
  for (c2_i7 = 0; c2_i7 < 102; c2_i7 = c2_i7 + 1) {
    c2_b_u[c2_i7] = c2_varargin_2[c2_i7];
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create(&c2_b_u, "y", 8, 0U, 1U, 2, 1, 102));
  sf_mex_call("error", 0U, 2U, 14, c2_y, 14, c2_b_y);
}

static const mxArray *c2_sf_marshall(void *c2_chartInstance, void *c2_u)
{
  const mxArray *c2_y = NULL;
  real_T c2_b_u;
  const mxArray *c2_b_y = NULL;
  c2_y = NULL;
  c2_b_u = *((real_T *)c2_u);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create(&c2_b_u, "y", 0, 0U, 0U, 0));
  sf_mex_assign(&c2_y, c2_b_y);
  return c2_y;
}

const mxArray *sf_c2_new_lv_trygenerator_mode_get_eml_resolved_functions_info
  (void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_ResolvedFunctionInfo c2_info[42];
  const mxArray *c2_m0 = NULL;
  int32_T c2_i8;
  c2_ResolvedFunctionInfo *c2_r0;
  c2_nameCaptureInfo = NULL;
  c2_info_helper(c2_info);
  sf_mex_assign(&c2_m0, sf_mex_createstruct("nameCaptureInfo", 1, 42));
  for (c2_i8 = 0; c2_i8 < 42; c2_i8 = c2_i8 + 1) {
    c2_r0 = &c2_info[c2_i8];
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->context, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c2_r0->context)), "context",
                    "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->name, "nameCaptureInfo", 13, 0U,
      0U, 2, 1, strlen(c2_r0->name)), "name",
                    "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->dominantType, "nameCaptureInfo",
      13, 0U, 0U, 2, 1, strlen(c2_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->resolved, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c2_r0->resolved)), "resolved",
                    "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileLength, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileLength", "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileTime1, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime1", "nameCaptureInfo", c2_i8);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileTime2, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime2", "nameCaptureInfo", c2_i8);
  }

  sf_mex_assign(&c2_nameCaptureInfo, c2_m0);
  return c2_nameCaptureInfo;
}

static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[42])
{
  c2_info[0].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[0].name = "floor";
  c2_info[0].dominantType = "double";
  c2_info[0].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m";
  c2_info[0].fileLength = 550U;
  c2_info[0].fileTime1 = 1192445086U;
  c2_info[0].fileTime2 = 0U;
  c2_info[1].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/cast.m";
  c2_info[1].name = "ischar";
  c2_info[1].dominantType = "char";
  c2_info[1].resolved = "[B]ischar";
  c2_info[1].fileLength = 0U;
  c2_info[1].fileTime1 = 0U;
  c2_info[1].fileTime2 = 0U;
  c2_info[2].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[2].name = "isinteger";
  c2_info[2].dominantType = "double";
  c2_info[2].resolved = "[B]isinteger";
  c2_info[2].fileLength = 0U;
  c2_info[2].fileTime1 = 0U;
  c2_info[2].fileTime2 = 0U;
  c2_info[3].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[3].name = "class";
  c2_info[3].dominantType = "double";
  c2_info[3].resolved = "[B]class";
  c2_info[3].fileLength = 0U;
  c2_info[3].fileTime1 = 0U;
  c2_info[3].fileTime2 = 0U;
  c2_info[4].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[4].name = "eq";
  c2_info[4].dominantType = "double";
  c2_info[4].resolved = "[B]eq";
  c2_info[4].fileLength = 0U;
  c2_info[4].fileTime1 = 0U;
  c2_info[4].fileTime2 = 0U;
  c2_info[5].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c2_info[5].name = "isstruct";
  c2_info[5].dominantType = "double";
  c2_info[5].resolved = "[B]isstruct";
  c2_info[5].fileLength = 0U;
  c2_info[5].fileTime1 = 0U;
  c2_info[5].fileTime2 = 0U;
  c2_info[6].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m/assert_integral";
  c2_info[6].name = "false";
  c2_info[6].dominantType = "";
  c2_info[6].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/false.m";
  c2_info[6].fileLength = 238U;
  c2_info[6].fileTime1 = 1192445120U;
  c2_info[6].fileTime2 = 0U;
  c2_info[7].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[7].name = "eml_scalexp_size";
  c2_info[7].dominantType = "double";
  c2_info[7].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_size.m";
  c2_info[7].fileLength = 872U;
  c2_info[7].fileTime1 = 1192445206U;
  c2_info[7].fileTime2 = 0U;
  c2_info[8].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[8].name = "rdivide";
  c2_info[8].dominantType = "double";
  c2_info[8].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[8].fileLength = 628U;
  c2_info[8].fileTime1 = 1192445322U;
  c2_info[8].fileTime2 = 0U;
  c2_info[9].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c2_info[9].name = "zeros";
  c2_info[9].dominantType = "double";
  c2_info[9].resolved = "[B]zeros";
  c2_info[9].fileLength = 0U;
  c2_info[9].fileTime1 = 0U;
  c2_info[9].fileTime2 = 0U;
  c2_info[10].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[10].name = "eml_div";
  c2_info[10].dominantType = "double";
  c2_info[10].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m";
  c2_info[10].fileLength = 4254U;
  c2_info[10].fileTime1 = 1192445172U;
  c2_info[10].fileTime2 = 0U;
  c2_info[11].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[11].name = "isempty";
  c2_info[11].dominantType = "double";
  c2_info[11].resolved = "[B]isempty";
  c2_info[11].fileLength = 0U;
  c2_info[11].fileTime1 = 0U;
  c2_info[11].fileTime2 = 0U;
  c2_info[12].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m/assert_integral";
  c2_info[12].name = "ne";
  c2_info[12].dominantType = "double";
  c2_info[12].resolved = "[B]ne";
  c2_info[12].fileLength = 0U;
  c2_info[12].fileTime1 = 0U;
  c2_info[12].fileTime2 = 0U;
  c2_info[13].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  c2_info[13].name = "isvector";
  c2_info[13].dominantType = "double";
  c2_info[13].resolved = "[B]isvector";
  c2_info[13].fileLength = 0U;
  c2_info[13].fileTime1 = 0U;
  c2_info[13].fileTime2 = 0U;
  c2_info[14].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_size.m";
  c2_info[14].name = "eml_scalexp_compatible";
  c2_info[14].dominantType = "double";
  c2_info[14].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m";
  c2_info[14].fileLength = 376U;
  c2_info[14].fileTime1 = 1192445204U;
  c2_info[14].fileTime2 = 0U;
  c2_info[15].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[15].name = "lt";
  c2_info[15].dominantType = "double";
  c2_info[15].resolved = "[B]lt";
  c2_info[15].fileLength = 0U;
  c2_info[15].fileTime1 = 0U;
  c2_info[15].fileTime2 = 0U;
  c2_info[16].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m/zerosum";
  c2_info[16].name = "cast";
  c2_info[16].dominantType = "double";
  c2_info[16].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/cast.m";
  c2_info[16].fileLength = 866U;
  c2_info[16].fileTime1 = 1192445044U;
  c2_info[16].fileTime2 = 0U;
  c2_info[17].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[17].name = "isscalar";
  c2_info[17].dominantType = "double";
  c2_info[17].resolved = "[B]isscalar";
  c2_info[17].fileLength = 0U;
  c2_info[17].fileTime1 = 0U;
  c2_info[17].fileTime2 = 0U;
  c2_info[18].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m/assert_integral";
  c2_info[18].name = "true";
  c2_info[18].dominantType = "";
  c2_info[18].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/true.m";
  c2_info[18].fileLength = 237U;
  c2_info[18].fileTime1 = 1192445162U;
  c2_info[18].fileTime2 = 0U;
  c2_info[19].context = "";
  c2_info[19].name = "mtimes";
  c2_info[19].dominantType = "double";
  c2_info[19].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[19].fileLength = 1990U;
  c2_info[19].fileTime1 = 1197627150U;
  c2_info[19].fileTime2 = 0U;
  c2_info[20].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[20].name = "size";
  c2_info[20].dominantType = "double";
  c2_info[20].resolved = "[B]size";
  c2_info[20].fileLength = 0U;
  c2_info[20].fileTime1 = 0U;
  c2_info[20].fileTime2 = 0U;
  c2_info[21].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c2_info[21].name = "eml_assert_valid_size_arg";
  c2_info[21].dominantType = "double";
  c2_info[21].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  c2_info[21].fileLength = 1360U;
  c2_info[21].fileTime1 = 1192445166U;
  c2_info[21].fileTime2 = 0U;
  c2_info[22].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/datatypes/cast.m";
  c2_info[22].name = "double";
  c2_info[22].dominantType = "double";
  c2_info[22].resolved = "[B]double";
  c2_info[22].fileLength = 0U;
  c2_info[22].fileTime1 = 0U;
  c2_info[22].fileTime2 = 0U;
  c2_info[23].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[23].name = "isa";
  c2_info[23].dominantType = "double";
  c2_info[23].resolved = "[B]isa";
  c2_info[23].fileLength = 0U;
  c2_info[23].fileTime1 = 0U;
  c2_info[23].fileTime2 = 0U;
  c2_info[24].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m";
  c2_info[24].name = "isnumeric";
  c2_info[24].dominantType = "double";
  c2_info[24].resolved = "[B]isnumeric";
  c2_info[24].fileLength = 0U;
  c2_info[24].fileTime1 = 0U;
  c2_info[24].fileTime2 = 0U;
  c2_info[25].context = "";
  c2_info[25].name = "mrdivide";
  c2_info[25].dominantType = "double";
  c2_info[25].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[25].fileLength = 638U;
  c2_info[25].fileTime1 = 1197275550U;
  c2_info[25].fileTime2 = 0U;
  c2_info[26].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[26].name = "eml_assert";
  c2_info[26].dominantType = "char";
  c2_info[26].resolved = "[B]eml_assert";
  c2_info[26].fileLength = 0U;
  c2_info[26].fileTime1 = 0U;
  c2_info[26].fileTime2 = 0U;
  c2_info[27].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c2_info[27].name = "ndims";
  c2_info[27].dominantType = "double";
  c2_info[27].resolved = "[B]ndims";
  c2_info[27].fileLength = 0U;
  c2_info[27].fileTime1 = 0U;
  c2_info[27].fileTime2 = 0U;
  c2_info[28].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c2_info[28].name = "power";
  c2_info[28].dominantType = "double";
  c2_info[28].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[28].fileLength = 4979U;
  c2_info[28].fileTime1 = 1192445320U;
  c2_info[28].fileTime2 = 0U;
  c2_info[29].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[29].name = "ge";
  c2_info[29].dominantType = "double";
  c2_info[29].resolved = "[B]ge";
  c2_info[29].fileLength = 0U;
  c2_info[29].fileTime1 = 0U;
  c2_info[29].fileTime2 = 0U;
  c2_info[30].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m/eml_fldiv";
  c2_info[30].name = "isreal";
  c2_info[30].dominantType = "double";
  c2_info[30].resolved = "[B]isreal";
  c2_info[30].fileLength = 0U;
  c2_info[30].fileTime1 = 0U;
  c2_info[30].fileTime2 = 0U;
  c2_info[31].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[31].name = "gt";
  c2_info[31].dominantType = "double";
  c2_info[31].resolved = "[B]gt";
  c2_info[31].fileLength = 0U;
  c2_info[31].fileTime1 = 0U;
  c2_info[31].fileTime2 = 0U;
  c2_info[32].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[32].name = "not";
  c2_info[32].dominantType = "logical";
  c2_info[32].resolved = "[B]not";
  c2_info[32].fileLength = 0U;
  c2_info[32].fileTime1 = 0U;
  c2_info[32].fileTime2 = 0U;
  c2_info[33].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[33].name = "strcmp";
  c2_info[33].dominantType = "char";
  c2_info[33].resolved = "[B]strcmp";
  c2_info[33].fileLength = 0U;
  c2_info[33].fileTime1 = 0U;
  c2_info[33].fileTime2 = 0U;
  c2_info[34].context = "";
  c2_info[34].name = "mpower";
  c2_info[34].dominantType = "double";
  c2_info[34].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m";
  c2_info[34].fileLength = 3338U;
  c2_info[34].fileTime1 = 1192445318U;
  c2_info[34].fileTime2 = 0U;
  c2_info[35].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[35].name = "eml_alloc";
  c2_info[35].dominantType = "double";
  c2_info[35].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m";
  c2_info[35].fileLength = 2558U;
  c2_info[35].fileTime1 = 1197275544U;
  c2_info[35].fileTime2 = 0U;
  c2_info[36].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[36].name = "nargin";
  c2_info[36].dominantType = "";
  c2_info[36].resolved = "[B]nargin";
  c2_info[36].fileLength = 0U;
  c2_info[36].fileTime1 = 0U;
  c2_info[36].fileTime2 = 0U;
  c2_info[37].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_alloc.m/zerosum";
  c2_info[37].name = "plus";
  c2_info[37].dominantType = "double";
  c2_info[37].resolved = "[B]plus";
  c2_info[37].fileLength = 0U;
  c2_info[37].fileTime1 = 0U;
  c2_info[37].fileTime2 = 0U;
  c2_info[38].context = "";
  c2_info[38].name = "minus";
  c2_info[38].dominantType = "double";
  c2_info[38].resolved = "[B]minus";
  c2_info[38].fileLength = 0U;
  c2_info[38].fileTime1 = 0U;
  c2_info[38].fileTime2 = 0U;
  c2_info[39].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m";
  c2_info[39].name = "eml_error";
  c2_info[39].dominantType = "char";
  c2_info[39].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m";
  c2_info[39].fileLength = 318U;
  c2_info[39].fileTime1 = 1192445176U;
  c2_info[39].fileTime2 = 0U;
  c2_info[40].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/elmat/true.m";
  c2_info[40].name = "logical";
  c2_info[40].dominantType = "double";
  c2_info[40].resolved = "[B]logical";
  c2_info[40].fileLength = 0U;
  c2_info[40].fileTime1 = 0U;
  c2_info[40].fileTime2 = 0U;
  c2_info[41].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[41].name = "eml_warning";
  c2_info[41].dominantType = "char";
  c2_info[41].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  c2_info[41].fileLength = 265U;
  c2_info[41].fileTime1 = 1192445214U;
  c2_info[41].fileTime2 = 0U;
}

static void init_dsm_address_info(void)
{
}

/* SFunction Glue Code */
void sf_c2_new_lv_trygenerator_mode_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1063946321U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1004630461U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2401363587U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3997354994U);
}

mxArray *sf_c2_new_lv_trygenerator_mode_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(294889922U);
    pr[1] = (double)(624689991U);
    pr[2] = (double)(3505426617U);
    pr[3] = (double)(1047820285U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "aliasId", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "aliasId", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "aliasId", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
    /* do this only if simulation is starting */
    if (!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_new_lv_trygenerator_modeMachineNumber_,
           2,
           1,
           1,
           3,
           0,
           0,
           0,
           0,
           0,
           &(chartInstance.chartNumber),
           &(chartInstance.instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_new_lv_trygenerator_modeMachineNumber_,
            chartInstance.chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_new_lv_trygenerator_modeMachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_new_lv_trygenerator_modeMachineNumber_,
             chartInstance.chartNumber,
             0,
             0,
             0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Wg",0,
                              c2_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Te",0,
                              NULL);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"W1",0,
                              NULL);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,202);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c2_Wg;
          real_T *c2_Te;
          real_T *c2_W1;
          c2_Te = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
          c2_Wg = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
          c2_W1 = (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_Wg);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_Te);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_W1);
        }
      }
    }
  } else {
    sf_debug_reset_current_state_configuration
      (_new_lv_trygenerator_modeMachineNumber_,chartInstance.chartNumber,
       chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_new_lv_trygenerator_mode(void
  *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S,0);
  initialize_params_c2_new_lv_trygenerator_mode();
  initialize_c2_new_lv_trygenerator_mode();
}

static void sf_opaque_enable_c2_new_lv_trygenerator_mode(void *chartInstanceVar)
{
  enable_c2_new_lv_trygenerator_mode();
}

static void sf_opaque_disable_c2_new_lv_trygenerator_mode(void *chartInstanceVar)
{
  disable_c2_new_lv_trygenerator_mode();
}

static void sf_opaque_gateway_c2_new_lv_trygenerator_mode(void *chartInstanceVar)
{
  sf_c2_new_lv_trygenerator_mode();
}

static void sf_opaque_terminate_c2_new_lv_trygenerator_mode(void
  *chartInstanceVar)
{
  if (sim_mode_is_rtw_gen(chartInstance.S) || sim_mode_is_external
      (chartInstance.S)) {
    sf_clear_rtw_identifier(chartInstance.S);
  }

  finalize_c2_new_lv_trygenerator_mode();
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_new_lv_trygenerator_mode(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_new_lv_trygenerator_mode();
  }
}

static void mdlSetWorkWidths_c2_new_lv_trygenerator_mode(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("new_lv_trygenerator_mode",
      "new_lv_trygenerator_mode",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("new_lv_trygenerator_mode",
                "new_lv_trygenerator_mode",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("new_lv_trygenerator_mode",
      "new_lv_trygenerator_mode",2,"gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"new_lv_trygenerator_mode",
        "new_lv_trygenerator_mode",2,2);
      sf_mark_chart_reusable_outputs(S,"new_lv_trygenerator_mode",
        "new_lv_trygenerator_mode",2,1);
    }

    sf_set_rtw_dwork_info(S,"new_lv_trygenerator_mode",
                          "new_lv_trygenerator_mode",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(695391654U));
  ssSetChecksum1(S,(2310958186U));
  ssSetChecksum2(S,(940739534U));
  ssSetChecksum3(S,(1938915936U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_new_lv_trygenerator_mode(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "new_lv_trygenerator_mode",
      "new_lv_trygenerator_mode",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_new_lv_trygenerator_mode(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.enableChart =
    sf_opaque_enable_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.disableChart =
    sf_opaque_disable_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.zeroCrossings = NULL;
  chartInstance.chartInfo.outputs = NULL;
  chartInstance.chartInfo.derivatives = NULL;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_new_lv_trygenerator_mode;
  chartInstance.chartInfo.extModeExec = NULL;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo)));/* register the chart instance with simstruct */
  if (!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }

  chart_debug_initialization(S,1);
}

void c2_new_lv_trygenerator_mode_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_new_lv_trygenerator_mode(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_new_lv_trygenerator_mode(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_new_lv_trygenerator_mode(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_new_lv_trygenerator_mode_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
