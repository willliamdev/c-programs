#include <stdio.h>

int main()
{
  int pos[2] = {0, 0};
  int array[8];

  for (int i = 0; i < 8; i++)
  {
    printf("[%d/8]Insira um número: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("\n");
  for (int i = 0; i < 2; i++)
  {
    printf("[%d/2] Selecione um número pela posição [1-8]:", i + 1);
    scanf("%d", &pos[i]);

    if (pos[i] < 1 || pos[i] > 8)
    {
      printf("O número deve estar entre 1 e 8!\nTente novamente..\n\n");
      i--;
    }
    else
    {
      // moving to left 0-7
      pos[i] -= 1;
    }
  }

  printf("\narray[%d] = %d\n", pos[0] + 1, array[pos[0]]);
  printf("array[%d] = %d\n", pos[1] + 1, array[pos[1]]);
  printf("\nSomados = %d\n", array[pos[0]] + array[pos[1]]);

  return 0;
}
