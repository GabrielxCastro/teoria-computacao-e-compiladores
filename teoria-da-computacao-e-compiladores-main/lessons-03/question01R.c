#include <stdio.h>

void func(int n, int limit)
{
    if (n > limit)
    {
        return;
    }
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
    func(n + 1, limit);
}

int main()
{
    int limit;

    printf("Informe o limite: ");
    scanf("%d", &limit);

    func(0, limit);

    return 0;
}