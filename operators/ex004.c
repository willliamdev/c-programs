#include <stdio.h>
#include <locale.h>

int main()
{
  int i;
  float num, total = 0;

  for (i = 0; i < 4; i++)
  {
    printf("Enter a float/real number: ");
    scanf("%f", &num);

    total += num;
  }

  printf("Avarage: %.2f\n", (total / 4));
  return 0;
}
