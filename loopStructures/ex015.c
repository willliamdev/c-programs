#include <stdio.h>

int main()
{
  int lower, bigger, number;

  printf("Insira um número: ");
  scanf("%d", &number);
  lower = number;
  bigger = number;

  while (1)
  {
    printf("Insira outro número: ");
    scanf("%d", &number);
    if (number < 0)
    {
      break;
    }
    lower = number < lower ? number : lower;
    bigger = number > bigger ? number : bigger;
  }

  printf("\nMenor número:\t%d\nMaior número:\t%d\n", lower, bigger);

  return 0;
}
