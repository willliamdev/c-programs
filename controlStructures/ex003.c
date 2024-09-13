#include <stdio.h>
#include <locale.h>

int main()
{
  int number;
  printf("Insira um número inteiro: ");
  scanf("%d", &number);
  if (number % 2 == 0)
  {
    printf("%d é par\n", number);
  }
  else
  {
    printf("%d é impar\n", number);
  }

  return 0;
}
