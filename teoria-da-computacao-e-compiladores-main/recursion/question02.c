#include <stdio.h>

int sum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n1;

    printf("Informe um valor: ");
    scanf("%d", &n1);

    int result = sum(n1);
    printf("\nO resultado da somatoria de 1 ate %d e: %d", n1, result);
}