#include "main.h"

int g_Idade = 10;

int main() {
  int Inteira;
  double VariavelDoTipoNaoInteira;

  Inteira = 5 + g_Idade;
  VariavelDoTipoNaoInteira = 4.8;

  MostrarIdade(g_Idade);

  std::cout << "Olá. Minha variável do tipo não inteira tem o valor "
            << VariavelDoTipoNaoInteira
            << std::endl;

  std::cout << "A soma de 2 com 5 é " << Soma(2,5) << std::endl;

}
