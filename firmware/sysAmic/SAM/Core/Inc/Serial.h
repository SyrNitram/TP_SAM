/*
 * Serial.h
 *
 *  Created on: Mar 10, 2023
 *      Author: marti
 */

#ifndef INC_SERIAL_H_
#define INC_SERIAL_H_

#include "main.h"

// Cette fonction pourra être utilisée par le Shell v0.4
uint8_t SerialTransmit(char * pData, uint16_t Size);
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(void);

#endif /* INC_SERIAL_H_ */
