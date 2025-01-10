#include <stdio.h>

int main()
{

  int summation = 0;

  for (int i = 1; i < 1000; i++)
  {
    if (i % 3 == 0)
    {
      summation += i;
    }

    if (i % 5 == 0)
    {
      summation += i;
    }
  }
  printf("\nSoma de todos os números abaixo de 1.000 múltiplos de 3 ou 5: %d\n", summation);

  return 0;
}