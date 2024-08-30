#include <stdio.h>

// Calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
int main()
{
  int age;
  char not_turn;
  printf("How old are you? ");
  scanf("%d", &age);
  printf("Will you turn %d this year? [y/n]: ", age + 1);

  /*
   blank in the format string tells scanf to skip leading whitespace, and the first
   non-whitespace character will be read with the %c conversion specifier.
  */
  scanf(" %c", &not_turn);

  if ((not_turn == "Y") || (not_turn == "y"))
  {
    printf("oh, You was born on %d\n", (2024 - age + 1));
  }
  else
  {
    printf("You was born on %d\n", (2024 - age));
  }

  return 0;
}