
CXX_SRCS = $(shell find -name '*.cpp')
C_SRCS = $(shell find  -name '*.c')

INC = -I .
INC+= -I ./device
INC+= -I ./embedded_libs/
INC+= -I ./embedded_libs/common/
INC+= -I ./embedded_libs/control/
INC+= -I ./embedded_libs/drivers/
INC+= -I ./embedded_libs/neural_network/
INC+= -I ./config/


TARGET = -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -fsingle-precision-constant


GCCPREFIX=arm-none-eabi-
LDSCRIPT = ./device/ldscript.ld

ELF = bin/main.elf

CC = $(GCCPREFIX)gcc
CXX = $(GCCPREFIX)g++
LD = $(GCCPREFIX)g++

OBJCOPY = $(GCCPREFIX)objcopy
OBJDUMP = $(GCCPREFIX)objdump
SIZE = $(GCCPREFIX)size




CCFLAGS = $(TARGET) $(INC) -c -O3 -Os -s -Wall -Wextra -pedantic -std=c99 -nostdlib   -fdata-sections -ffunction-sections   -Wl,--gc-sections
CXXFLAGS= $(TARGET) $(INC) -c -O3 -Os -s -Wall -Wextra -pedantic -std=c++14 -fno-rtti  -fno-exceptions -fdata-sections -ffunction-sections  -Wl,--gc-sections
LDFLAGS = -T$(LDSCRIPT) $(TARGET) -nostdlib -Wl,--gc-sections

C_OBJS = $(C_SRCS:.c=.o)
CXX_OBJS = $(CXX_SRCS:.cpp=.o)

all: $(ELF)
	$(OBJDUMP) --disassemble -D -z $< > bin/main.asm
	$(OBJCOPY) -O ihex $< bin/main.hex
	$(OBJCOPY) -O binary $< bin/main.bin
	$(SIZE) $(ELF)

$(ELF): $(C_OBJS) $(CXX_OBJS)
	$(LD) $(LDFLAGS) -o $@ $(C_OBJS) $(CXX_OBJS)

%.o: %.c
	$(CC) $(CCFLAGS) $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

CLEAN_FILES = $(C_OBJS)
CLEAN_FILES+= $(CXX_OBJS)
CLEAN_FILES+= bin/main*

clean:
	rm $(CLEAN_FILES) -f
