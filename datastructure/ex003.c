#include <stdio.h>

int main()
{

    int array_size = 1;
    int id_querry = 0;
    int clientNotExist = 1;
    int option = 0;

    struct person
    {
        int name[15];
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

    do
    {
        printf("\n===================================\n");
        printf("\n============= MENU ================\n");
        printf("[1] Listar todos os clintes.\n");
        printf("[1] consultar dados de um clinte.\n");
        printf("[3] Sair do programa.\n");
        printf("\nopção: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            // listar todos
            for (int i = 0; i < array_size; i++)
            {
                printf("\n===================================\n");
                printf("Nome: %s\n", clients[i].name);
                printf("Idade: %d\n", clients[i].age);
                printf("Salário: R$%.2f\n", clients[i].salary);
                printf("\n===================================\n");
            }

            break;
        }
        case 2:
        {

            printf("\nInforme o código do cliente: ");
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
                printf("\n===================================\n");
                printf("      Cliente não encontrado!!");
                printf("\n===================================\n");
            }

            break;
        }
        default:
            if (option != 3)
            {
                printf("\n===================================\n");
                printf("\tOpção Inválida!!");
                printf("\n===================================\n");
            }
        }

    } while (option != 3);

    return 0;
}