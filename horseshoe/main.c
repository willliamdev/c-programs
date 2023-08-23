#include <stdio.h>

int main()
{
  int horses;
  float price;

  printf("Insira a quantia de cavalos adiquiridos: ");
  scanf("%d", &horses);
  printf("Insiro o valor unitario de cada ferradura: ");
  scanf("%f", &price);

  printf("Ferraduras necessárias: %d", horses * 4);
  printf("Custo dessas ferraduras: %.2f", price * 4 * horses);
  printf("\n");
  return 0;
}
