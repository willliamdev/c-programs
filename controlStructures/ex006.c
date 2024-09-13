#include <stdio.h>
#include <locale.h>

int main()
{
  int gender;
  float weight, height;
  printf("Calculador de peso ideal");
  printf("Primeiro, informe o seu sexo:\n 1 - Para masculino\n 2 - Feminino\nsexo: ");
  scanf("%d", &gender);
  if (gender != 1 && gender != 2)
  {
    printf("opção inválida!\n");
    return 0;
  }

  printf("\nQual a sua altura atual? : ");
  scanf("%f", &weight);

  if (gender == 1)
  {
    weight = (72.2 * height) - 58;
  }
  else
  {
    weight = (62.1 * height) - 44.7;
  }

  printf("\nPeso ideal: %.2fKg", weight);

  return 0;
}

// Homens: (72,7 * h) – 58
// Mulheres: (62,1 * h) – 44,7