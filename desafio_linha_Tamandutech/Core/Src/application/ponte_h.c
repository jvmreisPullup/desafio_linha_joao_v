/*
 * ponte_h.c
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */


#include "stm32l4xx.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx_hal_tim.h"


#define htim1 htim1
extern TIM_HandleTypeDef htim1;

#define htim2 htim2
extern TIM_HandleTypeDef htim2;

/* DEFINES */
#define CLOCK_FREQ 	32000000
#define PWM_RES		3200


/* FUNCTIONS */
/* Starts the piezo with the desired frequency. Max frequency = 10kHz */
void start_motor_1(uint16_t freq){
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);

	uint16_t ps = (CLOCK_FREQ/(freq * PWM_RES)) - 1;
	if((ps < 1) || (ps > 65535)) ps = 1;

	__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_1, (PWM_RES/2)-1);
	__HAL_TIM_PRESCALER(&htim1, ps);

	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}

void start_motor_2(uint16_t freq){
	HAL_TIM_PWM_Stop(&htim2, TIM_CHANNEL_1);

	uint16_t ps = (CLOCK_FREQ/(freq * PWM_RES)) - 1;
	if((ps < 1) || (ps > 65535)) ps = 1;

	__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, (PWM_RES/2)-1);
	__HAL_TIM_PRESCALER(&htim2, ps);

	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}



/* FUNCTIONS */
/* Starts the piezo with the desired frequency. Max frequency = 10kHz */
void start_motor_1_2(uint16_t freq1,uint16_t freq2){
	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);

	uint16_t ps = (CLOCK_FREQ/(freq1 * PWM_RES)) - 1;
	if((ps < 1) || (ps > 65535)) ps = 1;

	__HAL_TIM_SetCompare(&htim1, TIM_CHANNEL_1, (PWM_RES/2)-1);
	__HAL_TIM_PRESCALER(&htim1, ps);

	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);



	HAL_TIM_PWM_Stop(&htim2, TIM_CHANNEL_1);

	 ps = (CLOCK_FREQ/(freq2 * PWM_RES)) - 1;
	if((ps < 1) || (ps > 65535)) ps = 1;

	__HAL_TIM_SetCompare(&htim2, TIM_CHANNEL_1, (PWM_RES/2)-1);
	__HAL_TIM_PRESCALER(&htim2, ps);

	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
}

/* Stops the piezo */
void stopt_motor(void){

	HAL_TIM_PWM_Stop(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Stop(&htim2, TIM_CHANNEL_1);
}
