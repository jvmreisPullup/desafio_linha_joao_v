/*
 * PID.h
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */
#include "valores.h"
#include "main.h"

#ifndef INC_PID_H_
#define INC_PID_H_

#define CURVA_SET_POINT_PID 10
#define CURVA_KP_PID 10
#define CURVA_KI_PID 10
#define CURVA_KD_PID 10

#define CURVA_PID_DEFAULT_CONFIG                         \
{                                                        \
    .curva_setPoint   =  CURVA_SET_POINT_PID,            \
    .curva_kp         =  CURVA_KP_PID,           		 \
    .curva_ki         =  CURVA_KI_PID,                   \
    .curva_kd         =  CURVA_KD_PID,                   \
}

#define RETA_SET_POINT_PID 10
#define RETA_KP_PID 10
#define RETA_KI_PID 10
#define RETA_KD_PID 10

#define RETA_PID_DEFAULT_CONFIG                          \
{                                                        \
    .reta_setPoint   =  RETA_SET_POINT_PID,              \
    .reta_kp         =  RETA_KP_PID,           			 \
    .reta_ki         =  RETA_KI_PID,                     \
    .reta_kd         =  RETA_KD_PID,                     \
}

#define PID_DEFAULT_CONFIG                               \
{                                                        \
    ._curvaPid        =  CURVA_PID_DEFAULT_CONFIG,      \
    ._retaPid         =  RETA_PID_DEFAULT_CONFIG,       \
}

/*****************************************************/

/**
 * @brief Creates an instance of @ref PID_config. PID
 *
 * @param curva_config   max_curva,min_curva,base_curva.
 * @param reta_config    max_reta,min_reta,base_reta.
 *
 * */

typedef struct
{
   uint8_t curva_setPoint;
   uint8_t curva_kp;
   uint8_t curva_ki;
   uint8_t curva_kd;

}curva_PID;

typedef struct
{
   uint8_t reta_setPoint;
   uint8_t reta_kp;
   uint8_t reta_ki;
   uint8_t reta_kd;

}reta_PID;


typedef struct
{
   curva_PID _curvaPid;
   reta_PID _retaPid;

}PID_config;


typedef struct
{
	PID_config _input;
	PID_config _output;

}PID_val;



#endif /* INC_PID_H_ */
