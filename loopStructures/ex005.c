#include <stdio.h>

int main()
{
  int summation = 0;

  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      // printf("%d° numero par: %d\n", i / 2, i);
      summation += i;
    }
  }

  printf("Somatório dos 50 primeiros números pares: %d\n", summation);
  return 0;
}