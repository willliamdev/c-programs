#include <stdio.h>
#include <locale.h>

int squareOf(int n)
{
  return n * n;
}

int main()
{
  int x;
  scanf("%d", &x);

  printf("%d\n", squareOf(x));

  return 0;
}
