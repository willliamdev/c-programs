#include <stdio.h>

int main()
{
  float width;
  float length;
  float area;
  float price;

  printf(" -- Calculador de preço de terreno --\n");
  printf("Insira, em metros, a laragura: ");
  scanf("%f", &width);
  printf("\nInsira, em metros, o comprimento: ");
  scanf("%f", &length);

  printf("\n\nAgora, insira o valor do metro quadrado: R$ ");
  scanf("%f", &price);

  area = width * length;

  printf("\n");
  return 1;
};
