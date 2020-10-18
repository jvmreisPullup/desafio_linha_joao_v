/*
 * encoder.c
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */
#include "lptim.h"

#include "stm32l4xx.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx_hal_tim.h"



#define hlptim1 hlptim1
LPTIM_HandleTypeDef hlptim1;

int  encoder(void){

	 HAL_TIM_Encoder_Start(&hlptim1,TIM_CHANNEL_1);
	 HAL_TIM_Encoder_GetState(&hlptim1);

}
