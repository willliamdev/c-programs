#include <stdio.h>
#include <locale.h>

int main()
{
  int num;

  printf("Enter a integer number:");
  scanf("%d", &num);

  printf("Predecessor: %d\nSuccessor: %d\n", num - 1, num + 1);

  return 0;
}