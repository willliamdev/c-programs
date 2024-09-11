#include <stdio.h>
#include <locale.h>

int main()
{
  float r;

  printf("Insira o valor do raio: ");
  scanf("%f", &r);
  printf("A área deste círculo será: %.6f\n", 3.141592 * (r * r));

  return 0;
}
