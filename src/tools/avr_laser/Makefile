CXX_SRCS = $(shell find  -name '*.cpp')
AVR_LIBS_PATH = ../avr_libs

INC = -I .
INC+= -I $(AVR_LIBS_PATH)


CXX_SRCS+= $(shell find ../avr_libs -name '*.cpp')

TARGET = -mmcu=atmega328

GCCPREFIX=avr-

ELF = bin/main.elf

CXX = $(GCCPREFIX)g++
LD = $(GCCPREFIX)g++
OBJCOPY = $(GCCPREFIX)objcopy
OBJDUMP = $(GCCPREFIX)objdump
SIZE = $(GCCPREFIX)size

CXXFLAGS = -c -O2 -Os -Wall -Wextra -pedantic -std=c++11 -fno-rtti -fno-exceptions $(INC) -g $(TARGET) -fdata-sections -ffunction-sections

LDFLAGS = $(TARGET) -Wl,--gc-sections



CXX_OBJS = $(CXX_SRCS:.cpp=.o)

all: $(ELF)
	$(OBJDUMP) --disassemble $< > bin/main.asm
	$(OBJCOPY) -O ihex $< bin/main.hex
	$(OBJCOPY) -O binary $< bin/main.bin
	$(SIZE) $(ELF)

$(ELF): $(CXX_OBJS)
	$(LD) $(LDFLAGS) -o $@ $(CXX_OBJS) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

CLEAN_FILES = $(CXX_OBJS)
CLEAN_FILES+= bin/main*

clean:
	rm $(CLEAN_FILES) -rf

burn: $(ELF)
	avrdude -c arduino -p atmega328p -P /dev/ttyUSB0 -U flash:w:bin/main.hex
