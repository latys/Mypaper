/* Include files */

#include "new_lv_trygenerator_mode_sfun.h"
#include "c2_new_lv_trygenerator_mode.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
uint8_T _sfEvent_;
uint32_T _new_lv_trygenerator_modeMachineNumber_;
real_T _sfTime_;

/* Function Declarations */

/* Function Definitions */
void new_lv_trygenerator_mode_initializer(void)
{
  _sfEvent_ = CALL_EVENT;
}

void new_lv_trygenerator_mode_terminator(void)
{
}

/* SFunction Glue Code */
unsigned int sf_new_lv_trygenerator_mode_method_dispatcher(SimStruct
  *simstructPtr, unsigned int chartFileNumber, int_T method, void *data)
{
  if (chartFileNumber==2) {
    c2_new_lv_trygenerator_mode_method_dispatcher(simstructPtr, method, data);
    return 1;
  }

  return 0;
}

unsigned int sf_new_lv_trygenerator_mode_process_check_sum_call( int nlhs,
  mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[20];
  if (nrhs<1 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the checksum */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"sf_get_check_sum"))
    return 0;
  plhs[0] = mxCreateDoubleMatrix( 1,4,mxREAL);
  if (nrhs>1 && mxIsChar(prhs[1])) {
    mxGetString(prhs[1], commandName,sizeof(commandName)/sizeof(char));
    commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
    if (!strcmp(commandName,"machine")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(37426005U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(218944720U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2456826877U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1103116967U);
    } else if (!strcmp(commandName,"exportedFcn")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0U);
    } else if (!strcmp(commandName,"makefile")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4191562729U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2104419473U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(316087510U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3621459699U);
    } else if (nrhs==3 && !strcmp(commandName,"chart")) {
      unsigned int chartFileNumber;
      chartFileNumber = (unsigned int)mxGetScalar(prhs[2]);
      switch (chartFileNumber) {
       case 2:
        {
          extern void sf_c2_new_lv_trygenerator_mode_get_check_sum(mxArray *
            plhs[]);
          sf_c2_new_lv_trygenerator_mode_get_check_sum(plhs);
          break;
        }

       default:
        ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(0.0);
        ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(0.0);
      }
    } else if (!strcmp(commandName,"target")) {
      ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(64876186U);
      ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1217120569U);
      ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(4094067315U);
      ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1782201511U);
    } else {
      return 0;
    }
  } else {
    ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1385800919U);
    ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(284325206U);
    ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1020290780U);
    ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4115894899U);
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_new_lv_trygenerator_mode_autoinheritance_info( int nlhs, mxArray
  * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[32];
  if (nrhs<2 || !mxIsChar(prhs[0]) )
    return 0;

  /* Possible call to get the autoinheritance_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_autoinheritance_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        extern mxArray *sf_c2_new_lv_trygenerator_mode_get_autoinheritance_info
          (void);
        plhs[0] = sf_c2_new_lv_trygenerator_mode_get_autoinheritance_info();
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

unsigned int sf_new_lv_trygenerator_mode_get_eml_resolved_functions_info( int
  nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[] )
{

#ifdef MATLAB_MEX_FILE

  char commandName[64];
  if (nrhs<2 || !mxIsChar(prhs[0]))
    return 0;

  /* Possible call to get the get_eml_resolved_functions_info */
  mxGetString(prhs[0], commandName,sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName,"get_eml_resolved_functions_info"))
    return 0;

  {
    unsigned int chartFileNumber;
    chartFileNumber = (unsigned int)mxGetScalar(prhs[1]);
    switch (chartFileNumber) {
     case 2:
      {
        extern const mxArray
          *sf_c2_new_lv_trygenerator_mode_get_eml_resolved_functions_info(void);
        mxArray *persistentMxArray = (mxArray *)
          sf_c2_new_lv_trygenerator_mode_get_eml_resolved_functions_info();
        plhs[0] = mxDuplicateArray(persistentMxArray);
        mxDestroyArray(persistentMxArray);
        break;
      }

     default:
      plhs[0] = mxCreateDoubleMatrix(0,0,mxREAL);
    }
  }

  return 1;

#else

  return 0;

#endif

}

void new_lv_trygenerator_mode_debug_initialize(void)
{
  _new_lv_trygenerator_modeMachineNumber_ = sf_debug_initialize_machine(
    "new_lv_trygenerator_mode","sfun",0,1,0,0,0);
  sf_debug_set_machine_event_thresholds(_new_lv_trygenerator_modeMachineNumber_,
    0,0);
  sf_debug_set_machine_data_thresholds(_new_lv_trygenerator_modeMachineNumber_,0);
}

void new_lv_trygenerator_mode_register_exported_symbols(SimStruct* S)
{
}
