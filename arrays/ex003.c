#include <stdio.h>

int main()
{
  int array[5];
  float average = 0.0;

  for (int i = 0; i < 5; i++)
  {
    printf("[%d/5] Insira um número: ", i + 1);
    scanf("%d", &array[i]);
    average += (float)array[i];
  }
  printf("\nMédia: %.2f\n", average / 5);
  return 0;
}