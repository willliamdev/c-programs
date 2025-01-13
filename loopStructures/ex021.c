#include <stdio.h>

int main()
{
  int num = 1;
  int bigger = num, times = 0;
  while (num > 0)
  {
    printf("Insira um número: ");
    scanf("%d", &num);
    if (num > bigger)
    {
      bigger = num;
      times = 1;
    }
    else if (num == bigger)
    {
      times += 1;
    }
  }
  printf("\nO maior número digitado foi %d e foi digitado %d vezes\n", bigger, times);
  return 0;
}
