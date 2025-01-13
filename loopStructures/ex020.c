#include <stdio.h>

int main()
{
  int number;
  float e = 1.0;
  float fatorial = 1.0;

  printf("Insira um valor inteiro e positivo N: ");
  scanf("%d", &number);

  for (int i = 1; i <= number; i++)
  {
    fatorial *= i;
    e += 1.0 / fatorial;

    printf("Fatorial %f \n", fatorial);
  }

  printf("E = %.10f\n", e);
  return 0;
}
