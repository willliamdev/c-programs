#include <stdio.h>

int main()
{

  int number;
  printf("Deseja consultar a taubuada de qual número? ");
  scanf("%d", &number);

  int i = 1;
  printf("Tabuata de Soma e Subtração");
  while (i <= 10)
  {
    printf("\n%d + %d = %d            %d + %d = %d", number, i, (number + i), number, i, (number - 1));

    // condicionais pra alinhamento
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