#include <stdio.h>
#include <locale.h>

int main()
{
  float fahrenheit;
  float celsius;
  printf("Insira a temperaruta em °C: ");
  scanf("%f", &celsius);
  fahrenheit = celsius * 1.8 + 32;
  printf("\n%.2f°C equivalem a: %.2f°F\n", celsius, fahrenheit);
  return 0;
}
