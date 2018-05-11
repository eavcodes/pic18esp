#include "uart.h"

/*------------------------------------------------------------------------------*/

void InitSerialUART()
{
    
    OpenUSART(USART_TX_INT_OFF
              & USART_RX_INT_OFF
              & USART_ASYNCH_MODE
              & USART_EIGHT_BIT
              & USART_CONT_RX
              & USART_BRGH_HIGH , _COUNTER_BAUDRATE);
    
}

/*------------------------------------------------------------------------------*/

void SendUnsignedByte(unsigned char byte)
{
  while(!TXSTA1bits.TRMT); /* aguarda liberar modulo para envio de dado */
    putcUSART(byte); 
}
/*------------------------------------------------------------------------------*/

unsigned char ReceiveUnsignedByte()
{
    unsigned char b = 0x00;
    
    b = getcUSART();
    
    return b;
}
/*------------------------------------------------------------------------------*/

void SendByte(char byte)
{
   while(!TXSTA1bits.TRMT); /* aguarda liberar modulo para envio de dado */
    putcUSART(byte);  
}
/*------------------------------------------------------------------------------*/

char ReceiveByte()
{
   char b = 0x00;
   
   while(!RCIF);
   
   b = getcUSART();
    
    return b; 
}
