#include <stdio.h>

int main()
{

  int number, t1 = 0, t2 = 1, t3;

  printf("quantos termos de fibonnaci você quer?\n");
  scanf("%d", &number);

  printf("%d -> ", t1);
  printf("%d -> ", t2);

  while (number > 2)
  {
    t3 = t1 + t2;
    printf("%d -> ", t3);

    t1 = t2;
    t2 = t3;

    number--;
  }

  printf("fim!\n");
}