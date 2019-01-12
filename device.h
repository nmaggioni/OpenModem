#include "util/constants.h"

#ifndef DEVICE_CONFIGURATION
#define DEVICE_CONFIGURATION

// CPU settings
#define TARGET_CPU m1284p
#define F_CPU 20000000UL
#define FREQUENCY_CORRECTION 0

// Voltage references
// TODO: Determine best defaults
#define CONFIG_ADC_REF 128
#define CONFIG_DAC_REF 255

// TODO: Change this back to default
#define CONFIG_LED_INTENSITY 35
//#define CONFIG_LED_INTENSITY 192
#define COM_LED_TIMEOUT_MS 40

// Demodulator settings
#define OPEN_SQUELCH true

// Serial settings
#define BAUD 115200
#define SERIAL_DEBUG false
#define TX_MAXWAIT 2UL
#define CONFIG_QUEUE_SIZE 7500
#define CONFIG_QUEUE_MAX_LENGTH 15
#define CONFIG_SERIAL_BUFFER_SIZE 1532 // TODO: Tune this, what is actually required?
#define CONFIG_SERIAL_TIMEOUT_MS 10

// CSMA Settings
#define CONFIG_FULL_DUPLEX false  // TODO: Actually implement fdx
#define CONFIG_CSMA_P 255

#define AX25_MIN_FRAME_LEN 1
#define AX25_MAX_FRAME_LEN 1532

// Packet settings
#define CONFIG_PASSALL false

// Port settings
#if TARGET_CPU == m1284p
    #define ADC_PORT  PORTA
    #define ADC_DDR   DDRA
    #define DAC_PORT  PORTC
    #define DAC_DDR   DDRC
	#define VREF_PORT PORTD
	#define VREF_DDR  DDRD
    #define LED_PORT  PORTB
    #define LED_DDR   DDRB
#endif

#endif

/*

PA0		ANALOG_IN
PA1		
PA2		
PA3		
PA4		
PA5		
PA6		
PA7		

PB0		LED_RX
PB1		LED_TX
PB2		LED_STATUS
PB3		LED_DRAIN_PWM
PB4		LED_COM / SPI_SS	PGM
PB5		SPI_MOSI			SD/PGM
PB6		SPI_MISO			SD/PGM
PB7		SPI_CLK				SD/PGM

PC0		DAC_0
PC1		DAC_1
PC2		DAC_2
PC3		DAC_3
PC4		DAC_4
PC5		DAC_5
PC6		DAC_6
PC7		DAC_7

PD0		UART0_RX
PD1		UART0_TX
PD2		UART1_RX		GPS
PD3		UART1_TX		GPS
PD4		
PD5		
PD6		REF_DAC
PD7		REF_ADC

*/