#include <stdio.h>

int main()
{

  int number, summation = 0;
  printf("Insira um número: ");
  scanf("%d", &number);

  for (int i = 1; i < number; i++)
  {

    if (number % i == 0)
    {
      summation += i;
    }
  }

  printf("\nSomatório dos divisores de %d é: %d\n", number, summation);

  return 0;
}