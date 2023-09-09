#include <stdio.h>

int rectagle()
{
  printf("Quadrado é retanfulo porque tem ângulos retos");
  // calculo de area e tal
  return 0;
};

int main()
{
  int boool, response, option;

  response = 1;

  while (response == 1)
  {
    printf("\nSelecine a figura:");
    printf("\n[0] - Quadrado\n[1] - Retângulo");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      rectagle();
      break;
    case 0:
      rectagle();
      break;
    default:
      printf("uai man");
      break;
    };
    printf("deseja calcular novamente? [Y/n] ");
    scanf("%d", &response);
    printf("%d", response);
  };

  /*
    quadrado || retangulo
    circulo
    triangulo

  */

  return 0;
};