/* 
 * File:   config.h
 * Author: eav
 *
 * Created on May 8, 2018, 3:35 PM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif
    
 
#include <xc.h> // include processor files - each processor file is guarded.  

#define _XTAL_FREQ  24000000

#define LED_L1  LATC1
#define LED_L2  LATC2

#define LED_L1_Ligado() LED_L1 = 1;
#define LED_L1_Desligado() LED_L1 = 0;

#define LED_L2_Ligado() LED_L2 = 1;
#define LED_L2_Desligado() LED_L2 = 0;

void InitConfigPorts();
void delay_ms(int timeMS);   
    

#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_H */


