#include <stdio.h>

int main()
{
    int count = 10;
    float array[count];

    for (int i = 0; i < count; i++)
    {
        printf("[%d/%d]Insira um número: ", i + 1, count);
        scanf("%f", &array[i]);
    }

    for (int j = 0; j < count; j++)
    {
        for (int k = 0; k < count; k++)
        {
            if (j == k)
            {
                continue;
            }
            else if (array[j] == array[k])
            {
                printf("igual \n");
                printf("array[%d] = %f -- array[%d] = %f\n", j + 1, array[j], k + 1, array[k]);
            }
        }
    }

    return 0;
}
