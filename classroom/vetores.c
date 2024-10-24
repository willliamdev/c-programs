#include <stdio.h>
#include <locale.h>

int main()
{
  int m[3][3];

  // printf("m: %d\n", m);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("input");
      scanf("%d", &m[i][j]);
    }
  }

  int det, expressao1, expressao2;

  expressao1 = m[0][0] * m[1][1] * m[2][2] + m[0][1] * m[1][2] * m[2][0] + m[0][2] * m[1][0] * m[2][1];
  expressao2 = m[0][2] * m[1][1] * m[2][0] + m[0][0] * m[1][2] * m[2][1] + m[0][1] * m[1][0] * m[2][2];

  det = expressao1 - expressao2;

  printf("\n det: %d\n", det);
  return 0;
}
