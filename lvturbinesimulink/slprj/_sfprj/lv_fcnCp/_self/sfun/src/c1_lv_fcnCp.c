/* Include files */

#include "lv_fcnCp_sfun.h"
#include "c1_lv_fcnCp.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance.instanceNumber)
#include "lv_fcnCp_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c1_IN_NO_ACTIVE_CHILD          (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc1_lv_fcnCpInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c1_lv_fcnCp(void);
static void initialize_params_c1_lv_fcnCp(void);
static void enable_c1_lv_fcnCp(void);
static void disable_c1_lv_fcnCp(void);
static void finalize_c1_lv_fcnCp(void);
static void sf_c1_lv_fcnCp(void);
static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber);
static const mxArray *c1_sf_marshall(void *c1_chartInstance, void *c1_u);
static void init_dsm_address_info(void);

/* Function Definitions */
static void initialize_c1_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c1_is_active_c1_lv_fcnCp = 0U;
}

static void initialize_params_c1_lv_fcnCp(void)
{
}

static void enable_c1_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void disable_c1_lv_fcnCp(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
}

static void finalize_c1_lv_fcnCp(void)
{
}

static void sf_c1_lv_fcnCp(void)
{
  uint8_T c1_previousEvent;
  real_T c1_u;
  real_T c1_nargout = 1.0;
  real_T c1_nargin = 1.0;
  real_T c1_Te;
  real_T c1_b;
  real_T c1_a;
  real_T *c1_b_u;
  real_T *c1_b_Te;
  c1_b_u = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
  c1_b_Te = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG,0);
  _SFD_DATA_RANGE_CHECK(*c1_b_u, 0U);
  _SFD_DATA_RANGE_CHECK(*c1_b_Te, 1U);
  c1_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c1_u = *c1_b_u;
  sf_debug_symbol_scope_push(4U, 0U);
  sf_debug_symbol_scope_add_verbose("nargout", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0,
    0U, 0, 0U, 0, 0, &c1_nargout);
  sf_debug_symbol_scope_add_verbose("nargin", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U,
    0, 0U, 0, 0, &c1_nargin);
  sf_debug_symbol_scope_add("Te", &c1_Te, c1_sf_marshall);
  sf_debug_symbol_scope_add("u", &c1_u, c1_sf_marshall);
  CV_EML_FCN(0, 0);

  /*  This block supports the Embedded MATLAB subset. */
  /*  See the help menu for details.  */
  _SFD_EML_CALL(0,5);
  c1_b = c1_u;
  c1_a = 1.0;
  c1_Te = c1_a * c1_b;
  _SFD_EML_CALL(0,-5);
  sf_debug_symbol_scope_pop();
  *c1_b_Te = c1_Te;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c1_previousEvent;
  sf_debug_check_for_state_inconsistency(_lv_fcnCpMachineNumber_,
    chartInstance.chartNumber, chartInstance.instanceNumber);
}

static void init_script_number_translation(uint32_T c1_machineNumber, uint32_T
  c1_chartNumber)
{
}

static const mxArray *c1_sf_marshall(void *c1_chartInstance, void *c1_u)
{
  const mxArray *c1_y = NULL;
  real_T c1_b_u;
  const mxArray *c1_b_y = NULL;
  c1_y = NULL;
  c1_b_u = *((real_T *)c1_u);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create(&c1_b_u, "y", 0, 0U, 0U, 0));
  sf_mex_assign(&c1_y, c1_b_y);
  return c1_y;
}

