#include <stdio.h>

int power(int base, int exponential)
{
    if (exponential < 2)
    {
        return base;
    }
    else
    {
        return base * power(base, exponential - 1);
    }
}

int main()
{
    int n1, n2;

    printf("Informe a base da potencia: ");
    scanf("%d", &n1);

    printf("Informe o exponencial da potencia: ");
    scanf("%d", &n2);

    int result = power(n1, n2);
    printf("\nO resultado de %d ^ %d e: %d", n1, n2, result);
}