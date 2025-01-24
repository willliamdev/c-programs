#include <stdio.h>

int main()
{
  float array[10];
  float sum = 0;
  int negativeCouter = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("[%i/10]Insira um número: ", i + 1);
    scanf("%f", &array[i]);

    if (array[i] < 0)
    {
      negativeCouter++;
    }
    else
    {
      sum += array[i];
    }
  }

  printf("\nVocê inseriu %d números negavtivos\n", negativeCouter);

  printf("A soma do números positivos é %.3f\n", sum);

  return 0;
}