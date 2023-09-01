#include <stdio.h>

void main(void)
{
  float wheight;
  printf("Informe o seu peso atual: ");
  scanf("%f", &wheight);

  printf("Um aumento de 10%% seria: %.2f\n", wheight * 1.1);
  printf("Um aumento de 15%% seria: %.2f\n", wheight * 1.15);
}
