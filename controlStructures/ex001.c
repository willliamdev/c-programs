#include <stdio.h>
#include <locale.h>

int main()
{
  int num1, num2;
  printf("Insira um número inteiro: ");
  scanf("%d", &num1);
  printf("Insira outro número inteiro: ");
  scanf("%d", &num2);

  if (num1 == num2)
  {
    printf("Você inseriu o mesmo número.. :|\n");
  }
  else if (num1 > num2)
  {
    printf("%d > %d \n", num1, num2);
  }
  else
  {
    printf("%d > %d \n", num2, num1);
  }

  return 0;
}
