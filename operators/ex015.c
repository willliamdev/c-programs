#include <stdio.h>

int main()
{

  int num = 123;
  int reversed = 0;
  int rest;

  int i = 0;
  while (i < 3)
  {
    rest = num % 10;
    reversed += rest;
    num /= 10;
    reversed *= 10;

    printf("reversed: %d num: %d \n", num, rest);
    i++;
  }
  return 0;
}