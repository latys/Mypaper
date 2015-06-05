/* Include files */

#include "lv_fcnCp_sfun.h"
#include "c2_lv_fcnCp.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance.instanceNumber)
#include "lv_fcnCp_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD          (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_lv_fcnCpInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_lv_fcnCp(void);
static void initialize_params_c2_lv_fcnCp(void);
static void enable_c2_lv_fcnCp(void);
static void disable_c2_lv_fcnCp(void);
static void finalize_c2_lv_fcnCp(void);
static void sf_c2_lv_fcnCp(void);
static void init_script_number_translation(uint32_T c2_machineNumber, uint32_T
  c2_chartNumber);
static void c2_eml_warning(void);
static const mxArray *c2_sf_marshall(void *c2_chartInstance, void *c2_u);
static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[22]);
static void init_dsm_address_info(void);

/* Function Definitions */
static void initialize_c2_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c2_is_active_c2_lv_fcnCp = 0U;
}

static void initialize_params_c2_lv_fcnCp(void)
{
}

static void enable_c2_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void disable_c2_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void finalize_c2_lv_fcnCp(void)
{
}

static void sf_c2_lv_fcnCp(void)
{
  uint8_T c2_previousEvent;
  real_T c2_lambeta;
  real_T c2_bate;
  real_T c2_nargout = 1.0;
  real_T c2_nargin = 2.0;
  real_T c2_Cp;
  real_T c2_a;
  real_T c2_b;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_y;
  real_T c2_c_b;
  real_T c2_c_a;
  real_T c2_b_y;
  real_T c2_d_a;
  real_T c2_d_b;
  real_T c2_e_a;
  real_T c2_A;
  real_T c2_e_b;
  real_T c2_f_a;
  real_T c2_c_y;
  real_T c2_B;
  real_T c2_x;
  real_T c2_d_y;
  real_T c2_b_x;
  real_T c2_e_y;
  real_T c2_c_x;
  real_T c2_f_y;
  real_T c2_d_x;
  real_T c2_f_b;
  real_T c2_g_y;
  real_T *c2_b_lambeta;
  real_T *c2_b_Cp;
  real_T *c2_b_bate;
  c2_b_bate = (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
  c2_b_Cp = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
  c2_b_lambeta = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,1);
  _SFD_DATA_RANGE_CHECK(*c2_b_lambeta, 0U);
  _SFD_DATA_RANGE_CHECK(*c2_b_Cp, 1U);
  _SFD_DATA_RANGE_CHECK(*c2_b_bate, 2U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,1);
  c2_lambeta = *c2_b_lambeta;
  c2_bate = *c2_b_bate;
  sf_debug_symbol_scope_push(5U, 0U);
  sf_debug_symbol_scope_add_verbose("nargout", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
    0U, 0, 0U, 0, 0, &c2_nargout);
  sf_debug_symbol_scope_add_verbose("nargin", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
    0, 0U, 0, 0, &c2_nargin);
  sf_debug_symbol_scope_add("Cp", &c2_Cp, c2_sf_marshall);
  sf_debug_symbol_scope_add("bate", &c2_bate, c2_sf_marshall);
  sf_debug_symbol_scope_add("lambeta", &c2_lambeta, c2_sf_marshall);
  CV_EML_FCN(0, 0);

  /*  a=0; */
  /*  b=0; */
  /*  Cp=pi; */
  /*  Cp=(0.44-0.0167*b)*sin(pi*(a-3)/(15-0.3*b))-0.00184*(a-3)*b; */
  _SFD_EML_CALL(0,7);
  c2_a = 0.00184;
  c2_b = c2_lambeta - 3.0;
  c2_b_a = c2_a * c2_b;
  c2_b_b = c2_bate;
  c2_y = c2_b_a * c2_b_b;
  c2_c_b = c2_bate;
  c2_c_a = 0.0167;
  c2_b_y = c2_c_a * c2_c_b;
  c2_d_a = 0.44 - c2_b_y;
  c2_d_b = c2_lambeta - 3.0;
  c2_e_a = 3.1415926535897931E+000;
  c2_A = c2_e_a * c2_d_b;
  c2_e_b = c2_bate;
  c2_f_a = 0.3;
  c2_c_y = c2_f_a * c2_e_b;
  c2_B = 15.0 - c2_c_y;
  c2_x = c2_A;
  c2_d_y = c2_B;
  if (c2_d_y == 0.0) {
    c2_eml_warning();
  }

  c2_b_x = c2_x;
  c2_e_y = c2_d_y;
  c2_c_x = c2_b_x;
  c2_f_y = c2_e_y;
  c2_d_x = c2_c_x / c2_f_y;
  c2_f_b = c2_d_x;
  c2_f_b = sin(c2_f_b);
  c2_g_y = c2_d_a * c2_f_b;
  c2_Cp = c2_g_y - c2_y;

  /*  Cp=lambeta+bate; */
  _SFD_EML_CALL(0,-7);
  sf_debug_symbol_scope_pop();
  *c2_b_Cp = c2_Cp;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,1);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_lv_fcnCpMachineNumber_,
    chartInstance.chartNumber, chartInstance.instanceNumber);
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

