#define F_CPU 16000000UL //
#include <avr/io.h>
#include <util/delay.h>


void uart_init(unsigned int ubrr) {
	UBRR1H = (unsigned char)(ubrr >> 8);
	UBRR1L = (unsigned char)ubrr;
	UCSR1B = (1 << RXEN1) | (1 << TXEN1);
	UCSR1C = (1 << UCSZ11) | (1 << UCSZ10);
}


void uart_transmit(unsigned char data) {
	while (!(UCSR1A & (1 << UDRE1)));
	UDR1 = data;
}

int main(void) {
	uart_init(103);

	while (1) {
		uart_transmit('A');
		_delay_ms(1000);
	}
}
