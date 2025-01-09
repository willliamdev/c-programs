#include <stdio.h>

int main()
{
  double summation = 0, num;
  int counter;

  for (int i = 0; i < 10; i++)
  {
    printf("[%d/10] Insira um número: ", i + 1);
    scanf("%lf", &num);

    // ignorando números não positivos
    if (num <= 0)
    {
      continue;
    }
    counter += 1;
    summation += num;
  }

  printf("\nMédia dos números digitados: %.4lf\n", summation / counter);
  return 0;
}