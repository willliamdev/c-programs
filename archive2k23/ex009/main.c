#include <stdio.h>
void main()
{
  int boool, response, option;

  response = 1;

  while (response == 1)
  {
    printf("\nSelecine a figura:");
    printf("\n[1] - Quadrado\n[2] - Retângulo\n[3] - Trapézio\n[4] - Cículo\n[5] - Triângulo");
    printf("\n\ndigite o número correspodente: ");
    scanf("%d", &option);

    switch (option)
    {

    case 1:
      printf("\n\tquadrado\n");

      float sqr_side;
      printf("\ninsira o valor do lado: ");
      scanf("%f", &sqr_side);
      printf("\nA area desse quadrado é: %.2f", (sqr_side * sqr_side));

      break;

    case 2:
      printf("\n\tretângulo\n");

      float rect_width, rect_height;
      printf("\ninsira o valor da base: ");
      scanf("%f", &rect_width);
      printf("insira o valor da altura: ");
      scanf("%f", &rect_height);
      printf("\nA area desse retângulo é: %.2f", (rect_width * rect_height));

      break;

    case 3:
      printf("\n\ttrapézio\n");

      float trpz_base, trpz_smaller_base, trpz_height;
      printf("\ninsira o valor da base maior: ");
      scanf("%f", &trpz_base);
      printf("insira o valor da base menor: ");
      scanf("%f", &trpz_smaller_base);
      printf("insira o valor da altura: ");
      scanf("%f", &trpz_height);
      printf("\nA area desse trapézio é: %.2f", (((trpz_base + trpz_smaller_base) * trpz_height) / 2));
      break;

    case 4:
      printf("\n\tCírculo\n");

      float radius;
      printf("\ninsira o valor da base: ");
      scanf("%f", &radius);
      printf("\nA área desse círculo é: %.2f", (3.14 * (radius * radius)));
      break;

    // triangle
    case 5:
      printf("\n\ttriângulo\n");

      float triangle_base, triangle_height;
      printf("\ninsira o valor da base: ");
      scanf("%f", &triangle_base);
      printf("insira o valor da base: ");
      scanf("%f", &triangle_height);
      printf("área desse triângulo é: %.2f", (triangle_base * triangle_height) / 2);

      break;

    default:
      printf("default");
      break;
    };

    printf("\n\nCaso queira calcular novamente, digite [1]: ");
    scanf("%d", &response);
  };
};