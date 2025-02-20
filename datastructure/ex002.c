#include <stdio.h>

int main()
{

    int array_size = 1;
    int id_querry;

    struct person
    {
        char name[15];
        int id;
        int age;
        float salary;
    };

    struct person clients[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("\n===== Cadastro de clientes %d/%d ======\n", i + 1, array_size);
        printf("Qual o nome do Cliente? ");
        scanf("%s", &clients[i].name);
        printf("Crie um código formado números: ");
        scanf("%d", &clients[i].id);
        printf("Qual a idade do %s? ", clients[i].name);
        scanf("%d", &clients[i].age);
        printf("Informe o salário: R$");
        scanf("%f", &clients[i].salary);
    }

    printf("\n\n======= Consulta de clientes ======\n");
    int clientNotExist = 1;
    do
    {
        printf("\ninforme o código: ");
        scanf("%d", &id_querry);

        for (int i = 0; i < array_size; i++)
        {
            if (clients[i].id == id_querry)
            {
                printf("Nome: %s\n", clients[i].name);
                printf("Idade: %d\n", clients[i].age);
                printf("Salário: R$%.2f\n", clients[i].salary);
                clientNotExist = 0;
                break;
            }
        }
        if (clientNotExist)
        {
            printf("\nCliente não cadastrado!!");
            printf("\nDigite [0] para sair e [1] p/ consulta novamente: ");
            scanf("%d", &clientNotExist);
        }

    } while (clientNotExist);

    return 0;
}