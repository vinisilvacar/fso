CC=gcc
CFLAGS=-I.
DEPS = entrada.h operacoes.h estruturas.h

%.o: %.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: main.o entrada.o operacoes.o
		gcc -o main main.o entrada.o operacoes.o -I.
