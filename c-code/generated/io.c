#include "io.h"
#include "xvar.h"
#include "../lib/r_cnst.h"
#include "../lib/platform.h"

void Input(void) {
	_i_start_launch_thyristor = Read_Input8(0x00, 0xB0001);
	_i_start_support_thyristor_C1 = Read_Input8(0x00, 0xB0002);
	_i_start_support_thyristor_C2 = Read_Input8(0x00, 0xB0003);
	_i_work_stop_signal = Read_Input8(0x00, 0xB0004);
    if (_i_start_launch_thyristor & MASK1_S8) {
    	_p_main_power_contorl_v_launch_power = TRUE;
    }
    else {
    	_p_main_power_contorl_v_launch_power = FALSE;
    } 
    if (_i_start_support_thyristor_C1 & MASK1_S8) {
    	_p_bath_control_C1_v_launch_C1 = TRUE;
    }
    else {
    	_p_bath_control_C1_v_launch_C1 = FALSE;
    } 
    if (_i_start_support_thyristor_C2 & MASK1_S8) {
    	_p_bath_control_C2_v_launch_C2 = TRUE;
    }
    else {
    	_p_bath_control_C2_v_launch_C2 = FALSE;
    } 
}

void Output(void) {
	if (_p_main_power_contorl_v_signal_to_forward_thyr) {
		_o_open_forward_thyristor |= MASK1_S8; 
	} else {
		_o_open_forward_thyristor &= ~MASK1_S8; 
	}
	if (_p_bath_control_C1_v_open_C1) {
		_o_open_C1_thyristor |= MASK1_S8; 
	} else {
		_o_open_C1_thyristor &= ~MASK1_S8; 
	}
	if (_p_bath_control_C2_v_open_C2) {
		_o_open_C2_thyristor |= MASK1_S8; 
	} else {
		_o_open_C2_thyristor &= ~MASK1_S8; 
	}
Write_Output8(0x00, 0xA0001, _o_open_forward_thyristor);
Write_Output8(0x00, 0xA0002, _o_open_reverse_thyristor);
Write_Output8(0x00, 0xA0003, _o_open_C1_thyristor);
Write_Output8(0x00, 0xA0004, _o_open_C2_thyristor);
}