const mxArray *sf_c1_lv_fcnCp_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_ResolvedFunctionInfo c1_info[12];
  c1_ResolvedFunctionInfo (*c1_b_info)[12];
  const mxArray *c1_m0 = NULL;
  int32_T c1_i0;
  c1_ResolvedFunctionInfo *c1_r0;
  c1_nameCaptureInfo = NULL;
  c1_b_info = (c1_ResolvedFunctionInfo (*)[12])c1_info;
  (*c1_b_info)[0].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[0].name = "isa";
  (*c1_b_info)[0].dominantType = "double";
  (*c1_b_info)[0].resolved = "[B]isa";
  (*c1_b_info)[0].fileLength = 0U;
  (*c1_b_info)[0].fileTime1 = 0U;
  (*c1_b_info)[0].fileTime2 = 0U;
  (*c1_b_info)[1].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[1].name = "nargin";
  (*c1_b_info)[1].dominantType = "";
  (*c1_b_info)[1].resolved = "[B]nargin";
  (*c1_b_info)[1].fileLength = 0U;
  (*c1_b_info)[1].fileTime1 = 0U;
  (*c1_b_info)[1].fileTime2 = 0U;
  (*c1_b_info)[2].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[2].name = "isinteger";
  (*c1_b_info)[2].dominantType = "double";
  (*c1_b_info)[2].resolved = "[B]isinteger";
  (*c1_b_info)[2].fileLength = 0U;
  (*c1_b_info)[2].fileTime1 = 0U;
  (*c1_b_info)[2].fileTime2 = 0U;
  (*c1_b_info)[3].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[3].name = "size";
  (*c1_b_info)[3].dominantType = "double";
  (*c1_b_info)[3].resolved = "[B]size";
  (*c1_b_info)[3].fileLength = 0U;
  (*c1_b_info)[3].fileTime1 = 0U;
  (*c1_b_info)[3].fileTime2 = 0U;
  (*c1_b_info)[4].context = "";
  (*c1_b_info)[4].name = "mtimes";
  (*c1_b_info)[4].dominantType = "double";
  (*c1_b_info)[4].resolved =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[4].fileLength = 1990U;
  (*c1_b_info)[4].fileTime1 = 1197627150U;
  (*c1_b_info)[4].fileTime2 = 0U;
  (*c1_b_info)[5].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[5].name = "gt";
  (*c1_b_info)[5].dominantType = "double";
  (*c1_b_info)[5].resolved = "[B]gt";
  (*c1_b_info)[5].fileLength = 0U;
  (*c1_b_info)[5].fileTime1 = 0U;
  (*c1_b_info)[5].fileTime2 = 0U;
  (*c1_b_info)[6].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[6].name = "eq";
  (*c1_b_info)[6].dominantType = "double";
  (*c1_b_info)[6].resolved = "[B]eq";
  (*c1_b_info)[6].fileLength = 0U;
  (*c1_b_info)[6].fileTime1 = 0U;
  (*c1_b_info)[6].fileTime2 = 0U;
  (*c1_b_info)[7].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[7].name = "strcmp";
  (*c1_b_info)[7].dominantType = "char";
  (*c1_b_info)[7].resolved = "[B]strcmp";
  (*c1_b_info)[7].fileLength = 0U;
  (*c1_b_info)[7].fileTime1 = 0U;
  (*c1_b_info)[7].fileTime2 = 0U;
  (*c1_b_info)[8].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[8].name = "class";
  (*c1_b_info)[8].dominantType = "double";
  (*c1_b_info)[8].resolved = "[B]class";
  (*c1_b_info)[8].fileLength = 0U;
  (*c1_b_info)[8].fileTime1 = 0U;
  (*c1_b_info)[8].fileTime2 = 0U;
  (*c1_b_info)[9].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[9].name = "eml_assert";
  (*c1_b_info)[9].dominantType = "char";
  (*c1_b_info)[9].resolved = "[B]eml_assert";
  (*c1_b_info)[9].fileLength = 0U;
  (*c1_b_info)[9].fileTime1 = 0U;
  (*c1_b_info)[9].fileTime2 = 0U;
  (*c1_b_info)[10].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[10].name = "not";
  (*c1_b_info)[10].dominantType = "logical";
  (*c1_b_info)[10].resolved = "[B]not";
  (*c1_b_info)[10].fileLength = 0U;
  (*c1_b_info)[10].fileTime1 = 0U;
  (*c1_b_info)[10].fileTime2 = 0U;
  (*c1_b_info)[11].context =
    "[I]$matlabroot$/toolbox/eml/lib/matlab/ops/mtimes.m";
  (*c1_b_info)[11].name = "isscalar";
  (*c1_b_info)[11].dominantType = "double";
  (*c1_b_info)[11].resolved = "[B]isscalar";
  (*c1_b_info)[11].fileLength = 0U;
  (*c1_b_info)[11].fileTime1 = 0U;
  (*c1_b_info)[11].fileTime2 = 0U;
  sf_mex_assign(&c1_m0, sf_mex_createstruct("nameCaptureInfo", 1, 12));
  for (c1_i0 = 0; c1_i0 < 12; c1_i0 = c1_i0 + 1) {
    c1_r0 = &c1_info[c1_i0];
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->context, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c1_r0->context)), "context",
                    "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->name, "nameCaptureInfo", 13, 0U,
      0U, 2, 1, strlen(c1_r0->name)), "name",
                    "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->dominantType, "nameCaptureInfo",
      13, 0U, 0U, 2, 1, strlen(c1_r0->dominantType)),
                    "dominantType", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(c1_r0->resolved, "nameCaptureInfo", 13,
      0U, 0U, 2, 1, strlen(c1_r0->resolved)), "resolved",
                    "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileLength, "nameCaptureInfo",
      7, 0U, 0U, 0), "fileLength", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileTime1, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime1", "nameCaptureInfo", c1_i0);
    sf_mex_addfield(c1_m0, sf_mex_create(&c1_r0->fileTime2, "nameCaptureInfo", 7,
      0U, 0U, 0), "fileTime2", "nameCaptureInfo", c1_i0);
  }

  sf_mex_assign(&c1_nameCaptureInfo, c1_m0);
  return c1_nameCaptureInfo;
}

