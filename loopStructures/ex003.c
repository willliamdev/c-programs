#include <stdio.h>
#include <locale.h>

int main()
{
  int i, number;

  printf("Insira um número natural e tal: ");
  scanf("%d", &number);
  number *= 2;
  for (i = 0; i < number; i++)
  {
    if (i % 2 != 0)
    {
      printf("%d\n", i);
    }
  }
  printf("\n\nEstes foram os %d° primeiros números ímpares\n", i);

  return 0;
}