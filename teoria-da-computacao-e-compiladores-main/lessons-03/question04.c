#include <stdio.h>

int successor(int n)
{
    return n + 1;
}

void lt(int i)
{
    for (int n = 0; n <= i; n++)
    {
        for (int m = 1; m <= i; m++)
        {
            if (n < m)
            {
                printf("[ %d, %d ] ", n, m);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int n;

    printf("Informe i: ");
    scanf("%d", &n);

    lt(n);

    return 0;
}
