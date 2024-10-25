#include <stdio.h>
#include <locale.h>

int main()
{
  float numX, numY;
  int op;
  printf("Escolha uma das operaçães a seguir:");
  printf("\n[1] Adição\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n");

  printf("opção: ");
  scanf("%d", &op);

  printf("Valor de X: ");
  scanf("%f", &numX);

  printf("Valor de Y: ");
  scanf("%f", &numY);

  switch (op)
  {
  case 1:
    printf("%.2f + %.2f = %.2f", numX, numY, numX + numY);
    break;
  case 2:
    printf("%.2f - %.2f = %.2f", numX, numY, numX - numY);
    break;
  case 3:
    printf("%.2f x %.2f = %.2f", numX, numY, numX * numY);
    break;
  case 4:
    if (numY == 0)
    {
      printf("Não existe divisão por 0");
      break;
    }

    printf("%.2f / %.2f = %.2f", numX, numY, numX / numY);
    break;

  default:
    printf("\nNúmero inválido!!\n");
    break;
  }
  printf("\n");
  return 0;
}