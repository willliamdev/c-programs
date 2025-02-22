
#include <stdio.h>

struct person
{
    char name[20];
    float weight;
    float height;
    float imc;
};

int main()
{
    int array_size = 10;

    struct person db[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("\n===== Cadastro de Curso %d/%d ======\n", i + 1, array_size);
        printf("Nome: ");
        scanf("%s", &db[i].name);
        printf("\nPeso em (kg): ");
        scanf("%f", &db[i].height);
        printf("\nAltura em (cm): ");
        scanf("%f", &db[i].height);

        db[i].imc = db[i].weight / (db[i].height * db[i].height);
    }

    for (int i = 0; i < array_size; i++)
    {
        if (db[i].imc >= 18.55 && db[i].imc <= 25)
        {
            printf("Fulano está no peso ideal");
        }
    }

    return 0;
}