const mxArray *sf_c2_lv_fcnCp_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_ResolvedFunctionInfo c2_info[22];
  const mxArray *c2_m0 = NULL;
  int32_T c2_i4;
  c2_ResolvedFunctionInfo *c2_r0;
  c2_nameCaptureInfo = NULL;
  c2_info_helper(c2_info);
  sf_mex_assign(&c2_m0, sf_mex_createstruct("nameCaptureInfo", 1, 22));
  for (c2_i4 = 0; c2_i4 < 22; c2_i4 = c2_i4 + 1) {
    c2_r0 = &c2_info[c2_i4];
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->context, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c2_r0->context)), "context",
                    "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->name, "nameCaptureInfo", 13, 0U,
      0U, 2, 1, strlen(c2_r0->name)), "name",
                    "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->dominantType, "nameCaptureInfo",
      13, 0U, 0U, 2, 1, strlen(c2_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(c2_r0->resolved, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c2_r0->resolved)), "resolved",
                    "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileLength, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileLength", "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileTime1, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime1", "nameCaptureInfo", c2_i4);
    sf_mex_addfield(c2_m0, sf_mex_create(&c2_r0->fileTime2, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime2", "nameCaptureInfo", c2_i4);
  }

  sf_mex_assign(&c2_nameCaptureInfo, c2_m0);
  return c2_nameCaptureInfo;
}

