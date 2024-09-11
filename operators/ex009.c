#include <stdio.h>
#include <locale.h>

int main()
{
  float degrees;
  float radian;
  printf("Insira os graus: ");
  scanf("%f", &degrees);
  radian = degrees * 3.141592 / 180;
  printf("\n%f° equivalente em radianos: %f\n", degrees, radian);
  return 0;
}
