#include <stdio.h>
#include <locale.h>

int main()
{
  int number;

  printf("Digite um número inteiro: ");
  scanf("%d", &number);

  printf("O complemento bit a bit de %d é: %d\n", number, ~number);

  return 0;
}
