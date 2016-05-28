/* based on my newfound knowledge of bit-specific addressing on the TM4C123 MCU, 
cds

#define PA7  (*((volatile uint32_t *)0x40004200))
