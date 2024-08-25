#include <stdio.h>

int main()
{
  int i;
  float number;
  int b;
  printf("insira um numero de mil e tanto: ");
  scanf("%f", &number);

  for (i = 0; i < 4; i++)
  {
    if (i == 0)
    {
      printf("\n%d unidades", ((int)number % 10));
      number = number - ((int)number % 10);
    }
    else
    {
      if (i == 1)
      {
        printf("\n%d unidades", ((int)number % 10));
        number = number - ((int)number % 10);
      }
      else
      {
        if (i == 2)
        {
          printf("\n%d unidades", ((int)number % 10));
          number = number - ((int)number % 10);
        }
        else
        {
          if (i == 3)
          {
            printf("\n%d unidades", ((int)number % 10));
            number = number - ((int)number % 10);
            // printf("\n%d unidades", number % 10);
            // number = number - (number % 10);
          }
        }
      }
    }
  }
  return 0;
};
