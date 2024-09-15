#include <stdio.h>
#include <locale.h>

int main()
{

  int number;

  printf("Insira um número natural e tal: ");
  scanf("%d", &number);
  for (number; number >= 0; number--)
  {
    printf("%d\n", number);
  }

  return 0;
}