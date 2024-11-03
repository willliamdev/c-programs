#include <stdio.h>

void swap(int *a, int *b)
{
  int c = *a;
  *a = *b;
  *b = c;
}

int main()
{

  int impar = 1, par = 2;
  printf("impar: %d par: %d\n", impar, par);

  swap(&impar, &par);
  printf("\n  swap\n\n");

  printf("impar: %d par: %d\n", impar, par);
  return 0;
}
