#include <stdio.h>

int main()
{
  int array[100];

  int counter = 0;
  int i = 1;
  while (counter < 100)
  {
    if (i % 7 == 0)
    {
      array[counter] = i;
      counter++;
    }
    i++;
  }

  for (int i = 0; i < 100; i++)
  {
    printf("array[%d]= %d\n", i, array[i]);
  }

  return 0;
}
