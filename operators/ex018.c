#include <stdio.h>
#include <locale.h>

int main()
{
  int number, x;

  printf("Insira um numero inteiro: ");
  scanf("%d", &number);
  printf("Insira outro numero inteiro: ");
  scanf("%d", &x);
  printf("%d >> %d = %d\n", number, x, number >> x);
  printf("%d << %d = %d\n", number, x, number << x);
  return 0;
}
