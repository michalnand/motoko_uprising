
CXX_SRCS = $(shell find -name '*.cpp')
C_SRCS = $(shell find  -name '*.c')


INC = -I .
INC+= -I ./device
INC+= -I ./drivers



# TARGET = -mcpu=cortex-m4 -mthumb  -mfpu=fpv4-sp-d16 -mfloat-abi=hard -fsingle-precision-constant
TARGET = -mcpu=cortex-m4 -mthumb  -mfloat-abi=softfp -fsingle-precision-constant



GCCPREFIX=arm-none-eabi-
LDSCRIPT = ./device/ldscript.ld

ELF = bin/main.elf

CC = $(GCCPREFIX)gcc
CXX = $(GCCPREFIX)g++
LD = $(GCCPREFIX)g++

OBJCOPY = $(GCCPREFIX)objcopy
OBJDUMP = $(GCCPREFIX)objdump
SIZE = $(GCCPREFIX)size


CCFLAGS = -c -O3 -Os -s -Wall -Wextra -pedantic -std=c99 -Wl,--gc-sections --specs=nano.specs
CCFLAGS+= -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align
CCFLAGS+= $(TARGET) -fdata-sections -ffunction-sections


CXXFLAGS = -c -O2 -Os -s -Wall -Wextra -pedantic -std=c++14  -fno-rtti -fno-exceptions $(INC) -Wl,--gc-sections --specs=nano.specs
CXXFLAGS+= -Wshadow -Wpointer-arith -Wcast-qual -Wcast-align
CXXFLAGS+= $(TARGET) -fdata-sections -ffunction-sections

LDFLAGS = -T$(LDSCRIPT) $(TARGET) -mthumb -Wl,--gc-sections --specs=nano.specs


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
	rm $(CLEAN_FILES) -rf
