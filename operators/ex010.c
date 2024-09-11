#include <stdio.h>
#include <locale.h>

int main()
{
  int prize = 780000;
  float position_1 = prize * 0.46;
  float position_2 = prize * 0.32;
  float position_3 = prize * 0.32;

  printf("A premiação de R$ %d.00 divida entre vencedores\n", prize);
  printf("1º colocado: R$%.2f\n", position_1);
  printf("2º colocado: R$%.2f\n", position_2);
  printf("3º colocado: R$%.2f\n", position_3);

  return 0;
}
