#include <stdio.h>

int main()
{
    int count = 20;
    float array[count], power_array[count];

    for (int i = 0; i < count; i++)
    {
        printf("[%d/%d]Insira um número: ", i+1, count);
        scanf("%f", &array[i]);
        power_array[i] = array[i] * array[i];
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.3f ao quadrado: %.3f\n", array[i], power_array[i]);
    }
    return 0;
}