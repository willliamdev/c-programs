#include <stdio.h>
#include <locale.h>

int main()
{
  int weekday;
  printf("Informe um número de 1 à 7: ");
  scanf("%d", &weekday);

  switch (weekday)
  {
  case 1:
    printf("Domingo");
    break;
  case 2:
    printf("Segunda-Feira");
    break;
  case 3:
    printf("Terça-Feira");
    break;
  case 4:
    printf("Quarta-Feira");
    break;
  case 5:
    printf("Quinta-Feira");
    break;
  case 6:
    printf("Sexta-Feira");
    break;
  case 7:
    printf("Sábado");
    break;
  }

  printf("\n");
  return 0;
}
