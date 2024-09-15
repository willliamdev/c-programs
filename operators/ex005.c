#include <stdio.h>
#include <locale.h>

int main()
{
  int age, not_turn;

  printf("How old are you? ");
  scanf("%d", &age);

  printf("Will you turn %d this year?", age + 1);
  printf("\n 0 - NO\n 1 - YES\nAwnser[0/1]: ");
  scanf("%d", &not_turn);

  if (not_turn)
  {
    printf("\nYou was born on %d\n", (2024 - (age + 1)));
  }
  else
  {
    printf("You was born on %d\n", (2024 - age));
  }

  return 0;
}