#include <stdio.h>
#include <locale.h>

int main()
{
  char c;
  printf("Insira uma letra maiúscula:");
  scanf("%c", &c);

  // Reference: https://www.ascii-code.com/
  printf("%c lowercase: %c\n", c, c + 32);

  return 0;
}