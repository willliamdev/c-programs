#include <stdio.h>
#include <locale.h>

int main()
{
  float real;
  float exchange_rate;
  printf("Insira a cotação da moeda estrangeira: ");
  scanf("%f", &exchange_rate);
  printf("Qual valor em R$ você deseja converter? ");
  scanf("%f", &real);
  printf("\nR$%.2f equivalem a: %.2f\n", real, real * exchange_rate);

  return 0;
}