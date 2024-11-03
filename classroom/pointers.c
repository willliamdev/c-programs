#include <stdio.h>

int soma(int a, int b)
{
  return a + b;
}

int main()
{
  int x = 3;
  int *ponteiro = &x;
  int *ponteiroDoPonteiro = &*ponteiro; // ponteiro do ponteiro
  // printf("valor de x: %d\n", x);
  // printf("valor de p: %d\n", *p);

  // *p++; icremente o endereço de memória armazendato em e a várialvel x

  *ponteiroDoPonteiro += 2;

  int lista[10] = {78, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  // printf("\n\nAlterando *p o novo valor de X: %d\n", x);

  int *ponteiroLista = lista;

  //
  // printf("lista[0]: %d\n\n\n", *ponteiroLista);

  for (int i = 0; i < 10; i++)
  {
    *ponteiroLista *= 2;
    ponteiroLista++; //
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", lista[i]);
  }

  int (*ponteiroDaFuncao)(int, int);

  ponteiroDaFuncao = soma;

  printf("\n\n\n 2 + 5 somado via ponteiro da função: %d \n", ponteiroDaFuncao(2, 5));

  // printf("valor de x: %d", x);
  return 0;
}
