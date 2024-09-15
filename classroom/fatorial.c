#include <stdio.h>

int main()
{
  int number;
  size_t fat;
  printf("Calcular fatorial de: ");
  // scanf("%d", &number);
  number = 30;

  for (fat = 1; number > 1; number--)
  {
    fat = fat * number;
    printf("Fatorial %d \n", fat);
  }

  printf("Fatorial de %d é %d\n", number, fat);
  return 0;
}