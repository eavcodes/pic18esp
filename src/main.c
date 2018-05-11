/*
 * File:   main.c
 * Author: eav
 *
 * Created on May 8, 2018, 3:27 PM
 */


#include <xc.h>
#include "include/config.h"
#include "include/uart.h"
#include "include/esp8266.h"

void main(void) 
{
 
    InitConfigPorts();
    InitSerialUART();
    
    /* configure esp8266 */
    do{
       
        LED_L1_Desligado();
       
    }while(!esp8266_isStarted());
   
    
    for(;;)
    {
        LED_L1_Ligado();
        delay_ms(1000);
        
        LED_L1_Desligado();
        delay_ms(1000);
    }
   
    
    return;
}
