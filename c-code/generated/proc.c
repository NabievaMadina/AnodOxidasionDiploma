/* FILE OF PROC-IMAGES OF THE PROJECT */
#include "ext.h" /* Common files for all generated c-files */
#include "xvar.h"  /* Var-images */
void _p_update() { /* Process: update */
	switch (Check_State(0)) {
		case 0: { /* State: start_work_process */
			Set_Start(1);
			Set_Start(2);
			Set_Start(3);
			break;
		}
	}
}
void _p_main_power_contorl() { /* Process: main_power_contorl */
	switch (Check_State(1)) {
		case 0: { /* State: check_state */
			if (_p_main_power_contorl_v_launch_power) 
				{
				_g_current_work_state = _c_work_WORK;
				Set_State(1, 1);
				}
			else {
			_g_current_work_state = _c_work_STOP;
			Set_State(1, 2);
			}
			break;
		}
		case 1: { /* State: start_work_process */
			_p_main_power_contorl_v_signal_to_forward_thyr = TRUE;
			Set_State(1, 0);
			break;
		}
		case 2: { /* State: stop_work_process */
			_p_main_power_contorl_v_signal_to_forward_thyr = FALSE;
			Set_State(1, 0);
			break;
		}
	}
}
void _p_bath_control_C1() { /* Process: bath_control_C1 */
	switch (Check_State(2)) {
		case 0: { /* State: check_state */
			if (_p_bath_control_C1_v_launch_C1) 
				{
				Set_State(2, 1);
				}
			else {
			Set_State(2, 2);
			}
			break;
		}
		case 1: { /* State: start_C1_work */
			_p_bath_control_C1_v_open_C1 = TRUE;
			Set_State(2, 0);
			break;
		}
		case 2: { /* State: stop_C1_work */
			_p_bath_control_C1_v_open_C1 = FALSE;
			Set_State(2, 0);
			break;
		}
	}
}
void _p_bath_control_C2() { /* Process: bath_control_C2 */
	switch (Check_State(3)) {
		case 0: { /* State: check_state */
			if (_p_bath_control_C2_v_launch_C2) 
				{
				Set_State(3, 1);
				}
			else {
			Set_State(3, 2);
			}
			break;
		}
		case 1: { /* State: start_C2_work */
			_p_bath_control_C2_v_open_C2 = TRUE;
			Set_State(3, 0);
			break;
		}
		case 2: { /* State: stop_C2_work */
			_p_bath_control_C2_v_open_C2 = FALSE;
			Set_State(3, 0);
			break;
		}
	}
}
