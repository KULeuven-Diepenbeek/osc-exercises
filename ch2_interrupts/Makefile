# Makefile

ARDUINO_AVR=/opt/arduino-1.8.8/hardware/tools/avr
ARDUINO_AVR=/usr

# ENVIRONMENT 
CC=$(ARDUINO_AVR)/bin/avr-gcc
COBJDUMP=$(ARDUINO_AVR)/bin/avr-objcopy
AR=$(ARDUINO_AVR)/bin/avr-ar
AVRDUDE=$(ARDUINO_AVR)/bin/avrdude
RM=/bin/rm -f

# ARDUINO PARAMETERS
baud=115200
avrType=atmega328p
avrFreq=16000000UL
avrConfFile=/etc/avrdude.conf
programmerDev=/dev/ttyACM1
programmerType=arduino

# COMPILE FLAGS
CFLAGS=-mmcu=$(avrType) -DF_CPU=$(avrFreq) -Wall -Wextra -Os
INC=-I.

# LINKER FLAGS
LDFLAGS=-flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p  -lm

# ARCHIVER FLAGS
ARFLAGS=-rcs

# TARGETS
#hexes=$(patsubst %.c,%.hex,$(wildcard *.c))
binaries=$(patsubst %.c,%.bin,$(wildcard *.c))
objects=$(patsubst %.c,%.o,$(wildcard *.c))
sources = $(wildcard *.c)



all: $(binaries)

# lib/libosc_static.a: source/helper.o
# 	$(AR) $(ARFLAGS) $@ $^

# %.hex: %.bin
# 	$(COBJDUMP) -j .text -j .data -O ihex $^ $@


# COMPILE
%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# LINK
%.bin: %.o
	$(CC) $(LDFLAGS) -o $@ $^



.PHONY: show flash clean

show:
	echo $(sources)
	echo $(objects)
	echo $(binaries)
	echo $(hexes)

flash: $(t)
	$(AVRDUDE) -p$(avrType) -C$(avrConfFile) -c$(programmerType) -P$(programmerDev) -b$(baud) -v -U flash:w:$(t)

clean:
	$(RM) $(objects) $(FOREIGN_TARGETS) $(binaries) $(hexes)

#.SECONDARY: $(objects)