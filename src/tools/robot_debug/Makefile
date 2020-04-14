ELF = bin/robot_debug.elf

INC+= -I.
INC+= -I./libs

CC = g++
CU = nvcc
LD = g++
OBJCOPY = objcopy
OBJDUMP = objdump
SIZE = size

# DEGUBFLAGS = -g -pg

CFLAGS = $(DEGUBFLAGS) -O2 -Os -s -Wall -Wextra -pedantic -std=c++11 $(INC)
CUDAFLAGS = -O3 -D_FORCE_INLINES -ccbin=$(CXX) -Xcompiler -fPIC -std=c++11 $(INC)

LDFLAGS = $(DEGUBFLAGS)  -lm -lpthread -pthread -std=c++11 #-lglut -lGL -lGLU -lX11 -ljsoncpp

#-lstdc++fs

SRCS+= $(shell find . -name '*.cpp')


OBJS = $(SRCS:.cpp=.o)
OBJS_CUDA = $(SRCS_CUDA:.cu=.oc)

all: $(ELF)
	$(SIZE) $(ELF)

$(ELF): $(LIBS) $(OBJS) $(OBJS_CUDA)
	$(LD) -o $@ $(OBJS) $(OBJS_CUDA) $(LIBS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm $(OBJS) -f
	rm $(ELF) -f
