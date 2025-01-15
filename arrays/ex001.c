#include <stdio.h>

int main()
{

  int array[6];

  for (int i = 0; i < 6; i++)
  {
    printf("\nInsira um número inteiro: ");
    scanf("%d", &array[i]);
  }

  printf("\nArray = ");

  for (int j = 0; j < 6; j++)
  {
    printf("%d, ", array[j]);
  }

  printf("fim!\n");

  return 0;
}