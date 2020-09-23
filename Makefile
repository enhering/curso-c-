
all: exibicao operacoes meu_prog

exibicao:
	g++ -c -lstdc++ src/Exibicao.cpp

operacoes:
	g++ -c -lstdc++ src/Operacoes.cpp

meu_prog:
	g++ src/main.cpp Exibicao.o Operacoes.o -lstdc++ -o meu_prog

clean:
	rm Exibicao.o
	rm Operacoes.o
	rm meu_prog
