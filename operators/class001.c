#include <stdio.h>

// Faça um programa que leia três dois valorer e devolva o maior
int main()
{
  int x, y, greater;

  printf("Enter a integer number for X: ");
  scanf("%d", &x);
  printf("Enter a integer number for Y: ");
  scanf("%d", &y);

  greater = x > y ? x : y;

  printf("Total: %d\n", greater);

  // also works
  // printf("Total: %d\n", x > y ? x : y);

  return 0;
}
