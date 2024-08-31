#include <stdio.h>

int main()
{

  int option;
  printf("Estados brasileiros agrupados por região\n");
  printf("1 - Centro Oeste\n2 - Sudeste\n3 - Sul\n4 - Norte\n5 - Nordeste");
  printf("\nSelecione uma das opções: ");
  scanf("%d", &option);

  switch (option)
  {
  case 1:
    printf("Goiás, Mato Grosso e Mato Grosso do Sol");
    break;
  case 2:
    printf("\nEspirito santo, Minas Gerais, Rio de Janeiro e São Paulo");
    break;
  case 3:
    printf("\nParaná, Santa Catarina e Rio Grande do Sul");
    break;
  case 4:
    printf("\nAcre, Amapá, Amazonas, Pará, Rondônia, Roraima e Tocantins");
    break;
  case 5:
    printf("\nAlagoas, Bahia, Ceará, Maranhão, Paraíba, Pernambuco, Piauí e Rio Grande do Norte");
    break;
  }
  printf("\n");
  return 0;
}