static void init_dsm_address_info(void)
{
}

/* SFunction Glue Code */
void sf_c1_lv_fcnCp_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1637907241U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(858674219U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4016903655U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(776870876U);
}

mxArray *sf_c1_lv_fcnCp_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,4,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(3653064171U);
    pr[1] = (double)(3640676052U);
    pr[2] = (double)(4213977454U);
    pr[3] = (double)(2078767375U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
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
          1,
          1,
          1,
          2,
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
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"u",0,
                              c1_sf_marshall);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"Te",0,
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
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,114);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              1,NULL,NULL,
                              0,NULL,NULL);
        }

        {
          real_T *c1_u;
          real_T *c1_Te;
          c1_u = (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
          c1_Te = (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c1_u);
          _SFD_SET_DATA_VALUE_PTR(1U, c1_Te);
        }
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_lv_fcnCpMachineNumber_,
      chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c1_lv_fcnCp(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S,0);
  initialize_params_c1_lv_fcnCp();
  initialize_c1_lv_fcnCp();
}

static void sf_opaque_enable_c1_lv_fcnCp(void *chartInstanceVar)
{
  enable_c1_lv_fcnCp();
}

static void sf_opaque_disable_c1_lv_fcnCp(void *chartInstanceVar)
{
  disable_c1_lv_fcnCp();
}

static void sf_opaque_gateway_c1_lv_fcnCp(void *chartInstanceVar)
{
  sf_c1_lv_fcnCp();
}

static void sf_opaque_terminate_c1_lv_fcnCp(void *chartInstanceVar)
{
  if (sim_mode_is_rtw_gen(chartInstance.S) || sim_mode_is_external
      (chartInstance.S)) {
    sf_clear_rtw_identifier(chartInstance.S);
  }

  finalize_c1_lv_fcnCp();
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_lv_fcnCp(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_lv_fcnCp();
  }
}

static void mdlSetWorkWidths_c1_lv_fcnCp(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("lv_fcnCp","lv_fcnCp",1);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop("lv_fcnCp","lv_fcnCp",1,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("lv_fcnCp","lv_fcnCp",1,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"lv_fcnCp","lv_fcnCp",1,1);
      sf_mark_chart_reusable_outputs(S,"lv_fcnCp","lv_fcnCp",1,1);
    }

    sf_set_rtw_dwork_info(S,"lv_fcnCp","lv_fcnCp",1);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1554284791U));
  ssSetChecksum1(S,(2096058761U));
  ssSetChecksum2(S,(127590742U));
  ssSetChecksum3(S,(3514426782U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c1_lv_fcnCp(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "lv_fcnCp", "lv_fcnCp",1);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c1_lv_fcnCp(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway = sf_opaque_gateway_c1_lv_fcnCp;
  chartInstance.chartInfo.initializeChart = sf_opaque_initialize_c1_lv_fcnCp;
  chartInstance.chartInfo.terminateChart = sf_opaque_terminate_c1_lv_fcnCp;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c1_lv_fcnCp;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c1_lv_fcnCp;
  chartInstance.chartInfo.zeroCrossings = NULL;
  chartInstance.chartInfo.outputs = NULL;
  chartInstance.chartInfo.derivatives = NULL;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c1_lv_fcnCp;
  chartInstance.chartInfo.mdlStart = mdlStart_c1_lv_fcnCp;
  chartInstance.chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_lv_fcnCp;
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

void c1_lv_fcnCp_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c1_lv_fcnCp(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_lv_fcnCp(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_lv_fcnCp(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_lv_fcnCp_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
