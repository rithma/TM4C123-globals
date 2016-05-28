/* based on bit-specific addressing on the TM4C123 MCU, 
these macros will make individual pin write/clear/poll super easy. 

The following table of offsets was used:

BIT ACCESS:     OFFSET:
    7           0x0200
    6           0x0100
    5           0x0080
    4           0x0040
    3           0x0020
    2           0x0010
    1           0x0008
    0           0x0004

This run of port configuration is for the APB (Advanced Peripheral Bus)
It will not work with the the AHB (Advanced High Performance Bus)

*/

//*****************   PORTS   *****************//
#define PORTA_DATA  (*((volatile uint32_t *)0x400043FC))
#define PORTB_DATA  (*((volatile uint32_t *)0x400053FC))
#define PORTC_DATA  (*((volatile uint32_t *)0x400063FC))
#define PORTD_DATA  (*((volatile uint32_t *)0x400073FC))
#define PORTE_DATA  (*((volatile uint32_t *)0x400243FC))
#define PORTF_DATA  (*((volatile uint32_t *)0x400253FC))

//*****************   PINS   *****************//
#define     PA7     (*((volatile uint32_t *)0x40004200))
#define     PA6     (*((volatile uint32_t *)0x40004100))
#define     PA5     (*((volatile uint32_t *)0x40004080))
#define     PA4     (*((volatile uint32_t *)0x40004040))
#define     PA3     (*((volatile uint32_t *)0x40004020))
#define     PA2     (*((volatile uint32_t *)0x40004010))
#define     PA1     (*((volatile uint32_t *)0x40004008))
#define     PA0     (*((volatile uint32_t *)0x40004004))

#define     PB7     (*((volatile uint32_t *)0x40005200))
#define     PB6     (*((volatile uint32_t *)0x40005100))
#define     PB5     (*((volatile uint32_t *)0x40005080))
#define     PB4     (*((volatile uint32_t *)0x40005040))
#define     PB3     (*((volatile uint32_t *)0x40005020))
#define     PB2     (*((volatile uint32_t *)0x40005010))
#define     PB1     (*((volatile uint32_t *)0x40005008))
#define     PB0     (*((volatile uint32_t *)0x40005004))

#define     PC7     (*((volatile uint32_t *)0x40006200))
#define     PC6     (*((volatile uint32_t *)0x40006100))
#define     PC5     (*((volatile uint32_t *)0x40006080))
#define     PC4     (*((volatile uint32_t *)0x40006040))
#define     PC3     (*((volatile uint32_t *)0x40006020))
#define     PC2     (*((volatile uint32_t *)0x40006010))
#define     PC1     (*((volatile uint32_t *)0x40006008))
#define     PC0     (*((volatile uint32_t *)0x40006004))

#define     PD7     (*((volatile uint32_t *)0x40007200))
#define     PD6     (*((volatile uint32_t *)0x40007100))
#define     PD5     (*((volatile uint32_t *)0x40007080))
#define     PD4     (*((volatile uint32_t *)0x40007040))
#define     PD3     (*((volatile uint32_t *)0x40007020))
#define     PD2     (*((volatile uint32_t *)0x40007010))
#define     PD1     (*((volatile uint32_t *)0x40007008))
#define     PD0     (*((volatile uint32_t *)0x40007004))

#define     PE7     (*((volatile uint32_t *)0x40024200))
#define     PE6     (*((volatile uint32_t *)0x40024100))
#define     PE5     (*((volatile uint32_t *)0x40024080))
#define     PE4     (*((volatile uint32_t *)0x40024040))
#define     PE3     (*((volatile uint32_t *)0x40024020))
#define     PE2     (*((volatile uint32_t *)0x40024010))
#define     PE1     (*((volatile uint32_t *)0x40024008))
#define     PE0     (*((volatile uint32_t *)0x40024004))

#define     PF7     (*((volatile uint32_t *)0x40025200))
#define     PF6     (*((volatile uint32_t *)0x40025100))
#define     PF5     (*((volatile uint32_t *)0x40025080))
#define     PF4     (*((volatile uint32_t *)0x40025040))
#define     PF3     (*((volatile uint32_t *)0x40025020))
#define     PF2     (*((volatile uint32_t *)0x40025010))
#define     PF1     (*((volatile uint32_t *)0x40025008))
#define     PF0     (*((volatile uint32_t *)0x40025004))



