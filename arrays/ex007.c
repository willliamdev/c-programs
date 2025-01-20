#include <stdio.h>

int main()
{
  int lower, bigger, array[10];

  for (int i = 0; i < 10; i++)
  {
    printf("[%d/10]\t Insira um número: ", i + 1);
    scanf("%d", &array[i]);
    if (i == 0)
    {
      lower = array[i];
      bigger = array[i];
      continue;
    }

    lower = array[i] < lower ? array[i] : lower;
    bigger = array[i] > bigger ? array[i] : bigger;
  }

  printf("\nMenor número:\t%d\nMaior número:\t%d\n", lower, bigger);

  return 0;
}