#include <stdio.h>
#include <locale.h>

int main()
{

  float km_h;
  printf("Insira a velocidade (Km/h): ");
  scanf("%f", &km_h);
  printf("%.2fkm/h é equivalente a %.2fm/s\n", km_h, (km_h / 3.6));

  return 0;
}