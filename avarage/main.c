#include <stdio.h>

float getMark()
{
  float mark;
  printf("Insira a nota: ");
  scanf("%f", &mark);
  return (mark);
};

int main()
{

  float mark1;
  float mark2;
  float mark3;

  mark1 = getMark();
  mark2 = getMark();
  mark3 = getMark();

  printf("A média ponderadada das notas %.1f, %.1f e %.1f, é: ", mark1, mark2, mark3);
  printf("%.2f", ((mark1 * 1 + mark2 * 2 + mark3 * 3) / 6));

  printf("\n");
  return 0;
}