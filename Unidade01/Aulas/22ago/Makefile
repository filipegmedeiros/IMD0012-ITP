################## MAKEFILE #################
FLAGS = -lGL -lglut -lpng -lz -lm -o
CFLAGS = -Wall
CC = gcc


all:
	echo 'hello'

clean:
	rm *.out

q%: Questao%.c
	$(CC) $(CFLAGS) $< $(FLAGS) $*.out


run%: %.out
	./$<

