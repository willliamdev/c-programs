#include <stdio.h>

// Faça um programa que leia três valores inteiros e mostre sua soma.
int main()
{
  int i, num, total = 0;

  for (i = 0; i < 3; i++)
  {
    printf("Enter a integer number: ");
    scanf("%d", &num);

    total = total + num;
  }

  printf("Total: %d\n", total);

  return 0;
}
