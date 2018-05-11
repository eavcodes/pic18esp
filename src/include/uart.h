/* 
 * File:   uart.h
 * Author: eav
 *
 * Created on May 8, 2018, 3:29 PM
 */

#include <xc.h>
#include <plib/usart.h>

#ifndef UART_H
#define	UART_H

#ifdef	__cplusplus
extern "C" {
#endif

//64  = 19200 for CLK = 20MHZ
//155 = 19200 for CLK = 48 Mhz
//25  = 115200 for CLK = 48 Mhz
//12  = 115200 for CLK = 24 Mhz
              
/* BAUD RATE FORMULAS According to PIC18F datasheet
* For BRGH hihg: n = SPBRGH:SPBRG register pair
* 
*  Baud Rate = Fosc / [16 * (n + 1) ] 
*  n = [Fosc / [(16 * Baud Rate) ] - 1
*/
  
#define _COUNTER_BAUDRATE   12

void InitSerialUART();
void SendUnsignedByte(unsigned char byte);
unsigned char ReceiveUnsignedByte();
void SendByte(char byte);
char ReceiveByte();



#ifdef	__cplusplus
}
#endif

#endif	/* UART_H */


