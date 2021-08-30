all: compile run

compile:
	gcc main.c -o main.o -lm
run:
	./main.o
