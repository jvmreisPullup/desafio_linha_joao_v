/*
 * PID.c
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */
#include "PID.h"
//#include "valores.h"


	int  vTaskCalcularPID(PID_config *PID_config_default, valores * valor_atual){


		valor_atual->_PID_val._input._curvaPid	=	PID_config_default->_curvaPid;
		valor_atual->_PID_val._input._retaPid	=	PID_config_default->_retaPid;


	  }
