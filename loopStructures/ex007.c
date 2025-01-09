#include <stdio.h>

int main()
{
  double summation = 0, num;

  for (int i = 0; i < 10; i++)
  {
    printf("[0%d/10]Insira um número: ", i + 1);
    scanf("%lf", &num);
    summation += num;
  }

  printf("\nomatório dos número digitados: %.4lf\n", summation);
  return 0;
}