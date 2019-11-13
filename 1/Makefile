all: prog1
CC= gcc
INCLUDE= .
CFLAGS= -g -Wall -ansi
objects= progla.o proglb.o proglc.o 
prog1: $(objects)	
	$(CC) -o prog1 $(objects)
%.o : %.c
	$(CC) -I$(INCLUDE) $(CFLAGS) -c $^ -o $@
clean:	
	rm prog1 $(objects)
