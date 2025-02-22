#include <stdio.h>

struct course
{
    int id;
    char title[15];
    int vacancies;
    int maleApplicants;
    int femaleApplicants;
};

int main()
{

    int array_size = 1;
    int id_querry = 0;
    int courseNotFound = 1;
    int option = 0;

    struct course courses[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("\n===== Cadastro de Curso %d/%d ======\n", i + 1, array_size);
        printf("Nome do curso: ");
        scanf("%s", &courses[i].title);
        printf("Código do curso: ");
        scanf("%d", &courses[i].id);
        printf("Total de vagas: ");
        scanf("%d", &courses[i].vacancies);
        printf("Candidatos masculinos: ");
        scanf("%d", &courses[i].maleApplicants);
        printf("Candidatos femininos: ");
        scanf("%d", &courses[i].femaleApplicants);
    }

    do
    {
        printf("\n============= MENU ================\n");
        printf("[1] Listar todos os cursos.\n");
        printf("[1] Consultar dados de um curso.\n");
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
                printf("Curso: [%d] - %s\n", courses[i].title);
                printf("Vagas: %d\n", courses[i].vacancies);
                printf("candidatos masculinos: R$%.2f\n", courses[i].maleApplicants);
                printf("candidatos femininos: R$%.2f\n", courses[i].femaleApplicants);
                printf("\n===================================\n");
            }

            break;
        }
        case 2:
        {

            printf("\nInforme o código do Curso: ");
            scanf("%d", &id_querry);

            for (int i = 0; i < array_size; i++)
            {
                if (courses[i].id == id_querry)
                {
                    printf("\n===================================\n");
                    printf("Curso: [%d] - %s\n", courses[i].title);
                    printf("Vagas: %d\n", courses[i].vacancies);
                    printf("candidatos masculinos: R$%.2f\n", courses[i].maleApplicants);
                    printf("candidatos femininos: R$%.2f\n", courses[i].femaleApplicants);
                    printf("\n===================================\n");
                    courseNotFound = 0;
                    break;
                }
            }
            if (courseNotFound)
            {
                printf("\n===================================");
                printf("\n****** Curso não encontrado! ******");
                printf("\n===================================\n");
            }

            break;
        }
        default:
            if (option != 3)
            {
                printf("\n===================================");
                printf("\n********* Opção inválida! *********");
                printf("\n===================================\n");
            }
        }

    } while (option != 3);

    return 0;
}