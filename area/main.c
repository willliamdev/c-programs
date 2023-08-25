#include <stdio.h>

int rectagle(){

};

int main()
{
  int boool;
  char response;
  scanf("%d", &boool);
  response = "y";

  while (&response == "y" || &response == "y")
  {
    printf("deseja calcular novamente? [Y/n] ");
    scanf("%c", &response);
    printf("%c", response);
  };

  /*
    quadrado || retangulo
    circulo
    triangulo

  */
  switch (boool)
  {
  case 1:
    printf("okok %d", boool);
    break;
  case 0:
    printf("baaa meu%d", boool);
    break;
  default:
    printf("uai man");
    break;
  }

  return 0;
};