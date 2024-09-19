#include <stdio.h>

int main()
{
  int x, y, z, option, answer = 1;

  do
  {
    /* code */

    printf("\nInsert a int number for x: ");
    scanf("%d", &x);
    printf("Insert a int number for y: ");
    scanf("%d", &y);
    printf("Insert a int number for z: ");
    scanf("%d", &z);

    while (option < 1 || option > 4)
    {
      printf("\n 1 - Média Geométrica\n");
      printf(" 2 - Média Ponderada\n");
      printf(" 3 - Média Harmonica\n");
      printf(" 4 - Média Aritimética\n");

      printf("\nEscolha uma das opções acima: ");
      scanf("%d", &option);
      double harmonica;

      switch (option)
      {
      case 1: // geométrica
        printf("%d x %d x %d = %d\n", x, y, z, (x * y * z));
        break;

      case 2: // ponderada
        printf("(%d + 2 x %d + 3 x %d ) / 6 = %d\n", x, y, z, ((x + 2 * y + 3 * z) / 6));
        break;
      case 3: // harmonica
        harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));
        printf("%.2f\n", harmonica);
        break;
      case 4: // aritimética
        float aritimetica = (x + y + z) / 3;
        printf("%.2f\n", aritimetica);
        break;
      default:
        printf("\n\nOPÇÃO INVÁLIDA!!!\n");
        break;
      }
    }
    printf("\nInster 1 to run again: ");
    scanf("%d", &answer);
  } while (answer == 1);
  return 0;
}
