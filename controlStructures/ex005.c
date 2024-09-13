#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  int number;
  double square_root;
  printf("Insira um número pertecente ao conjustos dos números naturais: ");
  scanf("%d", &number);

  if (number > 0)
  {
    printf("\n%d ao quadrado é %d, e ", number, number * number);
    square_root = sqrt(number);
    printf("a raiz quadrade é %.3f\n", number, square_root);
  }
  else
  {
    printf("\n%d não faz parte desse conjunto\n", number);
  }

  return 0;
}
