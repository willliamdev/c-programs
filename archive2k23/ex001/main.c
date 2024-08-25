#include <stdio.h>

int main()
{
  float width, length, area, price;
  printf(" -- Calculador de preço de terreno --\n");
  printf("Insira a laragura (em metros): ");
  scanf("%f", &width);
  printf("\nInsira o comprimento (em metros): ");
  scanf("%f", &length);
  printf("\nAgora, insira o valor do metro quadrado: R$");
  scanf("%f", &price);
  area = length * width;

  printf("\n\nEste terreno tem uma área de %.2f M^2 e custa R$%.2f\n", area, area * price);
  return 0;
};
