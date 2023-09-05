
#include <stdio.h>

float getMark(int number)
{
  float mark;
  printf("Insira a nota %d: ", number);
  scanf("%f", &mark);
  while (mark > 10 || mark < 0)
  {
    printf("As notas devem ser de 0 à 10");
    printf("\nInsira novamente a nota %d: ", number);
    scanf("%f", &mark);
  }

  return (mark);
};

int main()
{
  float mark1;
  float mark2;
  float mark3;

  mark1 = getMark(1);

  mark2 = getMark(2);
  mark3 = getMark(3);

  printf("A média ponderadada das notas %.1f, %.1f e %.1f, é: ", mark1, mark2, mark3);
  printf("%.2f", ((mark1 * 1 + mark2 * 2 + mark3 * 3) / 6));

  printf("\n");
  return 0;
}