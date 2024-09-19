#include <stdio.h>
#include <locale.h>

int main()
{
  int x, y;

  printf("Insira um numero inteiro: ");
  scanf("%d", &x);
  printf("Insira outro numero inteiro: ");
  scanf("%d", &y);
  printf("%d ^ %d = %d\n", x, y, x ^ y);
  printf("%d | %d = %d\n", x, y, x | y);
  printf("%d & %d = %d\n", x, y, x & y);

  return 0;
}
