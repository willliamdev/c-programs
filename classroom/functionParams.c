#include <stdio.h>
#include <locale.h>
#include "inputInt.h"

void somaN(int *num, int x)
{
  *num += x;
}

int main()
{
  int x = 1;
  // passando o ponteiro
  // somaN(&x, 1231);
  // printf("valor de x: %x \n", x);

  inputInt(&x);

  printf("valor do input de X: %d \n", x);
  return 0;
}