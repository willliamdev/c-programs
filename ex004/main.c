#include <stdio.h>
#include <stdlib.h>

void main()
{
  int number, i;
  float divisibleNumber;

  printf("Deseja consultar a taubuada de qual número? ");
  scanf("%d", &number);

  i = 0;

  printf("\nSoma\t\t\tSubtração\n");
  while (i <= 10)
  {
    printf("\n%d + %d = %d\t\t%d - %d = %d", number, i, (number + i), number, i, abs(number - i));
    i++;
  }

  i = 0;
  printf("\n\nMultiplicaçao\t\tDivisao\n");
  divisibleNumber = number; // instead force somethiong float
  while (i <= 10)
  {
    if (i == 0)
    {
      printf("\n%d * %d = %d\t\t%d + %d = Nao existe divisao por Zero", number, i, (number * i), number, i);
      i++;
      continue;
    }

    printf("\n%d * %d = %d\t\t%d / %d = %.2f", number, i, (number * i), number, i, (divisibleNumber / i));
    i++;
  }
  printf("\n");
}