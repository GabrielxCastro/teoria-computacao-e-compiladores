#include <stdio.h>

int successor(int n)
{
    return n + 1;
}

int sum(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return sum(successor(m), n - 1);
    }
}

int main()
{
    int n1, n2;

    printf("Informe um numero: ");
    scanf("%d", &n1);

    printf("Informe outro numero: ");
    scanf("%d", &n2);

    int result = sum(n1, n2);
    printf("\n%d + %d = %d\n", n1, n2, result);

    return 0;
}