static void c2_info_helper(c2_ResolvedFunctionInfo c2_info[22])
{
  c2_info[0].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[0].name = "isa";
  c2_info[0].dominantType = "double";
  c2_info[0].resolved = "[B]isa";
  c2_info[0].fileLength = 0U;
  c2_info[0].fileTime1 = 0U;
  c2_info[0].fileTime2 = 0U;
  c2_info[1].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[1].name = "ge";
  c2_info[1].dominantType = "double";
  c2_info[1].resolved = "[B]ge";
  c2_info[1].fileLength = 0U;
  c2_info[1].fileTime1 = 0U;
  c2_info[1].fileTime2 = 0U;
  c2_info[2].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[2].name = "gt";
  c2_info[2].dominantType = "double";
  c2_info[2].resolved = "[B]gt";
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
  c2_info[4].context = "";
  c2_info[4].name = "mrdivide";
  c2_info[4].dominantType = "double";
  c2_info[4].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[4].fileLength = 638U;
  c2_info[4].fileTime1 = 1197275550U;
  c2_info[4].fileTime2 = 0U;
  c2_info[5].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[5].name = "eq";
  c2_info[5].dominantType = "double";
  c2_info[5].resolved = "[B]eq";
  c2_info[5].fileLength = 0U;
  c2_info[5].fileTime1 = 0U;
  c2_info[5].fileTime2 = 0U;
  c2_info[6].context = "";
  c2_info[6].name = "mtimes";
  c2_info[6].dominantType = "double";
  c2_info[6].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[6].fileLength = 1990U;
  c2_info[6].fileTime1 = 1197627150U;
  c2_info[6].fileTime2 = 0U;
  c2_info[7].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m/eml_fldiv";
  c2_info[7].name = "isreal";
  c2_info[7].dominantType = "double";
  c2_info[7].resolved = "[B]isreal";
  c2_info[7].fileLength = 0U;
  c2_info[7].fileTime1 = 0U;
  c2_info[7].fileTime2 = 0U;
  c2_info[8].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[8].name = "isinteger";
  c2_info[8].dominantType = "double";
  c2_info[8].resolved = "[B]isinteger";
  c2_info[8].fileLength = 0U;
  c2_info[8].fileTime1 = 0U;
  c2_info[8].fileTime2 = 0U;
  c2_info[9].context = "";
  c2_info[9].name = "pi";
  c2_info[9].dominantType = "";
  c2_info[9].resolved = "[B]pi";
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
  c2_info[11].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[11].name = "not";
  c2_info[11].dominantType = "logical";
  c2_info[11].resolved = "[B]not";
  c2_info[11].fileLength = 0U;
  c2_info[11].fileTime1 = 0U;
  c2_info[11].fileTime2 = 0U;
  c2_info[12].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[12].name = "strcmp";
  c2_info[12].dominantType = "char";
  c2_info[12].resolved = "[B]strcmp";
  c2_info[12].fileLength = 0U;
  c2_info[12].fileTime1 = 0U;
  c2_info[12].fileTime2 = 0U;
  c2_info[13].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[13].name = "size";
  c2_info[13].dominantType = "double";
  c2_info[13].resolved = "[B]size";
  c2_info[13].fileLength = 0U;
  c2_info[13].fileTime1 = 0U;
  c2_info[13].fileTime2 = 0U;
  c2_info[14].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[14].name = "nargin";
  c2_info[14].dominantType = "";
  c2_info[14].resolved = "[B]nargin";
  c2_info[14].fileLength = 0U;
  c2_info[14].fileTime1 = 0U;
  c2_info[14].fileTime2 = 0U;
  c2_info[15].context = "";
  c2_info[15].name = "sin";
  c2_info[15].dominantType = "double";
  c2_info[15].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m";
  c2_info[15].fileLength = 867U;
  c2_info[15].fileTime1 = 1192445108U;
  c2_info[15].fileTime2 = 0U;
  c2_info[16].context = "";
  c2_info[16].name = "minus";
  c2_info[16].dominantType = "double";
  c2_info[16].resolved = "[B]minus";
  c2_info[16].fileLength = 0U;
  c2_info[16].fileTime1 = 0U;
  c2_info[16].fileTime2 = 0U;
  c2_info[17].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.m";
  c2_info[17].name = "rdivide";
  c2_info[17].dominantType = "double";
  c2_info[17].resolved = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[17].fileLength = 628U;
  c2_info[17].fileTime1 = 1192445322U;
  c2_info[17].fileTime2 = 0U;
  c2_info[18].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[18].name = "eml_warning";
  c2_info[18].dominantType = "char";
  c2_info[18].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_warning.m";
  c2_info[18].fileLength = 265U;
  c2_info[18].fileTime1 = 1192445214U;
  c2_info[18].fileTime2 = 0U;
  c2_info[19].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[19].name = "eml_assert";
  c2_info[19].dominantType = "char";
  c2_info[19].resolved = "[B]eml_assert";
  c2_info[19].fileLength = 0U;
  c2_info[19].fileTime1 = 0U;
  c2_info[19].fileTime2 = 0U;
  c2_info[20].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m";
  c2_info[20].name = "isempty";
  c2_info[20].dominantType = "double";
  c2_info[20].resolved = "[B]isempty";
  c2_info[20].fileLength = 0U;
  c2_info[20].fileTime1 = 0U;
  c2_info[20].fileTime2 = 0U;
  c2_info[21].context = "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  c2_info[21].name = "isscalar";
  c2_info[21].dominantType = "double";
  c2_info[21].resolved = "[B]isscalar";
  c2_info[21].fileLength = 0U;
  c2_info[21].fileTime1 = 0U;
  c2_info[21].fileTime2 = 0U;
}

