#include <stdio.h>

int main()
{
  int rows, num = 0;

  printf("Insira um número inteiro: ");
  scanf("%d", &rows);

  for (int i = 0; i <= rows; i++)
  {
    printf("\n");
    for (int j = 0; j <= i; j++)
    {
      num += 1;
      printf("%d ", num);
    }
  }

  return 0;
}
