#include <stdio.h>

int main()
{
  int number, i;
  float divisibleNumber;

  printf("Deseja consultar a taubuada de qual número? ");
  scanf("%d", &number);

  i = 0;
  printf("\nSoma\t\t\tSubtração\n");
  while (i <= 10)
  {
    printf("\n%d + %d = %d\t\t%d + %d = %d", number, i, (number + i), number, i, (number - i));
    i++;
  }

  i = 0;
  printf("\n\n\nMultiplicaçao\t\t\tDivisao\n");
  divisibleNumber = number;
  while (i <= 10)
  {
    if (i != 0)
    {
      printf("\n%d * %d = %d\t\t%d + %d = %.2f", number, i, (number * i), number, i, (divisibleNumber / i));
    }
    else
    {
      printf("\n%d * %d = %d\t\t%d + %d = Nao existe divisao por Zero", number, i, (number * i), number, i);
    };
    i++;
  }
  printf("\n");
  return 0;
}

/*

+ 0
+ 1
+ 2
+ 3
+ 4
+ 5
+ 6
+ 7
+ 8
+ 9
+ 10
*/