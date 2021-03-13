INC = -I.
CC 	= g++


CFLAGS = -O3 -Wall -Wextra -pedantic -std=c++17


SRCS = $(shell find . -name '*.cpp')

OBJS = $(SRCS:.cpp=.o)

all: $(OBJS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $(INC) $< -o $@


clean:
	rm $(OBJS) -rf
