/*
 * Dio.h
 *  Created on: Aug 26, 2022
 *  Author: Osama
 */

#ifndef DIO_H_
#define DIO_H_

#include "Dio_Reg.h"
#include "Dio_Types.h"
#include "Std_Types.h"

void Dio_vidconfigChanel(dio_port_t port, dio_pin_t pin,dio_dir_t dir);
void Dio_vidwriteChanel(dio_port_t port, dio_pin_t pin,dio_level_t level);
void Dio_vidWriteChanelGroup (dio_port_t , u8 data , u8 mask);
dio_level_t Dio_udtreadChanel(dio_port_t port, dio_pin_t pin);
void Dio_vidflipChanel(dio_port_t port, dio_pin_t pin);
void Dio_vidPullUpEnalple (dio_port_t port, dio_pin_t pin);


#endif /* DIO_H_ */
