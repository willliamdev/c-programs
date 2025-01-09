#include <stdio.h>

int main()
{

  int counter = 0, i = 1;
  while (counter < 5)
  {
    if (i % 3 == 0)
    {
      printf("%d° múltiplo de 3: %d\n", counter + 1, i);
      counter += 1;
    }
    i++;
  }

  return 0;
}
