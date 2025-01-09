#include <stdio.h>

int main()
{

  int number = 0;
  printf("Insira um número: ");
  scanf("%d", &number);

  printf("São divisores de %d os seguintes números:\n", number);
  for (int i = 1; i <= number; i++)
  {

    if (number % i == 0)
    {
      printf("| %d ", i);
    }
  }

  printf("|\n");

  return 0;
}