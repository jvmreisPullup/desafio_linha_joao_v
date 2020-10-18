/*
 * sensor_optico.c
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */

#include "adc.h"
#include "stm32l4xx.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx_hal_tim.h"


#include "valores.h"


#define hadc1 hadc1

#define HAL_MAXDELAY 200

ADC_HandleTypeDef hadc1;

int get_sensor_optico (valores valor_atual){

	 HAL_ADC_Start(&hadc1);
	  HAL_ADC_PollForConversion(&hadc1,HAL_MAXDELAY);
	  valor_atual._sensor_lateral_val.l_sensor_optico_d= HAL_ADC_GetValue(&hadc1);
	  valor_atual._sensor_lateral_val.l_sensor_optico_e = HAL_ADC_GetValue(&hadc1);

}
