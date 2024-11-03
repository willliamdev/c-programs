#include <stdio.h>
#include "../global/myfunctions.h"

int soma(int a, int b)
{
  return a + b;
}

int multiplicacao(int a, int b)
{
  return a * b;
}

int subtracao(int a, int b)
{
  return a - b;
}

int main()
{
  int (*funcao)(int, int);
  int option = 1; // input hardcoded

  switch (option)
  {
  case 1:
    funcao = soma;
    break;
  case 2:
    funcao = multiplicacao;
    break;
  case 3:
    funcao = multiplicacao;
    break;
  default:
    printf("de 1 à 3!!");
    break;
  }
  int x, y, resultado;

  inputInt(&x);
  inputInt(&y);

  resultado = funcao(x, y);
  printf("Resultado: %d \n", resultado);

  return 0;
}
