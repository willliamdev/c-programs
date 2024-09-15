#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  float hypotenuse, a, b;
  printf("Insira o valor do lado A: ");
  scanf("%f", &a);
  printf("Insira o valor do lado B: ");
  scanf("%f", &b);

  hypotenuse = sqrt(a * a + b * b);

  printf("\nO volume deste cinlindro é: %.2f\n", hypotenuse);

  return 0;
}
