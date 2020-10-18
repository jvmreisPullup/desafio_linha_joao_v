/*
 * velocidade.h
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */

#ifndef INC_VELOCIDADE_H_
#define INC_VELOCIDADE_H_

#include "main.h"

#define VEL_CURVA_MAX 10
#define VEL_CURVA_MIN 10
#define VEL_CURVA_BASE 10

#define VEL_CURVA_DEFAULT_CONFIG                                  \
{                                                                 \
    .max_curva         = 	VEL_CURVA_MAX,                        \
    .min_curva         = 	VEL_CURVA_MIN,                        \
    .base_curva        = 	VEL_CURVA_BASE,                       \
}

#define VEL_RETA_MAX 10
#define VEL_RETA_MIN 10
#define VEL_RETA_BASE 10

#define VEL_RETA_DEFAULT_CONFIG                                  \
{                                                                \
    .max_reta        = 	VEL_RETA_MAX,                            \
    .min_reta         = 	VEL_RETA_MIN,                        \
    .base_reta        =	VEL_RETA_BASE,                           \
}

#define VELOCIDADE_DEFAULT_CONFIG                              \
{                                                              \
    ._curvaConfig         = VEL_CURVA_DEFAULT_CONFIG,          \
    ._retaConfig         =  VEL_RETA_DEFAULT_CONFIG,           \
}


/**
 * @brief Creates an instance of @ref vel_config_default. velocidade
 *
 * @param curva_config   max_curva,min_curva,base_curva.
 * @param reta_config    max_reta,min_reta,base_reta.
 *
 * */
typedef struct
{
   uint8_t max_curva;
   uint8_t min_curva;
   uint8_t base_curva;

}curva_config;

typedef struct
{
   uint8_t max_reta;
   uint8_t min_reta;
   uint8_t base_reta;

}reta_config;


typedef struct
{
	curva_config _curvaConfig;
	reta_config _retaConfig;

}velocidade_config;

//velocidade_config vel_config_default = VELOCIDADE_DEFAULT_CONFIG;


typedef struct
{
   int16_t vel_e;
   int16_t vel_d;

}vel_motor;


typedef struct
{
   int16_t encd_motor_e;
   int16_t encd_motor_d;

}encoder_motor;

#endif /* INC_VELOCIDADE_H_ */
