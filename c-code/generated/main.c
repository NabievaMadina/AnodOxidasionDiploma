/* MAIN FILE OF THE PROJECT */
#include "ext.h" /* Common files for all generated c-files */
#include "proc.h"  /* Process-functions desription */
#include "gvar.h"  /* Project variables images */
#include "io.h"    /* Scan-input/output functions */
#include "../lib/platform.h"
#include "../lib/r_main.h"  /* Code of the main-function that calls Control_Loop */

void Control_Loop (void)    /* Control algorithm */
{
	Init_PSW((INT16)(PROCESS_N1), (INT16)PROCESS_Nn);
	INT32_U cur_time = 0, prev_time = 0;
	for (;;) {
		cur_time = Get_Time();
		if (cur_time - prev_time < _r_CLOCK) continue;
		prev_time = cur_time;
		Input();
		_p_update(); /* Process update */
		_p_main_power_contorl(); /* Process main_power_contorl */
		_p_bath_control_C1(); /* Process bath_control_C1 */
		_p_bath_control_C2(); /* Process bath_control_C2 */
		Output();
		Prepare_PSW((INT16)(PROCESS_N1), (INT16)PROCESS_Nn);
	}
}

int main() {
    Control_Loop();
}
