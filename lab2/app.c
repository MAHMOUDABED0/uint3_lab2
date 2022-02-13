#include "uart.h"

unsigned char string_ptr[100] ="learn in deepth";
int main(){
	void uart_send_string(string_ptr);
	return 0;
}