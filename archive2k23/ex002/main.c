#include <stdio.h>

int main()
{
  float minimumWage;
  float employeeWage;

  printf("Insira o valor do salário mínimo: R$");
  scanf("%f", &minimumWage);
  printf("\nInsira o valor do salário do funcionário: R$");
  scanf("%f", &employeeWage);

  printf("\n O funcionário recebe %.1f salários mínimos\n", (employeeWage / minimumWage));
  return 0;
};