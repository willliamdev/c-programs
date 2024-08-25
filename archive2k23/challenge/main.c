#include <stdio.h>
#include <stdlib.h>

void main()
{

  float a, b, c;
  int a_isValid, b_isValid, c_isValid;

  printf("insira o tamanho do lado A:");
  scanf("%f", &a);
  printf("insira o tamanho do lado B:");
  scanf("%f", &b);
  printf("insira o tamanho do lado C:");
  scanf("%f", &c);

  a_isValid = abs(b - c) < a && (abs(c + b) > a);
  b_isValid = (abs(a - c) < b) && (abs(a + c) > b);
  c_isValid = (abs(a - b) < c) && (abs(a + b) > c);

  if (a_isValid && b_isValid && c_isValid)
  {
    printf("triangulo valido\n");
  }
};