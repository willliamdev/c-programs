#include <stdio.h>
#include "../global/myfunctions.h"
// #include <locale.h>

// #include "globals.h"
typedef int interiro;

typedef struct
{
  int idade;
  float peso;
  char nome[20];
} pessoa;

int main()
{
  // setlocale(LC_ALL, "Portugues");
  pessoa pessoas[10];
  // pessoas[0].idade = 5;
  pessoas[0].peso = 30;

  printf("Nome: ");
  fgets(pessoas[0].nome, sizeof(pessoas[0].nome), stdin);
  printf("Idade: ");
  inputInt(&pessoas[0].idade);

  // interiro x = 1;

  // while (x < 10)
  // {
  //   pessoas[x].idade = pessoas[x - 1].idade + 3;
  //   pessoas[x].peso = pessoas[x - 1].peso + 7.22;

  //   x++;
  // }

  // while (x < 10)
  // {
  //   x++;
  // }

  printf("\n\nIdade: %d\nPeso(kg): %.2f \nNome: %s\n", pessoas[0].idade, pessoas[0].peso, pessoas[0].nome);

  return 0;
}

// bit.ly/3YCjq2m