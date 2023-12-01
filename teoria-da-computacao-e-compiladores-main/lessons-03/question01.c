#include <stdio.h>

int main()
{
    int limit;

    printf("Informe o limite: ");
    scanf("%d", &limit);

    for (int n = 0; n <= limit; n++)
    {
        int result;
        if (n % 2 == 0)
        {
            result = -n / 2;
        }
        else
        {
            result = n / 2 + 1;
        }
        printf("[ %d, %d ], ", n, result);
    }

    return 0;
}