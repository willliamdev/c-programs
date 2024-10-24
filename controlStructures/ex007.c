#include <stdio.h>
#include <locale.h>

int main()
{
  float price;
  int taxRule;

  printf("Qual o valor do produto: R$");
  scanf("%f", &price); /* code */
  printf("Estados em que ataumos:\n");
  printf(" 1 - Minas Gerais\n 2 - São Paulo\n");
  printf(" 3 - Rio de Janeiro\n 4- Mato Grosso do Sul\n");
  printf("\n Consultar [1/2/3/4]: ");
  scanf("%d", &taxRule);

  switch (taxRule)
  {
  case 1:
    price += price + price * 0.07;
    break;

  case 2:
    price += price * 0.12;
    break;

  case 3:
    price += price * 0.15;
    break;

  case 4:
    price += price * 0.08;
    break;

  default:
    taxRule = 0; // false
    printf("%d não é uma opção válida!!\n");
    break;
  }

  if (taxRule)
  {
    printf("O preço final será de R$%.2f\n", price);
  }

  return 0;
}
