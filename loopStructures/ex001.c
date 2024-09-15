#include <stdio.h>
#include <locale.h>

int main()
{

  int i, number;

  printf("Insira um número natural e tal: ");
  scanf("%d", &number);
  for (i = 0; i < number; i++)
  {
    printf("%d\n", i);
  }

  return 0;
}