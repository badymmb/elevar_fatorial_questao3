all: questao3

questao3: main.o funcoes.o
	gcc main.o funcoes.o -o questao3

main.o: main.c
	gcc -c main.c -o main.o

funcoes.o: funcoes.c
	gcc -c funcoes.c -o funcoes.o

clean:
	rm -rf *.o
