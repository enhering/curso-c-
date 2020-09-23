
all: exibicao operacoes meu_prog

exibicao:
  g++ -c -lstdc++ Exibicao.cpp

operacoes:
	g++ -c -lstdc++ Operacoes.cpp

meu_prog:
	g++ main.cpp Exibicao.o Operacoes.o -lstdc++ -o meu_prog
