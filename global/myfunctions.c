#include <stdio.h>

// recebe um valor int
void inputInt(int *number)
{
  printf("Insira um número inteiro: ");
  scanf("%d", &*number);
}
