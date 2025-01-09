#include <stdio.h>

int main()
{
  double lower, bigger, num;

  for (int i = 0; i < 10; i++)
  {
    printf("[%d/10]\t Insira um número: ", i + 1);
    scanf("%lf", &num);
    if (i == 0)
    {
      lower = num;
      bigger = num;
      continue;
    }

    lower = num < lower ? num : lower;
    bigger = num > bigger ? num : bigger;
  }

  printf("\nMenor número:\t%.2lf\nMaior número:\t%.2lf\n", lower, bigger);

  return 0;
}