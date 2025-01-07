#include <stdio.h>


// Faça um programa para verificar se determinado número inteiro lido é divisível por 3 ou 5, mas não simultaneamente pelos dois.


int main()
{
    int number;
    int multiple_of_3, multiple_of_5;
    printf("Insira um número inteiro: ");
    
    scanf("%d", &number);

    multiple_of_3 = !(number % 3);
    multiple_of_5 = !(number % 5);

    if (multiple_of_3 && multiple_of_5)
    {
        printf("%d é diviśivel por 3 e 5\n");
    } else if (multiple_of_3 )
    {
        printf("%d é diviśivel apenas por 3\n");
    }
    else if (multiple_of_5)
    {
        printf("%d é diviśivel apenas por 5");
    }
    else
    {
        printf("%d não é diviśivel por 3 nem por 5\n");
    }
    
    

    // printf("number \% 3 %d", number % 3);




    return 0;
}
