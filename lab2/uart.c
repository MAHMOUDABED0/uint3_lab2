#include"uart.h"

#define UART0 *((volatile unsigned int *)((unsigned int*)0x101f1000))

void uart_send_string(unsigned char *pt_s)
{
	
	
	while(*pt_s!='\0'){
		UART0=(unsigned int)(*pt_s);
		pt_s++;
		
	}
		
}