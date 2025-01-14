#include <avr/io.h>

#include <util/delay.h>

#include <stdio.h>

#define F_CPU 16000000UL

#define BAUD 9600

#define MYUBRR F_CPU/16/BAUD-1


void uart_init(unsigned int ubrr) {

	UBRR1H = (unsigned char)(ubrr >> 8);

	UBRR1L = (unsigned char)ubrr;

	UCSR1B = (1 << RXEN1) | (1 << TXEN1);

	UCSR1C = (3 << UCSZ10);

}


void uart_transmit(unsigned char data) {

	while (!(UCSR1A & (1 << UDRE1)));

	UDR1 = data;

}


void uart_send_string(char *str) {

	while (*str) {

		uart_transmit(*str++);

	}

}


void initPWM() {

	DDRB |= (1 << PB5); // Set PB5 as output

	TCCR1A |= (1 << WGM11) | (1 << COM1A1);

	TCCR1B |= (1 << WGM12) | (1 << WGM13) | (1 << CS11); // Prescaler 8

	ICR1 = 1999; // TOP for 1kHz PWM

}


void setPWM(uint16_t duty) {

	if (duty > ICR1) {

		duty = ICR1;

	}

	OCR1A = duty;

}


void initADC() {

	ADMUX = (1 << REFS0) | (1 << MUX2) | (1 << MUX1) | (1 << MUX0); // AVcc reference, ADC7 input

	ADCSRA = (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0); // Enable ADC, prescaler 128

}


uint16_t readADC() {

	ADCSRA |= (1 << ADSC); // Start conversion

	while (ADCSRA & (1 << ADSC)); // Wait for conversion to complete

	return ADC;

}


int main(void) {

	uart_init(MYUBRR);

	initPWM();

	initADC();


	while (1) {

		for (uint16_t i = 0; i <= 2000; i += 50) {

			setPWM(i);


			uint16_t adcValue = readADC(); // Read ADC value

			char buffer[10];

			sprintf(buffer, "%d\r\n", adcValue); // Format ADC value as string

			uart_send_string(buffer); // Send string over UART


			_delay_ms(100);

		}


		for (uint16_t i = 2000; i >= 50; i -= 50) {

			setPWM(i);


			uint16_t adcValue = readADC(); // Read ADC value

			char buffer[10];

			sprintf(buffer, "%d\r\n", adcValue);

			uart_send_string(buffer);


			_delay_ms(100);

		}

	}

}