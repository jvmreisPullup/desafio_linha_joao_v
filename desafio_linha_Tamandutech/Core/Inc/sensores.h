/*
 * sensores.h
 *
 *  Created on: Oct 18, 2020
 *      Author: João victor martins reis
 */

#ifndef INC_SENSORES_H_
#define INC_SENSORES_H_

#include "main.h"

#define SENSOR_DIREITA_MAX 10
#define SENSOR_ESQUERDA_MAX 10

#define SENSOR_DIREITA_MIN 10
#define SENSOR_ESQUERDA_MIN 10

#define SENSOR_SIZE_ARRAY 10

#define SENSOR_LATERAL_DEFAULT_CONFIG                      \
{                                                          \
    .direita_max         =   SENSOR_DIREITA_MAX,           \
    .direita_min         =   SENSOR_DIREITA_MIN,           \
    .esquerda_max         =  SENSOR_ESQUERDA_MAX,          \
    .esquerda_min         =  SENSOR_ESQUERDA_MIN,          \
}


typedef struct
{
   uint8_t direita_max;
   uint8_t direita_min;

   uint8_t esquerda_max;
   uint8_t esquerda_min;

}sensor_lateral_config;

//sensor_lateral_config  sensor_l_config_default = SENSOR_LATERAL_DEFAULT_CONFIG;

typedef struct
{
   uint8_t senssor_size_max;
   uint8_t senssor_size_min;

}sensor_array_config;

typedef struct
{
   uint16_t l_sensor_optico_e;
   uint16_t l_sensor_optico_d;

   uint16_t l_media_pond_e;
   uint16_t l_media_pond_d;

}sensor_lateral_val;


typedef struct
{
   uint16_t a_sensor_optico_e[SENSOR_SIZE_ARRAY];
   uint16_t a_sensor_optico_d[SENSOR_SIZE_ARRAY];

   uint16_t a_media_pond_e;
   uint16_t a_media_pond_d;

}sensor_array_val;

#endif /* INC_SENSORES_H_ */
