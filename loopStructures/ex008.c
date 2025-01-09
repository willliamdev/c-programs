#include <stdio.h>

int main()
{
  double summation = 0, num;

  for (int i = 0; i < 10; i++)
  {
    printf("[%d/10] Insira um número: ", i + 1);
    scanf("%lf", &num);
    summation += num;
  }

  printf("\nMédia dos números digitados: %.4lf\n", summation / 10);
  return 0;
}