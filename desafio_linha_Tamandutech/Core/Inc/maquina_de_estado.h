/*
 * maquina_de_estado.h
 *
 *  Created on: Oct 18, 2020
 *      Author: Acer Nitro 2
 */

#ifndef INC_MAQUINA_DE_ESTADO_H_
#define INC_MAQUINA_DE_ESTADO_H_


typedef enum {
    PARADO,    		/**< carrinho parado.*/
    RETA,        	/**< carrinho andando reto.*/
    CURVA,        	/**< carrinho andando em curva.*/
} estado;

typedef struct
{
   uint8_t quantidade_e;
   uint8_t quantidade_d;

}marca_laterais;

#endif /* INC_MAQUINA_DE_ESTADO_H_ */
