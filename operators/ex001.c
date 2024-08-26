#include <stdio.h>

/*  Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor. */
int main()
{
  int num;

  printf("Enter a integer number:");
  scanf("%d", &num);

  printf("Predecessor: %d\nSuccessor: %d\n", num - 1, num + 1);

  return 0;
}