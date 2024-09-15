#include <stdio.h>
#include <locale.h>

int main()
{
  float height, radius, volume;
  printf("Insira o valor do raio: ");
  scanf("%f", &radius);
  printf("Insira a altura do cilindro: ");
  scanf("%f", &height);
  volume = 3.141592 * radius * radius * height;

  printf("\nO volume deste cinlindro é: %.2f\n", volume);

  return 0;
}
