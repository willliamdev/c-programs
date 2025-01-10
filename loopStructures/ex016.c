#include <stdio.h>

int main()
{

  int number;
  float b, harmonic = 1;
  printf("Insira um número: ");
  scanf("%d", &number);

  for (int i = 2; i <= number; i++)
  {

    harmonic += 1.0 / i;
  }

  printf("H(%d) = %f\n", number, harmonic);
  return 0;
}