#include <stdio.h>
#include <locale.h>

int main()
{

  float salaray;
  float loan;
  printf("Simulador de empréstimo\n");
  printf("Insira o valor bruto do seu atual salário\n R$");
  scanf("%f", &salaray);
  printf("Valor empréstimo:\n R$");
  scanf("%f", &loan);

  if (loan > (salaray * 0.2))
  {
    printf("Empréstimo não concedido\n");
  }
  else
  {
    printf("Empréstimo concedido\n");
  }

  return 0;
}