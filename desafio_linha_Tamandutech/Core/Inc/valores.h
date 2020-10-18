/*
 * valores.h
 *
 *  Created on: Oct 18, 2020
 *      Author: João Victor Martins Reis
 */

#ifndef INC_VALORES_H_
#define INC_VALORES_H_

#include "velocidade.h"
#include "PID.h"
#include "sensores.h"
#include "maquina_de_estado.h"

/**
 * @brief Creates an instance of @ref parametros. parametros
 *
 * @param estado    parado,reta,curva;
 * @param vel_motor    vel_e,vel_d;
 * @param PID_val    _input.(PID_config),_output.(PID_config)
 * @param marca_laterais    quantidade_e,quantidade_d.
 * @param encoder_motor    encd_motor_e,encd_motor_d.
 * @param sensor_lateral_val    l_sensor_optico_e,l_sensor_optico_d,l_media_pond_e,l_media_pond_d.
 * @param sensor_array_val    a_sensor_optico_e,a_sensor_optico_d,a_media_pond_e,a_media_pond_d.
 *
 * */
typedef struct
{
	estado _estado;
	vel_motor _vel_motor;
	PID_val _PID_val;
	marca_laterais _marca_laterais;
	encoder_motor _encoder_motor;
	sensor_lateral_val _sensor_lateral_val;
	sensor_array_val _sensor_array_val;

}valores;


#endif /* INC_VALORES_H_ */
