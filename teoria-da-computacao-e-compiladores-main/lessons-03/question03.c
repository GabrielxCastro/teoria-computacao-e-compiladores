#include <stdio.h>

int successor(int n)
{
    return n + 1;
}

void lt(int n, int m, int i)
{
    if (n <= i && m <= i)
    {
        if (n < m)
        {
            printf("[ %d, %d ] ", n, m);
        }

        lt(n, successor(m), i);
    }
    else
    {
        lt(successor(n), 1, i);
    }
}

int main()
{
    int n;

    printf("Informe i: ");
    scanf("%d", &n);

    lt(0, 1, n);

    return 0;
}