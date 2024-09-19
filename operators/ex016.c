#include <stdio.h>
#include <locale.h>

int main()
{
  int number, division, multiplication;

  printf("Insira um numero inteiro: ");
  scanf("%d", &number);
  multiplication = number << 1;
  division = number >> 1;
  printf("Multiplicação de %d por 2 é: %d e a divisão por dois é: %d\n", number, multiplication, division);
  return 0;
}
