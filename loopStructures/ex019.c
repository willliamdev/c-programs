#include <stdio.h>

int main()
{

  double sum = 0, dividend = 1;

  for (int i = 1; i <= 50; i++)
  {
    sum += dividend / i;

    dividend += 2;
  }

  printf("Soma: %lf\n", sum);
  return 0;
}