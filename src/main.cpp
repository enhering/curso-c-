#include "main.h"

int main() {
  int Inteira;
  double VariavelDoTipoNaoInteira;

  Inteira = 5;
  VariavelDoTipoNaoInteira = 4.8;

  std::cout << "Olá. Minha variável do tipo inteira tem o valor "
            << Inteira
            << std::endl;

  std::cout << "Olá. Minha variável do tipo não inteira tem o valor "
            << VariavelDoTipoNaoInteira
            << std::endl;

}

