#include <stdio.h>
#include <locale.h>

void printString(char *msg)
{
  printf("%s\n", msg);
}

void somaN(int *num, int x)
{
  *num += x;
}

int main()
{
  int x = 1;
  printString("teste do teste e o teste sendo testado");
  // passando o ponteiro
  somaN(&x, 1231);
  printf("valor de x: %x \n", x);

  // printf("valor do input de X: %d \n", x);
  return 0;
}