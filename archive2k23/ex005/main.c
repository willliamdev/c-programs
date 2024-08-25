#include <stdio.h>

void main()
{
  int a, b;

  printf("Insira um valor pra A: ");
  scanf("%d", &a);
  printf("\nInsira um valor pra B: ");
  scanf("%d", &b);

  printf("\n a divisaro de %d por %d é %.2f", a, b, (float)a / b);
}
