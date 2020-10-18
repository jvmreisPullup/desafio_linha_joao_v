/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @autor          : joão Victor Martins Reis
  * @date           : 18/10/2020
  * @file           : Parametros.h
  *
  *                   This file contains the default parameters of the application.
  ******************************************************************************

  *******************************************************************************/
#include "velocidade.h"
#include "PID.h"
#include "sensores.h"

/**
 * @brief Creates an instance of @ref parametros. parametros
 *
 * @param PID_config    curva_setPoint,curva_kp,curva_ki,curva_kd,reta_setPoint,reta_kp,reta_ki,reta_kd;
 * @param velocidade_config    max_curva,min_curva,base_curva,max_reta,min_reta,base_reta.
 * @param sensor_lateral_config    direita_max,direita_min,esquerda_max,esquerda_min.
 * @param sensor_array_config    senssor_size_max,senssor_size_min.
 * */
typedef struct
{
	PID_config _PID_config;
	velocidade_config _velocidade_config;
	sensor_lateral_config _sensor_lateral_config;
	sensor_array_config _sensor_array_config;

}parametros;

