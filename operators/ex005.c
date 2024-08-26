#include <stdio.h>

// Calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
int main()
{
  int age;
  char not_turn;
  printf("How old are you?");
  scanf("%d", &age);
  printf("Will you turn %d this year? [y/n]", age + 1);
  scanf("%c", &not_turn);

  // TODO
  // debug say thi is a comparison between pointer and integer
  if ((not_turn == "Y") || (not_turn == "y"))
  {
    printf("You was born on %d\n", (2024 - age + 1));
  }
  else
  {
    printf("You was born on %d\n", (2024 - age));
  }

  return 0;
}