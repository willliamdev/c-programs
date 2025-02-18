#include <stdio.h>

int main()
{

    int array_size = 2;

    struct car
    {
        char model[20];
        char color[15];
        int year;
        float price;
    };
    
    struct car carList[array_size];


    for (int i = 0; i < array_size; i++)
    {
        printf("\n====== Cadastro de Carro %d/%d ======\n", i+1, array_size);

        printf("Qual o nome do carro? ");
        scanf("%s", &carList[i].model);
        printf("Qual é a cor do carro? ");
        scanf("%s", &carList[i].color);
        printf("De qual ano é o carro? ");
        scanf("%d", &carList[i].year);
        printf("Qual é o valor? R$");
        scanf("%f", &carList[i].price);
    }
    
    printf("\n\n");

    for (int i = 0; i < array_size; i++)
    {
        printf("============ %dº CARRO =============\n", i+1);
        printf("Modelo: %s\n", carList[i].model);
        printf("Cor: %s\n", carList[i].color);
        printf("Ano: %d\n", carList[i].year);
        printf("Preço: %.2f\n", carList[i].price);
        printf("===================================\n");
    }
    
   return 0;
}