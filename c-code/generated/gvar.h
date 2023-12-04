/* GVAR.H = Global Variables Image-File. */
#ifndef _gvar_h
#define _gvar_h 1
#include "../lib/r_cnst.h"
INT32_U _g_current_work_state;
BOOL _p_main_power_contorl_v_launch_power;
BOOL _p_main_power_contorl_v_signal_to_forward_thyr;
BOOL _p_bath_control_C1_v_launch_C1;
BOOL _p_bath_control_C1_v_open_C1;
BOOL _p_bath_control_C2_v_launch_C2;
BOOL _p_bath_control_C2_v_open_C2;
INT8 _o_open_forward_thyristor;
INT8 _o_open_reverse_thyristor;
INT8 _o_open_C1_thyristor;
INT8 _o_open_C2_thyristor;
INT8 _i_start_launch_thyristor;
INT8 _i_start_support_thyristor_C1;
INT8 _i_start_support_thyristor_C2;
INT8 _i_work_stop_signal;
#endif
