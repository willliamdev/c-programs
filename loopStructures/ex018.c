#include <stdio.h>

int main()
{

  int number;
  printf("Insira um número inteiro: ");
  scanf("%d", &number);

  int divisor = number - 1;
  while (divisor > 1)
  {
    if (number % divisor == 0)
    {
      break;
    }
    divisor--;
  }

  if (divisor == 1)
  {
    printf("%d é um numero primo\n");
  }
  else
  {
    printf("%d não é um numero primo\n");
  }

  return 0;
}