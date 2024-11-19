# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc //compiles C
AS              = msp430-elf-as //compiles assembly

all: toy.elf

toy.elf: ${COMMON_OBJECTS} main.o switches.o stateMachines.o buzzer.o led.o wdInterruptHandler.o p2_interrupt_handler.o dim_sequence_c.o 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ ../lib/libTimer.a