static void init_dsm_address_info(void)
{
}

/* SFunction Glue Code */
void sf_c2_lv_fcnCp_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(2968929264U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3776772861U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1085275174U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2422184299U);
}

mxArray *sf_c2_lv_fcnCp_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(304955138U);
    pr[1] = (double)(2183782633U);
    pr[2] = (double)(1576618385U);
    pr[3] = (double)(1462826000U);
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
        chartAlreadyPresent = sf_debug_initialize_chart(_lv_fcnCpMachineNumber_,
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
          init_script_number_translation(_lv_fcnCpMachineNumber_,
            chartInstance.chartNumber);
          sf_debug_set_chart_disable_implicit_casting(_lv_fcnCpMachineNumber_,
            chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_lv_fcnCpMachineNumber_,
            chartInstance.chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"lambeta",
                              0,c2_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Cp",0,
                              NULL);
          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"bate",0,
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,206);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c2_lambeta;
          real_T *c2_Cp;
          real_T *c2_bate;
          c2_bate = (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
          c2_Cp = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
          c2_lambeta = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c2_lambeta);
          _SFD_SET_DATA_VALUE_PTR(1U, c2_Cp);
          _SFD_SET_DATA_VALUE_PTR(2U, c2_bate);
        }
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_lv_fcnCpMachineNumber_,
      chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_lv_fcnCp(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S,0);
  initialize_params_c2_lv_fcnCp();
  initialize_c2_lv_fcnCp();
}

static void sf_opaque_enable_c2_lv_fcnCp(void *chartInstanceVar)
{
  enable_c2_lv_fcnCp();
}

static void sf_opaque_disable_c2_lv_fcnCp(void *chartInstanceVar)
{
  disable_c2_lv_fcnCp();
}

static void sf_opaque_gateway_c2_lv_fcnCp(void *chartInstanceVar)
{
  sf_c2_lv_fcnCp();
}

static void sf_opaque_terminate_c2_lv_fcnCp(void *chartInstanceVar)
{
  if (sim_mode_is_rtw_gen(chartInstance.S) || sim_mode_is_external
      (chartInstance.S)) {
    sf_clear_rtw_identifier(chartInstance.S);
  }

  finalize_c2_lv_fcnCp();
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_lv_fcnCp(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_lv_fcnCp();
  }
}

static void mdlSetWorkWidths_c2_lv_fcnCp(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("lv_fcnCp","lv_fcnCp",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("lv_fcnCp","lv_fcnCp",2,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("lv_fcnCp","lv_fcnCp",2,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"lv_fcnCp","lv_fcnCp",2,2);
      sf_mark_chart_reusable_outputs(S,"lv_fcnCp","lv_fcnCp",2,1);
    }

    sf_set_rtw_dwork_info(S,"lv_fcnCp","lv_fcnCp",2);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(2875340398U));
  ssSetChecksum1(S,(1004175675U));
  ssSetChecksum2(S,(3935320823U));
  ssSetChecksum3(S,(3789941766U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_lv_fcnCp(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "lv_fcnCp", "lv_fcnCp",2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c2_lv_fcnCp(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway = sf_opaque_gateway_c2_lv_fcnCp;
  chartInstance.chartInfo.initializeChart = sf_opaque_initialize_c2_lv_fcnCp;
  chartInstance.chartInfo.terminateChart = sf_opaque_terminate_c2_lv_fcnCp;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c2_lv_fcnCp;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c2_lv_fcnCp;
  chartInstance.chartInfo.zeroCrossings = NULL;
  chartInstance.chartInfo.outputs = NULL;
  chartInstance.chartInfo.derivatives = NULL;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_lv_fcnCp;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_lv_fcnCp;
  chartInstance.chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_lv_fcnCp;
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

void c2_lv_fcnCp_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_lv_fcnCp(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_lv_fcnCp(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_lv_fcnCp(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_lv_fcnCp_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
