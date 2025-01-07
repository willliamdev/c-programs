#include <stdio.h>
#include <math.h>

// include -lm to gcc args

int main()
{
    double a, b, c, delta, sqrt_delta, x1, x2;

    printf("Insira o valor de A: ");
    scanf("%lf", &a);
    printf("Insira o valor de B: ");
    scanf("%lf", &b);
    printf("Insira o valor de C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - (4 * a * c);
    sqrt_delta = sqrt(delta);

    if (delta < 0)
    {
        printf("Não existem raiz!\n");
    }
    else if (delta == 0)
    {
        printf("Raiz única!\n");
        x1 = (-1 * b + sqrt_delta) / (2 * a);
        printf("x1: %.2lf", x1);
    }
    else if (delta > 0)
    {
        x1 = (-b + sqrt_delta) / (2 * a);
        printf("x1: %lf", x1);

        x2 = (-b - sqrt_delta) / (2 * a);
        printf("\nx2: %lf\n", x2);
    }

    return 0;
}