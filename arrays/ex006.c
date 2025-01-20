#include <stdio.h>

int main()
{
  int array[10];
  int even = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("[%d/10]Insira um número do tipo inteiro: ", i + 1);
    scanf("%d", &array[i]);
    if (array[i] % 2 == 0)
    {
      even += 1;
    }
  }
  printf("\nVocê digitou %d números pares e %d ímpares\n", even, 10 - even);

  return 0;
}