#include <stdio.h>

int main()
{

  float wage;

  printf("Insira o valor bruto do seu salario atual: R$ ");
  scanf("%f", &wage);
  // update wage
  wage = wage * 1.15;
  printf("\n---------------- Reajuste -----------------");
  printf("\n Aumento: 15%%\t\t\tR$ %.2f", wage);

  printf("\n\n---------------- Descontos ----------------");
  printf("\nINSS: 11%%\t\t\tR$ %.2f\nFGTS: 8%%\t\t\tR$ %.2f", wage * 0.11, wage * 0.08);
  printf("\n\nTotal descontos: 19%%\t\tR$ %.2f", wage * 0.19);

  printf("\n\n-------------------------------------------");
  printf("\nSalário + reajuste, liquido:\tR$ %.2f", wage - wage * 0.19);

  // remove "%" when runnig at
  printf("\n");
  return 0;
};