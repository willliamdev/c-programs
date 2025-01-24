#include <stdio.h>

int main()
{
  int arrayLength = 10;
  int A[arrayLength];
  int B[arrayLength];
  int C[arrayLength];
  printf("----- Leitura do vetor A -----\n");
  for (int i = 0; i < arrayLength; i++)
  {
    printf("[%d/%d]Insira um número: ", i + 1, arrayLength);
    scanf("%d", &A[i]);
  }

  printf("\n\n----- Leitura do vetor B -----\n");
  for (int i = 0; i < arrayLength; i++)
  {
    printf("[%d/%d]Insira um número: ", i + 1, arrayLength);
    scanf("%d", &B[i]);
  }

  printf("\n\n----- VetorC = A[i]-B[i] -----");

  for (int i = 0; i < arrayLength; i++)
  {
    C[i] = A[i] - B[i];
    printf("\n%d - %d = %d", A[i], B[i], C[i]);
  }
  printf("\n");
  return 0;
}