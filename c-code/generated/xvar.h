/* xvar.h = Extern Variables Image-File. */
#ifndef _xvar_h
#define _xvar_h 1
#include "../lib/r_cnst.h"
extern INT32_U _g_current_work_state;
extern BOOL _p_main_power_contorl_v_launch_power;
extern BOOL _p_main_power_contorl_v_signal_to_forward_thyr;
extern BOOL _p_bath_control_C1_v_launch_C1;
extern BOOL _p_bath_control_C1_v_open_C1;
extern BOOL _p_bath_control_C2_v_launch_C2;
extern BOOL _p_bath_control_C2_v_open_C2;
extern INT8 _o_open_forward_thyristor;
extern INT8 _o_open_reverse_thyristor;
extern INT8 _o_open_C1_thyristor;
extern INT8 _o_open_C2_thyristor;
extern INT8 _i_start_launch_thyristor;
extern INT8 _i_start_support_thyristor_C1;
extern INT8 _i_start_support_thyristor_C2;
extern INT8 _i_work_stop_signal;
#endif
